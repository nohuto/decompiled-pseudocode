/*
 * XREFs of ExpInitializeSessionDriver @ 0x14050CB84
 * Callers:
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 * Callees:
 *     MmSessionSetUnloadAddress @ 0x140126B28 (MmSessionSetUnloadAddress.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall ExpInitializeSessionDriver(__int64 (__fastcall *a1)(_QWORD *, _QWORD), __int64 a2)
{
  int v2; // ebx
  _QWORD v4[42]; // [rsp+20h] [rbp-158h] BYREF

  memset(v4, 0, sizeof(v4));
  v4[3] = a2;
  v2 = a1(v4, 0LL);
  if ( v2 >= 0 )
    MmSessionSetUnloadAddress((__int64)v4);
  return (unsigned int)v2;
}
