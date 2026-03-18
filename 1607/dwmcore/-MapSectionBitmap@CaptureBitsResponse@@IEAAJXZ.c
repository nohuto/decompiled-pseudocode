/*
 * XREFs of ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180009A48
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x180009880 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x180120870 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800B1AE4 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CaptureBitsResponse::MapSectionBitmap(CaptureBitsResponse *this)
{
  void *v2; // rax
  int v3; // eax
  struct IBitmapSource *v4; // rsi
  signed int v5; // ebx
  int v6; // eax
  signed int LastError; // eax
  struct IBitmapSource *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  SetLastError(0);
  v2 = MapViewOfFile(*((HANDLE *)this + 16), 2u, 0, 0, *((unsigned int *)this + 36));
  *((_QWORD *)this + 17) = v2;
  if ( v2 )
  {
    memset_0(v2, 0, *((unsigned int *)this + 36));
    v3 = HrCreateBitmapFromMemoryEx(
           *((_DWORD *)this + 22),
           *((_DWORD *)this + 23),
           (CaptureBitsResponse *)((char *)this + 104),
           *((_DWORD *)this + 37),
           *((_DWORD *)this + 36),
           *((unsigned __int8 **)this + 17),
           0LL,
           &v9);
    v4 = v9;
    v5 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x17Eu);
    }
    else
    {
      v6 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, char *))v9)(
             v9,
             &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
             (char *)this + 152);
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x184u);
    }
    if ( v4 )
      (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    if ( v5 >= 0 )
      v5 = -2003304445;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x16Eu);
  }
  return (unsigned int)v5;
}
