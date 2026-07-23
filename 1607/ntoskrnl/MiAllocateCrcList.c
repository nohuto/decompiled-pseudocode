/*
 * XREFs of MiAllocateCrcList @ 0x1406636D0
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1406637FC (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1400BE0E0 (MiGetAvailablePagesBelowPriority.c)
 *     MiGetPrivatePageCount @ 0x1401E97B0 (MiGetPrivatePageCount.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall MiAllocateCrcList(__int64 *a1, SIZE_T *a2)
{
  _QWORD *v2; // rbp
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  unsigned __int64 PrivatePageCount; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  PVOID result; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  SIZE_T v15; // rbx

  v2 = (_QWORD *)*a1;
  v5 = *a2 >> 5;
  v6 = *(_QWORD *)(*a1 + 4480);
  PrivatePageCount = MiGetPrivatePageCount(*a1);
  v8 = PrivatePageCount + v6;
  if ( v8 < PrivatePageCount )
    v8 = -1LL;
  if ( a1 == qword_140326E58 )
    v8 = qword_140327040;
  if ( v8 > v5 )
    v8 = v5;
  v9 = ((32 * v8 + 4095) & 0xFFFFFFFFFFFFF000uLL) >> 12;
  if ( v2[816] - 1024LL <= 0 )
    return 0LL;
  v11 = v2[901];
  if ( v9 > v2[816] - 1024LL )
    v9 = v2[816] - 1024LL;
  v12 = v2[917];
  if ( v11 >= v12 )
    return 0LL;
  v13 = v12 - v11;
  if ( v9 > v13 )
    v9 = v13;
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v2, 2u);
  if ( v9 > AvailablePagesBelowPriority )
    v9 = AvailablePagesBelowPriority;
  v15 = v9 << 12;
  if ( v15 < 0x200000 )
    v15 = 0x200000LL;
  while ( 1 )
  {
    result = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x6D75534Du);
    if ( result )
      break;
    v15 >>= 1;
    if ( v15 < 0x10000 )
      return result;
  }
  *a2 = v15;
  return result;
}
