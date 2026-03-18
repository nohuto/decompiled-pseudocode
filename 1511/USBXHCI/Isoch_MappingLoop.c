/*
 * XREFs of Isoch_MappingLoop @ 0x1C0002EF0
 * Callers:
 *     Isoch_MapTransfers @ 0x1C0002DF8 (Isoch_MapTransfers.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0008EC4 (WPP_RECORDER_SF_DDD.c)
 *     Isoch_PrepareStage @ 0x1C000C4C4 (Isoch_PrepareStage.c)
 *     Isoch_RetrieveNextStage @ 0x1C000CC00 (Isoch_RetrieveNextStage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     TR_AttemptStateChange @ 0x1C002846C (TR_AttemptStateChange.c)
 *     Isoch_MapStage @ 0x1C002B320 (Isoch_MapStage.c)
 */

__int64 __fastcall Isoch_MappingLoop(_QWORD *a1)
{
  char i; // di
  int v3; // edx
  char NextStage; // al
  _QWORD *v5; // rcx
  __int64 result; // rax

  for ( i = 0; ; ++i )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v3 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v3) = 5;
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(a1[7] + 80LL),
        v3,
        13,
        65,
        (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
        *(_BYTE *)(a1[6] + 135LL),
        *(_DWORD *)(a1[7] + 144LL),
        i);
    }
    a1[37] = 0LL;
    NextStage = Isoch_RetrieveNextStage(a1);
    v5 = a1;
    if ( !NextStage )
      return TR_AttemptStateChange(v5, 3LL, 2LL);
    result = Isoch_PrepareStage(a1);
    if ( (_DWORD)result != 1 )
      break;
LABEL_12:
    ;
  }
  if ( (_DWORD)result == 3 )
    return result;
  v5 = a1;
  if ( (_DWORD)result != 2 )
  {
    if ( (_DWORD)result == 4 )
      return TR_AttemptStateChange(v5, 3LL, 2LL);
    result = Isoch_MapStage(a1);
    if ( (_DWORD)result == 2 )
      return result;
    v5 = a1;
    if ( (_DWORD)result != 4 )
    {
      result = TR_AttemptStateChange(a1, 3LL, 3LL);
      if ( (_DWORD)result != 3 )
        return result;
      goto LABEL_12;
    }
  }
  result = TR_AttemptStateChange(v5, 3LL, 4LL);
  if ( (_DWORD)result == 3 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
             WdfDriverGlobals,
             a1[34],
             -100000000LL);
  return result;
}
