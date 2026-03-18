/*
 * XREFs of ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedOutput@@K@Z @ 0x1C0084A8C
 * Callers:
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C0052EA0 (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C0084198 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 * Callees:
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C00819B0 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(
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
