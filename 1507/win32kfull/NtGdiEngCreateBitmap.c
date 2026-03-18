/*
 * XREFs of NtGdiEngCreateBitmap @ 0x1C02ABD40
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027DCF0 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@@Z @ 0x1C02AA32C (-ValidUmpdSizl@@YAHUtagSIZE@@@Z.c)
 */

HBITMAP __fastcall NtGdiEngCreateBitmap(SIZEL a1, unsigned int a2, unsigned int a3, int a4, char *Address)
{
  __int64 v7; // r13
  HBITMAP Bitmap; // r14
  int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rsi
  struct _EPROCESS *CurrentProcess; // rax
  FLONG v14; // edi
  char *v15; // rcx
  struct _EPROCESS *v16; // rax
  BOOL v18; // [rsp+30h] [rbp-78h]
  HANDLE SecureHandle; // [rsp+38h] [rbp-70h]
  _BYTE v20[32]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v21; // [rsp+68h] [rbp-40h]

  v7 = a2;
  Bitmap = 0LL;
  SecureHandle = 0LL;
  v18 = 1;
  LOBYTE(v9) = ValidUmpdSizl(a1);
  if ( !v9 )
    return 0LL;
  v12 = v7 * HIDWORD(v11);
  if ( v12 > 0xFFFFFFFF )
    return 0LL;
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v10),
          !(unsigned int)bIsProcessLocalSystem(CurrentProcess)) )
    {
      if ( (a4 & 0x80u) != 0 )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:BMF_UMPDMEM is set.\n",
            1133);
        a4 &= ~0x80u;
      }
    }
  }
  if ( Address )
  {
    v14 = a4 & 0xFFFFFFF7;
    if ( (_DWORD)v12 )
    {
      v15 = &Address[(unsigned int)v12];
      if ( (unsigned __int64)v15 > W32UserProbeAddress || v15 < Address )
        *W32UserProbeAddress = 0;
    }
    SecureHandle = MmSecureVirtualMemory(Address, (unsigned int)v12, 4u);
    v18 = SecureHandle != 0LL;
  }
  else
  {
    if ( gUMPDSecurityLevel != 2 )
    {
      if ( !gUMPDSecurityLevel
        || (v16 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v10),
            !(unsigned int)bIsProcessLocalSystem(v16)) )
      {
        if ( !a3 || a3 > 6 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:Creating compressed surface withou"
              "t input buffer\n",
              1169);
          v18 = 0;
        }
      }
    }
    v14 = a4 | 8;
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 72) )
      v14 |= 0x80u;
  }
  if ( v18 )
    Bitmap = EngCreateBitmap(a1, v7, a3 | 0x8000, v14, Address);
  if ( SecureHandle )
  {
    if ( Bitmap )
    {
      SURFREF::SURFREF((SURFREF *)v20, (HSURF)Bitmap);
      if ( v21 )
      {
        *(_QWORD *)(v21 + 136) = SecureHandle;
      }
      else
      {
        MmUnsecureVirtualMemory(SecureHandle);
        EngDeleteSurface((HSURF)Bitmap);
        Bitmap = 0LL;
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v20);
    }
    else
    {
      MmUnsecureVirtualMemory(SecureHandle);
    }
  }
  return Bitmap;
}
