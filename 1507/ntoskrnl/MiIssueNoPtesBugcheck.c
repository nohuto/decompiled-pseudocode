/*
 * XREFs of MiIssueNoPtesBugcheck @ 0x140217F58
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MiBuildPagedPool @ 0x1407C9C28 (MiBuildPagedPool.c)
 *     MiInitializePteInfo @ 0x1407E72E4 (MiInitializePteInfo.c)
 * Callees:
 *     MmGetNumberOfFreeSystemPtes @ 0x140014310 (MmGetNumberOfFreeSystemPtes.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiGetHighestPteConsumer @ 0x140226AB0 (MiGetHighestPteConsumer.c)
 */

void __fastcall __noreturn MiIssueNoPtesBugcheck(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rbx
  unsigned int NumberOfFreeSystemPtes; // eax
  ULONG_PTR v3; // r11
  unsigned int v4; // eax
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp+10h] BYREF

  v1 = (unsigned int)BugCheckParameter2;
  if ( MiGetHighestPteConsumer(&BugCheckParameter2a) )
  {
    NumberOfFreeSystemPtes = MmGetNumberOfFreeSystemPtes();
    KeBugCheckEx(0xD8u, v3, BugCheckParameter2a, NumberOfFreeSystemPtes, 0LL);
  }
  v4 = MmGetNumberOfFreeSystemPtes();
  KeBugCheckEx(0x3Fu, 0LL, v1, v4, 0LL);
}
