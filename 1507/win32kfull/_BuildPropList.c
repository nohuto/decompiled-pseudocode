/*
 * XREFs of _BuildPropList @ 0x1C00F1458
 * Callers:
 *     NtUserBuildPropList @ 0x1C00F1360 (NtUserBuildPropList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildPropList(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  int v4; // edi
  unsigned __int64 v5; // rbp
  unsigned int v6; // r10d
  __int64 v7; // rax
  int v9; // r11d
  __int64 v10; // r8
  unsigned int i; // ebx
  __int64 v12; // rdx

  v4 = 0;
  v5 = 16LL * a3 + a2 - 16;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 168);
  if ( v7 )
  {
    v9 = *(_DWORD *)(v7 + 4);
    v10 = v7 + 8;
    for ( i = 0; v9; --v9 )
    {
      if ( a2 + 16 * (unsigned __int64)v6 > v5 )
      {
        v6 = 0;
        i = -1073741789;
      }
      if ( (*(_BYTE *)(v10 + 10) & 1) == 0 )
      {
        v12 = v6++;
        v12 *= 2LL;
        ++v4;
        *(_QWORD *)(a2 + 8 * v12) = *(_QWORD *)v10;
        *(_WORD *)(a2 + 8 * v12 + 8) = *(_WORD *)(v10 + 8);
      }
      v10 += 16LL;
    }
    *a4 = v4;
    return i;
  }
  else
  {
    *a4 = 0;
    return 0LL;
  }
}
