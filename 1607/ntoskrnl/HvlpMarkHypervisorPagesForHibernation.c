/*
 * XREFs of HvlpMarkHypervisorPagesForHibernation @ 0x1401BF624
 * Callers:
 *     HvlMarkHiberPhase @ 0x1401271CC (HvlMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 *     HvlpGetPageList @ 0x1401C1DA8 (HvlpGetPageList.c)
 *     HvlpGetPageListIterator @ 0x1401C1E64 (HvlpGetPageListIterator.c)
 *     HvlpStartPageListIteration @ 0x1401C2078 (HvlpStartPageListIteration.c)
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
