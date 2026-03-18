/*
 * XREFs of EmClientRuleDeregisterNotification @ 0x14066B558
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall EmClientRuleDeregisterNotification(PVOID P, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rbx
  __int64 i; // r8
  _QWORD *v10; // r9
  __int64 v11; // rcx
  _QWORD *v12; // rax

  if ( P )
  {
    v5 = KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0LL, a4);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
    v8 = v5;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v5, (ULONG_PTR)&EmpDatabaseLock, v6);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 4); *(_QWORD *)(v11 + 8) = v12 )
    {
      _InterlockedAdd(*(volatile signed __int32 **)(*((_QWORD *)P + 1) + 40 * i), 0xFFFFFFFF);
      v10 = (_QWORD *)(*((_QWORD *)P + 1) + 24LL + 40 * i);
      v11 = *v10;
      v12 = (_QWORD *)v10[1];
      if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v12 != v10 )
        __fastfail(3u);
      *v12 = v11;
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
