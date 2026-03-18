/*
 * XREFs of ?DestroyHandleInternal@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@AEAAJPEAVCPhysicalMonitorHandle@@K@Z @ 0x1C02594D0
 * Callers:
 *     MonitorAPIProcessTerminating @ 0x1C010C910 (MonitorAPIProcessTerminating.c)
 *     ?DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z @ 0x1C0259538 (-DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(
        __int64 a1,
        void *a2,
        unsigned int a3)
{
  int v6; // eax
  __int64 v7; // r9
  unsigned int v8; // ebx
  int v9; // edi

  v6 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = a3;
  v8 = 0;
  v9 = v6;
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = 0LL;
  --*(_DWORD *)(a1 + 8);
  OPMFreeMemory(a2);
  if ( v9 < 0 )
    return (unsigned int)v9;
  return v8;
}
