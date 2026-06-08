/*
 * XREFs of AcquireBiosPpmControl @ 0x1C0001FE8
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C0001650 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C001403C (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  int v1; // edx
  int v2; // eax

  v1 = dword_1C000F470;
  if ( (*(_DWORD *)(a1 + 248) & 0x7F070) != 0 && dword_1C000F470 && byte_1C000F475 )
  {
    __outbyte(dword_1C000F470, byte_1C000F475);
    v1 = dword_1C000F470;
  }
  v2 = *(_DWORD *)(a1 + 248);
  if ( (v2 & 0x70000000) != 0 )
  {
    if ( v1 )
    {
      LOBYTE(v2) = byte_1C000F474;
      if ( byte_1C000F474 )
        __outbyte(v1, byte_1C000F474);
    }
  }
  return v2;
}
