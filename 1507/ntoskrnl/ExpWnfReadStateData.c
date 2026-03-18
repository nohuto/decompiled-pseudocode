/*
 * XREFs of ExpWnfReadStateData @ 0x140502F10
 * Callers:
 *     ExpWnfDeliverThreadNotifications @ 0x1405013FC (ExpWnfDeliverThreadNotifications.c)
 *     NtQueryWnfStateData @ 0x1405026FC (NtQueryWnfStateData.c)
 *     ExQueryWnfStateData @ 0x140563580 (ExQueryWnfStateData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall ExpWnfReadStateData(__int64 a1, _DWORD *a2, void *a3, __int64 a4, _DWORD *a5)
{
  unsigned int v5; // r12d
  unsigned __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r9
  _DWORD *v12; // rdx
  unsigned int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-48h]

  v5 = a4;
  v15 = 0;
  v9 = (unsigned __int64 *)(a1 + 80);
  v10 = KeAbPreAcquire(a1 + 80, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, v10, (ULONG_PTR)v9, v11);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v12 = *(_DWORD **)(a1 + 88);
  if ( !v12 )
  {
    *a2 = 0;
LABEL_7:
    *a5 = 0;
    goto LABEL_13;
  }
  if ( v12 == (_DWORD *)1 )
  {
    *a2 = *(_DWORD *)(a1 + 96);
    goto LABEL_7;
  }
  *a2 = v12[3];
  *a5 = v12[2];
  v13 = v12[2];
  if ( v5 < v13 )
  {
    v15 = -1073741789;
  }
  else
  {
    memmove(a3, v12 + 4, v13);
    v15 = 0;
  }
LABEL_13:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v9);
  KeAbPostRelease((ULONG_PTR)v9);
  return v15;
}
