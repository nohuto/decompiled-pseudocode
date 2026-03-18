/*
 * XREFs of TransformRegionBetweenCoordinateSpaces @ 0x1C01DCF18
 * Callers:
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01FCF68 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall TransformRegionBetweenCoordinateSpaces(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbp
  unsigned int v4; // esi
  unsigned int RegionData; // eax
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // r14
  unsigned int v13; // ebp
  __int64 RectRgn; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r15
  __int128 v21; // [rsp+30h] [rbp-58h] BYREF

  v3 = *a3;
  v4 = 0;
  if ( (unsigned __int64)*a3 > 2 && ((*(_BYTE *)(a1 + 352) ^ *(_BYTE *)(a2 + 352)) & 0xF) != 0 )
  {
    RegionData = GreGetRegionData(v3, 0LL, 0LL);
    v7 = RegionData;
    if ( RegionData )
    {
      v8 = Win32AllocPool((int)RegionData, 1919775573LL);
      v9 = v8;
      if ( v8 )
      {
        if ( (unsigned int)GreGetRegionData(v3, v7, v8) )
        {
          v12 = (_QWORD *)(v9 + 32);
          v21 = 0LL;
          v13 = 0;
          RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
          if ( !*(_DWORD *)(v9 + 8) )
            goto LABEL_14;
          do
          {
            TransformRectBetweenCoordinateSpaces(&v21, v12, a1, a2);
            v15 = v21 - *v12;
            if ( (_QWORD)v21 == *v12 )
              v15 = *((_QWORD *)&v21 + 1) - v12[1];
            v4 |= v15 != 0;
            v16 = GreCreateRectRgnIndirect(&v21);
            v17 = v16;
            if ( v16 )
            {
              GreCombineRgn(RectRgn, RectRgn, v16, 2LL);
              GreDeleteObject(v17);
            }
            v12 += 2;
            ++v13;
          }
          while ( v13 < *(_DWORD *)(v9 + 8) );
          if ( v4 )
            *a3 = RectRgn;
          else
LABEL_14:
            GreDeleteObject(RectRgn);
        }
        Win32FreePool(v9, v10, v11);
      }
    }
  }
  return v4;
}
