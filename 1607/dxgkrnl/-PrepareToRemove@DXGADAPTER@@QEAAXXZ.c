/*
 * XREFs of ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C0145A64
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C00FBF50 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C001FA4C (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 */

void __fastcall DXGADAPTER::PrepareToRemove(DXGADAPTER *this)
{
  bool v1; // zf
  struct _KTIMER *v3; // rdi

  v1 = *((_QWORD *)this + 272) == 0LL;
  *((_DWORD *)this + 44) = 5;
  if ( !v1 )
  {
    v3 = (struct _KTIMER *)((char *)this + 2720);
    *((_BYTE *)this + 2606) = 1;
    if ( !KeCancelTimer((PKTIMER)((char *)this + 2720)) )
    {
      KeFlushQueuedDpcs();
      if ( !KeCancelTimer(v3) )
        KeFlushQueuedDpcs();
    }
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 64LL) + 40LL) + 28LL) >= 0x3008u )
    {
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED, 0LL, 0LL, 0LL, 0LL, 0LL);
      *((_BYTE *)this + 2609) = 0;
    }
  }
}
