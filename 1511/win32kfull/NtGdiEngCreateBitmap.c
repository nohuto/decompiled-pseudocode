/*
 * XREFs of NtGdiEngCreateBitmap @ 0x1C02AB360
 * Callers:
 *     <none>
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027D290 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@@Z @ 0x1C02A9A6C (-ValidUmpdSizl@@YAHUtagSIZE@@@Z.c)
 */

HBITMAP __fastcall NtGdiEngCreateBitmap(SIZEL a1, unsigned int a2, unsigned int a3, int a4, char *Address)
{
  __int64 v7; // r13
  HBITMAP Bitmap; // r14
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rsi
  struct _EPROCESS *CurrentProcess; // rax
  FLONG v16; // edi
  char *v17; // rcx
  __int64 v18; // rdx
  struct _EPROCESS *v19; // rax
  __int64 v20; // rax
  BOOL v22; // [rsp+30h] [rbp-58h]
  HANDLE SecureHandle; // [rsp+38h] [rbp-50h]
  __int64 v24[8]; // [rsp+48h] [rbp-40h] BYREF

  v7 = a2;
  Bitmap = 0LL;
  SecureHandle = 0LL;
  v22 = 1;
  LOBYTE(v9) = ValidUmpdSizl(a1);
  if ( !v9 )
    return 0LL;
  v14 = v7 * HIDWORD(v13);
  if ( v14 > 0xFFFFFFFF )
    return 0LL;
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v10, v11, v12),
          !(unsigned int)bIsProcessLocalSystem(CurrentProcess)) )
    {
      if ( (a4 & 0x80u) != 0 )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:BMF_UMPDMEM is set.\n",
            1103);
        a4 &= ~0x80u;
      }
    }
  }
  if ( Address )
  {
    v16 = a4 & 0xFFFFFFF7;
    if ( (_DWORD)v14 )
    {
      v17 = &Address[(unsigned int)v14];
      if ( (unsigned __int64)v17 > W32UserProbeAddress || v17 < Address )
        *W32UserProbeAddress = 0;
    }
    SecureHandle = MmSecureVirtualMemory(Address, (unsigned int)v14, 4u);
    v22 = SecureHandle != 0LL;
  }
  else
  {
    if ( gUMPDSecurityLevel != 2 )
    {
      if ( !gUMPDSecurityLevel
        || (v19 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v10, v11, v12),
            !(unsigned int)bIsProcessLocalSystem(v19)) )
      {
        if ( !a3 || a3 > 6 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:Creating compressed surface withou"
              "t input buffer\n",
              1139);
          v22 = 0;
        }
      }
    }
    v16 = a4 | 8;
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 72) )
      v16 |= 0x80u;
  }
  if ( v22 )
    Bitmap = EngCreateBitmap(a1, v7, a3 | 0x8000, v16, Address);
  if ( SecureHandle )
  {
    if ( Bitmap )
    {
      LOBYTE(v18) = 5;
      v20 = HmgShareLockCheck(Bitmap, v18);
      v24[0] = v20;
      if ( v20 )
      {
        *(_QWORD *)(v20 + 136) = SecureHandle;
      }
      else
      {
        MmUnsecureVirtualMemory(SecureHandle);
        EngDeleteSurface((HSURF)Bitmap);
        Bitmap = 0LL;
      }
      EPALOBJ::~EPALOBJ((EPALOBJ *)v24);
    }
    else
    {
      MmUnsecureVirtualMemory(SecureHandle);
    }
  }
  return Bitmap;
}
