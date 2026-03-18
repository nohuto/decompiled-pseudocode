/*
 * XREFs of ?GetElement@?$CList@VCPhysicalMonitorHandle@@@@QEAAJKPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C02595B4
 * Callers:
 *     MonitorAPIProcessTerminating @ 0x1C010C910 (MonitorAPIProcessTerminating.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C02595D8 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CList<CPhysicalMonitorHandle>::GetElement(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // rdx

  if ( a2 >= *(_DWORD *)(a1 + 12) )
    return 3221225473LL;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * a2);
  if ( !v4 )
    return 3221225473LL;
  *a3 = v4;
  return 0LL;
}
