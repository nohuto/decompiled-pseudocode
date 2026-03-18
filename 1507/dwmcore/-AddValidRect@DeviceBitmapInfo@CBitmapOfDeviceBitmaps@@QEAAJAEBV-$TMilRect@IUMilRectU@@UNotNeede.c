/*
 * XREFs of ?AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@AEA_N@Z @ 0x18007FC10
 * Callers:
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048AAC (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18007E1E0 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180019B7C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180019BBC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::DeviceBitmapInfo::AddValidRect(__int64 a1, __m128i *a2, HRGN *a3, _BYTE *a4)
{
  unsigned __int32 v8; // eax
  __m128i v9; // xmm1
  unsigned int v10; // r10d
  unsigned __int32 v11; // eax
  unsigned int v12; // r11d
  unsigned __int32 v13; // eax
  unsigned int v14; // r8d
  unsigned __int32 v15; // eax
  unsigned int v16; // r9d
  unsigned __int32 v17; // ecx
  unsigned __int32 v18; // r8d
  unsigned __int32 v19; // edx
  __int64 result; // rax
  __int64 v21; // rcx
  bool v22; // zf
  HRGN v23; // rax
  bool v24; // al
  int v25; // r9d
  int v26; // edx
  unsigned __int32 v27; // eax
  unsigned __int32 v28; // eax
  unsigned __int32 v29; // eax
  HRGN RectRgnIndirect; // rax
  bool IsEmpty; // al
  int v32; // edx
  unsigned int v33; // r8d
  unsigned int v34; // r9d
  unsigned int v35; // r10d
  unsigned int v36; // r11d
  signed int LastError; // eax
  signed int v38; // ebx
  signed int v39; // eax
  signed int v40; // eax
  unsigned int v41; // [rsp+20h] [rbp-38h]
  __m128i v42; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 4) == DisplayId::None )
  {
    v8 = *(_DWORD *)(a1 + 56);
    v9 = *a2;
    v10 = _mm_cvtsi128_si32(*a2);
    v42 = *a2;
    v42.m128i_i32[0] = v10;
    if ( v8 > v10 )
    {
      v42.m128i_i32[0] = v8;
      v10 = v8;
      v9 = v42;
    }
    v11 = *(_DWORD *)(a1 + 60);
    v12 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 4));
    v42.m128i_i32[1] = v12;
    if ( v11 > v12 )
    {
      v42.m128i_i32[1] = v11;
      v12 = v11;
      v9 = v42;
    }
    v13 = *(_DWORD *)(a1 + 64);
    v14 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 8));
    v42.m128i_i32[2] = v14;
    if ( v13 < v14 )
    {
      v42.m128i_i32[2] = v13;
      v14 = v13;
      v9 = v42;
    }
    v15 = *(_DWORD *)(a1 + 68);
    v16 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12));
    v42.m128i_i32[3] = v16;
    if ( v15 < v16 )
    {
      v42.m128i_i32[3] = v15;
      v16 = v15;
      v9 = v42;
    }
    if ( v14 > v10 && v16 > v12 )
    {
      TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(a1 + 72));
      IsEmpty = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v42);
      if ( v32 )
      {
        if ( IsEmpty )
        {
          *(_QWORD *)(a1 + 80) = 0LL;
          *(_QWORD *)(a1 + 72) = 0LL;
        }
        else
        {
          *(__m128i *)(a1 + 72) = v9;
        }
      }
      else if ( !IsEmpty )
      {
        if ( v35 < *(_DWORD *)(a1 + 72) )
          *(_DWORD *)(a1 + 72) = v35;
        if ( v36 < *(_DWORD *)(a1 + 76) )
          *(_DWORD *)(a1 + 76) = v36;
        if ( v33 > *(_DWORD *)(a1 + 80) )
          *(_DWORD *)(a1 + 80) = v33;
        if ( v34 > *(_DWORD *)(a1 + 84) )
          *(_DWORD *)(a1 + 84) = v34;
      }
    }
    *(_BYTE *)(a1 + 88) = 1;
  }
  if ( !*(_QWORD *)(a1 + 40) )
  {
    v17 = a2->m128i_u32[2];
    if ( v17 > a2->m128i_i32[0]
      && (v18 = a2->m128i_u32[3], v19 = a2->m128i_u32[1], v18 > v19)
      && (a2->m128i_i32[0] < *(_DWORD *)(a1 + 24)
       || v19 < *(_DWORD *)(a1 + 28)
       || v17 > *(_DWORD *)(a1 + 32)
       || v18 > *(_DWORD *)(a1 + 36)) )
    {
      if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(
             (unsigned int *)a2,
             (unsigned int *)(a1 + 24)) )
      {
        *(__m128i *)(a1 + 24) = *a2;
      }
      else
      {
        SetLastError(0);
        RectRgnIndirect = CreateRectRgnIndirect((const RECT *)(a1 + 24));
        *(_QWORD *)(a1 + 40) = RectRgnIndirect;
        if ( !RectRgnIndirect )
        {
          LastError = GetLastError();
          v38 = LastError;
          if ( LastError > 0 )
            v38 = (unsigned __int16)LastError | 0x80070000;
          v41 = 1892;
          goto LABEL_67;
        }
      }
    }
    else
    {
      *a4 = 1;
    }
    if ( !*(_QWORD *)(a1 + 40) )
    {
LABEL_21:
      result = 0LL;
      if ( !*a4 )
      {
        v21 = *(_QWORD *)(a1 + 16);
        *(_BYTE *)(a1 + 88) = 1;
        *(_OWORD *)(v21 + 172) = *(_OWORD *)(a1 + 24);
        *(_OWORD *)(v21 + 188) = *(_OWORD *)(a1 + 24);
      }
      return result;
    }
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *(_QWORD *)(a1 + 48));
  v22 = *a3 == 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v22 && (SetLastError(0), v23 = CreateRectRgnIndirect((const RECT *)a2), (*a3 = v23) == 0LL) )
  {
    v39 = GetLastError();
    v38 = v39;
    if ( v39 > 0 )
      v38 = (unsigned __int16)v39 | 0x80070000;
    v41 = 1914;
  }
  else
  {
    SetLastError(0);
    if ( CombineRgn(*(HRGN *)(a1 + 40), *(HRGN *)(a1 + 40), *a3, 2) )
    {
      TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(a1 + 24));
      v24 = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2);
      if ( v26 )
      {
        if ( v24 )
        {
          *(_QWORD *)(a1 + 32) = 0LL;
          *(_QWORD *)(a1 + 24) = 0LL;
        }
        else
        {
          *(__m128i *)(a1 + 24) = *a2;
        }
      }
      else if ( !v24 )
      {
        if ( a2->m128i_i32[0] < *(_DWORD *)(a1 + 24) )
          *(_DWORD *)(a1 + 24) = a2->m128i_i32[0];
        v27 = a2->m128i_u32[1];
        if ( v27 < *(_DWORD *)(a1 + 28) )
          *(_DWORD *)(a1 + 28) = v27;
        v28 = a2->m128i_u32[2];
        if ( v28 > *(_DWORD *)(a1 + 32) )
          *(_DWORD *)(a1 + 32) = v28;
        v29 = a2->m128i_u32[3];
        if ( v29 > *(_DWORD *)(a1 + 36) )
          *(_DWORD *)(a1 + 36) = v29;
      }
      if ( v25 == 2 )
      {
        DeleteObject(*(HGDIOBJ *)(a1 + 40));
        *(_QWORD *)(a1 + 40) = 0LL;
      }
      goto LABEL_21;
    }
    v40 = GetLastError();
    v38 = v40;
    if ( v40 > 0 )
      v38 = (unsigned __int16)v40 | 0x80070000;
    v41 = 1920;
  }
LABEL_67:
  if ( v38 >= 0 )
    v38 = -2003304445;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, v41);
  return (unsigned int)v38;
}
