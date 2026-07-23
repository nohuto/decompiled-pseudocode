/*
 * XREFs of TpReleaseIoCompletion @ 0x180079240
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x18000ABB0 (TppIopValidateIo.c)
 *     TppCleanupGroupMemberRelease @ 0x18000B990 (TppCleanupGroupMemberRelease.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

void __cdecl TpReleaseIoCompletion(PTP_IO Io)
{
  int v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)TppIopValidateIo((_PEB_LDR_DATA *)Io, 1LL, 0LL) )
  {
    LOBYTE(v2) = TppCleanupGroupMemberRelease((__int64)Io, 1LL);
    if ( v2 )
    {
      *((_QWORD *)Io + 22) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Io, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(PTP_IO))Io + 1))(Io);
    }
  }
}
