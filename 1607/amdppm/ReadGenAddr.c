/*
 * XREFs of ReadGenAddr @ 0x1C0005E5C
 * Callers:
 *     GetCpcDifferentialFeedback @ 0x1C0003110 (GetCpcDifferentialFeedback.c)
 *     IoHaltC1Idle @ 0x1C0003570 (IoHaltC1Idle.c)
 *     C2Idle @ 0x1C00035E0 (C2Idle.c)
 *     C3IdleCheck @ 0x1C00036B0 (C3IdleCheck.c)
 *     C3Idle @ 0x1C0003730 (C3Idle.c)
 *     SetPerfStateIO @ 0x1C00045A0 (SetPerfStateIO.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0005FB8 (ReadGenAddrMaybeHidden.c)
 *     ReadGenAddrHidden @ 0x1C0005FEC (ReadGenAddrHidden.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0005C38 (ReadIoMemRaw.c)
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
