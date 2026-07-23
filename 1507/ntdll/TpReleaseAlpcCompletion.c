/*
 * XREFs of TpReleaseAlpcCompletion @ 0x18007ABC0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x18003D61C (TppCleanupGroupMemberRelease.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     TppAlpcpValidateAlpc @ 0x18007AC8C (TppAlpcpValidateAlpc.c)
 */

void __cdecl TpReleaseAlpcCompletion(PTP_ALPC Alpc)
{
  volatile signed __int32 *v2; // rdi
  int v3; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)TppAlpcpValidateAlpc(Alpc, 1LL, 0LL) )
  {
    v2 = (volatile signed __int32 *)((char *)Alpc + 72);
    LOBYTE(v3) = TppCleanupGroupMemberRelease((__int64)Alpc + 72, 1LL);
    if ( v3 )
    {
      *((_QWORD *)Alpc + 31) = retaddr;
      if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(volatile signed __int32 *))Alpc + 10))(v2);
    }
  }
}
