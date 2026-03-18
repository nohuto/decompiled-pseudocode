/*
 * XREFs of MiAllocateCrcList @ 0x1406A8890
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1402273C8 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140055320 (MiGetAvailablePagesBelowPriority.c)
 *     MiGetPrivatePageCount @ 0x14021AAD0 (MiGetPrivatePageCount.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
  v6 = *(_QWORD *)(*a1 + 4160);
  PrivatePageCount = MiGetPrivatePageCount(*a1);
  v8 = PrivatePageCount + v6;
  if ( v8 < PrivatePageCount )
    v8 = -1LL;
  if ( a1 == qword_14034EF18 )
    v8 = qword_14034F0F0;
  if ( v8 > v5 )
    v8 = v5;
  v9 = ((32 * v8 + 4095) & 0xFFFFFFFFFFFFF000uLL) >> 12;
  if ( v2[696] - 1024LL <= 0 )
    return 0LL;
  v11 = v2[697];
  if ( v9 > v2[696] - 1024LL )
    v9 = v2[696] - 1024LL;
  v12 = v2[717];
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
