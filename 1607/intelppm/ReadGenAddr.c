/*
 * XREFs of ReadGenAddr @ 0x1C000132C
 * Callers:
 *     SetPerfStateIO @ 0x1C0002430 (SetPerfStateIO.c)
 *     MWaitIdleCheck @ 0x1C0004110 (MWaitIdleCheck.c)
 *     ReadGenAddrHidden @ 0x1C0004568 (ReadGenAddrHidden.c)
 *     ReadGenAddrMaybeHidden @ 0x1C00045CC (ReadGenAddrMaybeHidden.c)
 *     GetCpcDifferentialFeedback @ 0x1C0004A20 (GetCpcDifferentialFeedback.c)
 *     C2Idle @ 0x1C0005160 (C2Idle.c)
 *     C3Idle @ 0x1C0005230 (C3Idle.c)
 *     C3IdleCheck @ 0x1C0005330 (C3IdleCheck.c)
 *     IoHaltC1Idle @ 0x1C00053B0 (IoHaltC1Idle.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0001480 (ReadIoMemRaw.c)
 */

unsigned __int64 __fastcall ReadGenAddr(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 IoMemRaw; // rax
  char v5; // cl
  unsigned __int8 v6; // cl

  if ( !a1 )
    return 0LL;
  if ( *(_BYTE *)a1 == 126 )
    return *(unsigned int *)(a1 + 4);
  IoMemRaw = ReadIoMemRaw();
  v2 = IoMemRaw;
  if ( IoMemRaw )
  {
    v5 = *(_BYTE *)(a1 + 2);
    if ( v5 )
      v2 = IoMemRaw >> v5;
    v6 = *(_BYTE *)(a1 + 1);
    if ( v6 < 0x40u )
      v2 &= (1LL << v6) - 1;
  }
  return v2;
}
