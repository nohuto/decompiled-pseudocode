/*
 * XREFs of StorPortLogError @ 0x1C002A160
 * Callers:
 *     StorPortLogErrorVrfy @ 0x1C005A310 (StorPortLogErrorVrfy.c)
 * Callees:
 *     RaidAdapterLogIoErrorDeferred @ 0x1C0024118 (RaidAdapterLogIoErrorDeferred.c)
 */

void __fastcall StorPortLogError(__int64 a1, __int64 a2, char a3, char a4, char a5, unsigned int a6, int a7)
{
  union _SLIST_HEADER *v7; // rcx
  int v8; // [rsp+40h] [rbp+8h]

  v7 = **(union _SLIST_HEADER ***)(a1 - 16);
  if ( v7 )
  {
    if ( KeGetCurrentIrql() > 2u )
    {
      RaidAdapterLogIoErrorDeferred(v7, a3, a4, a5, a6, a7);
    }
    else
    {
      LOBYTE(v8) = a3;
      BYTE1(v8) = a4;
      BYTE2(v8) = a5;
      RaidAdapterLogIoError((__int64)v7, v8, a6, a7);
    }
  }
}
