/*
 * XREFs of ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I_N@Z @ 0x1C00899D4
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0094C30 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0094450 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0094C04 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::Initialize(
        DXGDEVICESYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a3,
        int a4,
        bool a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // rdi
  int v13; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rdi
  _QWORD *PoolWithTag; // rax
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // r9d
  __int64 v37; // rax
  _BYTE v38[8]; // [rsp+40h] [rbp-30h] BYREF
  char v39; // [rsp+48h] [rbp-28h]
  _BYTE v40[8]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v41; // [rsp+58h] [rbp-18h]
  int v42; // [rsp+60h] [rbp-10h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v31 + 24) = 136LL;
    WdLogEvent5_WdAssertion(v31);
  }
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)this + 16) = a3;
  *((_QWORD *)this + 4) = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 6);
  v9 = *((_QWORD *)this + 4);
  *((_BYTE *)this + 68) = *((_BYTE *)this + 68) ^ (*((_BYTE *)this + 68) ^ (2 * a5)) & 2 | 1;
  if ( *(_DWORD *)(v9 + 152) != 5 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v32 + 24) = 240LL;
    WdLogEvent5_WdAssertion(v32);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 16LL)
                                                                                   + 424LL)
                                                                       + 8LL)
                                                           + 912LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
          v9 + 112,
          (char *)this + 56);
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( *(_BYTE *)&a3.0 >= 0 )
  {
    v12 = *((_QWORD *)this + 4);
    if ( *(_DWORD *)(v12 + 152) != 5 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v33 + 24) = 240LL;
      WdLogEvent5_WdAssertion(v33);
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, char *, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL)
                                                                                              + 8LL)
                                                                                  + 920LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
            *(_QWORD *)(*((_QWORD *)this + 2) + 536LL),
            v12 + 112,
            *((_QWORD *)this + 7),
            (char *)this + 48,
            a4);
    if ( v11 < 0 )
      return (unsigned int)v11;
  }
  v13 = *((_DWORD *)this + 16);
  if ( (v13 & 0x10) == 0 && (v13 & 0x40) == 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 4) + 32LL));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *((DXGSYNCOBJECT **)this + 4),
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
    if ( VidSchSyncObject )
    {
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
      *((_QWORD *)this + 3) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v11 = -1073741801;
        if ( v39 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
        return (unsigned int)v11;
      }
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL) = VidSchSyncObject;
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                         + 8LL)
                                             + 576LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
        *((_QWORD *)this + 3));
    }
    if ( v39 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
  }
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v22 = *(_QWORD *)(ProcessWin32Process + 248);
  }
  else
  {
    v34 = WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
    *(_QWORD *)(v34 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v34);
    v22 = 0LL;
  }
  v41 = v22 + 192;
  if ( v22 != -192 && *(struct _KTHREAD **)(v22 + 200) == KeGetCurrentThread() )
  {
    v35 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v35 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v35);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v22 + 192, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v36 = *(_DWORD *)(v22 + 208);
      if ( v36 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v23, &EventBlockThread, v24, v36);
    }
    ExAcquirePushLockExclusiveEx(v22 + 192, 0LL);
  }
  *(_QWORD *)(v22 + 200) = KeGetCurrentThread();
  v42 = 2;
  v25 = HMGRTABLE::AllocHandle(v22 + 216, this, 11LL);
  *((_DWORD *)this + 10) = v25;
  if ( v25 )
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
    return 0LL;
  }
  v37 = WdLogNewEntry5_WdLowResource(v27, v26, v28, v29);
  v11 = -1073741801;
  *(_QWORD *)(v37 + 24) = this;
  *(_QWORD *)(v37 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v37);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
  return (unsigned int)v11;
}
