/*
 * XREFs of HvlpMarkHypervisorPagesForHibernation @ 0x1401BF740
 * Callers:
 *     HvlMarkHiberPhase @ 0x140126C5C (HvlMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x140112E60 (PoSetHiberRange.c)
 *     HvlpGetPageList @ 0x1401C1EC4 (HvlpGetPageList.c)
 *     HvlpGetPageListIterator @ 0x1401C1F80 (HvlpGetPageListIterator.c)
 *     HvlpStartPageListIteration @ 0x1401C2194 (HvlpStartPageListIteration.c)
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
  result = HvlpGetPageListIterator(0LL);
  *(_QWORD *)(result + 8) = 0LL;
  *(_DWORD *)result = 0;
  return result;
}
