/*
 * XREFs of ndisMDoOidRequest @ 0x1C00078B0
 * Callers:
 *     ndisDoOidRequests @ 0x1C0002EF0 (ndisDoOidRequests.c)
 *     ndisQueueOidRequest @ 0x1C0005360 (ndisQueueOidRequest.c)
 *     ndisMProcessDeferred @ 0x1C0059F48 (ndisMProcessDeferred.c)
 *     ndisPmInitializeMiniport @ 0x1C00F5230 (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 *     ndisPreProcessOid @ 0x1C0007250 (ndisPreProcessOid.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C0037774 (WPP_SF_qqDD.c)
 *     Template_jqxptqq @ 0x1C003F04C (Template_jqxptqq.c)
 *     Template_jqxqqq @ 0x1C003F10C (Template_jqxqqq.c)
 *     WPP_SF_qqDDD @ 0x1C003F3CC (WPP_SF_qqDDD.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C003F9CC (ndisCancelOidRequestOnMiniport.c)
 *     ndisMOidRequestToRequest @ 0x1C0041080 (ndisMOidRequestToRequest.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     ndisClearBusy @ 0x1C0067508 (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C0068B84 (ndisSetBusySync.c)
 *     ndisMInvokeOidRequest @ 0x1C0098CA0 (ndisMInvokeOidRequest.c)
 *     NdisMSleep @ 0x1C00AFE00 (NdisMSleep.c)
 */

void __fastcall ndisMDoOidRequest(unsigned __int8 *a1)
{
  struct _KEVENT *v2; // r13
  __int64 v3; // r14
  __int64 *v4; // r15
  __int64 *v5; // rdi
  char v6; // si
  KIRQL v7; // bp
  int v8; // r8d
  __int64 **v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned int v12; // ebp
  unsigned __int8 v13; // al
  int v14; // edx
  int v15; // ecx
  char v16; // di
  char v17; // si
  KIRQL v18; // al
  bool v19; // zf
  KIRQL v20; // si
  unsigned int v21; // edi
  int v22; // edx
  int v23; // ecx
  int v24; // ecx
  KSPIN_LOCK *v25; // rcx
  bool v26; // cf
  struct _KTHREAD *CurrentThread; // rax
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // r8
  __int64 v31; // r9
  KIRQL i; // al
  __int64 v33; // [rsp+20h] [rbp-88h]
  __int64 v34[6]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v35; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_q(25LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1);
  while ( 1 )
  {
    v35 = -1073741823;
    v3 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
    v6 = 0;
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
    v8 = *((_DWORD *)a1 + 1121);
    *((_QWORD *)a1 + 65) = KeGetCurrentThread();
    *((_DWORD *)a1 + 464) = 2295505;
    if ( (v8 & 1) != 0 )
    {
      if ( (unsigned __int8)byte_1C0085312 >= 4u )
        WPP_SF_q(26LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1);
    }
    else
    {
      v9 = (__int64 **)(a1 + 2200);
      if ( *v9 == (__int64 *)v9 )
      {
        if ( (*((_DWORD *)a1 + 31) & 0x20000) == 0 )
          goto LABEL_9;
      }
      else if ( (*((_DWORD *)a1 + 31) & 0x20000) == 0 )
      {
        *((_DWORD *)a1 + 1121) = v8 | 1;
        v4 = *v9;
        v10 = **v9;
        if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v10 + 8) != v4 )
          __fastfail(3u);
        *v9 = (__int64 *)v10;
        v3 = (__int64)(v4 - 9);
        *(_QWORD *)(v10 + 8) = v9;
        v5 = v4;
        *((_QWORD *)a1 + 278) = v4 - 9;
        goto LABEL_9;
      }
      v6 = 1;
      if ( *((_QWORD *)a1 + 202) )
      {
        v2 = (struct _KEVENT *)*((_QWORD *)a1 + 202);
        *((_QWORD *)a1 + 202) = 0LL;
      }
    }
