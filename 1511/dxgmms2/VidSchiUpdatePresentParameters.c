/*
 * XREFs of VidSchiUpdatePresentParameters @ 0x1C00129F0
 * Callers:
 *     VidSchSubmitCommand @ 0x1C0039780 (VidSchSubmitCommand.c)
 * Callees:
 *     VidSchiTryEnterIndependentFlip @ 0x1C0001850 (VidSchiTryEnterIndependentFlip.c)
 */

__int64 __fastcall VidSchiUpdatePresentParameters(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v5; // r13
  __int64 result; // rax
  unsigned int v7; // ebx
  bool v8; // zf
  int v9; // ebp
  char v10; // si
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-68h]
  __int128 v15; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  bool v17; // [rsp+90h] [rbp+8h]

  v3 = *(unsigned int *)(a2 + 116);
  v5 = *(_QWORD *)(a1 + 8 * v3 + 2592);
  v17 = (*(_DWORD *)a2 & 0x800000) != 0;
  result = *(unsigned int *)(a2 + 360);
  v7 = (unsigned __int8)result;
  v8 = !_BitScanForward((unsigned int *)&v9, (unsigned __int8)result);
  if ( v8 )
    LOBYTE(v9) = -1;
  v10 = 0;
  if ( (_BYTE)result )
  {
    do
    {
      if ( *(_BYTE *)(a2 + 348) )
        v11 = a2 + 376;
      else
        v11 = a2 + 360;
      v12 = ((unsigned __int64)(unsigned int)v10 << 6) + v11;
      v14 = *(_OWORD *)(v12 + 24);
      v15 = *(_OWORD *)(v12 + 40);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1824), &LockHandle);
      v13 = 280LL * (char)v9;
      v8 = *(_DWORD *)(v13 + v5 + 156) == 1;
      *(_OWORD *)(v13 + v5 + 88) = v14;
      *(_OWORD *)(v13 + v5 + 104) = v15;
      if ( v8 )
      {
        *(_BYTE *)(v13 + v5 + 155) = v17;
        *(_BYTE *)(v13 + v5 + 152) = 1;
        VidSchiTryEnterIndependentFlip((struct _VIDSCH_GLOBAL *)a1, v3, (char)v9);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      result = (unsigned int)~(1 << v9);
      v7 &= result;
      v8 = !_BitScanForward((unsigned int *)&v9, v7);
      if ( v8 )
        LOBYTE(v9) = -1;
      ++v10;
    }
    while ( v7 );
  }
  return result;
}
