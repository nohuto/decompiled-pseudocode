/*
 * XREFs of sub_1800019C0 @ 0x1800019C0
 * Callers:
 *     sub_1800019C0 @ 0x1800019C0 (sub_1800019C0.c)
 *     sub_180001EA4 @ 0x180001EA4 (sub_180001EA4.c)
 * Callees:
 *     sub_1800019C0 @ 0x1800019C0 (sub_1800019C0.c)
 *     memcpy @ 0x180026528 (memcpy.c)
 */

char __fastcall sub_1800019C0(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  char result; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _BYTE *v12; // rdi
  _BYTE *v13; // rbx
  char *v14; // rbx
  _BYTE *v15; // rdx
  unsigned __int64 v16; // rcx
  size_t v17; // rdi

  result = 0;
  *a3 = 0;
  if ( a2 )
  {
    result = sub_1800019C0(a1, *(_QWORD *)(a2 + 16));
    v9 = *(_QWORD *)(a2 + 32);
    if ( v9 )
    {
      if ( !*(_DWORD *)v9 )
        *(_DWORD *)v9 = _InterlockedIncrement(&dword_18003A090);
      if ( !*(_DWORD *)(a1 + 72) )
      {
        *(_OWORD *)(a1 + 72) = *(_OWORD *)v9;
        *(_QWORD *)(a1 + 88) = *(_QWORD *)(v9 + 16);
      }
      v10 = -1LL;
      v11 = -1LL;
      *(_OWORD *)(a1 + 96) = *(_OWORD *)v9;
      *(_QWORD *)(a1 + 112) = *(_QWORD *)(v9 + 16);
      v12 = &a3[a4];
      do
        ++v11;
      while ( a3[v11] );
      v13 = &a3[v11];
      if ( v12 - v13 > 2 )
      {
        *v13 = 92;
        v14 = v13 + 1;
        v15 = *(_BYTE **)(v9 + 8);
        do
          ++v10;
        while ( v15[v10] );
        v16 = v10 + 1;
        v17 = v12 - v14;
        if ( v16 < v17 )
          v17 = v16;
        memcpy(v14, v15, v17);
        v14[v17 - 1] = 0;
      }
      return 1;
    }
  }
  return result;
}
