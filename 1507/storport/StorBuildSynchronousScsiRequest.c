/*
 * XREFs of StorBuildSynchronousScsiRequest @ 0x1C00303A4
 * Callers:
 *     RaidUnitAbortSrb @ 0x1C0032448 (RaidUnitAbortSrb.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C0032D08 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitResetTarget @ 0x1C003346C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C00336F4 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C00339DC (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C0033BB4 (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     StorProbeAndLockPages @ 0x1C00307F0 (StorProbeAndLockPages.c)
 */

PIRP __fastcall StorBuildSynchronousScsiRequest(__int64 a1, unsigned __int64 a2, __int64 a3, _IO_STATUS_BLOCK *a4)
{
  PIRP result; // rax
  IRP *v7; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int v9; // ecx
  void *v10; // r10
  ULONG v11; // edx
  unsigned int v12; // ebp
  PMDL Mdl; // rax
  __int64 v14; // rdx

  result = IoAllocateIrp(*(_BYTE *)(a1 + 76), 0);
  v7 = result;
  if ( result )
  {
    CurrentStackLocation = result->Tail.Overlay.CurrentStackLocation;
    result->Tail.Overlay.Thread = KeGetCurrentThread();
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 15;
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v9 = *(_DWORD *)(a2 + 24);
      v10 = *(void **)(a2 + 64);
      v11 = *(_DWORD *)(a2 + 60);
    }
    else
    {
      v9 = *(_DWORD *)(a2 + 12);
      v10 = *(void **)(a2 + 24);
      v11 = *(_DWORD *)(a2 + 16);
    }
    if ( (v9 & 0xC0) == 0xC0 )
    {
      v12 = 2;
    }
    else if ( (v9 & 0x40) != 0 )
    {
      v12 = 1;
    }
    else
    {
      v12 = ((v9 & 0x80u) != 0) - 1;
    }
    if ( !v11
      || (Mdl = IoAllocateMdl(v10, v11, 0, 0, 0LL), (v7->MdlAddress = Mdl) != 0LL)
      && (int)StorProbeAndLockPages(Mdl, v14, v12) >= 0 )
    {
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
      v7->UserEvent = 0LL;
      v7->UserIosb = a4;
    }
    else
    {
      IoFreeIrp(v7);
      return 0LL;
    }
    return v7;
  }
  return result;
}
