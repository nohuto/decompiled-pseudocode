/*
 * XREFs of IntersectWithParents @ 0x14002CFAC
 * Callers:
 *     xxxGetUpdateRect @ 0x14002BE14 (xxxGetUpdateRect.c)
 *     xxxGetUpdateRgn @ 0x14002C328 (xxxGetUpdateRgn.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x14011EA74 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRect @ 0x14002E1D8 (PhysicalToLogicalInPlaceRect.c)
 */

__int64 __fastcall IntersectWithParents(__int64 a1, int *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 27LL) & 0x20) == 0 )
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(v3 + 104);
      if ( !v3 )
        break;
      v4 = *(_QWORD *)(v3 + 40);
      if ( (*(_BYTE *)(v4 + 31) & 0x30) != 0x10 )
        return 0LL;
      v12 = *(_OWORD *)(v4 + 104);
      PhysicalToLogicalInPlaceRect(a1, &v12);
      v5 = v12;
      v6 = DWORD2(v12);
      if ( *a2 > (int)v12 )
        v5 = *a2;
      v7 = a2[2];
      *a2 = v5;
      if ( v7 < v6 )
        v6 = v7;
      a2[2] = v6;
      if ( v5 >= v6 )
        goto LABEL_14;
      v8 = DWORD1(v12);
      v9 = HIDWORD(v12);
      if ( a2[1] > SDWORD1(v12) )
        v8 = a2[1];
      v10 = a2[3];
      a2[1] = v8;
      if ( v10 < v9 )
        v9 = v10;
      a2[3] = v9;
      if ( v8 >= v9 )
      {
LABEL_14:
        *(_OWORD *)a2 = 0LL;
        return 0LL;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 27LL) & 0x20) != 0 )
        return 1LL;
      a1 = v3;
    }
  }
  return 1LL;
}
