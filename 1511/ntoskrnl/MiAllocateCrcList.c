/*
 * XREFs of MiAllocateCrcList @ 0x14050E9B4
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x140129C30 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x14007CA30 (MiGetAvailablePagesBelowPriority.c)
 *     MiGetPrivatePageCount @ 0x14012B948 (MiGetPrivatePageCount.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall MiAllocateCrcList(__int64 *a1, SIZE_T *a2)
{
  _QWORD *v2; // rbp
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  unsigned __int64 PrivatePageCount; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  SIZE_T v14; // rbx
  PVOID result; // rax

  v2 = (_QWORD *)*a1;
  v5 = *a2 >> 5;
  v6 = *(_QWORD *)(*a1 + 4352);
  PrivatePageCount = MiGetPrivatePageCount(*a1);
  v8 = PrivatePageCount + v6;
  if ( v8 < PrivatePageCount )
    v8 = -1LL;
  if ( a1 == (__int64 *)&unk_1402FEA58 )
    v8 = qword_1402FEC30;
  if ( v8 > v5 )
    v8 = v5;
  v9 = ((32 * v8 + 4095) & 0xFFFFFFFFFFFFF000uLL) >> 12;
  if ( v2[744] - 1024LL <= 0 )
    return 0LL;
  v10 = v2[745];
  if ( v9 > v2[744] - 1024LL )
    v9 = v2[744] - 1024LL;
  v11 = v2[765];
  if ( v10 >= v11 )
    return 0LL;
  v12 = v11 - v10;
  if ( v9 > v12 )
    v9 = v12;
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v2, 2u);
  if ( v9 > AvailablePagesBelowPriority )
    v9 = AvailablePagesBelowPriority;
  v14 = v9 << 12;
  if ( v14 < 0x200000 )
    v14 = 0x200000LL;
  while ( 1 )
  {
    result = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x6D75534Du);
    if ( result )
      break;
    v14 >>= 1;
    if ( v14 < 0x10000 )
      return result;
  }
  *a2 = v14;
  return result;
}
