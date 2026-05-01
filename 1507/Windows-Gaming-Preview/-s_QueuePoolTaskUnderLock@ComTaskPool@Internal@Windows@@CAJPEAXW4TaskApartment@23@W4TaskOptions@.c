/*
 * XREFs of ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x180010588
 * Callers:
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180010C44 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 * Callees:
 *     ?PushBack@TaskList@ComTaskPool@Internal@Windows@@QEAAJ$$QEAUTaskData@234@@Z @ 0x18000F39C (-PushBack@TaskList@ComTaskPool@Internal@Windows@@QEAAJ$$QEAUTaskData@234@@Z.c)
 *     ??$Make@VCThread@ComTaskPool@Internal@Windows@@AEAW4TaskApartment@34@AEAW4TaskOptions@34@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCThread@ComTaskPool@Internal@Windows@@@12@AEAW4TaskApartment@Internal@Windows@@AEAW4TaskOptions@56@@Z @ 0x18000F510 (--$Make@VCThread@ComTaskPool@Internal@Windows@@AEAW4TaskApartment@34@AEAW4TaskOptions@34@@Detail.c)
 *     ?StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x18000F6AC (-StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ?StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x180010370 (-StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ?SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoolTask@34@@Z @ 0x18001049C (-SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoo.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
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
  int v8; // r14d
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
  __int64 v21; // rdi
  struct Windows::Internal::ComTaskPool::CThread **v22; // r13
  unsigned __int64 v23; // rax
  struct _TP_TIMER *v24; // rcx
  __int64 v25; // rdi
  HMODULE *v26; // rbx
  HMODULE *v27; // rax
  char v29; // [rsp+38h] [rbp-D0h]
  char v30; // [rsp+39h] [rbp-CFh]
  char v31; // [rsp+3Ah] [rbp-CEh]
  int v32; // [rsp+3Ch] [rbp-CCh]
  _FILETIME pftDueTime; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v35; // [rsp+50h] [rbp-B8h]
  __int64 v36; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v37; // [rsp+60h] [rbp-A8h]
  PVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v39[4]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v40; // [rsp+80h] [rbp-88h]
  __int64 v41; // [rsp+88h] [rbp-80h]
  _DWORD v42[4]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-68h]
  __int64 v44; // [rsp+A8h] [rbp-60h]
  _DWORD v45[4]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-48h]
  __int64 v47; // [rsp+C8h] [rbp-40h]
  _DWORD v48[4]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v49; // [rsp+E0h] [rbp-28h]
  __int64 v50; // [rsp+E8h] [rbp-20h]
  _DWORD v51[4]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v52; // [rsp+100h] [rbp-8h]
  __int64 v53; // [rsp+108h] [rbp+0h]
  __int64 v54; // [rsp+110h] [rbp+8h]
  int v56; // [rsp+160h] [rbp+58h] BYREF
  unsigned int v57; // [rsp+168h] [rbp+60h] BYREF

  v57 = a3;
  v56 = a2;
  v54 = -2LL;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  v11 = (struct Windows::Internal::ComTaskPool::CThread **)a7;
  *a7 = 0LL;
  started = 0;
  LODWORD(v34) = a3 & 2;
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
        v39[0] = v9;
        v39[1] = a3;
        v39[2] = a4;
        v40 = a5;
        if ( a5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
        v41 = 0LL;
        started = Windows::Internal::ComTaskPool::TaskList::PushBack((_QWORD *)i + 3, v39);
        if ( v40 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
        if ( started >= 0 && *((int *)i + 12) < 0 )
        {
          *v11 = i;
          (*(void (__fastcall **)(struct Windows::Internal::ComTaskPool::CThread *))(*(_QWORD *)i + 8LL))(i);
        }
        return (unsigned int)started;
      }
    }
  }
  if ( (a3 & 0x13) != 0 || (v30 = 1, a1) )
    v30 = 0;
  v17 = a3 >> 2;
  LOBYTE(v17) = (a3 & 4) != 0;
  pftDueTime.dwLowDateTime = v17;
  v31 = a3 & 1;
  v37 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  TickCount = GetTickCount();
  v32 = TickCount;
  v21 = 0LL;
  v29 = 0;
  v22 = &Windows::Internal::ComTaskPool::s_pThreadList;
  if ( Windows::Internal::ComTaskPool::s_pThreadList )
  {
    LOBYTE(v18) = v30;
    while ( 1 )
    {
      v21 = (__int64)*v22;
      if ( (v9 == *((_DWORD *)*v22 + 20) || v9 == 3)
        && (((unsigned __int8)v8 ^ *(_BYTE *)(v21 + 84)) & 9) == 0
        && *(int *)(v21 + 48) >= 0 )
      {
        if ( *(_QWORD *)(v21 + 144) || *(_BYTE *)(v21 + 96) )
        {
          v29 = 1;
          if ( *(_DWORD *)(v21 + 136) == a4 )
          {
            if ( Windows::Internal::ComTaskPool::s_fCanReuseThreads )
            {
              if ( Windows::Internal::ComTaskPool::s_dwThreadIdReuse == *(_DWORD *)(v21 + 88) )
              {
                Windows::Internal::ComTaskPool::s_dwThreadIdReuse = 0;
                if ( !*(_QWORD *)(v21 + 24) && !v10 && *(int *)(v21 + 92) <= 1 )
                {
                  v45[0] = v56;
                  v45[1] = v57;
                  v45[2] = a4;
                  v46 = a5;
                  if ( a5 )
                    (*(void (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD))(*(_QWORD *)a5 + 8LL))(
                      a5,
                      v18,
                      v20,
                      pftDueTime.dwLowDateTime);
                  v47 = 0LL;
                  started = Windows::Internal::ComTaskPool::TaskList::PushBack((_QWORD *)(v21 + 24), v45);
                  if ( v46 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
                  if ( started >= 0 )
                  {
                    *(_BYTE *)(v21 + 97) = 1;
                    if ( !*(_QWORD *)(v21 + 104) )
                      *(_QWORD *)(v21 + 104) = CreateThreadpoolTimer(
                                                 (PTP_TIMER_CALLBACK)Windows::Internal::ComTaskPool::CThread::s_CheckForDeadlockTimerCallback,
                                                 (PVOID)v21,
                                                 0LL);
                    v24 = *(struct _TP_TIMER **)(v21 + 104);
                    if ( v24 )
                    {
                      pftDueTime.dwLowDateTime = -5000000;
                      pftDueTime.dwHighDateTime = -1;
                      SetThreadpoolTimer(v24, &pftDueTime, 0, 0xFAu);
                    }
                  }
                  return (unsigned int)started;
                }
              }
              TickCount = v32;
            }
            if ( v30 )
            {
              v23 = v35;
              if ( TickCount - *(_DWORD *)(v21 + 160) < 0xBB8 )
                v23 = ++v35;
              v20 = v37 + 1;
              v37 = v20;
              if ( v20 >= 0x64 || v23 >= 8 )
              {
                v42[0] = v56;
                v42[1] = v57;
                v42[2] = a4;
                v43 = a5;
                if ( a5 )
                  (*(void (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD))(*(_QWORD *)a5 + 8LL))(
                    a5,
                    v18,
                    v20,
                    pftDueTime.dwLowDateTime);
                v44 = 0LL;
                started = Windows::Internal::ComTaskPool::TaskList::PushBack(
                            &Windows::Internal::ComTaskPool::s_taskFloodingList,
                            v42);
                v25 = v43;
                goto LABEL_96;
              }
            }
            v8 = v57;
            v9 = v56;
          }
        }
        else
        {
          if ( *(int *)(v21 + 92) <= 1 )
            break;
          if ( *(_DWORD *)(v21 + 136) == a4 )
          {
            if ( v31 && (*(_BYTE *)(v21 + 132) & 1) != 0 )
              break;
            if ( LOBYTE(pftDueTime.dwLowDateTime) )
            {
              if ( (*(_BYTE *)(v21 + 132) & 4) != 0 && ++v36 == 30 )
                break;
            }
          }
        }
      }
      v22 = (struct Windows::Internal::ComTaskPool::CThread **)(v21 + 16);
      if ( !*(_QWORD *)(v21 + 16) )
        goto LABEL_77;
    }
  }
  if ( !*v22 )
  {
LABEL_77:
    Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CThread,enum Windows::Internal::TaskApartment &,enum Windows::Internal::TaskOptions &>(
      &pv,
      &v56,
      (int *)&v57);
    v26 = (HMODULE *)pv;
    started = pv == 0LL ? 0x8007000E : 0;
    if ( pv )
    {
      v51[0] = v9;
      v51[1] = v8;
      v51[2] = a4;
      v52 = a5;
      if ( a5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
      v53 = 0LL;
      Windows::Internal::ComTaskPool::CThread::SetThreadTask((__int64)v26, (__int64)v51, v32, a1, 0LL);
      if ( v52 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
      if ( v29 && !(_DWORD)v34 )
      {
        started = Windows::Internal::ComTaskPool::CThread::StartThreadWithFallback(v26);
        goto LABEL_87;
      }
      started = Windows::Internal::ComTaskPool::CThread::StartThread(v26);
      if ( started >= 0 )
      {
        *a7 = v26;
        (*((void (__fastcall **)(HMODULE *))*v26 + 1))(v26);
LABEL_87:
        if ( started >= 0 )
        {
          v27 = v26;
          v26 = 0LL;
          *v22 = (struct Windows::Internal::ComTaskPool::CThread *)v27;
        }
      }
    }
    if ( v26 )
      (*((void (__fastcall **)(HMODULE *))*v26 + 2))(v26);
    return (unsigned int)started;
  }
  if ( Windows::Internal::ComTaskPool::s_dwThreadIdReuse == *(_DWORD *)(v21 + 88) )
    Windows::Internal::ComTaskPool::s_dwThreadIdReuse = 0;
  v48[0] = v56;
  v48[1] = v57;
  v48[2] = a4;
  v49 = a5;
  if ( a5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
    v10 = a1;
  }
  v50 = 0LL;
  Windows::Internal::ComTaskPool::CThread::SetThreadTask(v21, (__int64)v48, v32, v10, 0LL);
  v25 = v49;
LABEL_96:
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return (unsigned int)started;
}
