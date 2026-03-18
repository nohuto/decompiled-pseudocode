/*
 * XREFs of VidSchiUpdatePresentParameters @ 0x1C0005520
 * Callers:
 *     VidSchSubmitCommand @ 0x1C0042B20 (VidSchSubmitCommand.c)
 * Callees:
 *     VidSchiTryEnterIndependentFlip @ 0x1C0011CE8 (VidSchiTryEnterIndependentFlip.c)
 */

__int64 __fastcall VidSchiUpdatePresentParameters(__int64 a1, _DWORD *a2)
{
  __int64 v3; // r15
  __int64 v4; // r13
  _DWORD *v5; // r14
  __int64 result; // rax
  unsigned int v7; // ebx
  bool v8; // zf
  int v9; // esi
  char v10; // di
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-68h]
  __int128 v15; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  bool v17; // [rsp+90h] [rbp+8h]

  v3 = (unsigned int)a2[29];
  v4 = *(_QWORD *)(a1 + 8 * v3 + 2968);
  v17 = (*a2 & 0x800000) != 0;
  v5 = a2 + 106;
  result = (unsigned int)a2[106];
  v7 = (unsigned __int8)result;
  v8 = !_BitScanForward((unsigned int *)&v9, (unsigned __int8)result);
  if ( v8 )
    LOBYTE(v9) = -1;
  v10 = 0;
  if ( (_BYTE)result )
  {
    do
    {
      v11 = v10 * ((8 * v5[2] + 167) & 0xFFFFFFF8);
      v14 = *(_OWORD *)((char *)v5 + v11 + 144);
      v15 = *(_OWORD *)((char *)v5 + v11 + 160);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1856), &LockHandle);
      v13 = 272LL * (char)v9;
      v8 = *(_DWORD *)(v13 + v4 + 156) == 1;
      *(_OWORD *)(v13 + v4 + 88) = v14;
      *(_OWORD *)(v13 + v4 + 104) = v15;
      if ( v8 )
      {
        *(_BYTE *)(v13 + v4 + 155) = v17;
        *(_BYTE *)(v13 + v4 + 152) = 1;
        VidSchiTryEnterIndependentFlip(a1, (unsigned int)v3, (unsigned int)(char)v9, v12);
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
