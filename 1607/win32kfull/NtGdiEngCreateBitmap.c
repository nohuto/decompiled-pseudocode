/*
 * XREFs of NtGdiEngCreateBitmap @ 0x1C02AD310
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027B480 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@@Z @ 0x1C02AB820 (-ValidUmpdSizl@@YAHUtagSIZE@@@Z.c)
 */

HBITMAP __fastcall NtGdiEngCreateBitmap(SIZEL a1, unsigned int a2, int a3, int a4, char *Address)
{
  __int64 v7; // r12
  HBITMAP Bitmap; // r14
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rdi
  struct _EPROCESS *CurrentProcess; // rax
  FLONG v16; // esi
  char *v17; // rcx
  HANDLE v18; // rax
  void *v19; // rdi
  struct _EPROCESS *v20; // rax
  BOOL v22; // [rsp+30h] [rbp-78h]
  _BYTE v23[32]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v24; // [rsp+68h] [rbp-40h]

  v7 = a2;
  Bitmap = 0LL;
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
      || (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel),
          !(unsigned int)bIsProcessLocalSystem(CurrentProcess)) )
    {
      if ( (a4 & 0x80u) != 0 )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:BMF_UMPDMEM is set.\n",
            1146);
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
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      v18 = (HANDLE)GrepSecureVirtualMemory(Address, (unsigned int)v14, 4LL);
    else
      v18 = MmSecureVirtualMemory(Address, (unsigned int)v14, 4u);
    v19 = v18;
    v22 = v18 != 0LL;
  }
  else
  {
    if ( gUMPDSecurityLevel != 2 )
    {
      if ( !gUMPDSecurityLevel
        || (v20 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel), !(unsigned int)bIsProcessLocalSystem(v20)) )
      {
        if ( (unsigned int)(a3 - 1) > 5 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:Creating compressed surface withou"
              "t input buffer\n",
              1189);
          v22 = 0;
        }
      }
    }
    v16 = a4 | 8;
    v19 = 0LL;
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12) + 72) )
      v16 |= 0x80u;
  }
  if ( v22 )
    Bitmap = EngCreateBitmap(a1, v7, a3 | 0x8000u, v16, Address);
  if ( v19 )
  {
    if ( Bitmap )
    {
      SURFREF::SURFREF((SURFREF *)v23, (HSURF)Bitmap);
      if ( v24 )
      {
        *(_QWORD *)(v24 + 136) = v19;
      }
      else
      {
        if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
          GrepUnsecureVirtualMemory(v19);
        else
          MmUnsecureVirtualMemory(v19);
        EngDeleteSurface((HSURF)Bitmap);
        Bitmap = 0LL;
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v23);
    }
    else if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
    {
      GrepUnsecureVirtualMemory(v19);
    }
    else
    {
      MmUnsecureVirtualMemory(v19);
    }
  }
  return Bitmap;
}
