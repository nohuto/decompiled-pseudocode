/*
 * XREFs of MiComparePageHash @ 0x140231B88
 * Callers:
 *     MiValidatePagefilePageHash @ 0x140231FD8 (MiValidatePagefilePageHash.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiComparePageHash(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // esi
  __int64 v7; // r11
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r9
  __int64 *v10; // rcx
  unsigned __int64 PteShadow; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &LockHandle);
  v7 = 0x90482413000LL;
  v8 = 2040LL;
  v9 = *(_QWORD *)(a1 + 176) + 4 * v3;
  v10 = (__int64 *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v10;
  if ( (unsigned __int64)(v10 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow((__int64)v10, *v10);
  v14 = PteShadow;
  if ( (PteShadow & 1) != 0 )
  {
    if ( (unsigned __int64)&v14 + v7 <= v8 )
      PteShadow = MiReadPteShadow((__int64)&v14, PteShadow);
    if ( (*(_BYTE *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFDELL) & 0x10) != 0 )
    {
      if ( !byte_14034F2C0 )
        v6 = -1073741761;
    }
    else
    {
      *(_DWORD *)v9 = a3;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v6;
}
