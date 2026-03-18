/*
 * XREFs of ?GetShapeRegion@CShape@@QEAAJPEAPEAUHRGN__@@@Z @ 0x180189CD0
 * Callers:
 *     ?GetClipRegion@CWindowNode@@AEAAJPEAPEAUHRGN__@@@Z @ 0x180140024 (-GetClipRegion@CWindowNode@@AEAAJPEAPEAUHRGN__@@@Z.c)
 * Callees:
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x18002C0DC (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x1800A2F3C (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180169220 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 *     ?GetPixelAlignedRectangles@CRegionShape@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18018A468 (-GetPixelAlignedRectangles@CRegionShape@@QEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
 */

__int64 __fastcall CShape::GetShapeRegion(CShape *this, HRGN *a2, double a3)
{
  __int64 v3; // rax
  int v4; // ebx
  TemporaryConfiguration *v6; // rdi
  HRGN RectRgn; // r12
  HRGN v8; // r15
  int v9; // eax
  unsigned int RectCount; // eax
  unsigned int v11; // r13d
  __int64 v12; // rax
  unsigned __int64 v13; // kr00_8
  TemporaryConfiguration *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // esi
  __int64 v17; // rax
  TemporaryConfiguration *v18; // rax
  signed int v19; // eax
  DWORD v20; // edx
  unsigned int v21; // ecx
  DWORD v22; // r8d
  signed int v23; // eax
  DWORD v24; // edx
  unsigned int v25; // ecx
  DWORD v26; // r8d
  unsigned int v27; // esi
  signed int LastError; // eax
  DWORD v29; // edx
  unsigned int v30; // ecx
  DWORD v31; // r8d
  unsigned int bottom; // [rsp+20h] [rbp-50h]
  unsigned __int64 v34; // [rsp+30h] [rbp-40h] BYREF
  HRGN *v35; // [rsp+38h] [rbp-38h]
  float v36[4]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v37; // [rsp+50h] [rbp-20h]

  v3 = *(_QWORD *)this;
  v4 = 0;
  LODWORD(v34) = 0;
  v35 = a2;
  v6 = 0LL;
  RectRgn = 0LL;
  v8 = 0LL;
  v9 = (*(__int64 (__fastcall **)(CShape *))(v3 + 8))(this);
  if ( v9 == 1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(CShape *, unsigned __int64 *))(*(_QWORD *)this + 32LL))(this, &v34)
      || (_DWORD)v34 != 1
      || !(*(unsigned __int8 (__fastcall **)(CShape *, float *, __int64))(*(_QWORD *)this + 40LL))(this, v36, 1LL)
      || !IsPixelAligned((const struct MilRectF *)v36, v15, a3) )
    {
      v4 = -2003304438;
      bottom = 702;
      goto LABEL_47;
    }
    v16 = v34;
    v17 = 16LL * (unsigned int)v34;
    if ( !is_mul_ok((unsigned int)v34, 0x10uLL) )
      v17 = -1LL;
    v18 = (TemporaryConfiguration *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 8LL))(
                                      WPF::g_pProcessHeap,
                                      v17);
    v6 = v18;
    if ( v18 )
      `vector constructor iterator'(
        v18,
        16LL,
        v16,
        (void (__fastcall *)(TemporaryConfiguration *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
    else
      v6 = 0LL;
    if ( !v6 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2B8u);
      goto LABEL_48;
    }
    LODWORD(v37) = (int)v36[0];
    DWORD1(v37) = (int)v36[1];
    DWORD2(v37) = (int)v36[2];
    HIDWORD(v37) = (int)v36[3];
    *(_OWORD *)v6 = v37;
  }
  else
  {
    if ( v9 != 2 )
    {
      v4 = -2003292412;
      bottom = 724;
      goto LABEL_47;
    }
    RectCount = CRegionShape::GetRectCount(this);
    LODWORD(v34) = RectCount;
    if ( RectCount )
    {
      v11 = RectCount;
      v13 = RectCount;
      v12 = 16LL * RectCount;
      if ( !is_mul_ok(v13, 0x10uLL) )
        v12 = -1LL;
      v14 = (TemporaryConfiguration *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                 + 8LL))(
                                        WPF::g_pProcessHeap,
                                        v12);
      v6 = v14;
      if ( v14 )
        `vector constructor iterator'(
          v14,
          16LL,
          v11,
          (void (__fastcall *)(TemporaryConfiguration *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
      else
        v6 = 0LL;
      if ( !v6 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2CCu);
        goto LABEL_48;
      }
      CRegionShape::GetPixelAlignedRectangles(this, v6, (unsigned int)v34);
    }
  }
  SetLastError(0);
  RectRgn = CreateRectRgn(0, 0, 0, 0);
  if ( RectRgn )
  {
    SetLastError(0);
    v8 = CreateRectRgn(0, 0, 0, 0);
    if ( v8 )
    {
      v27 = 0;
      if ( !(_DWORD)v34 )
        goto LABEL_48;
      while ( 1 )
      {
        SetRectRgn(
          v8,
          *((_DWORD *)v6 + 4 * v27),
          *((_DWORD *)v6 + 4 * v27 + 1),
          *((_DWORD *)v6 + 4 * v27 + 2),
          *((_DWORD *)v6 + 4 * v27 + 3));
        SetLastError(0);
        if ( !CombineRgn(RectRgn, RectRgn, v8, 2) )
          break;
        if ( ++v27 >= (unsigned int)v34 )
          goto LABEL_48;
      }
      LastError = GetLastError();
      v4 = LastError;
      if ( LastError > 0 )
        v4 = (unsigned __int16)LastError | 0x80070000;
      if ( v4 >= 0 )
        v4 = CheckGUIHandleQuota(v30, v29, v31);
      bottom = 742;
    }
    else
    {
      v23 = GetLastError();
      v4 = v23;
      if ( v23 > 0 )
        v4 = (unsigned __int16)v23 | 0x80070000;
      if ( v4 >= 0 )
        v4 = CheckGUIHandleQuota(v25, v24, v26);
      bottom = 729;
    }
  }
  else
  {
    v19 = GetLastError();
    v4 = v19;
    if ( v19 > 0 )
      v4 = (unsigned __int16)v19 | 0x80070000;
    if ( v4 >= 0 )
      v4 = CheckGUIHandleQuota(v21, v20, v22);
    bottom = 728;
  }
LABEL_47:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, bottom);
LABEL_48:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, TemporaryConfiguration *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v6);
  if ( v8 )
    DeleteObject(v8);
  *v35 = RectRgn;
  return (unsigned int)v4;
}
