/*
 * XREFs of Bulk_MappingLoop @ 0x1C002A758
 * Callers:
 *     Bulk_MapTransfers @ 0x1C002A6B0 (Bulk_MapTransfers.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0006A1C (WPP_RECORDER_SF_DDD.c)
 *     TR_AttemptStateChange @ 0x1C00200A0 (TR_AttemptStateChange.c)
 *     Bulk_MapStage @ 0x1C002A554 (Bulk_MapStage.c)
 *     Bulk_PrepareStage @ 0x1C002A83C (Bulk_PrepareStage.c)
 *     Bulk_RetrieveNextStage @ 0x1C002B4EC (Bulk_RetrieveNextStage.c)
 */

__int64 __fastcall Bulk_MappingLoop(__int64 a1)
{
  int i; // edi
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  for ( i = 0; ; ++i )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v3 = *(_QWORD *)(a1 + 56);
      LODWORD(v7) = i;
      LODWORD(v6) = *(_DWORD *)(v3 + 144);
      LODWORD(v5) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(v3 + 80),
        5u,
        0xDu,
        0x23u,
        (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
        v5,
        v6,
        v7);
    }
    *(_DWORD *)(a1 + 292) = 0;
    if ( !(unsigned __int8)Bulk_RetrieveNextStage(a1) )
      break;
    result = Bulk_PrepareStage(a1);
    if ( (_DWORD)result != 1 )
    {
      if ( (_DWORD)result == 3 )
        return result;
      if ( (_DWORD)result == 4 )
        return TR_AttemptStateChange(a1, 3, 2);
      result = Bulk_MapStage(a1);
      if ( (_DWORD)result != 3 )
      {
        if ( (_DWORD)result == 2 )
          return result;
        if ( (_DWORD)result == 1 )
          return TR_AttemptStateChange(a1, 3, 2);
        result = TR_AttemptStateChange(a1, 3, 3);
        if ( (_DWORD)result != 3 )
          return result;
      }
    }
  }
  return TR_AttemptStateChange(a1, 3, 2);
}
