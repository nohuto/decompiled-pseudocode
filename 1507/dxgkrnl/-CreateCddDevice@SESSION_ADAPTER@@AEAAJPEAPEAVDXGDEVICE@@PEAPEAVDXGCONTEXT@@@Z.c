/*
 * XREFs of ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00DA848
 * Callers:
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C005E564 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00010D0 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0001AF8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0002654 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C00057AC (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000A708 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C000A740 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C007831C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C007A574 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009438C (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C0094690 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00AAAC0 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::CreateCddDevice(
        struct DXGADAPTER *const *this,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3)
{
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // r15
  char *v10; // rbx
  __int64 v11; // r14
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  struct DXGDEVICE **v18; // rbx
  int Device; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  DXGADAPTER *v26; // rcx
  __int64 v27; // r14
  DXGADAPTER *v28; // rsi
  unsigned int v29; // r8d
  int v30; // ecx
  __int64 v31; // r8
  DXGDEVICE *v32; // r10
  struct _D3DDDI_CREATECONTEXTFLAGS v33; // r11d
  char v34; // cl
  struct DXGCONTEXT **v35; // rdx
  int Context; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // edi
  __int64 v43; // rbx
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 CurrentProcess; // rax
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned __int128 v51; // rax
  unsigned __int64 v52; // kr00_8
  PVOID v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rax
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  volatile signed __int64 *v67; // rax
  __int64 v68; // [rsp+50h] [rbp-B0h]
  char *v69; // [rsp+60h] [rbp-A0h]
  __int64 v70; // [rsp+70h] [rbp-90h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v71; // [rsp+78h] [rbp-88h] BYREF
  __int64 v72; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v73; // [rsp+E0h] [rbp-20h]
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-18h] BYREF
  char v75; // [rsp+118h] [rbp+18h]

  v75 = 0;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v71.hKmdProcessHandle, this[2], this[3]);
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)*this + 2321));
  Current = DXGPROCESS::GetCurrent(v6);
  v9 = Current;
  if ( Current )
  {
    v10 = (char *)Current + 160;
    *((_BYTE *)Current + 312) = 1;
    v69 = (char *)Current + 160;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    *((_QWORD *)v10 + 1) = KeGetCurrentThread();
    v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 1984LL) + 40LL;
    v68 = v11;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
    v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v71.hKmdProcessHandle);
    v17 = v12;
    if ( v12 < 0 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      v45[3] = *((_QWORD *)this + 2);
      v45[4] = *((_QWORD *)this + 3);
      v45[5] = v9;
      v45[6] = v17;
      WdLogEvent5_WdWarning(v45);
    }
    else
    {
      v18 = (struct DXGDEVICE **)(this + 7);
      Device = ADAPTER_RENDER::CreateDevice(
                 *(_QWORD *)(*((_QWORD *)this + 2) + 1984LL),
                 (__int64 *)this + 7,
                 2,
                 this[3],
                 0,
                 0);
      v17 = Device;
      if ( Device < 0 )
      {
        v46 = WdLogNewEntry5_WdError(v20);
        v47 = *((_QWORD *)this + 2);
        v48 = v46;
        *(_QWORD *)(v46 + 24) = v47;
        CurrentProcess = PsGetCurrentProcess(v47);
        *(_QWORD *)(v48 + 40) = v17;
        *(_QWORD *)(v48 + 32) = CurrentProcess;
        WdLogEvent5_WdError(v48);
      }
      else
      {
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v71.hKmdProcessHandle);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v70, *v18);
        v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v71.hKmdProcessHandle);
        v17 = v21;
        if ( v21 < 0 )
        {
          v66 = (_QWORD *)WdLogNewEntry5_WdEvent(v23, v22, v24, v25);
          v66[3] = *((_QWORD *)this + 2);
          v66[4] = v9;
          v66[5] = v17;
          WdLogEvent5_WdEvent(v66);
        }
        else
        {
          v26 = (DXGADAPTER *)*((_QWORD *)this + 2);
          *((_DWORD *)this + 13) = 1;
          if ( *((_BYTE *)v26 + 1915) )
          {
            NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v26);
            *((_DWORD *)this + 13) = NumDifferentPhysicalAdapters;
            if ( NumDifferentPhysicalAdapters > 1 )
            {
              v52 = NumDifferentPhysicalAdapters;
              v51 = NumDifferentPhysicalAdapters * (unsigned __int128)8uLL;
              if ( !is_mul_ok(v52, 8uLL) )
                *(_QWORD *)&v51 = -1LL;
              v53 = operator new(v51, *((__int64 *)&v51 + 1), 1, PagedPool);
              *((_QWORD *)this + 8) = v53;
              if ( !v53 )
              {
                v58 = (_QWORD *)WdLogNewEntry5_WdEvent(v55, v54, v56, v57);
                v58[3] = *((_QWORD *)this + 2);
                v58[4] = v9;
                v58[5] = v17;
                WdLogEvent5_WdEvent(v58);
                LODWORD(v17) = -1073741801;
              }
            }
          }
          if ( (int)v17 >= 0 )
          {
            v27 = 0LL;
            if ( *((_DWORD *)this + 13) )
            {
              while ( 1 )
              {
                v28 = (DXGADAPTER *)*((_QWORD *)this + 2);
                v72 = 0LL;
                v73 = 0;
                v29 = *((_DWORD *)v28 + 498);
                HIDWORD(v72) = v29;
                if ( *((_DWORD *)this + 13) == 1 )
                  v30 = *((_DWORD *)v28 + 499);
                else
                  LOBYTE(v30) = v27;
                v73 = 1 << v30;
                if ( (*((_DWORD *)v28 + 71) & 8) != 0 )
                {
                  memset(&v71, 0, 0x28uLL);
                  v71.Type = DXGKQAITYPE_PREFERREDGPUNODE;
                  v71.pOutputData = &v72;
                  v71.OutputDataSize = 12;
                  if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v28, &v71, v59) < 0 )
                  {
                    v64 = WdLogNewEntry5_WdAssertion(v61, v60, v62, v63);
                    *(_QWORD *)(v64 + 24) = 1722LL;
                    WdLogEvent5_WdAssertion(v64);
                  }
                  v29 = HIDWORD(v72);
                }
                v34 = ADAPTER_RENDER::NodeSupportsGpuVa(*((ADAPTER_RENDER **)*v18 + 2), 0, v29)
                   && !*(_BYTE *)(*((_QWORD *)this + 2) + 1937LL);
                v35 = *((_DWORD *)this + 13) == 1
                    ? (struct DXGCONTEXT **)(this + 8)
                    : (struct DXGCONTEXT **)(*((_QWORD *)this + 8) + 8 * v27);
                Context = DXGDEVICE::CreateContext(v32, v35, v31, v73, v33, 0LL, 0, D3DKMT_CLIENTHINT_CDD, v34);
                v17 = Context;
                if ( Context < 0 )
                  break;
                v27 = (unsigned int)(v27 + 1);
                if ( (unsigned int)v27 >= *((_DWORD *)this + 13) )
                  goto LABEL_17;
              }
              v65 = (_QWORD *)WdLogNewEntry5_WdEvent(v38, v37, v39, v40);
              v65[3] = *((_QWORD *)this + 2);
              v65[4] = v9;
              v65[5] = v17;
              WdLogEvent5_WdEvent(v65);
            }
LABEL_17:
            v11 = v68;
          }
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v70 + 80));
        KeLeaveCriticalRegion();
        if ( (int)v17 < 0 && *v18 )
        {
          ADAPTER_RENDER::DestroyDevice(*(DXGADAPTER ***)(*((_QWORD *)this + 2) + 1984LL), *v18, 0LL);
          if ( *((_DWORD *)this + 13) > 1u )
          {
            operator delete(*((void **)this + 8));
            *((_QWORD *)this + 8) = 0LL;
          }
          *v18 = 0LL;
        }
        else
        {
          if ( a2 )
          {
            *a2 = *v18;
            _InterlockedIncrement64((volatile signed __int64 *)*v18 + 8);
          }
          if ( a3 )
          {
            v67 = (volatile signed __int64 *)*((_QWORD *)this + 8);
            if ( *((_DWORD *)this + 13) != 1 )
              v67 = (volatile signed __int64 *)*v67;
            *a3 = (struct DXGCONTEXT *)v67;
            _InterlockedIncrement64(v67 + 4);
          }
        }
      }
    }
    *(_QWORD *)(v11 + 8) = 0LL;
    v41 = v17;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)v69 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v69, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v43 = WdLogNewEntry5_WdError(v8);
    v41 = -1073741823;
    *(_QWORD *)(v43 + 24) = PsGetCurrentProcess(v44);
    *(_QWORD *)(v43 + 32) = -1073741823LL;
    WdLogEvent5_WdError(v43);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v71.hKmdProcessHandle);
  CPROCESSATTACHHELPER::Detach(&ApcState);
  return v41;
}
