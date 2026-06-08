/*
 * XREFs of ReadGenAddr @ 0x1C000346C
 * Callers:
 *     MWaitIdleCheck @ 0x1C0003310 (MWaitIdleCheck.c)
 *     GetCpcDifferentialFeedback @ 0x1C0003D80 (GetCpcDifferentialFeedback.c)
 *     C2Idle @ 0x1C00042E0 (C2Idle.c)
 *     C3Idle @ 0x1C00043B0 (C3Idle.c)
 *     C3IdleCheck @ 0x1C00044B0 (C3IdleCheck.c)
 *     IoHaltC1Idle @ 0x1C0004530 (IoHaltC1Idle.c)
 *     SetPerfStateIO @ 0x1C0005030 (SetPerfStateIO.c)
 *     InitAcpiCpc @ 0x1C0012F2C (InitAcpiCpc.c)
 *     CpcNotifyWorker @ 0x1C001AF7C (CpcNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C001E5AC (InitCpcStatesInternal.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C00034C0 (ReadIoMemRaw.c)
 */

unsigned __int64 __fastcall ReadGenAddr(__int64 a1)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 IoMemRaw; // rax
  char v5; // cl
  unsigned __int8 v6; // cl

  if ( !a1 )
    return 0LL;
  if ( *(_BYTE *)a1 == 126 )
    return *(unsigned int *)(a1 + 4);
  IoMemRaw = ReadIoMemRaw();
  v3 = IoMemRaw;
  if ( IoMemRaw )
  {
    v5 = *(_BYTE *)(a1 + 2);
    if ( v5 )
      v3 = IoMemRaw >> v5;
    v6 = *(_BYTE *)(a1 + 1);
    if ( v6 < 0x40u )
      v3 &= (1LL << v6) - 1;
  }
  return v3;
}
