/*
 * XREFs of MiIssueNoPtesBugcheck @ 0x1401E7418
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x1400DE220 (MmMapLockedPagesSpecifyCache.c)
 *     MiBuildPagedPool @ 0x14078E258 (MiBuildPagedPool.c)
 *     MiInitializePteInfo @ 0x1407BB960 (MiInitializePteInfo.c)
 * Callees:
 *     MmGetNumberOfFreeSystemPtes @ 0x1400BEE84 (MmGetNumberOfFreeSystemPtes.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     MiGetHighestPteConsumer @ 0x1401FC6C0 (MiGetHighestPteConsumer.c)
 */

void __fastcall __noreturn MiIssueNoPtesBugcheck(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int NumberOfFreeSystemPtes; // eax
  ULONG_PTR v7; // r11
  unsigned int v8; // eax
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp+10h] BYREF

  v1 = (unsigned int)BugCheckParameter2;
  if ( MiGetHighestPteConsumer(&BugCheckParameter2a) )
  {
    NumberOfFreeSystemPtes = MmGetNumberOfFreeSystemPtes(v3, v2, v4, v5);
    KeBugCheckEx(0xD8u, v7, BugCheckParameter2a, NumberOfFreeSystemPtes, 0LL);
  }
  v8 = MmGetNumberOfFreeSystemPtes(v3, v2, v4, v5);
  KeBugCheckEx(0x3Fu, 0LL, v1, v8, 0LL);
}
