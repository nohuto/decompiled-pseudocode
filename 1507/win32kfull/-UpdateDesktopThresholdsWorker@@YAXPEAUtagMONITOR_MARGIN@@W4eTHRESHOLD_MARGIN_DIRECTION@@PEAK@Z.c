/*
 * XREFs of ?UpdateDesktopThresholdsWorker@@YAXPEAUtagMONITOR_MARGIN@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C00391A8
 * Callers:
 *     UpdateDesktopThresholds @ 0x1C0039024 (UpdateDesktopThresholds.c)
 * Callees:
 *     ?GetCoordFromRect@@YAXPEAUtagMONITOR_MARGIN@@PEAUtagRECT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0039288 (-GetCoordFromRect@@YAXPEAUtagMONITOR_MARGIN@@PEAUtagRECT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall UpdateDesktopThresholdsWorker(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // r15
  __int64 i; // r10
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // r11
  int v10; // eax
  int v11; // ebp
  __int64 v12; // rdi
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // ebx
  __int64 v17; // rbx
  int v18; // ecx
  int v19; // r9d
  __int64 v20; // rcx
  int v21; // [rsp+20h] [rbp-38h] BYREF
  int v22; // [rsp+24h] [rbp-34h]
  int v23; // [rsp+28h] [rbp-30h]

  result = gpDispInfo;
  v5 = a2;
  for ( i = *(_QWORD *)(gpDispInfo + 96LL); i; i = *(_QWORD *)(i + 16) )
  {
    result = *(unsigned int *)(i + 24);
    if ( (result & 1) != 0 )
    {
      v7 = (unsigned int)*a3;
      *(_BYTE *)(v5 + i + 464) = 0;
      *(_BYTE *)(v5 + i + 468) = 0;
      *(_BYTE *)(v5 + i + 472) = 0;
      *(_BYTE *)(v5 + i + 476) = 0;
      *(_BYTE *)(v5 + i + 480) = 0;
      *(_BYTE *)(v5 + i + 484) = 0;
      *(_BYTE *)(v5 + i + 488) = 0;
      result = GetCoordFromRect(&v21, i + 28, (unsigned int)v5, v7);
      if ( (_DWORD)v8 )
      {
        v11 = v23;
        v12 = 0LL;
        v13 = v22;
        v14 = 0x7FFFFFFF;
        v15 = v21;
        do
        {
          v16 = *(_DWORD *)(v9 + 24 * v12);
          if ( v16 >= v21 && v16 < v22
            || (result = *(unsigned int *)(v9 + 24 * v12 + 4), (int)result > v21) && (int)result <= v22
            || v21 >= v16 && v21 < (int)result
            || v22 > v16 && v22 <= (int)result )
          {
            if ( v23 > *(_DWORD *)(v9 + 24 * v12 + 8) )
              goto LABEL_6;
            if ( v23 < v14 )
              v14 = v23;
          }
          v12 = (unsigned int)(v12 + 1);
        }
        while ( (unsigned int)v12 < (unsigned int)v8 );
        if ( v14 == 0x7FFFFFFF )
        {
          v20 = 3 * v8;
          *(_DWORD *)(v9 + 8 * v20) = v21;
          result = (unsigned int)(v8 + 1);
          *(_DWORD *)(v9 + 8 * v20 + 4) = v13;
          *(_DWORD *)(v9 + 8 * v20 + 8) = v11;
          *(_QWORD *)(v9 + 8 * v20 + 16) = i;
          *a3 = result;
        }
        else
        {
          result = v9 + 4;
          v17 = v8;
          do
          {
            v18 = *(_DWORD *)(result - 4);
            if ( v18 >= v15 && v18 < v13
              || (v19 = *(_DWORD *)result, *(_DWORD *)result > v15) && v19 <= v13
              || v15 >= v18 && v15 < v19
              || v13 > v18 && v13 <= v19 )
            {
              *(_DWORD *)(result - 4) = v15;
              *(_DWORD *)result = v13;
              *(_DWORD *)(result + 4) = v11;
              *(_QWORD *)(result + 12) = i;
            }
            result += 24LL;
            --v17;
          }
          while ( v17 );
        }
      }
      else
      {
        v10 = v22;
        *(_DWORD *)v9 = v21;
        *(_DWORD *)(v9 + 4) = v10;
        result = (unsigned int)v23;
        *(_DWORD *)(v9 + 8) = v23;
        *(_QWORD *)(v9 + 16) = i;
        *a3 = 1;
      }
    }
LABEL_6:
    ;
  }
  return result;
}
