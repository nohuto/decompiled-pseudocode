/*
 * XREFs of TransformRegionBetweenCoordinateSpaces @ 0x1C01E62EC
 * Callers:
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C020589C (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     SameCoordinateSpace @ 0x1C00855C8 (SameCoordinateSpace.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall TransformRegionBetweenCoordinateSpaces(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // esi
  __int64 v6; // rbp
  unsigned int RegionData; // eax
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // r14
  unsigned int v12; // ebp
  __int64 RectRgn; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r12
  __int128 v20; // [rsp+30h] [rbp-58h] BYREF

  v3 = 0;
  if ( (unsigned __int64)*a3 > 2
    && !(unsigned int)SameCoordinateSpace(
                        *(_QWORD *)(*(_QWORD *)(a2 + 16) + 384LL),
                        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL)) )
  {
    v6 = *a3;
    RegionData = GreGetRegionData(*a3, 0LL, 0LL);
    v8 = RegionData;
    if ( RegionData )
    {
      v9 = Win32AllocPool((int)RegionData, 1919775573LL);
      v10 = v9;
      if ( v9 )
      {
        if ( (unsigned int)GreGetRegionData(v6, v8, v9) )
        {
          v11 = (_QWORD *)(v10 + 32);
          v20 = 0LL;
          v12 = 0;
          RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
          if ( !*(_DWORD *)(v10 + 8) )
            goto LABEL_14;
          do
          {
            TransformRectBetweenCoordinateSpaces(&v20, v11, a1, a2);
            v14 = v20 - *v11;
            if ( (_QWORD)v20 == *v11 )
              v14 = *((_QWORD *)&v20 + 1) - v11[1];
            v3 |= v14 != 0;
            v15 = GreCreateRectRgnIndirect(&v20);
            v16 = v15;
            if ( v15 )
            {
              GreCombineRgn(RectRgn, RectRgn, v15, 2LL);
              GreDeleteObject(v16);
            }
            v11 += 2;
            ++v12;
          }
          while ( v12 < *(_DWORD *)(v10 + 8) );
          if ( v3 )
            *a3 = RectRgn;
          else
LABEL_14:
            GreDeleteObject(RectRgn);
        }
        Win32FreePool(v10);
      }
    }
  }
  return v3;
}
