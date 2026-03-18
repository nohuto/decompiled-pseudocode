/*
 * XREFs of NtGdiOpenDCW @ 0x1C0053200
 * Callers:
 *     <none>
 * Callees:
 *     FreeThreadBufferWithTag @ 0x1C000B380 (FreeThreadBufferWithTag.c)
 *     UserGetDesktopDC @ 0x1C0044A2C (UserGetDesktopDC.c)
 *     FreeTmpBuffer @ 0x1C00534E0 (FreeTmpBuffer.c)
 *     AllocFreeTmpBuffer @ 0x1C0053560 (AllocFreeTmpBuffer.c)
 *     hdcOpenDCW @ 0x1C0053650 (hdcOpenDCW.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C00B27E0 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C00B28A0 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x1C00B2C60 (-vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z.c)
 */

__int64 __fastcall NtGdiOpenDCW(
        unsigned __int16 *a1,
        struct _devicemodeW *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        void *a7,
        struct _DRIVER_INFO_2W *a8,
        __int64 a9)
{
  __int64 v11; // r14
  int v12; // ecx
  char *v13; // rdi
  size_t v14; // rsi
  int v15; // eax
  int v16; // edi
  WCHAR *SourceString; // [rsp+58h] [rbp-50h]
  struct _devicemodeW *v19; // [rsp+60h] [rbp-48h]
  struct _DRIVER_INFO_2W *v20; // [rsp+68h] [rbp-40h]

  v11 = 0LL;
  SourceString = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(a4, 0, 1);
  v12 = *a1;
  v13 = (char *)*((_QWORD *)a1 + 1);
  if ( *a1 )
  {
    v14 = *a1;
    SourceString = (WCHAR *)AllocFreeTmpBuffer((unsigned int)(v12 + 2));
    if ( SourceString )
    {
      if ( &v13[v14] < v13 || &v13[v14] > W32UserProbeAddress )
        *(_BYTE *)W32UserProbeAddress = 0;
      memmove(SourceString, v13, v14);
      SourceString[v14 >> 1] = 0;
    }
  }
  if ( !a2 || (v19 = CaptureDEVMODEW(a2)) != 0LL )
  {
    v16 = 1;
    v15 = 1;
  }
  else
  {
    v15 = 0;
    v16 = 1;
  }
  if ( !v15 || a8 && (v20 = CaptureDriverInfo2W(a8)) == 0LL )
    v16 = 0;
  if ( v16 )
    v11 = hdcOpenDCW(SourceString, a7, 0LL, (__int64)v20, a9, a6);
  if ( SourceString )
    FreeTmpBuffer(SourceString);
  if ( v19 )
    FreeThreadBufferWithTag((__int64)v19);
  vFreeDriverInfo2(v20);
  return v11;
}
