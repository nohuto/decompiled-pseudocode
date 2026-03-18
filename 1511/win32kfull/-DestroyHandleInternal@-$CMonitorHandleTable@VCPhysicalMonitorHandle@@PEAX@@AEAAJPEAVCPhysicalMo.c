/*
 * XREFs of ?DestroyHandleInternal@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@AEAAJPEAVCPhysicalMonitorHandle@@K@Z @ 0x1C025C0D0
 * Callers:
 *     MonitorAPIProcessTerminating @ 0x1C00EE2C0 (MonitorAPIProcessTerminating.c)
 *     ?DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z @ 0x1C025C140 (-DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  int v6; // eax
  __int64 v7; // r9
  unsigned int v8; // ebx
  int v9; // esi

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = a3;
  v8 = 0;
  v9 = v6;
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = 0LL;
  --*(_DWORD *)(a1 + 8);
  (**(void (__fastcall ***)(__int64, __int64))a2)(a2, 1LL);
  if ( v9 < 0 )
    return (unsigned int)v9;
  return v8;
}
