/*
 * XREFs of AcquireBiosPpmControl @ 0x1C0001598
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C0001560 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  int v1; // edx
  int v2; // eax

  v1 = dword_1C0009AC0;
  if ( (*(_DWORD *)(a1 + 248) & 0x7F070) != 0 && dword_1C0009AC0 && byte_1C0009AC5 )
  {
    __outbyte(dword_1C0009AC0, byte_1C0009AC5);
    v1 = dword_1C0009AC0;
  }
  v2 = *(_DWORD *)(a1 + 248);
  if ( (v2 & 0x70000000) != 0 )
  {
    if ( v1 )
    {
      LOBYTE(v2) = byte_1C0009AC4;
      if ( byte_1C0009AC4 )
        __outbyte(v1, byte_1C0009AC4);
    }
  }
  return v2;
}
