/*
 * XREFs of NtUserUnlockWindowStation @ 0x1C01007B0
 * Callers:
 *     <none>
 * Callees:
 *     _UnlockWindowStation @ 0x1C0100804 (_UnlockWindowStation.c)
 */

__int64 __fastcall NtUserUnlockWindowStation(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(1LL);
  LOBYTE(v2) = 1;
  v3 = ValidateHwinsta(a1, v2, 0LL, &Object);
  v6 = 0;
  if ( v3 >= 0 )
  {
    v6 = UnlockWindowStation(Object);
    ObfDereferenceObject(Object);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v6;
}
