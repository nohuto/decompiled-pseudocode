/*
 * XREFs of ?GetShapeRegion@CShape@@QEAAJPEAPEAUHRGN__@@@Z @ 0x18014A46C
 * Callers:
 *     ?GetClipRegion@CWindowNode@@AEAAJPEAPEAUHRGN__@@@Z @ 0x180104FB0 (-GetClipRegion@CWindowNode@@AEAAJPEAPEAUHRGN__@@@Z.c)
 * Callees:
 *     ?GetRectangles@CRegionShape@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180004E04 (-GetRectangles@CRegionShape@@QEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x180078558 (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180128B0C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CShape::GetShapeRegion(CShape *this, HRGN *a2)
{
  int v3; // ebp
  HRGN RectRgn; // r13
  HRGN v5; // r15
  __int64 v6; // rbx
  Mesh::MeshLine *v7; // rax
  Mesh::MeshLine *v8; // rsi
  __m128 v9; // xmm2
  int v10; // ebx
  __int64 v11; // rdi
  Mesh::MeshLine *v12; // rax
  signed int v13; // eax
  DWORD v14; // edx
  unsigned int v15; // ecx
  DWORD v16; // r8d
  signed int v17; // eax
  DWORD v18; // edx
  unsigned int v19; // ecx
  DWORD v20; // r8d
  __int64 v21; // rdi
  __int64 v22; // r14
  int *v23; // rbx
  signed int LastError; // eax
  DWORD v25; // edx
  unsigned int v26; // ecx
  DWORD v27; // r8d
  unsigned int bottom; // [rsp+20h] [rbp-78h]
  int v31[4]; // [rsp+40h] [rbp-58h]
  signed int RectCount; // [rsp+40h] [rbp-58h]

  v3 = 0;
  RectRgn = 0LL;
  v5 = 0LL;
  if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)this + 8LL))(this) )
  {
    RectCount = CRegionShape::GetRectCount(this);
    v11 = 16LL * RectCount;
    if ( !is_mul_ok(RectCount, 0x10uLL) )
      v11 = -1LL;
    v12 = (Mesh::MeshLine *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              v11);
    v8 = v12;
    if ( v12 )
      `vector constructor iterator'(
        v12,
        16LL,
        RectCount,
        (void (__fastcall *)(Mesh::MeshLine *))TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
    else
      v8 = 0LL;
    if ( !v8 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2A5u);
      goto LABEL_41;
    }
    v10 = RectCount;
    CRegionShape::GetRectangles(this, (__int64)v8, RectCount);
  }
  else
  {
    v6 = 16LL;
    if ( !is_mul_ok(1uLL, 0x10uLL) )
      v6 = -1LL;
    v7 = (Mesh::MeshLine *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             v6);
    v8 = v7;
    if ( v7 )
      `vector constructor iterator'(
        v7,
        16LL,
        1,
        (void (__fastcall *)(Mesh::MeshLine *))TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
    else
      v8 = 0LL;
    if ( !v8 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x29Au);
      goto LABEL_41;
    }
    v9 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 8));
    v10 = 1;
    v31[0] = (int)v9.m128_f32[0];
    v31[1] = (int)_mm_shuffle_ps(v9, v9, 85).m128_f32[0];
    v31[2] = (int)_mm_shuffle_ps(v9, v9, 170).m128_f32[0];
    v31[3] = (int)*((float *)this + 5);
    *(_OWORD *)v8 = *(_OWORD *)v31;
  }
  SetLastError(0);
  RectRgn = CreateRectRgn(0, 0, 0, 0);
  if ( RectRgn )
  {
    SetLastError(0);
    v5 = CreateRectRgn(0, 0, 0, 0);
    if ( v5 )
    {
      v21 = 0LL;
      v22 = v10;
      if ( v10 <= 0 )
        goto LABEL_41;
      v23 = (int *)((char *)v8 + 8);
      while ( 1 )
      {
        SetRectRgn(v5, *(v23 - 2), *(v23 - 1), *v23, v23[1]);
        SetLastError(0);
        if ( !CombineRgn(RectRgn, RectRgn, v5, 2) )
          break;
        ++v21;
        v23 += 4;
        if ( v21 >= v22 )
          goto LABEL_41;
      }
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      if ( v3 >= 0 )
        v3 = CheckGUIHandleQuota(v26, v25, v27);
      bottom = 699;
    }
    else
    {
      v17 = GetLastError();
      v3 = v17;
      if ( v17 > 0 )
        v3 = (unsigned __int16)v17 | 0x80070000;
      if ( v3 >= 0 )
        v3 = CheckGUIHandleQuota(v19, v18, v20);
      bottom = 686;
    }
  }
  else
  {
    v13 = GetLastError();
    v3 = v13;
    if ( v13 > 0 )
      v3 = (unsigned __int16)v13 | 0x80070000;
    if ( v3 >= 0 )
      v3 = CheckGUIHandleQuota(v15, v14, v16);
    bottom = 685;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, bottom);
LABEL_41:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, Mesh::MeshLine *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v8);
  if ( v5 )
    DeleteObject(v5);
  *a2 = RectRgn;
  return (unsigned int)v3;
}
