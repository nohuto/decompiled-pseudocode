/*
 * XREFs of ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C008BE9C
 * Callers:
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C008CFD0 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0001480 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00014CC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001588 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C000838C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0073DD0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0087298 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C0094F0C (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C00C5F04 (DxgkRemoveSessionViewForCurrentSession.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0180738 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C01A0534 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
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
  unsigned __int8 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r15
  __int64 v14; // rcx
  unsigned int v15; // r14d
  char v16; // bl
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // r9
  int v21; // ecx
  bool v22; // zf
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  struct DXGDEVICE *v30; // [rsp+30h] [rbp-69h]
  _BYTE v31[8]; // [rsp+38h] [rbp-61h] BYREF
  char v32; // [rsp+40h] [rbp-59h]
  _BYTE v33[24]; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v34[144]; // [rsp+60h] [rbp-39h] BYREF
  struct DXGDEVICE *v35; // [rsp+100h] [rbp+67h] BYREF
  char v36; // [rsp+110h] [rbp+77h]
  __int64 v37; // [rsp+118h] [rbp+7Fh]

  v3 = 0LL;
  v36 = 1;
  v35 = 0LL;
  v37 = a3;
  v6 = 168LL * a3;
  while ( 1 )
  {
    if ( v3 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession(
        (struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
        (struct DXGDEVICE *)v3);
      if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
      v35 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                                             &v35,
                                             0LL);
    v9 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v29[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
      v29[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
      v29[5] = v9;
      WdLogEvent5_WdError(v29);
      return (unsigned int)v9;
    }
    v3 = (volatile signed __int64 *)v35;
    v30 = v35;
    v10 = *((_QWORD *)v35 + 357);
    if ( !v10 )
      break;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v33, v35);
    DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31, a2, v11);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, (__int64)v3, 1, v12, 0);
    v13 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v34);
    if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v3) )
    {
      if ( (int)v13 < 0 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdError(v14);
        v24[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
        v24[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
        v24[5] = *((_QWORD *)this + 8);
        v24[6] = v13;
        WdLogEvent5_WdError(v24);
      }
      else
      {
        v15 = 0;
        if ( *(_DWORD *)(*(_QWORD *)(v10 + 2128) + 80LL) )
        {
          v16 = v36;
          do
          {
            v17 = *((_QWORD *)this + 8);
            v18 = *(_QWORD *)(v17 + 40);
            v19 = *(_DWORD *)(v18 + v6 + 148);
            if ( _bittest(&v19, v15) )
            {
              v20 = v15 + 42 * v37;
              v21 = *(_DWORD *)(216LL * *(unsigned int *)(v18 + 4 * v20 + 8) + v17 + 256);
              if ( v21 < 0 )
              {
                *(_DWORD *)(v18 + 4 * v20 + 72) = v21;
                v16 = 0;
                v25 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(*(DXGADAPTER ***)(v10 + 2128), v15);
                v13 = v25;
                if ( v25 < 0 )
                {
                  v27 = (_QWORD *)WdLogNewEntry5_WdError(v26);
                  v27[3] = v15;
                  v27[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
                  v27[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
                  v27[6] = v13;
                  WdLogEvent5_WdError(v27);
                }
                DxgkRemoveSessionViewForCurrentSession(
                  (struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                  v15,
                  0);
              }
            }
            ++v15;
          }
          while ( v15 < *(_DWORD *)(*(_QWORD *)(v10 + 2128) + 80LL) );
          v22 = v16 == 0;
          v3 = (volatile signed __int64 *)v30;
          if ( v22 )
            DmmDisableAllFailurePathsOnAdapter(v30, (int *const)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 72));
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
      if ( v32 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v33);
      if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
      return (unsigned int)v13;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
    if ( v32 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v33);
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdError(v8);
  v28[3] = v3;
  v28[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
  v28[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
  v28[6] = -1073741811LL;
  WdLogEvent5_WdError(v28);
  if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
  return 3221225485LL;
}