LABEL_9:
    *((_QWORD *)a1 + 65) = 0LL;
    *((_DWORD *)a1 + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v7);
    if ( v6 )
    {
      LOBYTE(v11) = 1;
      ndisCancelOidRequestOnMiniport(a1, 0LL, v11);
    }
    if ( v2 )
    {
      KeSetEvent(v2, 0, 0);
      v2 = 0LL;
    }
    if ( !v5 )
      break;
    v12 = *(_DWORD *)(v3 + 32);
    if ( (unsigned __int8)byte_1C0085312 >= 4u )
      WPP_SF_qqd(27LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, v3, *(_DWORD *)(v3 + 32));
    v13 = ndisPreProcessOid((__int64)a1, v3, *a1, &v35);
    v16 = v13;
    v17 = v35;
    if ( (unsigned __int8)byte_1C0085312 >= 4u )
    {
      LODWORD(v33) = v12;
      WPP_SF_qqDDD(28LL, v13, a1, v3, v33, v13, v35);
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
      Template_jqxptqq(
        v15,
        v14,
        (_DWORD)a1 + 4064,
        (_DWORD)a1 + 4064,
        *((_DWORD *)a1 + 1028),
        *((_QWORD *)a1 + 510),
        v3,
        v16,
        v17,
        v12);
    if ( v16 != 1 )
    {
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      v19 = (*((_DWORD *)a1 + 30) & 0x80000) == 0;
      v20 = v18;
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      v21 = 0;
      *((_DWORD *)a1 + 464) = 2295630;
      if ( !v19 )
      {
        v21 = -1073676275;
        goto LABEL_41;
      }
      v22 = *(_DWORD *)(v3 + 4);
      if ( v22 == 2 && ((*((_DWORD *)a1 + 31) & 0x800) != 0 || *((int *)a1 + 981) > 1) )
      {
        v21 = -2147483633;
        goto LABEL_41;
      }
      v23 = *((_DWORD *)a1 + 31);
      if ( (v23 & 0x100) != 0 )
      {
        v21 = -1073676280;
        goto LABEL_41;
      }
      v24 = v23 & 0x20000;
      if ( v24 || (unsigned int)(*((_DWORD *)a1 + 984) - 2) <= 2 && *(_DWORD *)(v3 + 32) != -50265855 )
      {
        if ( (v22 & 0xFFFFFFFD) != 0 )
        {
          if ( v22 == 1 )
          {
            v21 = -1073741823;
            if ( !v24 )
              v21 = -1071448017;
            *(_DWORD *)(v3 + 52) = *(_DWORD *)(v3 + 48);
            goto LABEL_41;
          }
          if ( v22 != 12 )
            goto LABEL_41;
          *(_DWORD *)(v3 + 64) = 0;
        }
        else
        {
          *(_DWORD *)(v3 + 52) = 0;
        }
        v21 = -1073741823;
        goto LABEL_41;
      }
      ++*((_DWORD *)a1 + 456);
      *((_QWORD *)a1 + 277) = v3;
      if ( *(_DWORD *)(v3 + 32) == -50265855 )
      {
        *((_QWORD *)a1 + 65) = 0LL;
        *((_DWORD *)a1 + 464) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v18);
        for ( i = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 491);
              *((_DWORD *)a1 + 988);
              i = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 491) )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)a1 + 491, i);
          NdisMSleep(0x32u);
        }
        *((_DWORD *)a1 + 985) = *((_DWORD *)a1 + 984);
        *((_DWORD *)a1 + 984) = **(_DWORD **)(v3 + 40);
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 491, v20);
        v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        *((_DWORD *)a1 + 464) = 2295725;
      }
      if ( (*((_DWORD *)a1 + 30) & 0x20000) != 0 )
        *((_DWORD *)v4 + 4) |= 0x2000u;
      *((_DWORD *)v4 + 4) |= 0x10000u;
      v25 = (KSPIN_LOCK *)(a1 + 96);
      v26 = a1[32] < 6u;
      *((_QWORD *)a1 + 65) = 0LL;
      *((_DWORD *)a1 + 464) = 0;
      if ( v26 )
      {
        KeReleaseSpinLockFromDpcLevel(v25);
        v35 = ndisMOidRequestToRequest(a1, v3);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 12);
        CurrentThread = KeGetCurrentThread();
        *((_DWORD *)a1 + 464) = 2295769;
      }
      else
      {
        KeReleaseSpinLock(v25, v20);
        if ( (*((_DWORD *)a1 + 30) & 0x20000) != 0 )
        {
          v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*((_QWORD *)a1 + 477) + 552LL))(
                  *((_QWORD *)a1 + 3),
                  0LL,
                  v3);
        }
        else
        {
          if ( *((_QWORD *)a1 + 564) )
            ndisSetBusySync(a1, 33LL, v12);
          v35 = ndisMInvokeOidRequest(a1, v3);
          if ( v35 != 259 && *((_QWORD *)a1 + 564) )
            ndisClearBusy(a1, 1LL, 33LL);
        }
        v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
        CurrentThread = KeGetCurrentThread();
        *((_DWORD *)a1 + 464) = 2295758;
      }
      --*((_DWORD *)a1 + 456);
      v21 = v35;
      *((_QWORD *)a1 + 65) = CurrentThread;
      if ( v21 != 259 )
      {
        v3 = *((_QWORD *)a1 + 277);
        *((_QWORD *)a1 + 277) = 0LL;
      }
LABEL_41:
      *((_QWORD *)a1 + 65) = 0LL;
      *((_DWORD *)a1 + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v20);
      if ( v21 != 259 && v3 )
      {
        memset(v34, 0, sizeof(v34));
        if ( (unsigned __int8)byte_1C0085312 >= 4u )
        {
          LODWORD(v33) = *(_DWORD *)(v3 + 32);
          WPP_SF_qqDD(29LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, v3, v33, v21);
        }
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
          Template_jqxqqq(
            v29,
            (unsigned int)&CompletingOidRequestMiniportEx,
            (_DWORD)a1 + 4064,
            (_DWORD)a1 + 4064,
            *((_DWORD *)a1 + 1028),
            *((_QWORD *)a1 + 510),
            *(_DWORD *)(v3 + 32),
            v21,
            250);
        v34[4] = v3;
        LODWORD(v34[5]) = v21;
        v34[0] = (__int64)a1;
        ndisOidRequestComplete(v34, v28, v30, v31);
      }
    }
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_q(30LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1);
}
