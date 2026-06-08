/*
 * XREFs of AcquireBiosPpmControl @ 0x1C0001878
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C0001840 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  int v1; // edx
  int v2; // eax

  v1 = dword_1C0009910;
  if ( (*(_DWORD *)(a1 + 248) & 0x7F070) != 0 && dword_1C0009910 && byte_1C0009915 )
  {
    __outbyte(dword_1C0009910, byte_1C0009915);
    v1 = dword_1C0009910;
  }
  v2 = *(_DWORD *)(a1 + 248);
  if ( (v2 & 0x70000000) != 0 )
  {
    if ( v1 )
    {
      LOBYTE(v2) = byte_1C0009914;
      if ( byte_1C0009914 )
        __outbyte(v1, byte_1C0009914);
    }
  }
  return v2;
}
