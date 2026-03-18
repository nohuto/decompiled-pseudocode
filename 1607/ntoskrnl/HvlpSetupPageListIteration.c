/*
 * XREFs of HvlpSetupPageListIteration @ 0x1401C2120
 * Callers:
 *     HvlpStartPageListIteration @ 0x1401C2194 (HvlpStartPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1401C21B4 (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14002500C (MmGetPhysicalAddress.c)
 *     HvlpGetPageListIterator @ 0x1401C1F80 (HvlpGetPageListIterator.c)
 */

PHYSICAL_ADDRESS *__fastcall HvlpSetupPageListIteration(int a1, char a2)
{
  PHYSICAL_ADDRESS *PageListIterator; // rbx
  int v4; // ecx
  PVOID v5; // rax
  PVOID v6; // rcx
  PHYSICAL_ADDRESS *result; // rax

  PageListIterator = (PHYSICAL_ADDRESS *)HvlpGetPageListIterator(a1);
  PageListIterator->LowPart = 0;
  PageListIterator[1].QuadPart = 0LL;
  if ( v4 == 1 )
  {
    v5 = HvlpFallbackScratchPage;
    v6 = HvlpHibernateScratchPage;
  }
  else
  {
    v5 = HvlpHibernateScratchPage;
    v6 = HvlpFallbackScratchPage;
  }
  if ( v5 )
    v6 = v5;
  PageListIterator[1].QuadPart = (LONGLONG)v6;
  if ( !v6 )
    return 0LL;
  PageListIterator[2] = MmGetPhysicalAddress(v6);
  result = PageListIterator;
  BYTE3(PageListIterator->QuadPart) = a2;
  BYTE2(PageListIterator->u.LowPart) = 1;
  return result;
}
