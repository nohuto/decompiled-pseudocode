/*
 * XREFs of ndisAllocateEventLog @ 0x1C00ADB60
 * Callers:
 *     ndisAddDevice @ 0x1C00E88C0 (ndisAddDevice.c)
 *     DriverEntry @ 0x1C01027E0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 *     ndisEventEntryCount @ 0x1C00ADCB0 (ndisEventEntryCount.c)
 */

_QWORD *__fastcall ndisAllocateEventLog(__int64 a1, __int16 a2)
{
  __int16 v2; // bx
  unsigned __int16 v3; // si
  int v4; // r14d
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdi

  v2 = a2;
  if ( (a2 & 0xFFF8) != 0 || !ndisDebugLoggingMode )
    return 0LL;
  if ( ndisDebugLoggingMode == 2 )
    v2 = a2 | 2;
  if ( (v2 & 1) != 0 )
    v2 |= 0x100u;
  if ( (v2 & 2) != 0 )
    v2 |= 0x500u;
  v3 = 4;
  if ( (v2 & 4) != 0 )
    v2 |= 0x700u;
  if ( (v2 & 0x200) != 0 )
  {
    v3 = 16;
  }
  else if ( (v2 & 0x400) != 0 )
  {
    v3 = 8;
  }
  else if ( (v2 & 0x100) == 0 )
  {
    v3 = 2;
  }
  v4 = ndisEventEntryCount(a1, 256LL);
  if ( (v2 & 2) != 0 )
    v2 |= 0x1000u;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4 * (unsigned int)v3 + 32LL, 0x6C65444Eu);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  *((_DWORD *)PoolWithTag + 2) = -1;
  *((_WORD *)PoolWithTag + 12) = v2;
  *((_WORD *)PoolWithTag + 13) = v3;
  *((_DWORD *)PoolWithTag + 3) = v4;
  KeInitializeSpinLock(PoolWithTag + 2);
  *v6 = MEMORY[0xFFFFF78000000014];
  if ( (v2 & 2) != 0 )
    memset(v6 + 4, 0, v4 * (unsigned int)v3);
  return v6;
}
