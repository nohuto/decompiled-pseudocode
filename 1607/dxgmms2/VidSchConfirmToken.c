/*
 * XREFs of VidSchConfirmToken @ 0x1C00263E0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiTryEnterIndependentFlip @ 0x1C0011CE8 (VidSchiTryEnterIndependentFlip.c)
 */

void __fastcall VidSchConfirmToken(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // [rsp+20h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-20h] BYREF

  if ( a2 != -1 )
  {
    v6 = *a4;
    v8 = a2;
    v12 = *a4;
    v9 = a3;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1856), &LockHandle);
    v10 = *(_QWORD *)(a1 + 8 * v8 + 2968);
    v11 = 272 * v9;
    if ( *(_DWORD *)(v10 + 272 * v9 + 156) == 1
      && *(_BYTE *)(v10 + v11 + 153)
      && *(_OWORD *)(v10 + v11 + 128) == __PAIR128__(a5, __PAIR64__(HIDWORD(v12), v6))
      && *(_QWORD *)(v10 + v11 + 144) == a6 )
    {
      *(_BYTE *)(v10 + v11 + 154) = 1;
      VidSchiTryEnterIndependentFlip((struct _VIDSCH_GLOBAL *)a1, v8, v9);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
