/*
 * XREFs of ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C005B000
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C005B4BC (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0079E40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddIssueSyncObjectOpForDevice(unsigned int a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rbp
  unsigned int v11; // edi
  __int64 v12; // rbx
  char *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  unsigned int v18; // edx
  __int64 v19; // r9
  int v20; // r8d
  __int64 v21; // rbx
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  __int64 CurrentProcess; // rax
  __int64 v25; // rcx
  struct _KEVENT *v26; // rcx
  __int64 v27; // rax
  volatile signed __int64 *v29; // rcx
  __int64 v30; // rax
  volatile signed __int64 *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  struct DXGADAPTER *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  DXGADAPTER *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  _BYTE v40[8]; // [rsp+48h] [rbp-60h] BYREF
  DXGADAPTER *v41; // [rsp+50h] [rbp-58h]
  char v42; // [rsp+58h] [rbp-50h]
  _BYTE v43[8]; // [rsp+60h] [rbp-48h] BYREF
  struct DXGADAPTER *v44; // [rsp+68h] [rbp-40h]
  char v45; // [rsp+70h] [rbp-38h]
  __int64 v46; // [rsp+78h] [rbp-30h]
  char v47; // [rsp+80h] [rbp-28h]

  v5 = a1;
  Current = DXGPROCESS::GetCurrent();
  v10 = Current;
  if ( !Current )
  {
    v11 = -1073741811;
    v12 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    *(_QWORD *)(v12 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v12);
    return v11;
  }
  v13 = (char *)Current + 192;
  if ( Current != (struct DXGPROCESS *)-192LL && *((struct _KTHREAD **)Current + 25) == KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v14 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v14);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *((_DWORD *)v13 + 4);
      if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v15, &EventBlockThread, v16, v17);
    }
    ExAcquirePushLockSharedEx(v13, 0LL);
  }
  v18 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( v18 < *((_DWORD *)v10 + 58)
    && (v19 = *((_QWORD *)v10 + 27),
        v20 = *(_DWORD *)(v19 + 16LL * v18 + 8),
        (((unsigned int)v5 >> 26) & 0x30) == (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x30))
    && (v20 & 0x1000) == 0
    && (v20 & 0xF) != 0
    && (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0xF) == 3 )
  {
    v21 = *(_QWORD *)(v19 + 16LL * v18);
    if ( v21 )
      _InterlockedIncrement64((volatile signed __int64 *)(v21 + 64));
  }
  else
  {
    v21 = 0LL;
  }
  ExReleasePushLockSharedEx(v13, 0LL);
  KeLeaveCriticalRegion();
  if ( !v21 )
  {
    v11 = -1073741811;
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v23[3] = -1073741811LL;
    CurrentProcess = PsGetCurrentProcess();
    v23[5] = v5;
    v23[4] = CurrentProcess;
    WdLogEvent5_WdError(v23);
    return v11;
  }
  v25 = *(_QWORD *)(v21 + 16);
  if ( *(_DWORD *)(v21 + 280) == 2 )
    v26 = (struct _KEVENT *)(v25 + 80);
  else
    v26 = (struct _KEVENT *)(v25 + 56);
  if ( !KeReadStateEvent(v26) )
    goto LABEL_28;
  KeEnterCriticalRegion();
  if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 80), 0) )
  {
    v29 = *(volatile signed __int64 **)(*(_QWORD *)(v21 + 16) + 16LL);
    v41 = (DXGADAPTER *)v29;
    v42 = 0;
    if ( v29 && _InterlockedAdd64(v29 + 3, 1uLL) <= 0 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v30 + 24) = 1141LL;
      WdLogEvent5_WdAssertion(v30);
    }
    v31 = *(volatile signed __int64 **)(*(_QWORD *)(v21 + 16) + 16LL);
    v44 = (struct DXGADAPTER *)v31;
    v45 = 0;
    if ( v31 && _InterlockedAdd64(v31 + 3, 1uLL) <= 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v31);
      *(_QWORD *)(v32 + 24) = 1141LL;
      WdLogEvent5_WdAssertion(v32);
    }
    v46 = v21;
    v47 = 0;
    COREACCESS::AcquireShared((COREACCESS *)v40);
    if ( *(_DWORD *)(v46 + 352) == 1 )
    {
      if ( !v47 || (COREACCESS::AcquireShared((COREACCESS *)v43), *((_DWORD *)v44 + 40) == 1) )
      {
        v11 = DXGDEVICE::IssueSyncObjectOpForAllContexts((DXGDEVICE *)v21, v10, a2, a3, a4);
        goto LABEL_44;
      }
      COREACCESS::Release((COREACCESS *)v43);
    }
    COREACCESS::Release((COREACCESS *)v40);
    v33 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v33 + 24) = -1073741130LL;
    *(_QWORD *)(v33 + 32) = v10;
    WdLogEvent5_WdEvent(v33);
    v11 = -1073741130;
LABEL_44:
    v34 = v44;
    if ( v44 )
    {
      if ( v45 )
      {
        COREACCESS::Release((COREACCESS *)v43);
        v34 = v44;
      }
      v35 = _InterlockedDecrement64((volatile signed __int64 *)v34 + 3);
      if ( v35 )
      {
        if ( v35 < 0 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v34);
          *(_QWORD *)(v36 + 24) = 1158LL;
          WdLogEvent5_WdAssertion(v36);
        }
      }
      else
      {
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v34 + 2), v34);
      }
    }
    v37 = v41;
    if ( v41 )
    {
      if ( v42 )
      {
        v42 = 0;
        v37 = v41;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v41 + 18) )
        {
          DXGADAPTER::ReleaseCoreResource(v41);
          v37 = v41;
        }
      }
      v38 = _InterlockedDecrement64((volatile signed __int64 *)v37 + 3);
      if ( v38 )
      {
        if ( v38 < 0 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v37);
          *(_QWORD *)(v39 + 24) = 1158LL;
          WdLogEvent5_WdAssertion(v39);
        }
      }
      else
      {
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v37 + 2), v37);
      }
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v21 + 80));
    KeLeaveCriticalRegion();
    goto LABEL_29;
  }
  KeLeaveCriticalRegion();
LABEL_28:
  v27 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v27 + 24) = v21;
  WdLogEvent5_WdEvent(v27);
  v11 = -2147483631;
LABEL_29:
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v21 + 16), (struct DXGDEVICE *)v21);
  return v11;
}
