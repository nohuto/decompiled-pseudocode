/*
 * XREFs of ndisMDoDirectOidRequest @ 0x1C00422F8
 * Callers:
 *     ndisDoDirectOidRequest @ 0x1C0041654 (ndisDoDirectOidRequest.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C00678CC (ndisSelectiveSuspendResumeOperations.c)
 * Callees:
 *     ndisSetBusyAsync @ 0x1C0025818 (ndisSetBusyAsync.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C0059CCC (ndisMInvokeDirectOidRequest.c)
 *     ndisClearBusy @ 0x1C00665D8 (ndisClearBusy.c)
 */

__int64 __fastcall ndisMDoDirectOidRequest(__int64 a1, _DWORD *a2)
{
  struct _KEVENT *v3; // r15
  unsigned int v5; // edi
  KIRQL v6; // r8
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  KIRQL v10; // al
  struct _KTHREAD *CurrentThread; // rcx
  bool v12; // zf
  KIRQL v13; // dl

  v3 = 0LL;
  v5 = -1073741823;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0x1Fu, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1, a2);
  if ( *(_QWORD *)(a1 + 4512) && !ndisSetBusyAsync(a1, 1, 0x32u, (__int64)a2, 0) )
  {
    if ( (unsigned __int8)byte_1C0083712 >= 4u )
      WPP_SF_q(0x20u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, (__int64)a2);
    v5 = 259;
    goto LABEL_36;
  }
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *(_DWORD *)(a1 + 124);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2295883;
  if ( (v7 & 0x20000) != 0 )
  {
    v5 = -1073676276;
  }
  else if ( (*(_DWORD *)(a1 + 120) & 0x80000) != 0 )
  {
    v5 = -1073676275;
  }
  else
  {
    v8 = a2[1];
    if ( v8 != 2 || (v7 & 0x800) == 0 && *(int *)(a1 + 3924) <= 1 )
    {
      v9 = v7 & 0x20100;
      if ( v9 || *(int *)(a1 + 3924) > 1 )
      {
        if ( (v8 & 0xFFFFFFFD) != 0 )
        {
          if ( v8 == 1 )
          {
            a2[13] = a2[12];
            v5 = v9 == 0 ? 0xC023002F : 0;
          }
          else if ( v8 == 12 )
          {
            a2[16] = 0;
          }
        }
        else
        {
          a2[13] = 0;
        }
        v13 = v6;
      }
      else
      {
        ++*(_DWORD *)(a1 + 4312);
        a2[22] |= 0x10000u;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
        v5 = ndisMInvokeDirectOidRequest(a1, a2);
        if ( v5 == 259 )
          goto LABEL_36;
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        CurrentThread = KeGetCurrentThread();
        v12 = (*(_DWORD *)(a1 + 4312))-- == 1;
        *(_QWORD *)(a1 + 520) = CurrentThread;
        *(_DWORD *)(a1 + 1856) = 2295980;
        if ( v12 && *(_QWORD *)(a1 + 4320) )
        {
          v3 = *(struct _KEVENT **)(a1 + 4320);
          *(_QWORD *)(a1 + 4320) = 0LL;
        }
        v13 = v10;
      }
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_DWORD *)(a1 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v13);
      if ( v5 == 259 )
        goto LABEL_34;
      goto LABEL_32;
    }
    v5 = -2147483633;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
LABEL_32:
  if ( *(_QWORD *)(a1 + 4512) )
    ndisClearBusy(a1, 1LL, 50LL);
LABEL_34:
  if ( v3 )
    KeSetEvent(v3, 0, 0);
LABEL_36:
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqd(33LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1, a2, v5);
  return v5;
}
