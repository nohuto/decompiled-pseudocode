/*
 * XREFs of ??$ArrayInsertionSort@UMILGradientStop@@@@YAXPEAUMILGradientStop@@I@Z @ 0x180166B7C
 * Callers:
 *     ?CreateWellFormedGradientArray@CGradientTextureGenerator@@CAXPEBVCGradientSpanInfo@@PEAV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@_NPEAU_D3DCOLORVALUE@@4@Z @ 0x180167554 (-CreateWellFormedGradientArray@CGradientTextureGenerator@@CAXPEBVCGradientSpanInfo@@PEAV-$DynArr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArrayInsertionSort<MILGradientStop>(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r9d
  __int128 *v4; // r10
  int v5; // edi
  unsigned int v6; // r11d
  __int128 v7; // xmm1
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  __int64 result; // rax
  __int64 v12; // rcx
  __int128 v13; // [rsp+0h] [rbp-28h]

  v2 = 1;
  if ( a2 > 1 )
  {
    v4 = (__int128 *)(a1 + 20);
    do
    {
      v5 = *((_DWORD *)v4 + 4);
      v6 = v2;
      v7 = *v4;
      v13 = *v4;
      if ( v2 )
      {
        v8 = a1 + 20LL * v2;
        do
        {
          v9 = v6 - 1;
          if ( *(float *)(a1 + 20 * v9) <= *(float *)&v13 )
            break;
          v10 = *(_DWORD *)(a1 + 20 * v9 + 16);
          --v6;
          *(_OWORD *)v8 = *(_OWORD *)(a1 + 20 * v9);
          *(_DWORD *)(v8 + 16) = v10;
          v8 -= 20LL;
        }
        while ( (_DWORD)v9 );
      }
      result = v6;
      ++v2;
      v4 = (__int128 *)((char *)v4 + 20);
      v12 = 5LL * v6;
      *(_OWORD *)(a1 + 4 * v12) = v7;
      *(_DWORD *)(a1 + 4 * v12 + 16) = v5;
    }
    while ( v2 < a2 );
  }
  return result;
}
