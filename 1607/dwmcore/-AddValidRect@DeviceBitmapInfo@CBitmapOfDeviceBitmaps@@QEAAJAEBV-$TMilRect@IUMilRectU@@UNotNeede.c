/*
 * XREFs of ?AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@AEA_N@Z @ 0x1800A3E40
 * Callers:
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180094200 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180081704 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180081744 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::DeviceBitmapInfo::AddValidRect(__int64 a1, RECT *a2, HRGN *a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  unsigned __int32 v9; // r9d
  unsigned __int32 v10; // ebp
  unsigned __int32 v11; // r10d
  unsigned int v12; // r11d
  bool v13; // cc
  bool v14; // cf
  __int64 v16; // rcx
  HRGN v17; // rax
  bool v18; // al
  __int64 v19; // r8
  int v20; // r9d
  int v21; // edx
  unsigned int top; // eax
  unsigned int right; // eax
  unsigned int bottom; // eax
  HRGN RectRgnIndirect; // rax
  bool IsEmpty; // al
  int v27; // edx
  __int64 v28; // r8
  unsigned int v29; // r9d
  unsigned int v30; // r10d
  unsigned int v31; // r11d
  signed int LastError; // eax
  unsigned int v33; // [rsp+20h] [rbp-38h]
  __m128i v34; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  if ( *(_DWORD *)(a1 + 4) == DisplayId::None )
  {
    v34 = *(__m128i *)a2;
    v9 = v34.m128i_u32[1];
    v10 = v34.m128i_u32[2];
    v11 = v34.m128i_u32[3];
    v12 = _mm_cvtsi128_si32(v34);
    if ( *(_DWORD *)(a1 + 56) > v12 )
      v12 = *(_DWORD *)(a1 + 56);
    v13 = *(_DWORD *)(a1 + 60) <= v34.m128i_i32[1];
    v34.m128i_i32[0] = v12;
    if ( !v13 )
      v9 = *(_DWORD *)(a1 + 60);
    v14 = *(_DWORD *)(a1 + 64) < v34.m128i_i32[2];
    v34.m128i_i32[1] = v9;
    if ( v14 )
      v10 = *(_DWORD *)(a1 + 64);
    v14 = *(_DWORD *)(a1 + 68) < v34.m128i_i32[3];
    v34.m128i_i32[2] = v10;
    if ( v14 )
      v11 = *(_DWORD *)(a1 + 68);
    v34.m128i_i32[3] = v11;
    if ( v10 > v12 && v11 > v9 )
    {
      TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(a1 + 72));
      IsEmpty = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v34);
      if ( v27 )
      {
        if ( IsEmpty )
        {
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)v28 = 0LL;
        }
        else
        {
          *(__m128i *)v28 = v34;
        }
      }
      else if ( !IsEmpty )
      {
        if ( v31 < *(_DWORD *)v28 )
          *(_DWORD *)v28 = v31;
        if ( v29 < *(_DWORD *)(v28 + 4) )
          *(_DWORD *)(v28 + 4) = v29;
        if ( v10 > *(_DWORD *)(v28 + 8) )
          *(_DWORD *)(v28 + 8) = v10;
        if ( v30 > *(_DWORD *)(v28 + 12) )
          *(_DWORD *)(v28 + 12) = v30;
      }
    }
    *(_BYTE *)(a1 + 88) = 1;
  }
  if ( !*(_QWORD *)(a1 + 40) )
  {
    if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(
           (unsigned int *)(a1 + 24),
           (unsigned int *)a2) )
    {
      *a4 = 1;
    }
    else if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(
                (unsigned int *)a2,
                (unsigned int *)(a1 + 24)) )
    {
      *(RECT *)(a1 + 24) = *a2;
    }
    else
    {
      SetLastError(0);
      RectRgnIndirect = CreateRectRgnIndirect((const RECT *)(a1 + 24));
      *(_QWORD *)(a1 + 40) = RectRgnIndirect;
      if ( !RectRgnIndirect )
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        v33 = 1887;
        goto LABEL_57;
      }
    }
    if ( !*(_QWORD *)(a1 + 40) )
    {
LABEL_16:
      if ( !*a4 )
      {
        v16 = *(_QWORD *)(a1 + 16);
        *(_BYTE *)(a1 + 88) = 1;
        *(_OWORD *)(v16 + 172) = *(_OWORD *)(a1 + 24);
        *(_OWORD *)(v16 + 188) = *(_OWORD *)(a1 + 24);
      }
      return v4;
    }
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *(_QWORD *)(a1 + 48));
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( *a3 || (SetLastError(0), v17 = CreateRectRgnIndirect(a2), (*a3 = v17) != 0LL) )
  {
    SetLastError(0);
    if ( CombineRgn(*(HRGN *)(a1 + 40), *(HRGN *)(a1 + 40), *a3, 2) )
    {
      TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(a1 + 24));
      v18 = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2);
      if ( v21 )
      {
        if ( v18 )
        {
          *(_QWORD *)(v19 + 8) = 0LL;
          *(_QWORD *)v19 = 0LL;
        }
        else
        {
          *(RECT *)v19 = *a2;
        }
      }
      else if ( !v18 )
      {
        if ( a2->left < *(_DWORD *)v19 )
          *(_DWORD *)v19 = a2->left;
        top = a2->top;
        if ( top < *(_DWORD *)(v19 + 4) )
          *(_DWORD *)(v19 + 4) = top;
        right = a2->right;
        if ( right > *(_DWORD *)(v19 + 8) )
          *(_DWORD *)(v19 + 8) = right;
        bottom = a2->bottom;
        if ( bottom > *(_DWORD *)(v19 + 12) )
          *(_DWORD *)(v19 + 12) = bottom;
      }
      if ( v20 == 2 )
      {
        DeleteObject(*(HGDIOBJ *)(a1 + 40));
        *(_QWORD *)(a1 + 40) = 0LL;
      }
      goto LABEL_16;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v33 = 1915;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v33 = 1909;
  }
LABEL_57:
  if ( LastError >= 0 )
    LastError = -2003304445;
  v4 = LastError;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, v33);
  return v4;
}
