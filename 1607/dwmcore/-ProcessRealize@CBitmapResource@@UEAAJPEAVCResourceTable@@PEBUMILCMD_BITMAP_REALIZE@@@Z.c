/*
 * XREFs of ?ProcessRealize@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_REALIZE@@@Z @ 0x18010BF40
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180164918 (-RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z.c)
 */

__int64 __fastcall CBitmapResource::ProcessRealize(
        CBitmapResource *this,
        struct CResourceTable *a2,
        const struct MILCMD_BITMAP_REALIZE *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  struct IBitmapSource *v11; // r8
  const struct _GUID *v12; // rdx
  HMONITOR v13; // rcx
  int v14; // eax
  _BYTE v16[4]; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+34h] [rbp-24h]
  int v18; // [rsp+38h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-18h]

  v4 = 0;
  v5 = *((_QWORD *)this + 17);
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v5 + 24LL))(v5, v16);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xE5u);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 32LL))(*((_QWORD *)this + 17));
      v9 = *((_QWORD *)this + 17);
      v17 = v8;
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
      v11 = (struct IBitmapSource *)*((_QWORD *)this + 17);
      v12 = (const struct _GUID *)(*((_QWORD *)this + 4) + 252LL);
      v13 = (HMONITOR)*((_QWORD *)a3 + 1);
      v19 = 0LL;
      v18 = v10;
      v14 = RealizeBitmapSource(v13, v12, v11, (const struct PixelFormatInfo *)v16);
      v4 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xEDu);
    }
  }
  return v4;
}
