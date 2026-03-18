/*
 * XREFs of ?SetMitigatedRangesUpdateIrp@ADAPTER_RENDER@@QEAAJIPEAU_IRP@@@Z @ 0x1C015A768
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0193CE0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A620 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::SetMitigatedRangesUpdateIrp(ADAPTER_RENDER *this, unsigned int a2, struct _IRP *a3)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax

  v4 = a2;
  result = ADAPTER_RENDER::EnsureVirtualGpuProcess(this);
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)v4 > *((_DWORD *)this + 267)
      || !*(_QWORD *)(*((_QWORD *)this + 134) + 8 * v4)
      || (_mm_lfence(), v8 = *(_QWORD *)(*((_QWORD *)this + 134) + 8 * v4), *(_QWORD *)(v8 + 32)) )
    {
      v11 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
      *(_QWORD *)(v11 + 24) = v4;
      WdLogEvent5_WdWarning(v11);
      return 3221225485LL;
    }
    else
    {
      *(_QWORD *)(v8 + 32) = a3;
      return 0LL;
    }
  }
  return result;
}
