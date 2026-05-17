/*
 * XREFs of TpReleaseAlpcCompletion @ 0x18007ABC0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x18003D61C (TppCleanupGroupMemberRelease.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     TppAlpcpValidateAlpc @ 0x18007AC8C (TppAlpcpValidateAlpc.c)
 */

char __fastcall TpReleaseAlpcCompletion(__int64 a1)
{
  signed __int32 v2; // eax
  volatile signed __int32 *v3; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = TppAlpcpValidateAlpc(a1, 1LL, 0LL);
  if ( v2 )
  {
    v3 = (volatile signed __int32 *)(a1 + 72);
    LOBYTE(v2) = TppCleanupGroupMemberRelease(a1 + 72, 1LL);
    if ( v2 )
    {
      *(_QWORD *)(a1 + 248) = retaddr;
      v2 = _InterlockedExchangeAdd(v3, 0xFFFFFFFF);
      if ( v2 == 1 )
        LOBYTE(v2) = (**(__int64 (__fastcall ***)(volatile signed __int32 *))(a1 + 80))(v3);
    }
  }
  return v2;
}
