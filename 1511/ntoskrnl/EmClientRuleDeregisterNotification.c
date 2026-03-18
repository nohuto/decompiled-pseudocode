/*
 * XREFs of EmClientRuleDeregisterNotification @ 0x1405F282C
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall EmClientRuleDeregisterNotification(PVOID P)
{
  __int64 v2; // rax
  signed __int8 v3; // cf
  __int64 v4; // rbx
  __int64 i; // r8
  _QWORD *v6; // r9
  __int64 v7; // rcx
  _QWORD *v8; // rax

  if ( P )
  {
    v2 = KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0LL);
    v3 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
    v4 = v2;
    if ( v3 )
      ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v2, (ULONG_PTR)&EmpDatabaseLock);
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 4); *(_QWORD *)(v7 + 8) = v8 )
    {
      _InterlockedAdd(*(volatile signed __int32 **)(*((_QWORD *)P + 1) + 40 * i), 0xFFFFFFFF);
      v6 = (_QWORD *)(*((_QWORD *)P + 1) + 24LL + 40 * i);
      v7 = *v6;
      v8 = (_QWORD *)v6[1];
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v8 != v6 )
        __fastfail(3u);
      *v8 = v7;
      i = (unsigned int)(i + 1);
    }
    if ( *(_QWORD *)P )
      ObfDereferenceObject(*(PVOID *)P);
    ExFreePoolWithTag(*((PVOID *)P + 1), 0x6C634D45u);
    ExFreePoolWithTag(P, 0x6C634D45u);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
    KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  }
}
