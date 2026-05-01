/*
 * XREFs of RmpWnfCleanupPendingCallbackList @ 0x1800384D8
 * Callers:
 *     RmpActivatorRegister @ 0x18001F338 (RmpActivatorRegister.c)
 *     RmpActivatorUnregister @ 0x18002E718 (RmpActivatorUnregister.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RmpWnfCleanupPendingCallbackList(_QWORD *P)
{
  _QWORD *v2; // rcx
  PVOID v3; // r8
  PVOID *v4; // rax
  __int64 v5; // rcx
  char v6; // bl
  BOOLEAN result; // al
  PVOID Pa; // [rsp+20h] [rbp-18h] BYREF
  PVOID **v9; // [rsp+28h] [rbp-10h]

  RtlAcquireSRWLockExclusive(P + 3);
  v2 = (_QWORD *)*P;
  if ( (_QWORD *)*P != P )
  {
    v9 = (PVOID **)P[1];
    Pa = v2;
    v2[1] = &Pa;
    *v9 = &Pa;
    P[1] = P;
    *P = P;
    while ( 1 )
    {
      v3 = Pa;
      if ( Pa == &Pa )
        break;
      v4 = *(PVOID **)Pa;
      if ( *((PVOID **)Pa + 1) != &Pa || v4[1] != Pa )
        __fastfail(3u);
      Pa = *(PVOID *)Pa;
      v4[1] = &Pa;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    }
  }
  v5 = P[2];
  *((_BYTE *)P + 33) = 1;
  TpReleaseWork(v5);
  v6 = *((_BYTE *)P + 32);
  result = RtlReleaseSRWLockExclusive(P + 3);
  if ( !v6 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return result;
}
