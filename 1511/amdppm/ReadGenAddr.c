/*
 * XREFs of ReadGenAddr @ 0x1C00046A0
 * Callers:
 *     IoHaltC1Idle @ 0x1C00022D0 (IoHaltC1Idle.c)
 *     C2Idle @ 0x1C00022F0 (C2Idle.c)
 *     C3IdleCheck @ 0x1C0002370 (C3IdleCheck.c)
 *     C3Idle @ 0x1C00023F0 (C3Idle.c)
 *     GetCpcDifferentialFeedback @ 0x1C0002900 (GetCpcDifferentialFeedback.c)
 *     SetPerfStateIO @ 0x1C0004060 (SetPerfStateIO.c)
 *     InitAcpiCpc @ 0x1C001553C (InitAcpiCpc.c)
 *     CpcNotifyWorker @ 0x1C0015858 (CpcNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C00178CC (InitCpcStatesInternal.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C000447C (ReadIoMemRaw.c)
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
  IoMemRaw = ReadIoMemRaw(a1);
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
