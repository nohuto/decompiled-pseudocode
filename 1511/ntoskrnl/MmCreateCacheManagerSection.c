/*
 * XREFs of MmCreateCacheManagerSection @ 0x14044EA7C
 * Callers:
 *     CcInitializeCacheMap @ 0x1400AF300 (CcInitializeCacheMap.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 */

int __fastcall MmCreateCacheManagerSection(_QWORD *a1, __int64 a2, __int64 a3, struct _OBJECT_HANDLE_INFORMATION *a4)
{
  char PreviousMode; // bl
  unsigned int SessionId; // eax
  __int64 v10; // [rsp+30h] [rbp-38h]
  char v11; // [rsp+80h] [rbp+18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
    v11 = BYTE1(KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next);
  else
    v11 = 0;
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  LOBYTE(v10) = v11;
  return MiCreateSection(a1, 0, 2, a2, 4u, 0x8000000u, v10, 0LL, a4, PreviousMode, SessionId);
}
