/*
 * XREFs of ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01AB3FC
 * Callers:
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00DB89C (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179100 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C01AAEBC (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01AB3A4 (-RemovePath@CCD_TOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RemovePathByTarget(CCD_TOPOLOGY *this, const struct _LUID *a2, int a3)
{
  __int64 result; // rax
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  result = CCD_TOPOLOGY::FindPathDescriptorByTarget(this, a2, a3, &v5);
  if ( (int)result >= 0 )
    return CCD_TOPOLOGY::RemovePath((void **)this, v5);
  return result;
}
