/*
 * XREFs of SubtractRect @ 0x14003ECCC
 * Callers:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x14003F6C0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x140175E24 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 */

__int64 __fastcall SubtractRect(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // r8d
  int v7; // ebp
  int v8; // eax
  int v9; // esi
  int v10; // r11d
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF

  v12 = 0LL;
  v5 = IntersectRect(&v12, a2, a3);
  v6 = 0;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  if ( v5 )
  {
    v7 = *(_DWORD *)(a2 + 4);
    v8 = (int)v12 <= *(_DWORD *)a2;
    if ( SDWORD1(v12) <= v7 )
      ++v8;
    v9 = *(_DWORD *)(a2 + 8);
    if ( SDWORD2(v12) >= v9 )
      ++v8;
    v10 = *(_DWORD *)(a2 + 12);
    if ( SHIDWORD(v12) >= v10 )
      ++v8;
    if ( v8 == 4 )
    {
      *(_OWORD *)a1 = 0LL;
      return 0LL;
    }
    if ( v8 == 3 )
    {
      if ( (int)v12 > *(_DWORD *)a2 )
      {
        *(_DWORD *)(a1 + 8) = v12;
      }
      else if ( SDWORD2(v12) < v9 )
      {
        *(_DWORD *)a1 = DWORD2(v12);
      }
      else if ( SDWORD1(v12) > v7 )
      {
        *(_DWORD *)(a1 + 12) = DWORD1(v12);
      }
      else if ( SHIDWORD(v12) < v10 )
      {
        *(_DWORD *)(a1 + 4) = HIDWORD(v12);
      }
    }
  }
  if ( *(_DWORD *)a1 < *(_DWORD *)(a1 + 8) )
  {
    LOBYTE(v6) = *(_DWORD *)(a1 + 4) < *(_DWORD *)(a1 + 12);
    return v6;
  }
  return 0LL;
}
