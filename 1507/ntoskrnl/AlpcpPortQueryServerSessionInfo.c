/*
 * XREFs of AlpcpPortQueryServerSessionInfo @ 0x14069FD0C
 * Callers:
 *     NtAlpcQueryInformation @ 0x14051F860 (NtAlpcQueryInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     AlpcpReferenceConnectedPort @ 0x14051FCC0 (AlpcpReferenceConnectedPort.c)
 */

__int64 __fastcall AlpcpPortQueryServerSessionInfo(__int64 a1, _DWORD *a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // r12d
  __int64 v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // rsi
  unsigned __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rbx
  int v14; // edi
  int SessionId; // esi
  int v16; // ecx

  v5 = a3;
  if ( !a1 )
    return 3221225485LL;
  v7 = AlpcpReferenceConnectedPort(a1, (__int64)a2, a3, (__int64)a4);
  v9 = (_QWORD *)v7;
  if ( !v7 )
    return 3221225485LL;
  v10 = (unsigned __int64 *)(v7 + 352);
  v11 = KeAbPreAcquire(v7 + 352, 0LL, 0LL, v8);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, v11, (ULONG_PTR)v10, v12);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v13 = v9[3];
  if ( (v13 & 1) != 0 )
    v13 = 0LL;
  if ( v13 )
    ObfReferenceObjectWithTag((PVOID)v13, 0x63706C41u);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v10);
  KeAbPostRelease((ULONG_PTR)v10);
  ObfDereferenceObject(v9);
  if ( !v13 )
    return 3221225485LL;
  v14 = *(_DWORD *)(v13 + 744);
  SessionId = MmGetSessionIdEx((struct _KPROCESS *)v13);
  ObfDereferenceObjectWithTag((PVOID)v13, 0x63706C41u);
  v16 = 0;
  if ( v5 < 8 )
    v16 = -1073741820;
  if ( v16 >= 0 )
  {
    *a2 = SessionId;
    a2[1] = v14;
  }
  if ( a4 && ((int)(v16 + 0x80000000) < 0 || v16 == -1073741820) )
    *a4 = 8;
  return (unsigned int)v16;
}
