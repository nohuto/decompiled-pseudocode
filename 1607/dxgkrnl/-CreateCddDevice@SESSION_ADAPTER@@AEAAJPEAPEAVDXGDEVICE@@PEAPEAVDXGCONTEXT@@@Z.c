/*
 * XREFs of ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C007C5D8
 * Callers:
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C007C4C0 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0001388 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C00013C0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0001480 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00014CC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C00076D8 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00080C8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0008728 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00934E0 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C00937EC (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00960C4 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C009F708 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00D5328 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::CreateCddDevice(
        SESSION_ADAPTER *this,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3)
{
  struct DXGADAPTER *v5; // r8
  struct DXGADAPTER *v7; // rdx
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 ProcessDxgProcess; // r15
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  struct DXGDEVICE **v18; // rsi
  int Device; // eax
  __int64 v20; // rcx
  __int64 v21; // r14
  int v22; // eax
  DXGADAPTER *v23; // rcx
  __int64 v24; // r14
  DXGADAPTER *v25; // rbx
  unsigned int v26; // r8d
  int v27; // ecx
  unsigned int v28; // r8d
  DXGDEVICE *v29; // r10
  struct _D3DDDI_CREATECONTEXTFLAGS v30; // r11d
  unsigned __int8 v31; // cl
  struct DXGCONTEXT **v32; // rdx
  int Context; // eax
  unsigned int v34; // edi
  __int64 v36; // rbx
  _QWORD *v37; // rax
  _QWORD *v38; // rbx
  __int64 v39; // rax
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned __int128 v41; // rax
  unsigned __int64 v42; // kr00_8
  void *v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  _QWORD *v47; // rax
  volatile signed __int64 *v48; // rax
  _BYTE v49[16]; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v50; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v51[80]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v52; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v53; // [rsp+F8h] [rbp-8h]
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp+0h] BYREF
  char v55; // [rsp+130h] [rbp+30h]

  v5 = (struct DXGADAPTER *)*((_QWORD *)this + 3);
  v7 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
  v55 = 0;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v51, v7, v5);
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18584LL));
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v9);
  if ( !ProcessDxgProcess )
  {
    v36 = WdLogNewEntry5_WdError(v10);
    v34 = -1073741823;
    *(_QWORD *)(v36 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v36 + 32) = -1073741823LL;
    WdLogEvent5_WdError(v36);
    goto LABEL_22;
  }
  v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v51);
  v17 = v12;
  if ( v12 >= 0 )
  {
    v18 = (struct DXGDEVICE **)((char *)this + 72);
    Device = ADAPTER_RENDER::CreateDevice(
               *(_QWORD *)(*((_QWORD *)this + 2) + 2136LL),
               (char *)this + 72,
               2LL,
               *((_QWORD *)this + 3),
               0,
               0);
    v21 = Device;
    if ( Device < 0 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v38[3] = *((_QWORD *)this + 2);
      v39 = PsGetCurrentProcess();
      v38[5] = v21;
      v38[4] = v39;
      WdLogEvent5_WdError(v38);
      v34 = v21;
      goto LABEL_22;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v51);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v49, *v18);
    v22 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v51);
    v17 = v22;
    if ( v22 >= 0 )
    {
      v23 = (DXGADAPTER *)*((_QWORD *)this + 2);
      *((_DWORD *)this + 17) = 1;
      if ( *((_BYTE *)v23 + 2058) )
      {
        NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v23);
        *((_DWORD *)this + 17) = NumDifferentPhysicalAdapters;
        if ( NumDifferentPhysicalAdapters > 1 )
        {
          v42 = NumDifferentPhysicalAdapters;
          v41 = NumDifferentPhysicalAdapters * (unsigned __int128)8uLL;
          if ( !is_mul_ok(v42, 8uLL) )
            *(_QWORD *)&v41 = -1LL;
          v43 = operator new(v41, DWORD2(v41), 1, PagedPool);
          *((_QWORD *)this + 10) = v43;
          if ( !v43 )
          {
            v44 = (_QWORD *)WdLogNewEntry5_WdEvent();
            v44[3] = *((_QWORD *)this + 2);
            v44[4] = ProcessDxgProcess;
            v44[5] = v17;
            WdLogEvent5_WdEvent(v44);
            LODWORD(v17) = -1073741801;
          }
        }
      }
      if ( (int)v17 < 0 )
        goto LABEL_17;
      v24 = 0LL;
      if ( !*((_DWORD *)this + 17) )
        goto LABEL_17;
      while ( 1 )
      {
        v25 = (DXGADAPTER *)*((_QWORD *)this + 2);
        v52 = 0LL;
        v53 = 0;
        v26 = *((_DWORD *)v25 + 538);
        HIDWORD(v52) = v26;
        if ( *((_DWORD *)this + 17) == 1 )
          v27 = *((_DWORD *)v25 + 539);
        else
          LOBYTE(v27) = v24;
        v53 = 1 << v27;
        if ( (*((_DWORD *)v25 + 75) & 0x10) != 0 )
        {
          memset(&v50, 0, 0x28uLL);
          v50.Type = DXGKQAITYPE_PREFERREDGPUNODE;
          v50.pOutputData = &v52;
          v50.OutputDataSize = 12;
          if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v25, &v50) < 0 )
          {
            v46 = WdLogNewEntry5_WdAssertion(v45);
            *(_QWORD *)(v46 + 24) = 1964LL;
            WdLogEvent5_WdAssertion(v46);
          }
          v26 = HIDWORD(v52);
        }
        if ( !ADAPTER_RENDER::NodeSupportsGpuVa(*((ADAPTER_RENDER **)*v18 + 2), 0, v26)
          || (v31 = 1, *(_BYTE *)(*((_QWORD *)this + 2) + 2081LL)) )
        {
          v31 = 0;
        }
        v32 = *((_DWORD *)this + 17) == 1
            ? (struct DXGCONTEXT **)((char *)this + 80)
            : (struct DXGCONTEXT **)(*((_QWORD *)this + 10) + 8 * v24);
        Context = DXGDEVICE::CreateContext(v29, v32, v28, v53, v30, 0LL, 0, D3DKMT_CLIENTHINT_CDD, v31);
        v17 = Context;
        if ( Context < 0 )
          break;
        v24 = (unsigned int)(v24 + 1);
        if ( (unsigned int)v24 >= *((_DWORD *)this + 17) )
          goto LABEL_17;
      }
    }
    v47 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v47[3] = *((_QWORD *)this + 2);
    v47[4] = ProcessDxgProcess;
    v47[5] = v17;
    WdLogEvent5_WdEvent(v47);
LABEL_17:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v49);
    if ( (int)v17 < 0 && *v18 )
    {
      ADAPTER_RENDER::DestroyDevice(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 2136LL), *v18, 0LL);
      if ( *((_DWORD *)this + 17) > 1u )
      {
        operator delete(*((void **)this + 10));
        *((_QWORD *)this + 10) = 0LL;
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
        v48 = (volatile signed __int64 *)*((_QWORD *)this + 10);
        if ( *((_DWORD *)this + 17) != 1 )
          v48 = (volatile signed __int64 *)*v48;
        *a3 = (struct DXGCONTEXT *)v48;
        _InterlockedIncrement64(v48 + 4);
      }
    }
    goto LABEL_21;
  }
  v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
  v37[3] = *((_QWORD *)this + 2);
  v37[4] = *((_QWORD *)this + 3);
  v37[5] = ProcessDxgProcess;
  v37[6] = v17;
  WdLogEvent5_WdWarning(v37);
LABEL_21:
  v34 = v17;
LABEL_22:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
  CPROCESSATTACHHELPER::Detach(&ApcState);
  return v34;
}
