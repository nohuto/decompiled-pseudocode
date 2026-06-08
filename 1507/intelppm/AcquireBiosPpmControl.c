/*
 * XREFs of AcquireBiosPpmControl @ 0x1C000154C
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C00013E0 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  int v1; // edx
  int v2; // eax

  v1 = dword_1C000DF60;
  if ( (*(_DWORD *)(a1 + 248) & 0x7F070) != 0 && dword_1C000DF60 && byte_1C000DF65 )
  {
    __outbyte(dword_1C000DF60, byte_1C000DF65);
    v1 = dword_1C000DF60;
  }
  v2 = *(_DWORD *)(a1 + 248);
  if ( (v2 & 0x70000000) != 0 )
  {
    if ( v1 )
    {
      LOBYTE(v2) = byte_1C000DF64;
      if ( byte_1C000DF64 )
        __outbyte(v1, byte_1C000DF64);
    }
  }
  return v2;
}
