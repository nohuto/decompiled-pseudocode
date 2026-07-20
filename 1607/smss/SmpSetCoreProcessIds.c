/*
 * XREFs of SmpSetCoreProcessIds @ 0x1400031FC
 * Callers:
 *     SmpExecPgm @ 0x140002FB0 (SmpExecPgm.c)
 *     SmpTerminateCSR @ 0x140004D8C (SmpTerminateCSR.c)
 * Callees:
 *     SmpSessionIdToInitialSessionIndex @ 0x1400032E0 (SmpSessionIdToInitialSessionIndex.c)
 *     SmpDereferenceKnownSubSys @ 0x1400047B4 (SmpDereferenceKnownSubSys.c)
 */

__int64 __fastcall SmpSetCoreProcessIds(__int64 a1, PVOID *a2)
{
  __int64 v3; // rbx
  char v4; // r11
  int v5; // ebp
  volatile signed __int32 *v6; // rax
  PVOID *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rcx
  __int64 result; // rax

  v3 = SmpCoreProcessIds + 40LL * (unsigned int)SmpSessionIdToInitialSessionIndex(a1);
  if ( v4 )
    *(_DWORD *)v3 = -1;
  v5 = 0;
  RtlAcquireSRWLockExclusive(v3 + 8);
  v6 = (volatile signed __int32 *)*a2;
  if ( *a2 )
  {
    if ( (v6[2] & 4) != 0 )
      return RtlReleaseSRWLockExclusive(v3 + 8);
    _InterlockedIncrement(v6);
  }
  v7 = a2;
  v8 = v3 - (_QWORD)a2;
  v9 = 2LL;
  do
  {
    v10 = *(PVOID *)((char *)v7 + v8 + 24);
    *(PVOID *)((char *)v7 + v8 + 24) = *v7;
    *v7++ = v10;
    --v9;
  }
  while ( v9 );
  if ( !*(_DWORD *)(v3 + 4) && *(_QWORD *)(v3 + 32) )
  {
    v5 = 1;
    *(_DWORD *)(v3 + 4) = 1;
  }
  result = RtlReleaseSRWLockExclusive(v3 + 8);
  if ( v5 == 1 )
    result = RtlWakeAllConditionVariable(v3 + 16);
  if ( *a2 )
    return SmpDereferenceKnownSubSys(*a2);
  return result;
}
