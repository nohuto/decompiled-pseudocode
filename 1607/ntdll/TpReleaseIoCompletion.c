/*
 * XREFs of TpReleaseIoCompletion @ 0x1800785F0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x18003B9D0 (TppCleanupGroupMemberRelease.c)
 *     TppIopValidateIo @ 0x18003C170 (TppIopValidateIo.c)
 */

char __fastcall TpReleaseIoCompletion(__int64 a1)
{
  signed __int32 v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = TppIopValidateIo((_PEB_LDR_DATA *)a1, 1LL, 0LL);
  if ( v2 )
  {
    LOBYTE(v2) = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( v2 )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( v2 == 1 )
        LOBYTE(v2) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return v2;
}
