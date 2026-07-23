/*
 * XREFs of RtlpWakeByAddress @ 0x1800367EC
 * Callers:
 *     RtlWakeAddressSingle @ 0x180003090 (RtlWakeAddressSingle.c)
 *     RtlpDecRefWnfUserSubscription @ 0x18000BB10 (RtlpDecRefWnfUserSubscription.c)
 *     RtlpUnWaitCriticalSection @ 0x180036780 (RtlpUnWaitCriticalSection.c)
 *     RtlWakeAddressAll @ 0x1800367D0 (RtlWakeAddressAll.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x1800C22F4 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlWakeAddressAllNoFence @ 0x1800E60F0 (RtlWakeAddressAllNoFence.c)
 *     RtlWakeAddressSingleNoFence @ 0x1800E6100 (RtlWakeAddressSingleNoFence.c)
 * Callees:
 *     RtlpWaitOnAddressWakeEntireList @ 0x18006E20C (RtlpWaitOnAddressWakeEntireList.c)
 *     ZwAlertThreadByThreadId @ 0x180093FE0 (ZwAlertThreadByThreadId.c)
 */

int __fastcall RtlpWakeByAddress(unsigned __int64 a1, char a2)
{
  bool v2; // si
  __int64 v3; // rdi
  __int64 v6; // r10
  signed __int64 v7; // rax
  signed __int64 v8; // rdx
  signed __int64 v9; // rtt
  unsigned __int64 v10; // r9
  _QWORD *v11; // r8
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  char v17; // dl
  unsigned __int64 v18; // rcx
  signed __int64 v19; // rtt
  signed __int64 v20; // rcx
  __int64 v21; // r11
  signed __int64 v22; // rtt

  v2 = 0;
  v3 = (a1 >> 5) & 0x7F;
  v6 = 0LL;
  v7 = RtlpWaitOnAddressHashTable[v3];
  while ( v7 && (v7 & 1) == 0 )
  {
    if ( (v7 & 2) != 0 )
    {
      v22 = v7;
      v7 = _InterlockedCompareExchange64(&RtlpWaitOnAddressHashTable[v3], v7 | 1, v7);
      if ( v22 == v7 )
        return v7;
    }
    else
    {
      v8 = v7 | 2;
      v9 = v7;
      v7 = _InterlockedCompareExchange64(&RtlpWaitOnAddressHashTable[v3], v7 | 2, v7);
      if ( v9 == v7 )
      {
LABEL_7:
        v10 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
        v11 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !*(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
        {
          do
          {
            v7 = (signed __int64)v11;
            v11 = (_QWORD *)v11[2];
            v11[3] = v7;
          }
          while ( !v11[4] );
        }
        v12 = v11[4];
        *(_QWORD *)(v10 + 32) = v12;
        while ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 24);
          if ( *(_QWORD *)v12 == a1 )
          {
            if ( v12 == v10 )
            {
              v20 = *(_QWORD *)(v12 + 16);
              if ( v20 )
                v20 = ((unsigned __int8)v8 ^ (unsigned __int8)v20) & 3 ^ (unsigned __int64)v20;
              v7 = _InterlockedCompareExchange64(&RtlpWaitOnAddressHashTable[v3], v20, v8);
              if ( v8 != v7 )
              {
                v8 = v7;
                goto LABEL_7;
              }
              v21 = *(_QWORD *)(v12 + 16);
              v2 = v20 == 0;
              if ( v21 )
              {
                *(_QWORD *)(v21 + 24) = 0LL;
                *(_QWORD *)(v21 + 32) = *(_QWORD *)(v12 + 32);
              }
            }
            else
            {
              *(_QWORD *)(v13 + 16) = *(_QWORD *)(v12 + 16);
              v14 = *(_QWORD *)(v12 + 16);
              v15 = *(_QWORD *)(v12 + 24);
              if ( v14 )
              {
                *(_QWORD *)(v14 + 24) = v15;
              }
              else
              {
                *(_QWORD *)(v10 + 32) = v15;
                *(_QWORD *)(*(_QWORD *)(v12 + 24) + 32LL) = *(_QWORD *)(v12 + 24);
              }
            }
            LODWORD(v7) = _InterlockedExchange((volatile __int32 *)(v12 + 40), 2);
            if ( (_DWORD)v7 != 2 )
            {
              if ( !(_DWORD)v7 )
              {
                *(_QWORD *)(v12 + 16) = v6;
                v6 = v12;
              }
              if ( !a2 )
                break;
            }
          }
          v12 = v13;
        }
        if ( v6 )
        {
          do
          {
            v16 = *(_QWORD *)(v6 + 16);
            LODWORD(v7) = ZwAlertThreadByThreadId(*(HANDLE *)(v6 + 8));
            v6 = v16;
          }
          while ( v16 );
        }
        if ( !v2 )
        {
          v7 = RtlpWaitOnAddressHashTable[v3];
          do
          {
            if ( (v7 & 1) != 0 )
            {
              v17 = 1;
              v18 = 0LL;
            }
            else
            {
              v17 = 0;
              v18 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
            }
            v19 = v7;
            v7 = _InterlockedCompareExchange64(&RtlpWaitOnAddressHashTable[v3], v18, v7);
          }
          while ( v19 != v7 );
          if ( v17 )
            LODWORD(v7) = RtlpWaitOnAddressWakeEntireList(v7);
        }
        return v7;
      }
    }
  }
  return v7;
}
