/*
 * XREFs of HvlpMarkHypervisorPagesForHibernation @ 0x1401B2DB4
 * Callers:
 *     HvlMarkHiberPhase @ 0x14011839C (HvlMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1401188B0 (PoSetHiberRange.c)
 *     HvlpGetPageList @ 0x1401B53F0 (HvlpGetPageList.c)
 *     sub_1401B54A4 @ 0x1401B54A4 (sub_1401B54A4.c)
 *     HvlpStartPageListIteration @ 0x1401B56BC (HvlpStartPageListIteration.c)
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
  result = sub_1401B54A4(0LL);
  *(_QWORD *)(result + 8) = 0LL;
  *(_DWORD *)result = 0;
  return result;
}
