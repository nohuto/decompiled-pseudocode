/*
 * XREFs of CmpFreeOffsetArray @ 0x14060489C
 * Callers:
 *     CmpFlushBackupHive @ 0x140604564 (CmpFlushBackupHive.c)
 *     CmDumpKey @ 0x14060C16C (CmDumpKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeOffsetArray(unsigned int a1, PVOID *a2)
{
  PVOID *v3; // rbx
  __int64 v4; // rsi

  if ( a1 )
  {
    v3 = a2 + 1;
    v4 = a1;
    do
    {
      ExFreePoolWithTag(*v3, 0);
      v3 += 3;
      --v4;
    }
    while ( v4 );
  }
  ExFreePoolWithTag(a2, 0);
}
