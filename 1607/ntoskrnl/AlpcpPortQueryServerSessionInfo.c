/*
 * XREFs of AlpcpPortQueryServerSessionInfo @ 0x14065641C
 * Callers:
 *     NtAlpcQueryInformation @ 0x140475C40 (NtAlpcQueryInformation.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     AlpcpReferenceConnectedPort @ 0x1404EF890 (AlpcpReferenceConnectedPort.c)
 */

__int64 __fastcall AlpcpPortQueryServerSessionInfo(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rsi
  unsigned __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rbx
  int v12; // edi
  int SessionId; // esi
  int v14; // ecx

  if ( !a1 )
    return 3221225485LL;
  v7 = AlpcpReferenceConnectedPort(a1);
  v8 = (_QWORD *)v7;
  if ( !v7 )
    return 3221225485LL;
  v9 = (unsigned __int64 *)(v7 + 352);
  v10 = KeAbPreAcquire(v7 + 352, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, v10, (ULONG_PTR)v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = v8[3];
  if ( (v11 & 1) != 0 )
    v11 = 0LL;
  if ( v11 )
    ObfReferenceObjectWithTag((PVOID)v11, 0x63706C41u);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v9);
  KeAbPostRelease((ULONG_PTR)v9);
  ObfDereferenceObject(v8);
  if ( !v11 )
    return 3221225485LL;
  v12 = *(_DWORD *)(v11 + 744);
  SessionId = MmGetSessionIdEx((struct _KPROCESS *)v11);
  ObfDereferenceObjectWithTag((PVOID)v11, 0x63706C41u);
  v14 = 0;
  if ( a3 < 8 )
    v14 = -1073741820;
  if ( v14 >= 0 )
  {
    *a2 = SessionId;
    a2[1] = v12;
  }
  if ( a4 && ((int)(v14 + 0x80000000) < 0 || v14 == -1073741820) )
    *a4 = 8;
  return (unsigned int)v14;
}
