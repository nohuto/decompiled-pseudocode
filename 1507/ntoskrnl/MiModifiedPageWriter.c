/*
 * XREFs of MiModifiedPageWriter @ 0x140169194
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KeQueryPriorityThread @ 0x1400D5D70 (KeQueryPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x1400D69B0 (IoBoostThreadIoPriority.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiGatherPagefilePages @ 0x14013D12C (MiGatherPagefilePages.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14014B610 (MiUseLowIoPriorityForModifiedPages.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiFreeModifiedReservations @ 0x1402218E8 (MiFreeModifiedReservations.c)
 */

__int64 __fastcall MiModifiedPageWriter(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  int v3; // eax
  struct _KTHREAD *v4; // rdi
  __int64 v5; // r15
  struct _KEVENT *v6; // r14
  struct _KEVENT *v7; // rsi
  __int64 *v8; // r13
  __int16 v9; // ax
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // r14d
  __int64 v14; // rsi
  _QWORD *v15; // rax
  int v16; // eax
  unsigned int v17; // r11d
  unsigned int v18; // r10d
  __int64 v19; // rdx
  char v20; // al
  unsigned int v21; // r9d
  __int64 v22; // r8
  __int64 **v23; // rcx
  __int64 **v24; // rax
  __int16 v25; // ax
  unsigned int v26; // ecx
  __int64 v27; // rdx
  unsigned int v28; // eax
  _BOOL8 v29; // r12
  _QWORD *v30; // rsi
  __int64 v31; // r14
  __int16 v32; // ax
  __int16 v33; // ax
  unsigned __int64 v34; // rax
  unsigned int v35; // eax
  _QWORD *v36; // rsi
  unsigned __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // r14
  _QWORD *v40; // r15
  __int16 v41; // ax
  __int16 v42; // ax
  signed __int32 v44[8]; // [rsp+8h] [rbp-100h] BYREF
  KPROCESSOR_MODE WaitMode; // [rsp+28h] [rbp-E0h]
  BOOLEAN Alertable[8]; // [rsp+30h] [rbp-D8h]
  PLARGE_INTEGER Timeout; // [rsp+38h] [rbp-D0h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+40h] [rbp-C8h]
  __int64 v49; // [rsp+48h] [rbp-C0h]
  __int64 v50; // [rsp+50h] [rbp-B8h]
  PVOID Object[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v52; // [rsp+68h] [rbp-A0h]
  struct _KWAIT_BLOCK v53; // [rsp+78h] [rbp-90h] BYREF
  PVOID v54[4]; // [rsp+D8h] [rbp-30h] BYREF
  struct _KWAIT_BLOCK v55; // [rsp+F8h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 856) = CurrentThread;
  LODWORD(CurrentThread[1].Queue) |= 2u;
  v3 = KeSetActualBasePriorityThread((__int64)CurrentThread, 0x12u);
  v4 = KeGetCurrentThread();
  LODWORD(v5) = 0;
  LODWORD(v49) = v3;
  Object[0] = (PVOID)(a1 + 152);
  Object[1] = (PVOID)(a1 + 672);
  v6 = (struct _KEVENT *)(a1 + 792);
  v54[0] = (PVOID)(a1 + 152);
  v54[2] = (PVOID)(a1 + 832);
  v54[1] = (PVOID)(a1 + 792);
  WaitBlockArray = &v53;
  v7 = (struct _KEVENT *)(a1 + 632);
  Timeout = 0LL;
  Alertable[0] = 0;
  WaitMode = 0;
  v54[3] = (PVOID)(a1 + 632);
  *(_QWORD *)(a1 + 752) = 0LL;
  *(_DWORD *)(a1 + 760) = 0;
  if ( KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, WaitMode, Alertable[0], Timeout, WaitBlockArray) )
  {
    while ( !*(_DWORD *)(a1 + 156) )
    {
      if ( !*(_QWORD *)(a1 + 5744) )
        goto LABEL_40;
      --v4->SpecialApcDisable;
      v8 = (__int64 *)(a1 + 816);
      if ( (__int64 *)*v8 == v8 )
      {
        *(_BYTE *)(a1 + 609) = 1;
        v9 = v4->SpecialApcDisable + 1;
        v4->SpecialApcDisable = v9;
        if ( !v9 && ($CD287064E7C9F7953DE243E927CFCB99 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
          KiCheckForKernelApcDelivery();
        if ( !KeWaitForMultipleObjects(4u, v54, WaitAny, WrPageOut, 0, 0, 0LL, &v55) )
          break;
        --v4->SpecialApcDisable;
        *(_BYTE *)(a1 + 609) = 0;
      }
      if ( *(_DWORD *)(a1 + 636) )
      {
        KeResetEvent(v7);
        if ( *(_DWORD *)(a1 + 628) )
          IoBoostThreadIoPriority((__int64)v4, 2, 0);
      }
      if ( *(_DWORD *)(a1 + 796) )
      {
        KeResetEvent(v6);
        _InterlockedOr(v44, 0);
        v17 = *(_DWORD *)(a1 + 5336);
        v18 = 0;
        if ( v17 )
        {
          v19 = a1 + 5344;
          do
          {
            v20 = *(_BYTE *)(*(_QWORD *)v19 + 166LL);
            if ( (v20 & 1) != 0 )
            {
              v21 = 0;
              *(_BYTE *)(*(_QWORD *)v19 + 166LL) = v20 & 0xFE;
              v22 = 72LL;
              do
              {
                v23 = *(__int64 ***)(v22 + *(_QWORD *)v19);
                if ( v23 && *v23 == (__int64 *)2575857425LL )
                {
                  v24 = *(__int64 ***)(a1 + 824);
                  *v23 = v8;
                  v23[1] = (__int64 *)v24;
                  if ( *v24 != v8 )
                    __fastfail(3u);
                  *v24 = (__int64 *)v23;
                  *(_QWORD *)(a1 + 824) = v23;
                }
                ++v21;
                v22 += 8LL;
              }
              while ( v21 < 2 );
            }
            ++v18;
            v19 += 8LL;
          }
          while ( v18 < v17 );
        }
      }
      v10 = *(_QWORD *)(a1 + 5568);
      v11 = *(_QWORD *)(a1 + 5744);
      if ( v10 < 0 )
        v10 = 0LL;
      if ( *(_QWORD *)(a1 + 744) < 0x800uLL && (v11 > *(_QWORD *)(a1 + 5328) >> 2 || v11 > (unsigned __int64)v10 >> 2) )
      {
        v26 = *(_DWORD *)(a1 + 760);
        if ( v26 >= 0x40 )
        {
          v27 = *(_DWORD *)(a1 + 752) % v26;
          if ( *(_DWORD *)(a1 + 752) / v26 < (unsigned int)dword_1403D00F8 >> 3 )
          {
            v28 = *(_DWORD *)(a1 + 5336);
            v29 = *(_QWORD *)(a1 + 2048) > 3 * (v11 >> 2);
            if ( v28 )
            {
              v30 = (_QWORD *)(a1 + 5344);
              v5 = v28;
              do
              {
                v31 = *v30;
                MiFreeModifiedReservations(*v30, v27);
                if ( v29 && (*(_BYTE *)(a1 + 788) & 1) == 0 )
                  *(_DWORD *)(v31 + 144) = dword_1403D00F8;
                ++v30;
                --v5;
              }
              while ( v5 );
              v7 = (struct _KEVENT *)(a1 + 632);
            }
            ++*(_DWORD *)(a1 + 768);
            if ( v29 )
            {
              v8 = (__int64 *)(a1 + 816);
              *(_QWORD *)(a1 + 776) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
              _InterlockedOr(v44, 0);
              *(_WORD *)(a1 + 788) |= 1u;
              ++*(_DWORD *)(a1 + 764);
            }
            *(_DWORD *)(a1 + 760) = 0;
            *(_QWORD *)(a1 + 752) = 0LL;
          }
        }
      }
      if ( (__int64 *)*v8 == v8 )
      {
        v6 = (struct _KEVENT *)(a1 + 792);
        v25 = v4->SpecialApcDisable + 1;
        v4->SpecialApcDisable = v25;
        if ( !v25 )
        {
          v6 = (struct _KEVENT *)(a1 + 792);
          if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
          {
            KiCheckForKernelApcDelivery();
            goto LABEL_27;
          }
        }
      }
      else
      {
        v12 = *(_DWORD *)(a1 + 1040);
        if ( (v12 & 1) != 0
          && (v12 & 0xFFFFFFFE) == 0
          && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1040), 0, 1) == 1 )
        {
          v32 = v4->SpecialApcDisable + 1;
          v4->SpecialApcDisable = v32;
          if ( !v32 && ($CD287064E7C9F7953DE243E927CFCB99 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
            KiCheckForKernelApcDelivery();
          KeResetEvent((PRKEVENT)(a1 + 672));
        }
        else
        {
          if ( !MiUseLowIoPriorityForModifiedPages(a1) )
          {
            if ( *(_DWORD *)(a1 + 628) )
              IoBoostThreadIoPriority((__int64)v4, 2, 0);
            LODWORD(v5) = 2;
            v13 = -1;
            goto LABEL_21;
          }
          if ( *(_QWORD *)(a1 + 5744) >= *(_QWORD *)(a1 + 664) )
          {
            *(_DWORD *)(a1 + 656) = 4;
            v13 = KeSetActualBasePriorityThread((__int64)v4, 4u);
LABEL_21:
            v14 = *v8;
            v15 = *(_QWORD **)*v8;
            if ( *(__int64 **)(*v8 + 8) != v8 || v15[1] != v14 )
              __fastfail(3u);
            *v8 = (__int64)v15;
            v15[1] = v8;
            v16 = (*(_DWORD *)(v14 + 40) ^ (4 * v5)) & 0x1C;
            *(_QWORD *)v14 = 97LL;
            *(_DWORD *)(v14 + 40) ^= v16;
            LODWORD(v5) = 0;
            LOWORD(v16) = v4->SpecialApcDisable + 1;
            v4->SpecialApcDisable = v16;
            if ( !(_WORD)v16 && ($CD287064E7C9F7953DE243E927CFCB99 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
              KiCheckForKernelApcDelivery();
            MiGatherPagefilePages(v14);
            v7 = (struct _KEVENT *)(a1 + 632);
            if ( v13 != -1 )
            {
              if ( KeQueryPriorityThread(v4) != 18 )
                KeSetActualBasePriorityThread((__int64)v4, v13);
              *(_DWORD *)(a1 + 656) = 18;
              v7 = (struct _KEVENT *)(a1 + 632);
            }
            goto LABEL_27;
          }
          v33 = v4->SpecialApcDisable + 1;
          v4->SpecialApcDisable = v33;
          if ( !v33 && ($CD287064E7C9F7953DE243E927CFCB99 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
            KiCheckForKernelApcDelivery();
        }
LABEL_40:
        *(_QWORD *)(a1 + 752) = 0LL;
        *(_DWORD *)(a1 + 760) = 0;
        if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, 0, 0, 0LL, &v53) )
          break;
LABEL_27:
        v6 = (struct _KEVENT *)(a1 + 792);
      }
    }
  }
  v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 864), 1LL, 0LL);
  if ( v34 >= 2 )
    ExfWaitForRundownProtectionRelease((volatile signed __int64 *)(a1 + 864), v34);
  if ( *(_DWORD *)(a1 + 636) )
  {
    KeResetEvent(v7);
    if ( *(_DWORD *)(a1 + 628) )
      IoBoostThreadIoPriority((__int64)v4, 2, 0);
  }
  v35 = *(_DWORD *)(a1 + 5336);
  if ( v35 )
  {
    v36 = (_QWORD *)(a1 + 5344);
    Object[0] = (PVOID)*(unsigned int *)(a1 + 5336);
    v52 = (_QWORD *)(a1 + 5344);
    v37 = v35;
    do
    {
      if ( *v36 )
      {
        --v4->SpecialApcDisable;
        v38 = 2LL;
        v50 = 2LL;
        v39 = 72LL;
        do
        {
          v40 = *(_QWORD **)(v39 + *v36);
          if ( v40 )
          {
            while ( *v40 == 97LL )
            {
              *(_BYTE *)(a1 + 609) = 1;
              v41 = v4->SpecialApcDisable + 1;
              v4->SpecialApcDisable = v41;
              if ( !v41 && ($CD287064E7C9F7953DE243E927CFCB99 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
                KiCheckForKernelApcDelivery();
              KeWaitForSingleObject((PVOID)(a1 + 832), WrPageOut, 0, 0, 0LL);
              --v4->SpecialApcDisable;
            }
            v36 = v52;
            v38 = v50;
          }
          v39 += 8LL;
          v50 = --v38;
        }
        while ( v38 );
        v37 = (unsigned __int64)Object[0];
        v42 = v4->SpecialApcDisable + 1;
        v4->SpecialApcDisable = v42;
        if ( !v42 && ($CD287064E7C9F7953DE243E927CFCB99 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
          KiCheckForKernelApcDelivery();
      }
      ++v36;
      --v37;
      v52 = v36;
      Object[0] = (PVOID)v37;
    }
    while ( v37 );
  }
  return KeSetActualBasePriorityThread((__int64)v4, v49);
}
