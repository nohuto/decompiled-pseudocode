/*
 * XREFs of MmQuerySessionWorkingSetInformation @ 0x1401EA234
 * Callers:
 *     EtwpLogSessionWorkingSetInfo @ 0x1406A26C4 (EtwpLogSessionWorkingSetInfo.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MmQuerySessionWorkingSetInformation(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // edi
  int v5; // ebx
  unsigned __int64 *v6; // rbp
  __int64 *v7; // r10
  unsigned __int64 *v8; // r11
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = (unsigned __int64 *)(a1 + 40LL * (unsigned int)*a2);
  KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
  v7 = (__int64 *)qword_140327850;
  if ( (__int64 *)qword_140327850 != &qword_140327850 )
  {
    v8 = (unsigned __int64 *)(a1 + 24);
    do
    {
      if ( v8 - 3 == v6 )
      {
        v4 = -1073741820;
      }
      else
      {
        *((_DWORD *)v8 - 6) = *((_DWORD *)v7 - 34);
        v9 = v7[373];
        v8[1] = v9;
        v10 = v7[372];
        *(v8 - 2) = v10;
        v11 = v7[352];
        *v8 = v11;
        v12 = *(v7 - 12);
        *(v8 - 1) = v12;
        v13 = v12;
        if ( v11 < v12 )
          v13 = v11;
        *v8 = v13;
        if ( v9 < v10 )
          v10 = v9;
        if ( v10 < v12 )
          v12 = v10;
        v8[1] = v12;
        v8 += 5;
      }
      v7 = (__int64 *)*v7;
      ++v5;
    }
    while ( v7 != &qword_140327850 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = v4;
  *a2 = v5;
  return result;
}
