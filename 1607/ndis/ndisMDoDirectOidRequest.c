/*
 * XREFs of ndisMDoDirectOidRequest @ 0x1C0045DF8
 * Callers:
 *     ndisDoDirectOidRequest @ 0x1C0045154 (ndisDoDirectOidRequest.c)
 *     ndisReplayDirectOids @ 0x1C006BC30 (ndisReplayDirectOids.c)
 * Callees:
 *     ndisSetBusyAsync @ 0x1C0010E00 (ndisSetBusyAsync.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C005E16C (ndisMInvokeDirectOidRequest.c)
 *     ndisClearBusy @ 0x1C006B5C8 (ndisClearBusy.c)
 */

__int64 __fastcall ndisMDoDirectOidRequest(__int64 a1, _DWORD *a2, char a3)
{
  struct _KEVENT *v4; // r15
  unsigned int v7; // edi
  KIRQL v8; // r8
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  KIRQL v12; // al
  struct _KTHREAD *CurrentThread; // rcx
  bool v14; // zf
  KIRQL v15; // dl

  v4 = 0LL;
  v7 = -1073741823;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(0x1Fu, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2);
  if ( !a3
    && *(_QWORD *)(a1 + 4512)
    && !ndisSetBusyAsync((struct _NDIS_MINIPORT_BLOCK *)a1, 1u, NdisBusyDirectOid, a2, 0) )
  {
    if ( (unsigned __int8)byte_1C00895D2 >= 4u )
      WPP_SF_q(0x20u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, (__int64)a2);
    v7 = 259;
    goto LABEL_37;
  }
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v9 = *(_DWORD *)(a1 + 124);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2295885;
  if ( (v9 & 0x20000) != 0 )
  {
    v7 = -1073676276;
  }
  else if ( (*(_DWORD *)(a1 + 120) & 0x80000) != 0 )
  {
    v7 = -1073676275;
  }
  else
  {
    v10 = a2[1];
    if ( v10 != 2 || (v9 & 0x800) == 0 && *(int *)(a1 + 3924) <= 1 )
    {
      v11 = v9 & 0x20100;
      if ( v11 || *(int *)(a1 + 3924) > 1 )
      {
        if ( (v10 & 0xFFFFFFFD) != 0 )
        {
          if ( v10 == 1 )
          {
            a2[13] = a2[12];
            v7 = v11 == 0 ? 0xC023002F : 0;
          }
          else if ( v10 == 12 )
          {
            a2[16] = 0;
          }
        }
        else
        {
          a2[13] = 0;
        }
        v15 = v8;
      }
      else
      {
        ++*(_DWORD *)(a1 + 4312);
        a2[22] |= 0x10000u;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v8);
        v7 = ndisMInvokeDirectOidRequest(a1, a2);
        if ( v7 == 259 )
          goto LABEL_37;
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        CurrentThread = KeGetCurrentThread();
        v14 = (*(_DWORD *)(a1 + 4312))-- == 1;
        *(_QWORD *)(a1 + 520) = CurrentThread;
        *(_DWORD *)(a1 + 1856) = 2295982;
        if ( v14 && *(_QWORD *)(a1 + 4320) )
        {
          v4 = *(struct _KEVENT **)(a1 + 4320);
          *(_QWORD *)(a1 + 4320) = 0LL;
        }
        v15 = v12;
      }
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_DWORD *)(a1 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v15);
      if ( v7 == 259 )
        goto LABEL_35;
      goto LABEL_33;
    }
    v7 = -2147483633;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v8);
LABEL_33:
  if ( *(_QWORD *)(a1 + 4512) )
    ndisClearBusy(a1, 1LL, 50LL);
LABEL_35:
  if ( v4 )
    KeSetEvent(v4, 0, 0);
LABEL_37:
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqd(33LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, v7);
  return v7;
}
