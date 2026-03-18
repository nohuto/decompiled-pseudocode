/*
 * XREFs of Bulk_MappingLoop @ 0x1C00030D0
 * Callers:
 *     Bulk_MapTransfers @ 0x1C0002400 (Bulk_MapTransfers.c)
 * Callees:
 *     Bulk_MapStage @ 0x1C00031B8 (Bulk_MapStage.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0008D60 (WPP_RECORDER_SF_DDD.c)
 *     Bulk_PrepareStage @ 0x1C000BE40 (Bulk_PrepareStage.c)
 *     Bulk_RetrieveNextStage @ 0x1C000C460 (Bulk_RetrieveNextStage.c)
 *     TR_AttemptStateChange @ 0x1C0025084 (TR_AttemptStateChange.c)
 */

__int64 __fastcall Bulk_MappingLoop(__int64 a1)
{
  char i; // di
  int v3; // edx
  __int64 result; // rax

  for ( i = 0; ; ++i )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v3 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v3) = 5;
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v3,
        13,
        35,
        (__int64)&WPP_d7490787d28e3e661d2cad56214ea32b_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        i);
    }
    *(_DWORD *)(a1 + 292) = 0;
    if ( !(unsigned __int8)Bulk_RetrieveNextStage(a1) )
      break;
    result = Bulk_PrepareStage(a1);
    if ( (_DWORD)result == 3 )
      return result;
    if ( (_DWORD)result == 4 )
      break;
    if ( (_DWORD)result != 1 )
    {
      result = Bulk_MapStage(a1);
      if ( (_DWORD)result == 2 )
        return result;
      if ( (_DWORD)result == 1 )
        return TR_AttemptStateChange(a1, 3LL, 2LL);
      if ( (_DWORD)result != 3 )
      {
        result = TR_AttemptStateChange(a1, 3LL, 3LL);
        if ( (_DWORD)result != 3 )
          return result;
      }
    }
  }
  return TR_AttemptStateChange(a1, 3LL, 2LL);
}
