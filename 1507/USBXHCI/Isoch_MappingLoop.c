/*
 * XREFs of Isoch_MappingLoop @ 0x1C0025190
 * Callers:
 *     Isoch_MapTransfers @ 0x1C00250A4 (Isoch_MapTransfers.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0006A1C (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     TR_AttemptStateChange @ 0x1C00200A0 (TR_AttemptStateChange.c)
 *     Isoch_MapStage @ 0x1C0024F34 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C00252B4 (Isoch_PrepareStage.c)
 *     Isoch_RetrieveNextStage @ 0x1C0026078 (Isoch_RetrieveNextStage.c)
 */

__int64 __fastcall Isoch_MappingLoop(_QWORD *a1)
{
  int i; // edi
  __int64 v3; // rcx
  char NextStage; // al
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  for ( i = 0; ; ++i )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v3 = a1[7];
      LODWORD(v9) = i;
      LODWORD(v8) = *(_DWORD *)(v3 + 144);
      LODWORD(v7) = *(unsigned __int8 *)(a1[6] + 135LL);
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(v3 + 80),
        5u,
        0xDu,
        0x41u,
        (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
        v7,
        v8,
        v9);
    }
    a1[37] = 0LL;
    NextStage = Isoch_RetrieveNextStage(a1);
    v5 = (__int64)a1;
    if ( !NextStage )
      return TR_AttemptStateChange(v5, 3, 2);
    result = Isoch_PrepareStage(a1);
    if ( (_DWORD)result != 1 )
      break;
LABEL_12:
    ;
  }
  if ( (_DWORD)result == 3 )
    return result;
  v5 = (__int64)a1;
  if ( (_DWORD)result != 2 )
  {
    if ( (_DWORD)result == 4 )
      return TR_AttemptStateChange(v5, 3, 2);
    result = Isoch_MapStage((__int64)a1);
    if ( (_DWORD)result == 2 )
      return result;
    v5 = (__int64)a1;
    if ( (_DWORD)result != 4 )
    {
      result = TR_AttemptStateChange((__int64)a1, 3, 3);
      if ( (_DWORD)result != 3 )
        return result;
      goto LABEL_12;
    }
  }
  result = TR_AttemptStateChange(v5, 3, 4);
  if ( (_DWORD)result == 3 )
    return (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
             WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
             a1[34],
             -100000000LL);
  return result;
}
