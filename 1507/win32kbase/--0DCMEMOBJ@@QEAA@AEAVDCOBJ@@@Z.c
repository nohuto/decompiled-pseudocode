/*
 * XREFs of ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C004AA70
 * Callers:
 *     <none>
 * Callees:
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     HmgDecProcessHandleCount @ 0x1C00386E0 (HmgDecProcessHandleCount.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003DDD0 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hGetFreeHandle@@YAPEAUHOBJ__@@E@Z @ 0x1C004ADE0 (-hGetFreeHandle@@YAPEAUHOBJ__@@E@Z.c)
 *     HmgIncProcessHandleCount @ 0x1C004AE80 (HmgIncProcessHandleCount.c)
 *     AllocateObject @ 0x1C004C110 (AllocateObject.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00AEF88 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00B31EC (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     Template_pqz @ 0x1C00BEC08 (Template_pqz.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, DC **a2)
{
  __int64 v2; // r15
  __int64 Object; // rsi
  unsigned int v6; // ebp
  __int64 *ThreadWin32Thread; // rax
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rax
  struct _ERESOURCE *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct HOBJ__ *FreeHandle; // rax
  struct HOBJ__ *v18; // r12
  __int64 v19; // r14
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  int v24; // ebx
  unsigned int v25; // edx
  unsigned int CurrentProcessId; // eax
  bool v27; // zf
  __int64 v28; // rcx
  struct _W32THREAD *v29; // rax
  _QWORD *v30; // rax
  __int64 v32; // [rsp+30h] [rbp-48h] BYREF
  int v33; // [rsp+38h] [rbp-40h]
  unsigned int v34; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v35; // [rsp+44h] [rbp-34h]

  v2 = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  Object = AllocateObject(0x9F8uLL);
  if ( !Object )
    goto LABEL_35;
  v6 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v11 = *ThreadWin32Thread;
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 72);
      if ( v12 )
        v6 = *(_DWORD *)(v12 + 8);
    }
  }
  v13 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(v9);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v13);
    LODWORD(v13) = (_DWORD)ghsemHmgr;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((unsigned int)L"ghsemHmgr", v8, v10, (_DWORD)v13, 16, (__int64)L"ghsemHmgr");
  if ( !(unsigned int)HmgIncProcessHandleCount(v6) )
  {
LABEL_34:
    GreReleaseHmgrSemaphore(v15, v14, v16);
    FreeObject(Object);
LABEL_35:
    Object = 0LL;
    goto LABEL_36;
  }
  FreeHandle = hGetFreeHandle(1u);
  v18 = FreeHandle;
  if ( !FreeHandle )
  {
    HmgDecProcessHandleCount(v6);
    goto LABEL_34;
  }
  v19 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)FreeHandle;
  v20 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v20 )
  {
    v2 = *v20;
    if ( *v20 )
      v2 = *(_QWORD *)(v2 + 72);
  }
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v32, (struct _ENTRY *)v19, 0, (unsigned __int16)v18, 0);
  if ( v33 )
  {
    v23 = v32;
    if ( v32 )
    {
      *(_BYTE *)(v19 + 15) &= 0x40u;
      v24 = *(_DWORD *)(v19 + 8);
      *(_QWORD *)v19 = Object;
      *(_BYTE *)(v19 + 14) = 1;
      *(_QWORD *)(v19 + 16) = 0LL;
      if ( v2 )
      {
        v25 = *(_DWORD *)(v2 + 8) ^ ((unsigned __int8)v24 ^ (unsigned __int8)*(_DWORD *)(v2 + 8)) & 1;
        *(_QWORD *)(Object + 16) = *(_QWORD *)v2;
      }
      else
      {
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        *(_QWORD *)(Object + 16) = KeGetCurrentThread();
        v23 = v32;
        v25 = v24 & 1 | CurrentProcessId & 0xFFFFFFFC;
      }
      ++gcCurHmgr;
      *(_DWORD *)(Object + 8) = 0;
      *(_WORD *)(Object + 12) = 1;
      *(_QWORD *)(v19 + 16) = 0LL;
      *(_DWORD *)(v19 + 8) = v25;
      if ( (*(_BYTE *)(v23 + 15) & 0x40) != 0 )
      {
        ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v35, 0LL);
      }
      else
      {
        _m_prefetchw((const void *)(v23 + 8));
        v34 = *(_DWORD *)(v23 + 8) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)(v23 + 8), v34);
      }
    }
    KeLeaveCriticalRegion();
  }
  v27 = LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) == 0;
  *(_QWORD *)Object = v18;
  if ( !v27 && gpentHmgrStacks )
    RECSTACKBACKTRACE((unsigned __int16)v18);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v21, &LockRelease, v22, ghsemHmgr);
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion(v28);
  }
LABEL_36:
  *(_QWORD *)this = Object;
  if ( Object )
  {
    v29 = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(*(_QWORD *)this + 2544LL) = UMPDOBJ::GetThreadCurrentObj(v29);
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = 0;
    v30 = (_QWORD *)(*(_QWORD *)this + 1504LL);
    if ( *(_QWORD *)this != -1504LL )
    {
      *(_QWORD *)(*(_QWORD *)this + 1512LL) = 0LL;
      *v30 = &CPushLock::`vftable';
      v30[2] = 0LL;
    }
    *(_QWORD *)(*(_QWORD *)this + 1536LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 48LL) = *((_QWORD *)*a2 + 6);
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)this + 536LL;
    DC::vCopyTo(*a2, this);
  }
  return this;
}
