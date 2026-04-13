/*
 * XREFs of ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x180005608
 * Callers:
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180005368 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 * Callees:
 *     ?PushBack@TaskList@ComTaskPool@Internal@Windows@@QEAAJ$$QEAUTaskData@234@@Z @ 0x1800043AC (-PushBack@TaskList@ComTaskPool@Internal@Windows@@QEAAJ$$QEAUTaskData@234@@Z.c)
 *     ?SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoolTask@34@@Z @ 0x180004758 (-SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoo.c)
 *     ?StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x1800048C8 (-StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ?StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x180004A24 (-StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ??$Make@VCThread@ComTaskPool@Internal@Windows@@AEAW4TaskApartment@34@AEAW4TaskOptions@34@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCThread@ComTaskPool@Internal@Windows@@@12@AEAW4TaskApartment@Internal@Windows@@AEAW4TaskOptions@56@@Z @ 0x18000E0E0 (--$Make@VCThread@ComTaskPool@Internal@Windows@@AEAW4TaskApartment@34@AEAW4TaskOptions@34@@Detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::s_QueuePoolTaskUnderLock(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        HMODULE *a5,
        _QWORD *a6,
        HMODULE **a7)
{
  unsigned int v8; // esi
  int v9; // r14d
  struct Windows::Internal::ComTaskPool::CThread **v11; // r12
  signed int started; // edi
  struct Windows::Internal::ComTaskPool::CThread *i; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  DWORD v17; // eax
  __int64 v18; // rdx
  DWORD TickCount; // ecx
  unsigned __int64 v20; // r8
  __int64 dwLowDateTime; // r9
  __int64 v22; // rbx
  struct Windows::Internal::ComTaskPool::CThread **v23; // r12
  unsigned __int64 v24; // rax
  struct _TP_TIMER *v25; // rcx
  HMODULE *v26; // rcx
  HMODULE *v27; // rbx
  HMODULE *v28; // rax
  HMODULE v29; // rax
  char v31; // [rsp+38h] [rbp-D0h]
  char v32; // [rsp+39h] [rbp-CFh]
  char v33; // [rsp+3Ah] [rbp-CEh]
  int v34; // [rsp+3Ch] [rbp-CCh]
  _FILETIME pftDueTime; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v37; // [rsp+50h] [rbp-B8h]
  __int64 v38; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v39; // [rsp+60h] [rbp-A8h]
  PVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v41[4]; // [rsp+70h] [rbp-98h] BYREF
  HMODULE *v42; // [rsp+80h] [rbp-88h]
  __int64 v43; // [rsp+88h] [rbp-80h]
  _DWORD v44[4]; // [rsp+90h] [rbp-78h] BYREF
  HMODULE *v45; // [rsp+A0h] [rbp-68h]
  __int64 v46; // [rsp+A8h] [rbp-60h]
  _DWORD v47[4]; // [rsp+B0h] [rbp-58h] BYREF
  HMODULE *v48; // [rsp+C0h] [rbp-48h]
  __int64 v49; // [rsp+C8h] [rbp-40h]
  _DWORD v50[4]; // [rsp+D0h] [rbp-38h] BYREF
  HMODULE *v51; // [rsp+E0h] [rbp-28h]
  __int64 v52; // [rsp+E8h] [rbp-20h]
  _DWORD v53[4]; // [rsp+F0h] [rbp-18h] BYREF
  HMODULE *v54; // [rsp+100h] [rbp-8h]
  __int64 v55; // [rsp+108h] [rbp+0h]
  __int64 v56; // [rsp+110h] [rbp+8h]
  int v57; // [rsp+160h] [rbp+58h] BYREF
  unsigned int v58; // [rsp+168h] [rbp+60h] BYREF

  v58 = a3;
  v57 = a2;
  v56 = -2LL;
  v8 = a3;
  v9 = a2;
  v11 = (struct Windows::Internal::ComTaskPool::CThread **)a7;
  *a7 = 0LL;
  started = 0;
  LODWORD(v36) = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    for ( i = Windows::Internal::ComTaskPool::s_pThreadList;
          i;
          i = (struct Windows::Internal::ComTaskPool::CThread *)*((_QWORD *)i + 2) )
    {
      if ( *((_DWORD *)i + 34) == a4
        && *((_QWORD *)i + 18)
        && (a2 == *((_DWORD *)i + 20) || a2 == 3)
        && (((unsigned __int8)a3 ^ *((_BYTE *)i + 84)) & 9) == 0
        && (*((_BYTE *)i + 132) & 2) != 0 )
      {
        if ( (a3 & 0x100) != 0 )
        {
          v14 = *((_QWORD *)i + 3);
          if ( v14 )
          {
            *((_QWORD *)i + 3) = *(_QWORD *)(v14 + 24);
            *(_QWORD *)(v14 + 24) = 0LL;
            if ( *((_QWORD *)i + 4) == v14 )
              *((_QWORD *)i + 4) = 0LL;
            v15 = a6;
            while ( 1 )
            {
              v16 = v15[1];
              if ( v16 )
                *(_QWORD *)(v16 + 24) = v14;
              else
                *v15 = v14;
              v15[1] = v14;
              v14 = *((_QWORD *)i + 3);
              if ( !v14 )
                break;
              *((_QWORD *)i + 3) = *(_QWORD *)(v14 + 24);
              *(_QWORD *)(v14 + 24) = 0LL;
              if ( *((_QWORD *)i + 4) == v14 )
                *((_QWORD *)i + 4) = 0LL;
            }
          }
        }
        v41[0] = v9;
        v41[1] = a3;
        v41[2] = a4;
        v42 = a5;
        if ( a5 )
          (*((void (__fastcall **)(HMODULE *))*a5 + 1))(a5);
        v43 = 0LL;
        started = Windows::Internal::ComTaskPool::TaskList::PushBack((_QWORD *)i + 3, v41);
        if ( v42 )
          (*((void (__fastcall **)(HMODULE *))*v42 + 2))(v42);
        if ( started >= 0 && *((int *)i + 12) < 0 )
        {
          *v11 = i;
          (*(void (__fastcall **)(struct Windows::Internal::ComTaskPool::CThread *))(*(_QWORD *)i + 8LL))(i);
        }
        return (unsigned int)started;
      }
    }
  }
  if ( (a3 & 0x13) != 0 || (v31 = 1, a1) )
    v31 = 0;
  v17 = a3 >> 2;
  LOBYTE(v17) = (a3 & 4) != 0;
  pftDueTime.dwLowDateTime = v17;
  v33 = a3 & 1;
  v39 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  TickCount = GetTickCount();
  v34 = TickCount;
  v22 = 0LL;
  v32 = 0;
  v23 = &Windows::Internal::ComTaskPool::s_pThreadList;
  if ( Windows::Internal::ComTaskPool::s_pThreadList )
  {
    LOBYTE(v18) = v31;
    dwLowDateTime = pftDueTime.dwLowDateTime;
    while ( 1 )
    {
      v22 = (__int64)*v23;
      if ( (v9 == *((_DWORD *)*v23 + 20) || v9 == 3)
        && (((unsigned __int8)v8 ^ *(_BYTE *)(v22 + 84)) & 9) == 0
        && *(int *)(v22 + 48) >= 0 )
      {
        if ( *(_QWORD *)(v22 + 144) || *(_BYTE *)(v22 + 96) )
        {
          v32 = 1;
          if ( *(_DWORD *)(v22 + 136) == a4 )
          {
            if ( Windows::Internal::ComTaskPool::s_fCanReuseThreads )
            {
              if ( Windows::Internal::ComTaskPool::s_dwThreadIdReuse == *(_DWORD *)(v22 + 88) )
              {
                Windows::Internal::ComTaskPool::s_dwThreadIdReuse = 0;
                if ( !*(_QWORD *)(v22 + 24) && !a1 && *(int *)(v22 + 92) <= 1 )
                {
                  v44[0] = v57;
                  v44[1] = v58;
                  v44[2] = a4;
                  v45 = a5;
                  if ( a5 )
                    (*((void (__fastcall **)(HMODULE *, __int64, unsigned __int64, _QWORD))*a5 + 1))(
                      a5,
                      v18,
                      v20,
                      pftDueTime.dwLowDateTime);
                  v46 = 0LL;
                  started = Windows::Internal::ComTaskPool::TaskList::PushBack((_QWORD *)(v22 + 24), v44);
                  if ( v45 )
                    (*((void (__fastcall **)(HMODULE *))*v45 + 2))(v45);
                  if ( started >= 0 )
                  {
                    *(_BYTE *)(v22 + 97) = 1;
                    if ( !*(_QWORD *)(v22 + 104) )
                      *(_QWORD *)(v22 + 104) = CreateThreadpoolTimer(
                                                 (PTP_TIMER_CALLBACK)Windows::Internal::ComTaskPool::CThread::s_CheckForDeadlockTimerCallback,
                                                 (PVOID)v22,
                                                 0LL);
                    v25 = *(struct _TP_TIMER **)(v22 + 104);
                    if ( v25 )
                    {
                      pftDueTime.dwLowDateTime = -5000000;
                      pftDueTime.dwHighDateTime = -1;
                      SetThreadpoolTimer(v25, &pftDueTime, 0, 0xFAu);
                    }
                  }
                  return (unsigned int)started;
                }
              }
              TickCount = v34;
            }
            if ( v31 )
            {
              v24 = v37;
              if ( TickCount - *(_DWORD *)(v22 + 160) < 0xBB8 )
                v24 = ++v37;
              v20 = v39 + 1;
              v39 = v20;
              if ( v20 >= 0x64 || v24 >= 8 )
              {
                v47[0] = v57;
                v47[1] = v58;
                v47[2] = a4;
                v48 = a5;
                if ( a5 )
                  (*((void (__fastcall **)(HMODULE *, __int64, unsigned __int64, _QWORD))*a5 + 1))(
                    a5,
                    v18,
                    v20,
                    pftDueTime.dwLowDateTime);
                v49 = 0LL;
                started = Windows::Internal::ComTaskPool::TaskList::PushBack(
                            &Windows::Internal::ComTaskPool::s_taskFloodingList,
                            v47);
                v26 = v48;
                goto LABEL_96;
              }
            }
            v8 = v58;
            v9 = v57;
          }
        }
        else
        {
          if ( *(int *)(v22 + 92) <= 1 )
            break;
          if ( *(_DWORD *)(v22 + 136) == a4 )
          {
            if ( v33 && (*(_BYTE *)(v22 + 132) & 1) != 0 )
              break;
            if ( LOBYTE(pftDueTime.dwLowDateTime) )
            {
              if ( (*(_BYTE *)(v22 + 132) & 4) != 0 && ++v38 == 30 )
                break;
            }
          }
        }
      }
      v23 = (struct Windows::Internal::ComTaskPool::CThread **)(v22 + 16);
      if ( !*(_QWORD *)(v22 + 16) )
        goto LABEL_77;
    }
  }
  if ( !*v23 )
  {
LABEL_77:
    Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CThread,enum Windows::Internal::TaskApartment &,enum Windows::Internal::TaskOptions &>(
      &pv,
      &v57,
      &v58,
      dwLowDateTime);
    v27 = (HMODULE *)pv;
    started = pv == 0LL ? 0x8007000E : 0;
    if ( pv )
    {
      v50[0] = v9;
      v50[1] = v8;
      v50[2] = a4;
      v51 = a5;
      if ( a5 )
        (*((void (__fastcall **)(HMODULE *))*a5 + 1))(a5);
      v52 = 0LL;
      Windows::Internal::ComTaskPool::CThread::SetThreadTask((__int64)v27, (__int64)v50, v34, a1, 0LL);
      if ( v51 )
        (*((void (__fastcall **)(HMODULE *))*v51 + 2))(v51);
      if ( v32 && !(_DWORD)v36 )
      {
        started = Windows::Internal::ComTaskPool::CThread::StartThreadWithFallback(v27);
        goto LABEL_87;
      }
      started = Windows::Internal::ComTaskPool::CThread::StartThread(v27);
      if ( started >= 0 )
      {
        *a7 = v27;
        (*((void (__fastcall **)(HMODULE *))*v27 + 1))(v27);
LABEL_87:
        if ( started >= 0 )
        {
          v28 = v27;
          v27 = 0LL;
          *v23 = (struct Windows::Internal::ComTaskPool::CThread *)v28;
        }
      }
    }
    if ( !v27 )
      return (unsigned int)started;
    v29 = *v27;
    v26 = v27;
LABEL_98:
    (*((void (__fastcall **)(HMODULE *))v29 + 2))(v26);
    return (unsigned int)started;
  }
  if ( Windows::Internal::ComTaskPool::s_dwThreadIdReuse == *(_DWORD *)(v22 + 88) )
    Windows::Internal::ComTaskPool::s_dwThreadIdReuse = 0;
  v53[0] = v57;
  v53[1] = v58;
  v53[2] = a4;
  v54 = a5;
  if ( a5 )
    (*((void (__fastcall **)(HMODULE *))*a5 + 1))(a5);
  v55 = 0LL;
  Windows::Internal::ComTaskPool::CThread::SetThreadTask(v22, (__int64)v53, v34, a1, 0LL);
  v26 = v54;
LABEL_96:
  if ( v26 )
  {
    v29 = *v26;
    goto LABEL_98;
  }
  return (unsigned int)started;
}
