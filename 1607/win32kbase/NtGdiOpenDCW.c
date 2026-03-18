/*
 * XREFs of NtGdiOpenDCW @ 0x1C006E790
 * Callers:
 *     <none>
 * Callees:
 *     UserGetDesktopDC @ 0x1C001CBFC (UserGetDesktopDC.c)
 *     hdcOpenDCW @ 0x1C0020120 (hdcOpenDCW.c)
 *     FreeTmpBuffer @ 0x1C006EA70 (FreeTmpBuffer.c)
 *     FreeThreadBufferWithTag @ 0x1C006EA90 (FreeThreadBufferWithTag.c)
 *     AllocFreeTmpBuffer @ 0x1C006EAF0 (AllocFreeTmpBuffer.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C00BFC70 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C00BFD30 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x1C00C00E0 (-vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z.c)
 */

__int64 __fastcall NtGdiOpenDCW(
        unsigned __int16 *a1,
        struct _devicemodeW *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        void *a7,
        struct _DRIVER_INFO_2W *a8,
        _QWORD *a9)
{
  HDC v12; // r14
  int v13; // ecx
  char *v14; // rdi
  size_t v15; // rsi
  int v16; // edi
  int v17; // eax
  WCHAR *SourceString; // [rsp+58h] [rbp-50h]
  struct _devicemodeW *v20; // [rsp+60h] [rbp-48h]
  struct _DRIVER_INFO_2W *v21; // [rsp+68h] [rbp-40h]

  v12 = 0LL;
  SourceString = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(a4, 0, 1);
  v13 = *a1;
  v14 = (char *)*((_QWORD *)a1 + 1);
  if ( *a1 )
  {
    v15 = *a1;
    SourceString = (WCHAR *)AllocFreeTmpBuffer((unsigned int)(v13 + 2));
    if ( SourceString )
    {
      if ( &v14[v15] < v14 || (unsigned __int64)&v14[v15] > W32UserProbeAddress )
        *(_BYTE *)W32UserProbeAddress = 0;
      memmove(SourceString, v14, v15);
      SourceString[v15 >> 1] = 0;
    }
  }
  if ( !a2 || (v20 = CaptureDEVMODEW(a2)) != 0LL )
  {
    v16 = 1;
    v17 = 1;
  }
  else
  {
    v17 = 0;
    v16 = 1;
  }
  if ( !v17 || a8 && (v21 = CaptureDriverInfo2W(a8)) == 0LL )
    v16 = 0;
  if ( v16 )
    v12 = hdcOpenDCW(SourceString, v20, a4, a5, a7, 0LL, (HDC)v21, a9, a6);
  if ( SourceString )
    FreeTmpBuffer(SourceString);
  if ( v20 )
    FreeThreadBufferWithTag(v20);
  vFreeDriverInfo2(v21);
  return (__int64)v12;
}
