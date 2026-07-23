/*
 * XREFs of KiApplyProcessorErrata @ 0x1401D7304
 * Callers:
 *     KiRestoreFeatureBits @ 0x1401147A0 (KiRestoreFeatureBits.c)
 *     KiSetFeatureBits @ 0x1403D57C8 (KiSetFeatureBits.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1401317AC (HviIsAnyHypervisorPresent.c)
 */

void __fastcall KiApplyProcessorErrata(_BYTE *a1)
{
  char v2; // al
  unsigned __int8 v3; // cl

  if ( a1[1597] == 1 )
  {
    v2 = a1[1520];
    if ( v2 > 15 && v2 != 17 && !HviIsAnyHypervisorPresent() )
      __writemsr(0xC0011029, __readmsr(0xC0011029) | 2);
  }
  if ( a1[1597] == 1 && a1[1520] == 23 )
  {
    v3 = a1[1523];
    if ( ((unsigned __int8)(v3 - 48) <= 0x1Eu || v3 >= 0x61u) && !HviIsAnyHypervisorPresent() )
      __writemsr(0xC001102E, __readmsr(0xC001102E) | 0x200000000LL);
  }
}
