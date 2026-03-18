/*
 * XREFs of MiWritePageFileHash @ 0x14023228C
 * Callers:
 *     MiMapPageFileHash @ 0x14013BAD4 (MiMapPageFileHash.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MiComputePageHash @ 0x140231C88 (MiComputePageHash.c)
 */

void __fastcall MiWritePageFileHash(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, unsigned int a5)
{
  unsigned int v9; // edi
  _QWORD *v10; // rbx
  unsigned int i; // ebp
  __int64 v12; // r8
  BOOL v13; // edx
  __int64 v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-B8h] BYREF
  _DWORD Src[16]; // [rsp+50h] [rbp-98h] BYREF

  v9 = 0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
      v10 = *(_QWORD **)(a2 + 24);
    else
      v10 = MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000010);
    if ( v10 )
      v10 += 512 * (((__int64)a3 - a2 - 48) >> 3);
  }
  else
  {
    v10 = 0LL;
  }
  for ( i = 0; i < a5; ++i )
  {
    Src[v9] = 0;
    if ( a3 && *a3 != qword_14034F6F8 )
    {
      v12 = 48LL * *a3 - 0x58000000000LL;
      v13 = 1;
      v14 = (*(_QWORD *)(v12 + 16) >> 5) & 0x1FLL;
      if ( (dword_1403D00E8 & 1) != 0 || (_DWORD)v14 == 31 )
        goto LABEL_20;
      if ( (unsigned int)v14 >> 3 == 3 )
        v13 = ((*(_QWORD *)(v12 + 16) >> 5) & 7) == 0;
      if ( (unsigned int)v14 >> 3 == 1 )
        v13 = 0;
      if ( v13 )
LABEL_20:
        Src[v9] = MiComputePageHash(v12, v10);
      else
        Src[v9] = 2;
    }
    if ( ++v9 == 16 )
      goto LABEL_24;
LABEL_25:
    if ( v10 )
      v10 += 512;
    if ( a3 )
      ++a3;
  }
  if ( v9 )
  {
LABEL_24:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &LockHandle);
    memmove((void *)(*(_QWORD *)(a1 + 176) + 4LL * a4), Src, 4LL * v9);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    a4 += v9;
    v9 = 0;
    goto LABEL_25;
  }
}
