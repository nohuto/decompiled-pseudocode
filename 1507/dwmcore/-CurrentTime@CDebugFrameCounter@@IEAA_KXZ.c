/*
 * XREFs of ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x1800E78A0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180066480 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?GetAbsoluteTime@CPartitionScheduler@@IEAAJPEA_K@Z @ 0x180096E80 (-GetAbsoluteTime@CPartitionScheduler@@IEAAJPEA_K@Z.c)
 */

unsigned __int64 __fastcall CDebugFrameCounter::CurrentTime(LARGE_INTEGER **this)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  v2 = 0LL;
  if ( *((_BYTE *)this + 24) )
  {
    CPartitionScheduler::GetAbsoluteTime(this[581], &v2);
    return v2;
  }
  return result;
}
