/*
 * XREFs of HvlpSetupPageListIteration @ 0x1401B5648
 * Callers:
 *     HvlpStartPageListIteration @ 0x1401B56BC (HvlpStartPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1401B56DC (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14010429C (MmGetPhysicalAddress.c)
 *     sub_1401B54A4 @ 0x1401B54A4 (sub_1401B54A4.c)
 */

PHYSICAL_ADDRESS *__fastcall HvlpSetupPageListIteration(int a1, char a2)
{
  PHYSICAL_ADDRESS *v3; // rbx
  int v4; // ecx
  PVOID v5; // rax
  PVOID v6; // rcx
  PHYSICAL_ADDRESS *result; // rax

  v3 = (PHYSICAL_ADDRESS *)sub_1401B54A4(a1);
  v3->LowPart = 0;
  v3[1].QuadPart = 0LL;
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
  v3[1].QuadPart = (LONGLONG)v6;
  if ( !v6 )
    return 0LL;
  v3[2] = MmGetPhysicalAddress(v6);
  result = v3;
  BYTE3(v3->QuadPart) = a2;
  BYTE2(v3->u.LowPart) = 1;
  return result;
}
