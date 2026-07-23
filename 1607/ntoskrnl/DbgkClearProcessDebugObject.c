/*
 * XREFs of DbgkClearProcessDebugObject @ 0x1404D30AC
 * Callers:
 *     PspTerminateAllThreads @ 0x1404EC680 (PspTerminateAllThreads.c)
 *     NtRemoveProcessDebug @ 0x140619C2C (NtRemoveProcessDebug.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     DbgkpMarkProcessPeb @ 0x1406184F4 (DbgkpMarkProcessPeb.c)
 *     DbgkpWakeTarget @ 0x140619650 (DbgkpWakeTarget.c)
 */

__int64 __fastcall DbgkClearProcessDebugObject(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // esi
  __int64 **v7; // rcx
  __int64 ***v8; // rax
  __int64 **v9; // r9
  __int64 ****v10; // r8
  _QWORD *v11; // r8
  __int64 *v12; // rcx
  __int64 *v13; // rax
  __int64 *v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v15; // [rsp+28h] [rbp-8h]

  ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
  v4 = *(_QWORD *)(BugCheckParameter1 + 1056);
  if ( v4 && (v4 == a2 || !a2) )
  {
    *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
    v5 = 0;
  }
  else
  {
    v4 = 0LL;
    v5 = -1073740973;
  }
  KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
  if ( v5 >= 0 )
    DbgkpMarkProcessPeb(BugCheckParameter1);
  if ( v4 )
  {
    v15 = &v14;
    v14 = (__int64 *)&v14;
    ExAcquireFastMutex((PFAST_MUTEX)(v4 + 24));
    v7 = *(__int64 ***)(v4 + 80);
    while ( v7 != (__int64 **)(v4 + 80) )
    {
      v8 = (__int64 ***)v7;
      v7 = (__int64 **)*v7;
      if ( v8[7] == (__int64 **)BugCheckParameter1 )
      {
        v9 = *v8;
        v10 = (__int64 ****)v8[1];
        if ( (*v8)[1] != (__int64 *)v8 || *v10 != v8 )
          __fastfail(3u);
        *v10 = (__int64 ***)v9;
        v9[1] = (__int64 *)v10;
        v11 = v15;
        if ( *v15 != (__int64 *)&v14 )
          __fastfail(3u);
        v8[1] = v15;
        *v8 = &v14;
        *v11 = v8;
        v15 = (__int64 **)v8;
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v4 + 24));
    ObfDereferenceObject((PVOID)v4);
    while ( 1 )
    {
      v12 = v14;
      if ( v14 == (__int64 *)&v14 )
        break;
      v13 = (__int64 *)*v14;
      if ( (__int64 **)v14[1] != &v14 || (__int64 *)v13[1] != v14 )
        __fastfail(3u);
      v14 = (__int64 *)*v14;
      v13[1] = (__int64)&v14;
      *((_DWORD *)v12 + 18) = -1073740972;
      DbgkpWakeTarget();
    }
  }
  return (unsigned int)v5;
}
