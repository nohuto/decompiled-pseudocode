/*
 * XREFs of SmpTerminateCSR @ 0x140004D8C
 * Callers:
 *     SmpDestroyControlBlock @ 0x1400048FC (SmpDestroyControlBlock.c)
 *     SmpStopCsr @ 0x140004E90 (SmpStopCsr.c)
 * Callees:
 *     SmpSetCoreProcessIds @ 0x1400031FC (SmpSetCoreProcessIds.c)
 *     SmpSessionIdToInitialSessionIndex @ 0x1400032E0 (SmpSessionIdToInitialSessionIndex.c)
 *     SmpWaitForSubSysStartup @ 0x1400038CC (SmpWaitForSubSysStartup.c)
 *     SmpUnlockKnownSubSysList @ 0x140004478 (SmpUnlockKnownSubSysList.c)
 *     SmpDereferenceKnownSubSys @ 0x1400047B4 (SmpDereferenceKnownSubSys.c)
 */

__int64 __fastcall SmpTerminateCSR(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 *v2; // r10
  __int64 v3; // rax
  __int64 *v4; // rbx
  NTSTATUS v5; // eax
  _QWORD v7[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-10h] BYREF

  v7[1] = v7;
  v1 = a1;
  v7[0] = v7;
  SmpWaitForSubSysStartup(a1, 0, (__int64)v7, (__int64)&v8);
  SmpUnlockKnownSubSysList((__int64)&v8);
  if ( (_QWORD *)v7[0] != v7 )
  {
    if ( (unsigned int)SmpSessionIdToInitialSessionIndex(v1) != -1 )
    {
      v8 = 0LL;
      SmpSetCoreProcessIds(v1, (PVOID *)&v8);
      v2 = (__int64 *)v7[0];
    }
    do
    {
      v3 = *v2;
      if ( (_QWORD *)v2[1] != v7 || *(__int64 **)(v3 + 8) != v2 )
        __fastfail(3u);
      v7[0] = *v2;
      v4 = v2 - 9;
      *(_QWORD *)(v3 + 8) = v7;
      v5 = NtTerminateProcess((HANDLE)*(v2 - 5), 0);
      if ( ((v5 + 0x80000000) & 0x80000000) != 0 || v5 == -1073741558 )
        NtWaitForSingleObject((HANDLE)v4[4], 0, 0LL);
      SmpDereferenceKnownSubSys(v4);
      v2 = (__int64 *)v7[0];
    }
    while ( (_QWORD *)v7[0] != v7 );
  }
  return 0LL;
}
