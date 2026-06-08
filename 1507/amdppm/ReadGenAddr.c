/*
 * XREFs of ReadGenAddr @ 0x1C0004A60
 * Callers:
 *     IoHaltC1Idle @ 0x1C00025E0 (IoHaltC1Idle.c)
 *     C2Idle @ 0x1C0002630 (C2Idle.c)
 *     C3IdleCheck @ 0x1C00026E0 (C3IdleCheck.c)
 *     C3Idle @ 0x1C0002760 (C3Idle.c)
 *     GetCpcDifferentialFeedback @ 0x1C0002CB0 (GetCpcDifferentialFeedback.c)
 *     SetPerfStateIO @ 0x1C0004420 (SetPerfStateIO.c)
 *     InitAcpiCpc @ 0x1C001552C (InitAcpiCpc.c)
 *     CpcNotifyWorker @ 0x1C0015848 (CpcNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C00178AC (InitCpcStatesInternal.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C000483C (ReadIoMemRaw.c)
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
