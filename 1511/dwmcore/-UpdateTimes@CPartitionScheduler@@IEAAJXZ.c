/*
 * XREFs of ?UpdateTimes@CPartitionScheduler@@IEAAJXZ @ 0x1800FCCE4
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x1800FCA40 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetAbsoluteTime@CPartitionScheduler@@IEAAJPEA_K@Z @ 0x1800B40A8 (-GetAbsoluteTime@CPartitionScheduler@@IEAAJPEA_K@Z.c)
 */

__int64 __fastcall CPartitionScheduler::UpdateTimes(LARGE_INTEGER *this)
{
  int AbsoluteTime; // eax
  unsigned int v3; // edi
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  AbsoluteTime = CPartitionScheduler::GetAbsoluteTime(this, &v6);
  v3 = AbsoluteTime;
  if ( AbsoluteTime >= 0 )
  {
    v4 = v6;
    this[4].QuadPart = v6;
    this[5].QuadPart = v4 - this[3].QuadPart;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, AbsoluteTime, 0x89u);
  }
  return v3;
}
