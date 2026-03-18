/*
 * XREFs of NtRIMObserveNextInput @ 0x1C00C0D60
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C00C49C0 (RawInputManagerInputObserverObjectResolveHandle.c)
 */

__int64 __fastcall NtRIMObserveNextInput(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  _DWORD *v4; // rdi
  char *v5; // rbx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  LOBYTE(a3) = 1;
  v3 = RawInputManagerInputObserverObjectResolveHandle(a1, a2, a3, &Object);
  if ( v3 >= 0 )
  {
    v4 = Object;
    v5 = (char *)Object + 128;
    RIMLockExclusive((__int64)Object + 128);
    v4[20] = 1;
    RIMUnlockExclusive((__int64)v5);
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v3;
}
