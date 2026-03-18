/*
 * XREFs of ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C0065374
 * Callers:
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00640AC (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00010D0 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001B68 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A784 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C005E564 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C0079BDC (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0095D44 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C00BDF98 (DxgkRemoveSessionViewForCurrentSession.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0156B24 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0172400 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGFASTMUTEX *const *a2,
        unsigned int a3)
{
  volatile signed __int64 *v3; // rbx
  __int64 v6; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // r9
  __int64 v12; // r15
  __int64 v13; // rcx
  unsigned int v14; // r14d
  char v15; // bl
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r9
  int v20; // ecx
  bool v21; // zf
  _QWORD *v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // [rsp+30h] [rbp-49h]
  struct DXGDEVICE *v30; // [rsp+38h] [rbp-41h]
  _BYTE v31[8]; // [rsp+40h] [rbp-39h] BYREF
  char v32; // [rsp+48h] [rbp-31h]
  _BYTE v33[128]; // [rsp+50h] [rbp-29h] BYREF
  DXGDEVICE *v34; // [rsp+E0h] [rbp+67h] BYREF
  char v35; // [rsp+F0h] [rbp+77h]
  __int64 v36; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = 0LL;
  v35 = 1;
  v34 = 0LL;
  v29 = a3;
  v6 = 168LL * a3;
  while ( 1 )
  {
    if ( v3 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession(
        (struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
        (struct DXGDEVICE *)v3);
      if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
      v34 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                                             &v34,
                                             0LL);
    v9 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v28[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
      v28[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
      v28[5] = v9;
      WdLogEvent5_WdError(v28);
      return (unsigned int)v9;
    }
    v3 = (volatile signed __int64 *)v34;
    v30 = v34;
    v10 = *((_QWORD *)v34 + 2338);
    if ( !v10 )
      break;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v36, v34);
    DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31, a2);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)v3, 1, v11, 0);
    v12 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v33);
    if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v3) )
    {
      if ( (int)v12 < 0 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdError(v13);
        v23[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
        v23[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
        v23[5] = *((_QWORD *)this + 8);
        v23[6] = v12;
        WdLogEvent5_WdError(v23);
      }
      else
      {
        v14 = 0;
        if ( *(_DWORD *)(*(_QWORD *)(v10 + 1976) + 80LL) )
        {
          v15 = v35;
          do
          {
            v16 = *((_QWORD *)this + 8);
            v17 = *(_QWORD *)(v16 + 40);
            v18 = *(_DWORD *)(v17 + v6 + 148);
            if ( _bittest(&v18, v14) )
            {
              v19 = v14 + 42 * v29;
              v20 = *(_DWORD *)(216LL * *(unsigned int *)(v17 + 4 * v19 + 8) + v16 + 256);
              if ( v20 < 0 )
              {
                *(_DWORD *)(v17 + 4 * v19 + 72) = v20;
                v15 = 0;
                v24 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(*(ADAPTER_DISPLAY **)(v10 + 1976), v14);
                v12 = v24;
                if ( v24 < 0 )
                {
                  v26 = (_QWORD *)WdLogNewEntry5_WdError(v25);
                  v26[3] = v14;
                  v26[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
                  v26[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
                  v26[6] = v12;
                  WdLogEvent5_WdError(v26);
                }
                DxgkRemoveSessionViewForCurrentSession(
                  (struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                  v14,
                  0);
              }
            }
            ++v14;
          }
          while ( v14 < *(_DWORD *)(*(_QWORD *)(v10 + 1976) + 80LL) );
          v21 = v15 == 0;
          v3 = (volatile signed __int64 *)v30;
          if ( v21 )
            DmmDisableAllFailurePathsOnAdapter(v30, (int *const)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 72));
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
      if ( v32 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
      ExReleaseResourceLite(*(PERESOURCE *)(v36 + 80));
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
      return (unsigned int)v12;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
    if ( v32 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
    ExReleaseResourceLite(*(PERESOURCE *)(v36 + 80));
    KeLeaveCriticalRegion();
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdError(v8);
  v27[3] = v3;
  v27[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
  v27[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
  v27[6] = -1073741811LL;
  WdLogEvent5_WdError(v27);
  if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
  return 3221225485LL;
}
