/*
 * XREFs of SepFlattenAcl @ 0x14021AB40
 * Callers:
 *     SeLogAccessFailure @ 0x140061150 (SeLogAccessFailure.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepFlattenAcl(__int64 a1, _QWORD *a2, unsigned int *a3, _WORD *a4)
{
  unsigned int v4; // eax
  unsigned __int8 *v5; // r14
  unsigned int v6; // esi
  __int16 v8; // bp
  char *v9; // r10
  unsigned int v10; // edi
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // r12
  _DWORD *v16; // r15
  char v17; // al
  int v18; // ecx

  v4 = *(unsigned __int16 *)(a1 + 4);
  v5 = (unsigned __int8 *)(a1 + 8);
  v6 = 0;
  *a2 = 0LL;
  v8 = 0;
  *a3 = 0;
  v9 = (char *)(a1 + 8);
  v10 = 0;
  if ( !v4 )
    return 3221226021LL;
  v11 = v4;
  do
  {
    v12 = *v9;
    v10 += 12;
    if ( (unsigned __int8)*v9 <= 3u || v12 == 17 || v12 == 20 )
    {
      v10 += 4 * (unsigned __int8)v9[9] + 8;
      ++v8;
    }
    v9 += *((unsigned __int16 *)v9 + 1);
    --v11;
  }
  while ( v11 );
  if ( !v8 )
    return 3221226021LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x614C6553u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v16 = PoolWithTag;
  if ( *(_WORD *)(a1 + 4) )
  {
    do
    {
      v17 = *v5;
      if ( *v5 <= 3u || v17 == 17 || v17 == 20 )
      {
        v18 = *((_DWORD *)v5 + 1);
        v16[1] = v5[1];
        *v16 = *v5;
        v16[2] = v18;
        memmove(v16 + 3, v5 + 8, 4 * v5[9] + 8);
        v16 += v5[9] + 5;
      }
      ++v6;
      v5 += *((unsigned __int16 *)v5 + 1);
    }
    while ( v6 < *(unsigned __int16 *)(a1 + 4) );
  }
  *a2 = v14;
  *a3 = v10;
  *a4 = v8;
  return 0LL;
}
