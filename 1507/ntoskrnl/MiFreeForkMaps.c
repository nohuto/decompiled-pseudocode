/*
 * XREFs of MiFreeForkMaps @ 0x140001E70
 * Callers:
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 * Callees:
 *     MiFinishLastForkPageTable @ 0x140003EF4 (MiFinishLastForkPageTable.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 */

__int64 __fastcall MiFreeForkMaps(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdi

  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 )
    result = MiReleasePtes(&qword_14034FC70, ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
  v4 = (_QWORD *)(a1 + 8);
  v5 = 3LL;
  do
  {
    if ( *v4 != -1LL )
      result = MiFinishLastForkPageTable();
    ++v4;
    --v5;
  }
  while ( v5 );
  return result;
}
