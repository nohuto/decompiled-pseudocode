/*
 * XREFs of SubtractRect @ 0x1C00EE448
 * Callers:
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C0009A9C (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C006A524 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     CreateSpb @ 0x1C010B97C (CreateSpb.c)
 *     ?MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0133580 (-MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 */

_BOOL8 __fastcall SubtractRect(__int64 a1, int *a2, int *a3)
{
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // r11d
  int v9; // r10d
  _BOOL8 result; // rax
  int v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+24h] [rbp-14h]
  int v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+2Ch] [rbp-Ch]

  v5 = IntersectRect(&v11, a2, a3);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  if ( v5 )
  {
    v6 = a2[1];
    v7 = v11 <= *a2;
    if ( v12 <= v6 )
      ++v7;
    v8 = a2[2];
    if ( v13 >= v8 )
      ++v7;
    v9 = a2[3];
    if ( v14 >= v9 )
      ++v7;
    if ( v7 == 4 )
    {
      result = 0LL;
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      return result;
    }
    if ( v7 == 3 )
    {
      if ( v11 > *a2 )
      {
        *(_DWORD *)(a1 + 8) = v11;
      }
      else if ( v13 < v8 )
      {
        *(_DWORD *)a1 = v13;
      }
      else if ( v12 > v6 )
      {
        *(_DWORD *)(a1 + 12) = v12;
      }
      else if ( v14 < v9 )
      {
        *(_DWORD *)(a1 + 4) = v14;
      }
    }
  }
  return *(_DWORD *)a1 < *(_DWORD *)(a1 + 8) && *(_DWORD *)(a1 + 4) < *(_DWORD *)(a1 + 12);
}
