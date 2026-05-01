/*
 * XREFs of RmpWnfCleanupPendingCallbackList @ 0x180020AB0
 * Callers:
 *     ?Cleanup@WnfStateRegistration@ExecutionModel@@QEAAXXZ @ 0x180020A48 (-Cleanup@WnfStateRegistration@ExecutionModel@@QEAAXXZ.c)
 *     RmpActivatorRegister @ 0x180024CB0 (RmpActivatorRegister.c)
 *     RmpActivatorUnregister @ 0x180040988 (RmpActivatorUnregister.c)
 * Callees:
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 */

LPVOID __fastcall RmpWnfCleanupPendingCallbackList(_QWORD *P)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx
  char v4; // bl
  LPVOID result; // rax
  PVOID v6; // rcx
  PVOID *v7; // rax
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
      v6 = Pa;
      if ( Pa == &Pa )
        break;
      v7 = *(PVOID **)Pa;
      if ( *((PVOID **)Pa + 1) != &Pa || v7[1] != Pa )
        __fastfail(3u);
      Pa = *(PVOID *)Pa;
      v7[1] = &Pa;
      RmpFreeHeap(v6);
    }
  }
  v3 = P[2];
  *((_BYTE *)P + 33) = 1;
  TpReleaseWork(v3);
  v4 = *((_BYTE *)P + 32);
  result = (LPVOID)RtlReleaseSRWLockExclusive(P + 3);
  if ( !v4 )
    return RmpFreeHeap(P);
  return result;
}
