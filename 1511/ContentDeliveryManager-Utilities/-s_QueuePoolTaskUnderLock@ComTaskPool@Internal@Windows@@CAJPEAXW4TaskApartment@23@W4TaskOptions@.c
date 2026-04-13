/*
 * XREFs of ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x180009848
 * Callers:
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180009604 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 * Callees:
 *     ?PushBack@TaskList@ComTaskPool@Internal@Windows@@QEAAJ$$QEAUTaskData@234@@Z @ 0x180008920 (-PushBack@TaskList@ComTaskPool@Internal@Windows@@QEAAJ$$QEAUTaskData@234@@Z.c)
 *     ?SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoolTask@34@@Z @ 0x1800089BC (-SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoo.c)
 *     ?StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x180008B40 (-StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ?StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x180008CBC (-StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??$Make@VCThread@ComTaskPool@Internal@Windows@@AEAW4TaskApartment@34@AEAW4TaskOptions@34@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCThread@ComTaskPool@Internal@Windows@@@12@AEAW4TaskApartment@Internal@Windows@@AEAW4TaskOptions@56@@Z @ 0x18001879C (--$Make@VCThread@ComTaskPool@Internal@Windows@@AEAW4TaskApartment@34@AEAW4TaskOptions@34@@Detail.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::s_QueuePoolTaskUnderLock(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        HMODULE **a7)
{
  unsigned int v8; // r14d
  int v9; // r15d
  __int64 v10; // rbx
  struct Windows::Internal::ComTaskPool::CThread **v11; // r13
  signed int started; // esi
  struct Windows::Internal::ComTaskPool::CThread *i; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  DWORD v17; // eax
  __int64 v18; // rdx
  DWORD TickCount; // ecx
  unsigned __int64 v20; // r8
  __int64 dwLowDateTime; // r9
  __int64 v22; // rdi
  struct Windows::Internal::ComTaskPool::CThread **v23; // r13
  unsigned __int64 v24; // rax
  struct _TP_TIMER *v25; // rcx
  __int64 v26; // rdi
  HMODULE *v27; // rbx
  HMODULE *v28; // rax
  char v30; // [rsp+38h] [rbp-D0h]
  char v31; // [rsp+39h] [rbp-CFh]
  char v32; // [rsp+3Ah] [rbp-CEh]
  int v33; // [rsp+3Ch] [rbp-CCh]
  _FILETIME pftDueTime; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v36; // [rsp+50h] [rbp-B8h]
  __int64 v37; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v38; // [rsp+60h] [rbp-A8h]
  PVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v40[4]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v41; // [rsp+80h] [rbp-88h]
  __int64 v42; // [rsp+88h] [rbp-80h]
  _DWORD v43[4]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-68h]
  __int64 v45; // [rsp+A8h] [rbp-60h]
  _DWORD v46[4]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-48h]
  __int64 v48; // [rsp+C8h] [rbp-40h]
  _DWORD v49[4]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v50; // [rsp+E0h] [rbp-28h]
  __int64 v51; // [rsp+E8h] [rbp-20h]
  _DWORD v52[4]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v53; // [rsp+100h] [rbp-8h]
  __int64 v54; // [rsp+108h] [rbp+0h]
  __int64 v55; // [rsp+110h] [rbp+8h]
  int v57; // [rsp+160h] [rbp+58h] BYREF
  unsigned int v58; // [rsp+168h] [rbp+60h] BYREF

  v58 = a3;
  v57 = a2;
  v55 = -2LL;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  v11 = (struct Windows::Internal::ComTaskPool::CThread **)a7;
  *a7 = 0LL;
  started = 0;
  LODWORD(v35) = a3 & 2;
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
        v40[0] = v9;
        v40[1] = a3;
        v40[2] = a4;
        v41 = a5;
        if ( a5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
        v42 = 0LL;
        started = Windows::Internal::ComTaskPool::TaskList::PushBack((_QWORD *)i + 3, v40);
        if ( v41 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
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
  v32 = a3 & 1;
  v38 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  TickCount = GetTickCount();
  v33 = TickCount;
  v22 = 0LL;
  v30 = 0;
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
          v30 = 1;
          if ( *(_DWORD *)(v22 + 136) == a4 )
          {
            if ( Windows::Internal::ComTaskPool::s_fCanReuseThreads )
            {
              if ( Windows::Internal::ComTaskPool::s_dwThreadIdReuse == *(_DWORD *)(v22 + 88) )
              {
                Windows::Internal::ComTaskPool::s_dwThreadIdReuse = 0;
                if ( !*(_QWORD *)(v22 + 24) && !v10 && *(int *)(v22 + 92) <= 1 )
                {
                  v46[0] = v57;
                  v46[1] = v58;
                  v46[2] = a4;
                  v47 = a5;
                  if ( a5 )
                    (*(void (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD))(*(_QWORD *)a5 + 8LL))(
                      a5,
                      v18,
                      v20,
                      pftDueTime.dwLowDateTime);
                  v48 = 0LL;
                  started = Windows::Internal::ComTaskPool::TaskList::PushBack((_QWORD *)(v22 + 24), v46);
                  if ( v47 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
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
              TickCount = v33;
            }
            if ( v31 )
            {
              v24 = v36;
              if ( TickCount - *(_DWORD *)(v22 + 160) < 0xBB8 )
                v24 = ++v36;
              v20 = v38 + 1;
              v38 = v20;
              if ( v20 >= 0x64 || v24 >= 8 )
              {
                v43[0] = v57;
                v43[1] = v58;
                v43[2] = a4;
                v44 = a5;
                if ( a5 )
                  (*(void (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD))(*(_QWORD *)a5 + 8LL))(
                    a5,
                    v18,
                    v20,
                    pftDueTime.dwLowDateTime);
                v45 = 0LL;
                started = Windows::Internal::ComTaskPool::TaskList::PushBack(
                            &Windows::Internal::ComTaskPool::s_taskFloodingList,
                            v43);
                v26 = v44;
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
            if ( v32 && (*(_BYTE *)(v22 + 132) & 1) != 0 )
              break;
            if ( LOBYTE(pftDueTime.dwLowDateTime) )
            {
              if ( (*(_BYTE *)(v22 + 132) & 4) != 0 && ++v37 == 30 )
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
      v52[0] = v9;
      v52[1] = v8;
      v52[2] = a4;
      v53 = a5;
      if ( a5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
      v54 = 0LL;
      Windows::Internal::ComTaskPool::CThread::SetThreadTask((__int64)v27, (__int64)v52, v33, a1, 0LL);
      if ( v53 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
      if ( v30 && !(_DWORD)v35 )
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
    if ( v27 )
      (*((void (__fastcall **)(HMODULE *))*v27 + 2))(v27);
    return (unsigned int)started;
  }
  if ( Windows::Internal::ComTaskPool::s_dwThreadIdReuse == *(_DWORD *)(v22 + 88) )
    Windows::Internal::ComTaskPool::s_dwThreadIdReuse = 0;
  v49[0] = v57;
  v49[1] = v58;
  v49[2] = a4;
  v50 = a5;
  if ( a5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
    v10 = a1;
  }
  v51 = 0LL;
  Windows::Internal::ComTaskPool::CThread::SetThreadTask(v22, (__int64)v49, v33, v10, 0LL);
  v26 = v50;
LABEL_96:
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  return (unsigned int)started;
}
