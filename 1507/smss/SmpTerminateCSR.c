/*
 * XREFs of SmpTerminateCSR @ 0x140001008
 * Callers:
 *     SmpStopCsr @ 0x140001110 (SmpStopCsr.c)
 *     SmpDestroyControlBlock @ 0x140007C5C (SmpDestroyControlBlock.c)
 * Callees:
 *     SmpSetCoreProcessIds @ 0x14000512C (SmpSetCoreProcessIds.c)
 *     SmpSessionIdToInitialSessionIndex @ 0x140005210 (SmpSessionIdToInitialSessionIndex.c)
 *     SmpWaitForSubSysStartup @ 0x140005B9C (SmpWaitForSubSysStartup.c)
 *     SmpUnlockKnownSubSysList @ 0x140006B5C (SmpUnlockKnownSubSysList.c)
 *     SmpDereferenceKnownSubSys @ 0x140007B10 (SmpDereferenceKnownSubSys.c)
 */

__int64 __fastcall SmpTerminateCSR(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r8
  __int64 *v3; // r10
  __int64 v4; // rax
  HANDLE *v5; // rbx
  NTSTATUS v6; // eax
  _QWORD v8[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF

  v8[1] = v8;
  v1 = a1;
  v8[0] = v8;
  SmpWaitForSubSysStartup(a1, 0LL, v8, &v9);
  SmpUnlockKnownSubSysList(&v9);
  if ( (_QWORD *)v8[0] != v8 )
  {
    if ( (unsigned int)SmpSessionIdToInitialSessionIndex(v1) != -1 )
    {
      LOBYTE(v2) = 1;
      v9 = 0LL;
      SmpSetCoreProcessIds(v1, &v9, v2);
      v3 = (__int64 *)v8[0];
    }
    do
    {
      v4 = *v3;
      if ( (_QWORD *)v3[1] != v8 || *(__int64 **)(v4 + 8) != v3 )
        __fastfail(3u);
      v8[0] = *v3;
      v5 = (HANDLE *)(v3 - 9);
      *(_QWORD *)(v4 + 8) = v8;
      v6 = NtTerminateProcess((HANDLE)*(v3 - 5), 0);
      if ( ((v6 + 0x80000000) & 0x80000000) != 0 || v6 == -1073741558 )
        NtWaitForSingleObject(v5[4], 0, 0LL);
      SmpDereferenceKnownSubSys(v5);
      v3 = (__int64 *)v8[0];
    }
    while ( (_QWORD *)v8[0] != v8 );
  }
  return 0LL;
}
