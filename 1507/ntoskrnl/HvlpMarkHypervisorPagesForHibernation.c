/*
 * XREFs of HvlpMarkHypervisorPagesForHibernation @ 0x1401EDAB8
 * Callers:
 *     HvlMarkHiberPhase @ 0x14014CE38 (HvlMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 *     HvlpGetPageList @ 0x1401F0584 (HvlpGetPageList.c)
 *     sub_1401F0638 @ 0x1401F0638 (sub_1401F0638.c)
 *     HvlpStartPageListIteration @ 0x1401F096C (HvlpStartPageListIteration.c)
 */

__int64 HvlpMarkHypervisorPagesForHibernation()
{
  int PageList; // ebx
  __int64 result; // rax
  ULONG_PTR Length; // [rsp+40h] [rbp+8h] BYREF
  PVOID Address; // [rsp+48h] [rbp+10h] BYREF

  HvlpStartPageListIteration(0LL);
  do
  {
    PageList = HvlpGetPageList(0LL, &Address, &Length);
    if ( (_DWORD)Length )
      PoSetHiberRange(0LL, 0x14000u, Address, (unsigned int)Length, 0x686C7648u);
  }
  while ( PageList == 261 );
  result = sub_1401F0638(0LL);
  *(_QWORD *)(result + 8) = 0LL;
  *(_DWORD *)result = 0;
  return result;
}
