/*
 * XREFs of MagnificationInverseTransformPoint @ 0x1C01FAF28
 * Callers:
 *     MagpInverseMagnificationTransformFromPoint @ 0x1C000D5D4 (MagpInverseMagnificationTransformFromPoint.c)
 * Callees:
 *     <none>
 */

void __fastcall MagnificationInverseTransformPoint(__int128 *a1, int *a2)
{
  int v2; // r8d
  int v4; // r10d
  int v5; // r9d
  int v6; // edx
  int v7; // eax
  int v8; // eax
  __int128 v9; // [rsp+0h] [rbp-28h]
  __int128 v10; // [rsp+10h] [rbp-18h]

  if ( a1 )
  {
    v2 = *((_DWORD *)a1 + 10);
    v4 = *((_DWORD *)a1 + 11);
    v10 = *a1;
    v9 = a1[1];
    if ( v2 )
    {
      if ( v4 )
      {
        v5 = v9 + v2 * (*a2 - (int)v10) / 256;
        v6 = v4 * (a2[1] - DWORD1(v10)) / 256 + DWORD1(v9);
        v7 = DWORD2(v9) - 1;
        if ( v5 < DWORD2(v9) - 1 )
          v7 = v5;
        *a2 = v7;
        v8 = HIDWORD(v9) - 1;
        if ( v6 < HIDWORD(v9) - 1 )
          v8 = v6;
        a2[1] = v8;
      }
    }
  }
}
