/*
 * XREFs of ndisMDoOidRequest @ 0x1C0008EC8
 * Callers:
 *     ndisQueueOidRequest @ 0x1C0007420 (ndisQueueOidRequest.c)
 *     ndisDoOidRequests @ 0x1C000AF60 (ndisDoOidRequests.c)
 *     ndisMProcessDeferred @ 0x1C0059EE8 (ndisMProcessDeferred.c)
 *     ndisPmInitializeMiniport @ 0x1C00EF3B0 (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 *     ndisPreProcessOid @ 0x1C0008850 (ndisPreProcessOid.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C0038468 (WPP_SF_qqDD.c)
 *     Template_jqxptqq @ 0x1C004078C (Template_jqxptqq.c)
 *     Template_jqxqqq @ 0x1C004084C (Template_jqxqqq.c)
 *     WPP_SF_qqDDD @ 0x1C0040AC8 (WPP_SF_qqDDD.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C00410C8 (ndisCancelOidRequestOnMiniport.c)
 *     ndisMOidRequestToRequest @ 0x1C004256C (ndisMOidRequestToRequest.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ndisClearBusy @ 0x1C00665D8 (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C0067C58 (ndisSetBusySync.c)
 *     ndisMInvokeOidRequest @ 0x1C009631C (ndisMInvokeOidRequest.c)
 *     NdisMSleep @ 0x1C00AAAA0 (NdisMSleep.c)
 */

PRKEVENT __fastcall ndisMDoOidRequest(unsigned __int8 *a1)
{
  __int64 v2; // rsi
  __int64 *v3; // r14
  __int64 *v4; // r15
  char v5; // di
  KIRQL v6; // r12
  int v7; // r8d
  __int64 **v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  PRKEVENT result; // rax
  unsigned int v12; // r12d
  unsigned __int8 v13; // al
  int v14; // edx
  int v15; // ecx
  char v16; // di
  char v17; // r15
  KIRQL v18; // al
  bool v19; // zf
  KIRQL v20; // r15
  int v21; // edi
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
  KIRQL v32; // al
  KSPIN_LOCK *v33; // rcx
  struct _KEVENT *v34; // rax
  __int64 v35; // [rsp+20h] [rbp-60h]
  _QWORD v36[6]; // [rsp+50h] [rbp-30h] BYREF
  int v37; // [rsp+C0h] [rbp+40h] BYREF
  PRKEVENT Event; // [rsp+C8h] [rbp+48h]

  Event = 0LL;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_q(25LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1);
  while ( 1 )
  {
    v37 = -1073741823;
    v2 = 0LL;
    v3 = 0LL;
    v4 = 0LL;
    v5 = 0;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
    v7 = *((_DWORD *)a1 + 1121);
    *((_QWORD *)a1 + 65) = KeGetCurrentThread();
    *((_DWORD *)a1 + 464) = 2295505;
    if ( (v7 & 1) != 0 )
    {
      if ( (unsigned __int8)byte_1C0083712 >= 4u )
        WPP_SF_q(26LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1);
    }
    else
    {
      v8 = (__int64 **)(a1 + 2200);
      if ( *v8 == (__int64 *)v8 )
      {
        if ( (*((_DWORD *)a1 + 31) & 0x20000) == 0 )
          goto LABEL_9;
      }
      else if ( (*((_DWORD *)a1 + 31) & 0x20000) == 0 )
      {
        *((_DWORD *)a1 + 1121) = v7 | 1;
        v3 = *v8;
        v9 = **v8;
        if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v9 + 8) != v3 )
          __fastfail(3u);
        *v8 = (__int64 *)v9;
        v2 = (__int64)(v3 - 9);
        *(_QWORD *)(v9 + 8) = v8;
        v4 = v3;
        *((_QWORD *)a1 + 278) = v3 - 9;
        goto LABEL_9;
      }
      v34 = (struct _KEVENT *)*((_QWORD *)a1 + 202);
      v5 = 1;
      if ( v34 )
      {
        *((_QWORD *)a1 + 202) = 0LL;
        Event = v34;
      }
    }
