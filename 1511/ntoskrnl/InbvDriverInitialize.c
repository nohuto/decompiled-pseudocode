/*
 * XREFs of InbvDriverInitialize @ 0x140767874
 * Callers:
 *     KiInitializeBootStructures @ 0x1403A770C (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     InbvSetFunction @ 0x140137BA4 (InbvSetFunction.c)
 *     InbvDetermineFunction @ 0x140137C18 (InbvDetermineFunction.c)
 *     strstr @ 0x140143918 (strstr.c)
 *     _strupr @ 0x140143974 (_strupr.c)
 *     BvgaDriverInitialize @ 0x14076791C (BvgaDriverInitialize.c)
 *     BgkInitialize @ 0x140787C58 (BgkInitialize.c)
 */

char __fastcall InbvDriverInitialize(unsigned int a1, __int64 a2, unsigned int a3)
{
  char v6; // bl
  int v7; // ecx
  char *v8; // rcx
  char *v9; // rax

  v6 = 1;
  if ( (unsigned int)InbvDetermineFunction(a2) != 2 )
  {
    if ( (int)BgkInitialize(a2, a1) < 0 )
    {
      v6 = 0;
      v7 = 3;
      BvgaDisplayState = 0;
    }
    else
    {
      BvgaDisplayState = 2;
      v7 = 4;
    }
    InbvSetFunction(v7);
  }
  v8 = *(char **)(a2 + 216);
  if ( !v8 )
    return BvgaDriverInitialize(a1, a2, a3);
  v9 = strupr(v8);
  if ( !strstr(v9, "NOVGA") )
    return BvgaDriverInitialize(a1, a2, a3);
  return v6;
}
