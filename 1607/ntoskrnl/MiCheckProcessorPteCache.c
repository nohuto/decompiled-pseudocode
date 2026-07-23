/*
 * XREFs of MiCheckProcessorPteCache @ 0x1400DB2D0
 * Callers:
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiEmptyPteBins @ 0x140017698 (MiEmptyPteBins.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall MiCheckProcessorPteCache(unsigned __int64 a1)
{
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v4; // r14
  unsigned __int64 *p_PteBitCache; // rdx
  unsigned __int64 v6; // r13
  unsigned __int64 *v7; // r9
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  _BYTE *v16; // rsi
  char v17; // al
  unsigned int v19; // r10d
  bool v20; // zf
  __int64 v21; // rcx
  unsigned int v22; // r11d
  unsigned __int64 v23; // r10
  __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // r9
  __int64 *v27; // rdi
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // r11
  __int64 v30; // rdi
  unsigned __int64 v31; // rsi
  __int64 *v32; // r8
  __int64 v33; // rax
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r8
  volatile signed __int64 *v37; // r9
  signed __int64 v38; // rax
  unsigned __int8 v39; // al
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rsi
  __int64 v42; // rdx
  unsigned int v43; // ecx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v46; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 *v47; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int8 v49; // [rsp+A0h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  v49 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0LL;
  p_PteBitCache = &CurrentPrcb->PteBitCache;
  if ( CurrentPrcb->PteBitCache == -1LL )
  {
    __writecr8(CurrentIrql);
    v25 = qword_1403278F8;
LABEL_37:
    while ( 2 )
    {
      v26 = qword_140327900;
      v27 = &qword_1403278B0;
      if ( qword_140327900 )
      {
        while ( qword_1403278B0 < v26 )
        {
          KeAcquireInStackQueuedSpinLock(&qword_1403278E0, &LockHandle);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v26 = qword_140327900;
          if ( !qword_140327900 )
            goto LABEL_41;
        }
        v27 = &v46;
        v46 = qword_1403278B0 - v26;
        v47 = (unsigned __int64 *)(qword_1403278B8 + 8 * (v26 >> 6));
        if ( v25 )
          v25 -= v26;
      }
LABEL_41:
      v28 = *v27;
      v29 = v25;
      v30 = v27[1];
      if ( v25 >= v28 )
        v29 = 0LL;
      v31 = v28 - 1;
      while ( 1 )
      {
        if ( v31 - v29 != -1LL )
        {
          v32 = (__int64 *)(v30 + 8 * (v29 >> 6));
          v33 = ((1LL << (v29 & 0x3F)) - 1) | *v32;
          if ( v33 == -1 )
          {
            while ( (unsigned __int64)++v32 <= v30 + 8 * (v31 >> 6) )
            {
              v33 = *v32;
              if ( *v32 != -1 )
                goto LABEL_46;
            }
          }
          else
          {
LABEL_46:
            _BitScanForward64((unsigned __int64 *)&v33, ~v33);
            v34 = v33 + (((__int64)v32 - v30) >> 3 << 6);
            if ( v34 <= v31 && v34 != -1LL )
            {
              v35 = (v34 + v26) & 0xFFFFFFFFFFFFFFC0uLL;
              v36 = *(_QWORD *)(qword_1403278B8 + 8 * (v35 >> 6));
              v37 = (volatile signed __int64 *)(qword_1403278B8 + 8 * (v35 >> 6));
              if ( v36 != -1LL )
              {
                while ( 1 )
                {
                  v38 = _InterlockedCompareExchange64(v37, -1LL, v36);
                  if ( v36 == v38 )
                    break;
                  v36 = v38;
                  if ( v38 == -1 )
                    goto LABEL_86;
                }
                if ( v36 != -1LL )
                {
                  v39 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  CurrentPrcb = KeGetCurrentPrcb();
                  v49 = v39;
                  p_PteBitCache = &CurrentPrcb->PteBitCache;
                  if ( CurrentPrcb->PteBitCache == -1LL )
                  {
                    *p_PteBitCache = v36;
                    CurrentPrcb->PteBitOffset = v35;
                    v40 = ~v36 - ((~v36 >> 1) & 0x5555555555555555LL);
                    _InterlockedExchangeAdd64(
                      &qword_140327910,
                      -(__int64)((unsigned int)((0x101010101010101LL
                                               * (((v40 & 0x3333333333333333LL)
                                                 + ((v40 >> 2) & 0x3333333333333333LL)
                                                 + (((v40 & 0x3333333333333333LL) + ((v40 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24));
                    qword_1403278F8 = v35 + 64;
                  }
                  else
                  {
                    _InterlockedAnd64(v37, v36);
                  }
                  goto LABEL_2;
                }
              }
LABEL_86:
              v25 = v35 + 64;
              goto LABEL_37;
            }
          }
        }
        if ( !v29 )
          break;
        v41 = v25 + 1;
        if ( v25 + 1 > v28 )
          v41 = v28;
        v31 = v41 - 1;
        v29 = 0LL;
      }
      if ( (unsigned int)MiEmptyPteBins((__int64)&qword_1403278B0, 0) )
      {
        v25 = 0LL;
        continue;
      }
      return 0LL;
    }
  }
LABEL_2:
  v47 = p_PteBitCache;
  v46 = 64LL;
  if ( !a1 )
  {
    v14 = 0LL;
    goto LABEL_13;
  }
  if ( a1 > 0x40 )
    goto LABEL_14;
  v6 = 63 - a1 + 1;
  v7 = &v47[v6 >> 6];
  v8 = v47;
  v9 = *v47;
  if ( a1 >= 0x40 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (v9 & 0x8000000000000000uLL) != 0 )
        {
          do
          {
            if ( ++v8 > v7 )
              goto LABEL_14;
            v9 = *v8;
          }
          while ( (*v8 & 0x8000000000000000uLL) != 0 );
        }
        v20 = !_BitScanReverse64((unsigned __int64 *)&v42, v9);
        if ( v20 )
          v43 = 64;
        else
          v43 = 63 - v42;
        v14 = ((v8 - v47 + 1) << 6) - v43;
        if ( v14 > v6 )
          goto LABEL_14;
        v44 = a1 - v43;
        if ( a1 == v43 )
          goto LABEL_9;
        v9 = v8[1];
        ++v8;
        if ( v44 >= 0x40 )
          break;
LABEL_80:
        v20 = !_BitScanForward64(&v45, v9);
        if ( v20 )
          v45 = 64LL;
        if ( v45 >= v44 )
          goto LABEL_9;
      }
      if ( !v9 )
      {
        v44 -= 64LL;
        if ( !v44 )
          goto LABEL_9;
        v9 = v8[1];
        ++v8;
        goto LABEL_80;
      }
    }
  }
  if ( a1 > 1 )
  {
    v19 = 0;
    while ( v9 != -1LL )
    {
LABEL_20:
      v20 = !_BitScanForward64((unsigned __int64 *)&v21, v9);
      if ( v20 )
        LODWORD(v21) = 64;
      if ( v19 + (unsigned int)v21 >= a1 )
      {
        v13 = -(__int64)v19;
LABEL_31:
        v12 = (v8 - v47) << 6;
        goto LABEL_8;
      }
      v22 = a1;
      v23 = ~v9;
      while ( 1 )
      {
        v23 &= v23 >> (v22 >> 1);
        if ( !v23 )
          break;
        v22 -= v22 >> 1;
        if ( v22 <= 1 )
        {
          _BitScanForward64((unsigned __int64 *)&v13, v23);
          goto LABEL_31;
        }
      }
      if ( v8 == v47 )
        goto LABEL_14;
      v20 = !_BitScanReverse64((unsigned __int64 *)&v24, v9);
      if ( v20 )
        v19 = 64;
      else
        v19 = 63 - v24;
      v9 = v8[1];
      ++v8;
    }
    while ( 1 )
    {
      if ( ++v8 > v7 )
        goto LABEL_14;
      v9 = *v8;
      if ( *v8 != -1LL )
      {
        v19 = 0;
        goto LABEL_20;
      }
    }
  }
  if ( v9 == -1LL )
  {
    do
    {
      if ( ++v8 > v7 )
        goto LABEL_14;
      v9 = *v8;
    }
    while ( *v8 == -1LL );
  }
  _BitScanForward64(&v10, ~v9);
  v11 = v8 - v47;
  v12 = (unsigned int)v10;
  v13 = v11 << 6;
LABEL_8:
  v14 = v12 + v13;
  if ( v14 <= v6 )
  {
LABEL_9:
    if ( v14 == -1LL )
      goto LABEL_14;
    v15 = v14 & 7;
    v16 = (char *)v47 + (v14 >> 3);
    if ( v15 + a1 > 8 )
    {
      if ( (v14 & 7) != 0 )
      {
        *v16++ |= byte_14026F6C8[v15];
        a1 -= (unsigned int)(8 - v15);
      }
      if ( a1 > 8 )
      {
        memset(v16, 255, a1 >> 3);
        v16 += a1 >> 3;
        a1 &= 7u;
      }
      if ( !a1 )
        goto LABEL_13;
      v17 = byte_14026F6B8[a1];
    }
    else
    {
      v17 = byte_14026F6B8[a1] << v15;
    }
    *v16 |= v17;
LABEL_13:
    v4 = qword_1403278C0 + 8 * (v14 + CurrentPrcb->PteBitOffset);
  }
LABEL_14:
  __writecr8(v49);
  return v4;
}
