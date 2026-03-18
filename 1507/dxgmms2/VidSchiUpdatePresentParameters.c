/*
 * XREFs of VidSchiUpdatePresentParameters @ 0x1C001B590
 * Callers:
 *     VidSchSubmitCommand @ 0x1C002E700 (VidSchSubmitCommand.c)
 * Callees:
 *     VidSchiTryEnterIndependentFlip @ 0x1C001B084 (VidSchiTryEnterIndependentFlip.c)
 */

__int64 __fastcall VidSchiUpdatePresentParameters(struct _VIDSCH_GLOBAL *a1, __int64 a2)
{
  __int64 v4; // r13
  char v5; // r12
  unsigned int v6; // esi
  bool v7; // zf
  __int64 v8; // r14
  unsigned __int8 v9; // al
  __int64 result; // rax
  char v11; // di
  char v12; // r15
  KSPIN_LOCK *v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-68h]
  __int128 v18; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  v4 = *(unsigned int *)(a2 + 116);
  v5 = *(_BYTE *)(a2 + 3) & 1;
  v6 = (unsigned __int8)*(_DWORD *)(a2 + 360);
  v7 = !_BitScanForward((unsigned int *)&result, v6);
  v8 = *((_QWORD *)a1 + v4 + 330);
  result = v9;
  v11 = -1;
  if ( !v7 )
    v11 = result;
  v12 = 0;
  if ( (unsigned __int8)*(_DWORD *)(a2 + 360) )
  {
    v13 = (KSPIN_LOCK *)((char *)a1 + 1872);
    do
    {
      v14 = a2 + 376;
      if ( !*(_BYTE *)(a2 + 348) )
        v14 = a2 + 360;
      v15 = 56LL * (unsigned int)v12 + v14;
      v17 = *(_OWORD *)(v15 + 24);
      v18 = *(_OWORD *)(v15 + 40);
      KeAcquireInStackQueuedSpinLock(v13, &LockHandle);
      v16 = 280LL * v11;
      v7 = *(_DWORD *)(v16 + v8 + 148) == 1;
      *(_OWORD *)(v16 + v8 + 80) = v17;
      *(_OWORD *)(v16 + v8 + 96) = v18;
      if ( v7 )
      {
        *(_BYTE *)(v16 + v8 + 144) = 1;
        *(_BYTE *)(v16 + v8 + 147) = v5;
        VidSchiTryEnterIndependentFlip(a1, v4, v11);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v13 = (KSPIN_LOCK *)((char *)a1 + 1872);
      v6 &= ~(1 << v11);
      v7 = !_BitScanForward((unsigned int *)&result, v6);
      result = (unsigned __int8)result;
      v11 = -1;
      if ( !v7 )
        v11 = result;
      ++v12;
    }
    while ( v6 );
  }
  return result;
}
