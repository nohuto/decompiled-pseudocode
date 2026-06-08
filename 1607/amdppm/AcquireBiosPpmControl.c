/*
 * XREFs of AcquireBiosPpmControl @ 0x1C0001DC8
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C0001D90 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C0011F34 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  int v1; // edx
  int v2; // eax

  v1 = dword_1C0009B20;
  if ( (*(_DWORD *)(a1 + 248) & 0x7F070) != 0 && dword_1C0009B20 && byte_1C0009B25 )
  {
    __outbyte(dword_1C0009B20, byte_1C0009B25);
    v1 = dword_1C0009B20;
  }
  v2 = *(_DWORD *)(a1 + 248);
  if ( (v2 & 0x70000000) != 0 )
  {
    if ( v1 )
    {
      LOBYTE(v2) = byte_1C0009B24;
      if ( byte_1C0009B24 )
        __outbyte(v1, byte_1C0009B24);
    }
  }
  return v2;
}
