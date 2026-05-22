/*
 * XREFs of ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x1800992B8
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VSpatialInteractionController@SpatialInteractionDevices@@@std@@EEAAXXZ @ 0x18007B430 (-_Destroy@-$_Ref_count_obj@VSpatialInteractionController@SpatialInteractionDevices@@@std@@EEAAXX.c)
 *     ?PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@GGGPEAUHSTRING__@@@Z @ 0x1800997D4 (-PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEA.c)
 *     ?Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@6@PEA_NPEAW4MPCAugmentedInputGestureType@@@Z @ 0x180099A98 (-Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeRe.c)
 * Callees:
 *     ??$Telemetry_SpatialInteractionHeartbeat_ButtonCounters@$06@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEBU_GUID@@GGGIAEAY06$$CBW4ButtonFlags@1@AEAY06$$CBI@Z @ 0x18009B458 (--$Telemetry_SpatialInteractionHeartbeat_ButtonCounters@$06@SpatialInteractionTrace@SpatialInter.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(
        SpatialInteractionDevices::SpatialInteractionHeartbeat *this,
        char a2)
{
  ULONGLONG TickCount64; // rax
  char v5; // dl
  unsigned __int64 i; // rcx
  _DWORD v7[8]; // [rsp+40h] [rbp-38h]

  TickCount64 = GetTickCount64();
  if ( a2
    || TickCount64 > SpatialInteractionDevices::SpatialInteractionHeartbeat::ReportIntervalTickCount64
                   + *((_QWORD *)this + 3) )
  {
    *((_QWORD *)this + 3) = TickCount64;
    v5 = _InterlockedExchange((volatile __int32 *)this + 8, 0);
    for ( i = 0LL; i < 7; ++i )
      v7[i] = _InterlockedExchange((volatile __int32 *)((char *)this + i * 4 + 36), 0);
    SpatialInteractionDevices::SpatialInteractionTrace::Telemetry_SpatialInteractionHeartbeat_ButtonCounters<7>(
      (_DWORD)this,
      *((unsigned __int16 *)this + 8),
      *((unsigned __int16 *)this + 9),
      *((unsigned __int16 *)this + 10),
      v5);
  }
}
