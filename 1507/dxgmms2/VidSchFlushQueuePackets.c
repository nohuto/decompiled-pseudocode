/*
 * XREFs of VidSchFlushQueuePackets @ 0x1C0006C00
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C0001150 (VidSchiDecrementDeviceReference.c)
 *     VidSchiClearFlipDevice @ 0x1C0003658 (VidSchiClearFlipDevice.c)
 *     VidSchiSetFlipDevice @ 0x1C00036B8 (VidSchiSetFlipDevice.c)
 *     VidSchiFlushQueuePacket @ 0x1C0017668 (VidSchiFlushQueuePacket.c)
 *     VidSchiIsFlipQueuePacket @ 0x1C00176A0 (VidSchiIsFlipQueuePacket.c)
 */

void __fastcall VidSchFlushQueuePackets(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // esi
  __int64 v6; // rcx
  char *v7; // r15
  char *n; // rsi
  char *ii; // rdi
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  char *jj; // rax
  char *kk; // rax
  int v13; // r13d
  KSPIN_LOCK *v14; // r14
  __int64 ***v15; // rbx
  __int64 ***i; // rdx
  signed __int64 v17; // rax
  __int64 ***v18; // r8
  __int64 **v19; // rcx
  __int64 ***v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 **v23; // r12
  int v24; // r15d
  char *v25; // r14
  unsigned int v26; // r8d
  unsigned int v27; // ecx
  char *v28; // rdx
  signed __int64 v29; // rtt
  _QWORD *v30; // r10
  _QWORD *j; // r8
  _QWORD *v32; // r9
  _QWORD *k; // rax
  __int64 v34; // rcx
  _QWORD *v35; // r9
  _QWORD *m; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 *v39; // rax
  __int64 *v40; // rcx
  __int64 **v41; // rcx
  char *v42; // rbx
  char *v43; // rbx
  __int64 *v44; // [rsp+30h] [rbp-40h] BYREF
  __int64 **v45; // [rsp+38h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE v46; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-18h] BYREF
  int v48; // [rsp+B0h] [rbp+40h]
  char v49; // [rsp+C0h] [rbp+50h]

  v3 = a3;
  if ( a3 >= *((_DWORD *)a1 + 10) )
    v3 = -1;
  if ( *((_DWORD *)a1 + 54) == 1 )
  {
    if ( a2 == 1 )
    {
      v13 = 0;
      v45 = &v44;
      v14 = (KSPIN_LOCK *)((char *)a1 + 1872);
      v48 = 0;
      v44 = (__int64 *)&v44;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 234, &v46);
      v15 = (__int64 ***)((char *)a1 + 200);
      for ( i = (__int64 ***)*((_QWORD *)a1 + 25); i != v15; i = (__int64 ***)*i )
      {
        _m_prefetchw(i - 8);
        v17 = (signed __int64)*(i - 8);
        while ( v17 )
        {
          v29 = v17;
          v17 = _InterlockedCompareExchange64((volatile signed __int64 *)i - 8, v17 + 1, v17);
          if ( v29 == v17 )
          {
            v48 = ++v13;
            goto LABEL_25;
          }
        }
        v18 = (__int64 ***)*i;
        v19 = i[1];
        if ( (*i)[1] != (__int64 *)i || *v19 != (__int64 *)i )
          __fastfail(3u);
        *v19 = (__int64 *)v18;
        v18[1] = v19;
        v20 = (__int64 ***)v45;
        *i = &v44;
        i[1] = (__int64 **)v20;
        if ( *v20 != &v44 )
          __fastfail(3u);
        *v20 = (__int64 **)i;
        v45 = (__int64 **)i;
LABEL_25:
        ;
      }
      KeReleaseInStackQueuedSpinLock(&v46);
      v23 = *v15;
      v24 = 0;
      if ( *v15 != (__int64 **)v15 )
      {
        do
        {
          v25 = (char *)(v23 - 11);
          v49 = 0;
          v23 = (__int64 **)*v23;
          ++v24;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 234, &v46);
          v26 = *((_DWORD *)a1 + 10);
          v27 = 0;
          if ( v26 )
          {
            v28 = (char *)a1 + 2640;
            while ( v3 != v27 && v3 != -1 || *(char **)(*(_QWORD *)v28 + 8LL) != v25 )
            {
              ++v27;
              v28 += 8;
              if ( v27 >= v26 )
                goto LABEL_39;
            }
            v49 = 1;
          }
LABEL_39:
          v30 = v25 + 72;
          for ( j = (_QWORD *)*((_QWORD *)v25 + 9); j != v30; j = (_QWORD *)*j )
          {
            v32 = j + 80;
            for ( k = (_QWORD *)j[80]; k != v32; k = *(_QWORD **)(v34 + 32) )
            {
              if ( (unsigned __int8)VidSchiIsFlipQueuePacket(k - 4, v3) )
                *(_DWORD *)(v34 + 64) |= 0x20u;
            }
            v35 = j + 82;
            for ( m = (_QWORD *)j[82]; m != v35; m = *(_QWORD **)(v37 + 32) )
            {
              if ( (unsigned __int8)VidSchiIsFlipQueuePacket(m - 4, v3) )
                *(_DWORD *)(v37 + 64) |= 0x20u;
            }
          }
          KeReleaseInStackQueuedSpinLock(&v46);
          if ( v49 )
          {
            if ( v3 == -1 )
              VidSchiClearFlipDevice(a1, (__int64)v25, 6);
            else
              VidSchiSetFlipDevice(a1, v3, v25, 0, 6);
          }
          VidSchiDecrementDeviceReference(v25, 0);
        }
        while ( v23 != (__int64 **)v15 );
        v13 = v48;
        v14 = (KSPIN_LOCK *)((char *)a1 + 1872);
      }
      if ( v24 != v13 )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v21);
        v38[5] = v13;
        v38[6] = v24;
        v38[3] = 281LL;
        v38[4] = 2304LL;
        v38[7] = a1;
        WdLogEvent5_WdCriticalError(v38);
        JUMPOUT(0x1C000DD9ALL);
      }
      KeAcquireInStackQueuedSpinLock(v14, &v46);
      while ( 1 )
      {
        v39 = v44;
        if ( v44 == (__int64 *)&v44 )
          break;
        v40 = (__int64 *)*v44;
        if ( (__int64 **)v44[1] != &v44 || (__int64 *)v40[1] != v44 )
          __fastfail(3u);
        v44 = (__int64 *)*v44;
        v40[1] = (__int64)&v44;
        v41 = (__int64 **)*((_QWORD *)a1 + 26);
        *v39 = (__int64)v15;
        v39[1] = (__int64)v41;
        if ( *v41 != (__int64 *)v15 )
          __fastfail(3u);
        *v41 = v39;
        *((_QWORD *)a1 + 26) = v39;
      }
      p_LockHandle = &v46;
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 234, &LockHandle);
      v7 = (char *)a1 + 200;
      for ( n = (char *)*((_QWORD *)a1 + 25); n != v7; n = *(char **)n )
      {
        for ( ii = (char *)*((_QWORD *)n - 2); ii != n - 16; ii = *(char **)ii )
        {
          for ( jj = (char *)*((_QWORD *)ii + 80); jj != ii + 640; jj = (char *)*((_QWORD *)v42 + 4) )
          {
            v42 = jj - 32;
            VidSchiFlushQueuePacket(v6, jj - 32, a2);
          }
          for ( kk = (char *)*((_QWORD *)ii + 82); kk != ii + 656; kk = (char *)*((_QWORD *)v43 + 4) )
          {
            v43 = kk - 32;
            VidSchiFlushQueuePacket(v6, kk - 32, a2);
          }
        }
      }
      p_LockHandle = &LockHandle;
    }
    KeReleaseInStackQueuedSpinLock(p_LockHandle);
  }
}
