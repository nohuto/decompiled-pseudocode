/*
 * XREFs of VidSchUpdateOverlayPlaneAttributes @ 0x1C0022C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchUpdateOverlayPlaneAttributes(__int64 a1, unsigned int a2, __int128 *a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int128 v6; // xmm1
  __int64 v7; // rdi
  __int64 v8; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+38h] [rbp-30h]
  __int128 v11; // [rsp+48h] [rbp-20h]

  v4 = a2;
  v6 = a3[1];
  v7 = a4;
  v10 = *a3;
  v11 = v6;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1824), &LockHandle);
  v8 = 280 * v7;
  *(_QWORD *)(*(_QWORD *)(a1 + 8 * v4 + 2592) + v8 + 88) = v10;
  *(_DWORD *)(*(_QWORD *)(a1 + 8 * v4 + 2592) + v8 + 116) = HIDWORD(v11);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
