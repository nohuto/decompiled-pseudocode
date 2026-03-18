/*
 * XREFs of ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C002A290
 * Callers:
 *     <none>
 * Callees:
 *     FreeObject @ 0x1C0022A50 (FreeObject.c)
 *     HmgDecProcessHandleCount @ 0x1C002522C (HmgDecProcessHandleCount.c)
 *     ?hGetFreeHandle@@YAPEAUHOBJ__@@E@Z @ 0x1C002A5E0 (-hGetFreeHandle@@YAPEAUHOBJ__@@E@Z.c)
 *     HmgIncProcessHandleCount @ 0x1C002A680 (HmgIncProcessHandleCount.c)
 *     AllocateObject @ 0x1C002B640 (AllocateObject.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002D9A0 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00B5CC0 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, DC **a2)
{
  __int64 v2; // r15
  __int64 Object; // rdi
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rax
  struct _ERESOURCE *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct HOBJ__ *FreeHandle; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  struct HOBJ__ *v21; // r12
  struct _ENTRY *v22; // r14
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // ebx
  unsigned int v28; // edx
  unsigned int CurrentProcessId; // eax
  bool v30; // zf
  __int64 v32; // [rsp+30h] [rbp-48h] BYREF
  int v33; // [rsp+38h] [rbp-40h]
  unsigned int v34; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v35; // [rsp+44h] [rbp-34h]

  v2 = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  Object = AllocateObject(0x9D8uLL);
  if ( !Object )
    goto LABEL_35;
  v6 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v7, v8);
  if ( ThreadWin32Thread )
  {
    v13 = *ThreadWin32Thread;
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 72);
      if ( v14 )
        v6 = *(_DWORD *)(v14 + 8);
    }
  }
  v15 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(v11, v10);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v15);
    LODWORD(v15) = (_DWORD)ghsemHmgr;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((unsigned int)L"ghsemHmgr", v10, v12, (_DWORD)v15, 16, (__int64)L"ghsemHmgr");
  if ( !(unsigned int)HmgIncProcessHandleCount(v6) )
  {
LABEL_34:
    GreReleaseHmgrSemaphore(v17, v16);
    FreeObject(Object);
LABEL_35:
    Object = 0LL;
    goto LABEL_36;
  }
  FreeHandle = hGetFreeHandle(1u);
  v21 = FreeHandle;
  if ( !FreeHandle )
  {
    HmgDecProcessHandleCount(v6, v19, v20);
    goto LABEL_34;
  }
  v22 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)FreeHandle);
  v23 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), 3LL * (unsigned __int16)FreeHandle, v20);
  if ( v23 )
  {
    v2 = *v23;
    if ( *v23 )
      v2 = *(_QWORD *)(v2 + 72);
  }
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v32, v22, 0, (unsigned __int16)v21, 0);
  if ( v33 )
  {
    v26 = v32;
    if ( v32 )
    {
      *((_BYTE *)v22 + 15) &= 0x40u;
      v27 = *((_DWORD *)v22 + 2);
      *(_QWORD *)v22 = Object;
      *((_BYTE *)v22 + 14) = 1;
      *((_QWORD *)v22 + 2) = 0LL;
      if ( v2 )
      {
        v28 = *(_DWORD *)(v2 + 8) ^ ((unsigned __int8)v27 ^ (unsigned __int8)*(_DWORD *)(v2 + 8)) & 1;
        *(_QWORD *)(Object + 16) = *(_QWORD *)v2;
      }
      else
      {
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        *(_QWORD *)(Object + 16) = KeGetCurrentThread();
        v26 = v32;
        v28 = v27 & 1 | CurrentProcessId & 0xFFFFFFFC;
      }
      ++gcCurHmgr;
      *(_DWORD *)(Object + 8) = 0;
      *(_WORD *)(Object + 12) = 1;
      *((_QWORD *)v22 + 2) = 0LL;
      *((_DWORD *)v22 + 2) = v28;
      if ( (*(_BYTE *)(v26 + 15) & 0x40) != 0 )
      {
        ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v35);
      }
      else
      {
        _m_prefetchw((const void *)(v26 + 8));
        v34 = *(_DWORD *)(v26 + 8) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)(v26 + 8), v34);
      }
    }
    KeLeaveCriticalRegion();
  }
  v30 = WPP_MAIN_CB.DeviceLock.Header.LockNV == 0;
  *(_QWORD *)Object = v21;
  if ( !v30 && gpentHmgrStacks )
    RECSTACKBACKTRACE((unsigned __int16)v21);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v24, &LockRelease, v25, ghsemHmgr, L"ghsemHmgr");
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion();
  }
LABEL_36:
  *(_QWORD *)this = Object;
  if ( Object )
  {
    *(_DWORD *)(Object + 36) = 0;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 1512LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 48LL) = *((_QWORD *)*a2 + 6);
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)this + 536LL;
    DC::vCopyTo(*a2, this);
  }
  return this;
}
