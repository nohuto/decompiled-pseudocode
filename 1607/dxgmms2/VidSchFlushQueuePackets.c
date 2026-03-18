/*
 * XREFs of VidSchFlushQueuePackets @ 0x1C000ED10
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiClearFlipDevice @ 0x1C0002C18 (VidSchiClearFlipDevice.c)
 *     VidSchiSetFlipDevice @ 0x1C00051FC (VidSchiSetFlipDevice.c)
 *     VidSchiDecrementDeviceReference @ 0x1C000F050 (VidSchiDecrementDeviceReference.c)
 *     VidSchiIsFlipQueuePacket @ 0x1C0012B90 (VidSchiIsFlipQueuePacket.c)
 *     VidSchiFlushQueuePacket @ 0x1C002450C (VidSchiFlushQueuePacket.c)
 */

void __fastcall VidSchFlushQueuePackets(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v6; // r13d
  KSPIN_LOCK *v7; // r14
  __int64 ***v8; // rbx
  __int64 ***i; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 **v16; // r12
  int v17; // r15d
  __int64 **v18; // r14
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  char *v21; // rdx
  __int64 *v22; // r10
  __int64 *j; // r8
  _QWORD *v24; // r9
  _QWORD *k; // rax
  _QWORD *v26; // r9
  _QWORD *m; // rax
  __int64 *v28; // rax
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  char *v32; // r15
  char *n; // rsi
  char *ii; // rdi
  char *jj; // rax
  char *kk; // rax
  __int64 ***v37; // r8
  __int64 **v38; // rcx
  _QWORD *v39; // rcx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 *v42; // rcx
  __int64 **v43; // rcx
  char *v44; // rbx
  char *v45; // rbx
  __int64 *v46; // [rsp+30h] [rbp-40h] BYREF
  __int64 **v47; // [rsp+38h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v49; // [rsp+58h] [rbp-18h] BYREF
  int v50; // [rsp+B0h] [rbp+40h]
  char v51; // [rsp+C0h] [rbp+50h]

  v3 = a3;
  if ( a3 >= *((_DWORD *)a1 + 10) )
    v3 = -1;
  if ( *((_DWORD *)a1 + 64) == 1 )
  {
    if ( a2 == 1 )
    {
      v6 = 0;
      v47 = &v46;
      v7 = (KSPIN_LOCK *)((char *)a1 + 1856);
      v50 = 0;
      v46 = (__int64 *)&v46;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 232, &LockHandle);
      v8 = (__int64 ***)((char *)a1 + 240);
      for ( i = (__int64 ***)*((_QWORD *)a1 + 30); i != v8; i = (__int64 ***)*i )
      {
        _m_prefetchw(i - 7);
        v10 = (signed __int64)*(i - 7);
        while ( v10 )
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)i - 7, v10 + 1, v10);
          if ( v11 == v10 )
          {
            v50 = ++v6;
            goto LABEL_10;
          }
        }
        v37 = (__int64 ***)*i;
        v38 = i[1];
        if ( (*i)[1] != (__int64 *)i || *v38 != (__int64 *)i )
          __fastfail(3u);
        *v38 = (__int64 *)v37;
        v37[1] = v38;
        v39 = v47;
        if ( *v47 != (__int64 *)&v46 )
          __fastfail(3u);
        i[1] = v47;
        *i = &v46;
        *v39 = i;
        v47 = (__int64 **)i;
LABEL_10:
        ;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v16 = *v8;
      v17 = 0;
      if ( *v8 != (__int64 **)v8 )
      {
        do
        {
          v18 = v16 - 10;
          v51 = 0;
          v16 = (__int64 **)*v16;
          ++v17;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 232, &LockHandle);
          v19 = *((_DWORD *)a1 + 10);
          v20 = 0;
          if ( v19 )
          {
            v21 = (char *)a1 + 2968;
            while ( v3 != -1 && v3 != v20 || *(__int64 ***)(*(_QWORD *)v21 + 16LL) != v18 )
            {
              ++v20;
              v21 += 8;
              if ( v20 >= v19 )
                goto LABEL_19;
            }
            v51 = 1;
          }
LABEL_19:
          v22 = (__int64 *)(v18 + 8);
          for ( j = v18[8]; j != v22; j = (__int64 *)*j )
          {
            v24 = j + 80;
            for ( k = (_QWORD *)j[80]; k != v24; k = *(_QWORD **)(v30 + 32) )
            {
              if ( (unsigned __int8)VidSchiIsFlipQueuePacket(k - 4, v3) )
                *(_DWORD *)(v30 + 64) |= 0x20u;
            }
            v26 = j + 82;
            for ( m = (_QWORD *)j[82]; m != v26; m = *(_QWORD **)(v40 + 32) )
            {
              if ( (unsigned __int8)VidSchiIsFlipQueuePacket(m - 4, v3) )
                *(_DWORD *)(v40 + 64) |= 0x20u;
            }
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( v51 )
          {
            if ( v3 == -1 )
              VidSchiClearFlipDevice(a1, (__int64)v18, 6);
            else
              VidSchiSetFlipDevice(a1, v3, v18, 0, 6u, 0);
          }
          VidSchiDecrementDeviceReference(v18);
        }
        while ( v16 != (__int64 **)v8 );
        v6 = v50;
        v7 = (KSPIN_LOCK *)((char *)a1 + 1856);
      }
      if ( v17 != v6 )
      {
        v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12, v14, v15);
        v41[5] = v6;
        v41[6] = v17;
        v41[3] = 281LL;
        v41[4] = 2304LL;
        v41[7] = a1;
        WdLogEvent5_WdCriticalError(v41);
        JUMPOUT(0x1C001B7CALL);
      }
      KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
      while ( 1 )
      {
        v28 = v46;
        if ( v46 == (__int64 *)&v46 )
          break;
        v42 = (__int64 *)*v46;
        if ( (__int64 **)v46[1] != &v46 || (__int64 *)v42[1] != v46 )
          __fastfail(3u);
        v46 = (__int64 *)*v46;
        v42[1] = (__int64)&v46;
        v43 = (__int64 **)*((_QWORD *)a1 + 31);
        if ( *v43 != (__int64 *)v8 )
          __fastfail(3u);
        *v28 = (__int64)v8;
        v28[1] = (__int64)v43;
        *v43 = v28;
        *((_QWORD *)a1 + 31) = v28;
      }
      p_LockHandle = &LockHandle;
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 232, &v49);
      v32 = (char *)a1 + 240;
      for ( n = (char *)*((_QWORD *)a1 + 30); n != v32; n = *(char **)n )
      {
        for ( ii = (char *)*((_QWORD *)n - 2); ii != n - 16; ii = *(char **)ii )
        {
          for ( jj = (char *)*((_QWORD *)ii + 80); jj != ii + 640; jj = (char *)*((_QWORD *)v44 + 4) )
          {
            v44 = jj - 32;
            VidSchiFlushQueuePacket(v31, jj - 32, a2);
          }
          for ( kk = (char *)*((_QWORD *)ii + 82); kk != ii + 656; kk = (char *)*((_QWORD *)v45 + 4) )
          {
            v45 = kk - 32;
            VidSchiFlushQueuePacket(v31, kk - 32, a2);
          }
        }
      }
      p_LockHandle = &v49;
    }
    KeReleaseInStackQueuedSpinLock(p_LockHandle);
  }
}
