/*
 * XREFs of MiWritePageFileHash @ 0x1401155B0
 * Callers:
 *     MiMapPageFileHash @ 0x140116EA0 (MiMapPageFileHash.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiComputePageHash @ 0x140115750 (MiComputePageHash.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall MiWritePageFileHash(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, unsigned int a5)
{
  unsigned int v9; // edi
  char *v10; // rbx
  unsigned int i; // ebp
  BOOL v12; // edx
  __int64 v13; // r8
  __int64 v14; // rax
  _DWORD *v15; // rdx
  int *v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-A0h] BYREF
  _DWORD v20[16]; // [rsp+50h] [rbp-88h] BYREF

  v9 = 0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
      v10 = *(char **)(a2 + 24);
    else
      v10 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000010);
    if ( v10 )
      v10 += 4096 * (((__int64)a3 - a2 - 48) >> 3);
  }
  else
  {
    v10 = 0LL;
  }
  for ( i = 0; i < a5; ++i )
  {
    v20[v9] = 0;
    if ( a3 && *a3 != qword_1403276C8 )
    {
      v12 = 1;
      v13 = 48LL * *a3 - 0x58000000000LL;
      v14 = (*(_QWORD *)(v13 + 16) >> 5) & 0x1FLL;
      if ( (dword_1403A9144 & 1) != 0 || (_DWORD)v14 == 31 )
        goto LABEL_17;
      if ( (unsigned int)v14 >> 3 == 3 )
        v12 = ((*(_QWORD *)(v13 + 16) >> 5) & 7) == 0;
      if ( (unsigned int)v14 >> 3 == 1 )
        v12 = 0;
      if ( v12 )
LABEL_17:
        v20[v9] = MiComputePageHash(v13, v10);
      else
        v20[v9] = 2;
    }
    if ( ++v9 == 16 )
      goto LABEL_25;
LABEL_19:
    if ( v10 )
      v10 += 4096;
    if ( a3 )
      ++a3;
  }
  if ( v9 )
  {
LABEL_25:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
    v15 = (_DWORD *)(*(_QWORD *)(a1 + 216) + 4LL * a4);
    v16 = v20;
    v17 = v9;
    do
    {
      v18 = *v16++;
      *v15++ = v18;
      --v17;
    }
    while ( v17 );
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    a4 += v9;
    v9 = 0;
    goto LABEL_19;
  }
}
