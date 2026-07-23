/*
 * XREFs of MiScanNonPagedPoolVa @ 0x14001A5E0
 * Callers:
 *     MiFindNonPagedPoolVa @ 0x140017940 (MiFindNonPagedPoolVa.c)
 *     MiFindContiguousMemoryInPool @ 0x14009AAEC (MiFindContiguousMemoryInPool.c)
 *     MiRemoveFreePoolMemoryFromDump @ 0x1401EC6A4 (MiRemoveFreePoolMemoryFromDump.c)
 *     MiScrubNonPagedPool @ 0x140659F44 (MiScrubNonPagedPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlFindNextForwardRunClearCappedEx @ 0x14001A800 (RtlFindNextForwardRunClearCappedEx.c)
 *     MiScanLeafNonPagedPool @ 0x14001A960 (MiScanLeafNonPagedPool.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiScanNonPagedPoolVa(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *p_Region; // rax
  bool v6; // zf
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r13
  unsigned __int64 NextForwardRunClearCapped; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rbx
  __int64 result; // rax
  unsigned __int64 v16; // [rsp+40h] [rbp-78h] BYREF
  _SLIST_HEADER *v17; // [rsp+48h] [rbp-70h]
  unsigned __int64 *v18; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-60h] BYREF
  int v20; // [rsp+C0h] [rbp+8h]
  int v22; // [rsp+D0h] [rbp+18h]
  unsigned __int64 *v23; // [rsp+D8h] [rbp+20h]

  v22 = a3;
  v20 = a1;
  v17 = &qword_1403269F0[26 * a2];
  p_Region = &v17[(int)a3 + 21].Region;
  v23 = p_Region;
  v6 = *(_BYTE *)(a4 + 48) == 1;
  v18 = &v17[24].Region + (int)a3;
  v7 = *v18;
  if ( v6 )
    v7 = *(_QWORD *)(a4 + 40);
  v8 = v7 >> 9;
  v9 = (unsigned __int64)(a1 + 511) >> 9;
  v10 = v7 >> 9;
  v11 = -1LL;
  while ( 1 )
  {
    while ( 1 )
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx(p_Region, v8, a3, &v16);
      v13 = NextForwardRunClearCapped;
      if ( !NextForwardRunClearCapped )
        break;
      v14 = v16;
      if ( v16 >= v11 )
        return -1LL;
      if ( NextForwardRunClearCapped < v9 )
      {
        v8 = v16 + NextForwardRunClearCapped;
        p_Region = v23;
      }
      else
      {
        if ( v8 != v10 || v16 == v8 || v9 != 1 || *(_DWORD *)a4 )
        {
          if ( (v7 >> 9 < v16 || v7 >> 9 >= v8) && *(_DWORD *)a4 <= 1u )
            v7 = v16 << 9;
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&v17[19].Region, &LockHandle);
          if ( v7 == *v18 )
          {
            v7 = v14 << 9;
            *v18 = v14 << 9;
          }
          else
          {
            v7 = v14 << 9;
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        if ( *(_BYTE *)(a4 + 48) == 1 && v7 < v14 << 9 )
          v7 = v14 << 9;
        result = MiScanLeafNonPagedPool(v20, a2, v22, a4, v14 << 9, v13 << 9, v7);
        if ( result != -1 )
          return result;
        p_Region = v23;
        v8 = v14 + v13;
      }
    }
    if ( v11 != -1LL || !v10 || *(_BYTE *)(a4 + 48) )
      break;
    p_Region = v23;
    v8 = 0LL;
    v11 = v10;
    v10 = 0LL;
  }
  return -1LL;
}
