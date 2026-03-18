/*
 * XREFs of ?UpdateTimes@CPartitionScheduler@@IEAAJXZ @ 0x1800B6380
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180046B90 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180111AC0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetAbsoluteTime@CPartitionScheduler@@IEAAJPEA_K@Z @ 0x1800B6204 (-GetAbsoluteTime@CPartitionScheduler@@IEAAJPEA_K@Z.c)
 */

__int64 __fastcall CPartitionScheduler::UpdateTimes(LARGE_INTEGER *this)
{
  int AbsoluteTime; // eax
  unsigned int v3; // edi
  unsigned __int64 v4; // rdx
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  AbsoluteTime = CPartitionScheduler::GetAbsoluteTime(this, &v6);
  v3 = AbsoluteTime;
  if ( AbsoluteTime < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, AbsoluteTime, 0x89u);
  }
  else
  {
    v4 = v6;
    this[4].QuadPart = v6;
    this[5].QuadPart = v4 - this[3].QuadPart;
  }
  return v3;
}