LABEL_9:
    *((_QWORD *)a1 + 65) = 0LL;
    *((_DWORD *)a1 + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v6);
    if ( v5 )
    {
      LOBYTE(v10) = 1;
      ndisCancelOidRequestOnMiniport(a1, 0LL, v10);
    }
    result = Event;
    if ( Event )
    {
      KeSetEvent(Event, 0, 0);
      result = 0LL;
      Event = 0LL;
    }
    if ( !v4 )
      break;
    v12 = *(_DWORD *)(v2 + 32);
    if ( (unsigned __int8)byte_1C0083712 >= 4u )
      WPP_SF_qqd(27LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1, v2, *(_DWORD *)(v2 + 32));
    v13 = ndisPreProcessOid((__int64)a1, v2, *a1, (unsigned int *)&v37);
    v16 = v13;
    v17 = v37;
    if ( (unsigned __int8)byte_1C0083712 >= 4u )
    {
      LODWORD(v35) = v12;
      WPP_SF_qqDDD(28LL, v13, a1, v2, v35, v13, v37);
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
      Template_jqxptqq(
        v15,
        v14,
        (_DWORD)a1 + 4064,
        (_DWORD)a1 + 4064,
        *((_DWORD *)a1 + 1028),
        *((_QWORD *)a1 + 510),
        v2,
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
      v22 = *(_DWORD *)(v2 + 4);
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
      if ( !v24 && ((unsigned int)(*((_DWORD *)a1 + 984) - 2) > 2 || *(_DWORD *)(v2 + 32) == -50265855) )
      {
        ++*((_DWORD *)a1 + 456);
        *((_QWORD *)a1 + 277) = v2;
        if ( *(_DWORD *)(v2 + 32) == -50265855 )
        {
          *((_QWORD *)a1 + 65) = 0LL;
          *((_DWORD *)a1 + 464) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v18);
          while ( 1 )
          {
            v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 491);
            v33 = (KSPIN_LOCK *)(a1 + 3928);
            if ( !*((_DWORD *)a1 + 988) )
              break;
            KeReleaseSpinLock(v33, v32);
            NdisMSleep(0x32u);
          }
          *((_DWORD *)a1 + 985) = *((_DWORD *)a1 + 984);
          *((_DWORD *)a1 + 984) = **(_DWORD **)(v2 + 40);
          KeReleaseSpinLock(v33, v20);
          v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
          *((_QWORD *)a1 + 65) = KeGetCurrentThread();
          *((_DWORD *)a1 + 464) = 2295725;
        }
        if ( (*((_DWORD *)a1 + 30) & 0x20000) != 0 )
          *((_DWORD *)v3 + 4) |= 0x2000u;
        *((_DWORD *)v3 + 4) |= 0x10000u;
        v25 = (KSPIN_LOCK *)(a1 + 96);
        v26 = a1[32] < 6u;
        *((_QWORD *)a1 + 65) = 0LL;
        *((_DWORD *)a1 + 464) = 0;
        if ( v26 )
        {
          KeReleaseSpinLockFromDpcLevel(v25);
          v37 = ndisMOidRequestToRequest(a1, v2);
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 12);
          CurrentThread = KeGetCurrentThread();
          *((_DWORD *)a1 + 464) = 2295769;
        }
        else
        {
          KeReleaseSpinLock(v25, v20);
          if ( (*((_DWORD *)a1 + 30) & 0x20000) != 0 )
          {
            v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*((_QWORD *)a1 + 477) + 552LL))(
                    *((_QWORD *)a1 + 3),
                    0LL,
                    v2);
          }
          else
          {
            if ( *((_QWORD *)a1 + 564) )
              ndisSetBusySync(a1, 33LL, v12);
            v37 = ndisMInvokeOidRequest(a1, v2);
            if ( v37 != 259 && *((_QWORD *)a1 + 564) )
              ndisClearBusy(a1, 1LL, 33LL);
          }
          v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
          CurrentThread = KeGetCurrentThread();
          *((_DWORD *)a1 + 464) = 2295758;
        }
        --*((_DWORD *)a1 + 456);
        v21 = v37;
        *((_QWORD *)a1 + 65) = CurrentThread;
        if ( v21 != 259 )
        {
          v2 = *((_QWORD *)a1 + 277);
          *((_QWORD *)a1 + 277) = 0LL;
        }
      }
      else
      {
        if ( (v22 & 0xFFFFFFFD) == 0 )
        {
          *(_DWORD *)(v2 + 52) = 0;
          goto LABEL_73;
        }
        if ( v22 == 1 )
        {
          *(_DWORD *)(v2 + 52) = *(_DWORD *)(v2 + 48);
          v21 = v24 != 0 ? -1073741823 : -1071448017;
          goto LABEL_41;
        }
        if ( v22 == 12 )
        {
          *(_DWORD *)(v2 + 64) = 0;
LABEL_73:
          v21 = -1073741823;
        }
      }
LABEL_41:
      *((_QWORD *)a1 + 65) = 0LL;
      *((_DWORD *)a1 + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v20);
      if ( v21 != 259 && v2 )
      {
        memset(v36, 0, sizeof(v36));
        if ( (unsigned __int8)byte_1C0083712 >= 4u )
        {
          LODWORD(v35) = *(_DWORD *)(v2 + 32);
          WPP_SF_qqDD(29LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1, v2, v35, v21);
        }
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
          Template_jqxqqq(
            v29,
            (unsigned int)&CompletingOidRequestMiniportEx,
            (_DWORD)a1 + 4064,
            (_DWORD)a1 + 4064,
            *((_DWORD *)a1 + 1028),
            *((_QWORD *)a1 + 510),
            *(_DWORD *)(v2 + 32),
            v21,
            250);
        v36[4] = v2;
        LODWORD(v36[5]) = v21;
        v36[0] = a1;
        ndisOidRequestComplete((__int64)v36, v28, v30, v31);
      }
    }
  }
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    return (PRKEVENT)WPP_SF_q(30LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1);
  return result;
}
