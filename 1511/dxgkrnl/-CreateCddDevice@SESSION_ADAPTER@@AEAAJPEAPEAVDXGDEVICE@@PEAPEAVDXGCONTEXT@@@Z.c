/*
 * XREFs of ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C009F874
 * Callers:
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C009F75C (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C0001F98 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000333C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0003B48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000AEAC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AED8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B054 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C000B08C (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006AC6C (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C006AF64 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C006DABC (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0079C70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00BE388 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::CreateCddDevice(
        SESSION_ADAPTER *this,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3)
{
  struct DXGADAPTER *v5; // r8
  struct DXGADAPTER *v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // r15
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  struct DXGDEVICE **v16; // rsi
  int Device; // eax
  __int64 v18; // rcx
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  DXGADAPTER *v25; // rcx
  __int64 v26; // r14
  DXGADAPTER *v27; // rbx
  unsigned int v28; // r8d
  int v29; // ecx
  unsigned int v30; // r8d
  DXGDEVICE *v31; // r10
  struct _D3DDDI_CREATECONTEXTFLAGS v32; // r11d
  char v33; // cl
  struct DXGCONTEXT **v34; // rdx
  int Context; // eax
  unsigned int v36; // edi
  __int64 v38; // rbx
  _QWORD *v39; // rax
  _QWORD *v40; // rbx
  __int64 CurrentProcess; // rax
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned __int128 v43; // rax
  unsigned __int64 v44; // kr00_8
  void *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  _QWORD *v50; // rax
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // rax
  volatile signed __int64 *v55; // rax
  _BYTE v56[16]; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v59; // [rsp+D8h] [rbp-28h]
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-20h] BYREF
  char v61; // [rsp+110h] [rbp+10h]

  v5 = (struct DXGADAPTER *)*((_QWORD *)this + 3);
  v7 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
  v61 = 0;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v57.hKmdProcessHandle, v7, v5);
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18592LL));
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v38 = WdLogNewEntry5_WdError(v8);
    v36 = -1073741823;
    *(_QWORD *)(v38 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v38 + 32) = -1073741823LL;
    WdLogEvent5_WdError(v38);
    goto LABEL_22;
  }
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v57.hKmdProcessHandle);
  v15 = v10;
  if ( v10 >= 0 )
  {
    v16 = (struct DXGDEVICE **)((char *)this + 56);
    Device = ADAPTER_RENDER::CreateDevice(
               *(_QWORD *)(*((_QWORD *)this + 2) + 1992LL),
               (__int64 *)this + 7,
               2u,
               *((DXGADAPTER **)this + 3),
               0,
               0);
    v19 = Device;
    if ( Device < 0 )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v40[3] = *((_QWORD *)this + 2);
      CurrentProcess = PsGetCurrentProcess();
      v40[5] = v19;
      v40[4] = CurrentProcess;
      WdLogEvent5_WdError(v40);
      v36 = v19;
      goto LABEL_22;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v57.hKmdProcessHandle);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v56, *v16);
    v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v57.hKmdProcessHandle);
    v15 = v20;
    if ( v20 >= 0 )
    {
      v25 = (DXGADAPTER *)*((_QWORD *)this + 2);
      *((_DWORD *)this + 13) = 1;
      if ( *((_BYTE *)v25 + 1923) )
      {
        NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v25);
        *((_DWORD *)this + 13) = NumDifferentPhysicalAdapters;
        if ( NumDifferentPhysicalAdapters > 1 )
        {
          v44 = NumDifferentPhysicalAdapters;
          v43 = NumDifferentPhysicalAdapters * (unsigned __int128)8uLL;
          if ( !is_mul_ok(v44, 8uLL) )
            *(_QWORD *)&v43 = -1LL;
          v45 = operator new(v43, DWORD2(v43), 1, PagedPool);
          *((_QWORD *)this + 8) = v45;
          if ( !v45 )
          {
            v50 = (_QWORD *)WdLogNewEntry5_WdEvent(v47, v46, v48, v49);
            v50[3] = *((_QWORD *)this + 2);
            v50[4] = Current;
            v50[5] = v15;
            WdLogEvent5_WdEvent(v50);
            LODWORD(v15) = -1073741801;
          }
        }
      }
      if ( (int)v15 < 0 )
        goto LABEL_17;
      v26 = 0LL;
      if ( !*((_DWORD *)this + 13) )
        goto LABEL_17;
      while ( 1 )
      {
        v27 = (DXGADAPTER *)*((_QWORD *)this + 2);
        v58 = 0LL;
        v59 = 0;
        v28 = *((_DWORD *)v27 + 502);
        HIDWORD(v58) = v28;
        if ( *((_DWORD *)this + 13) == 1 )
          v29 = *((_DWORD *)v27 + 503);
        else
          LOBYTE(v29) = v26;
        v59 = 1 << v29;
        if ( (*((_DWORD *)v27 + 71) & 0x10) != 0 )
        {
          memset(&v57, 0, 0x28uLL);
          v57.Type = DXGKQAITYPE_PREFERREDGPUNODE;
          v57.pOutputData = &v58;
          v57.OutputDataSize = 12;
          if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v27, &v57, v51) < 0 )
          {
            v53 = WdLogNewEntry5_WdAssertion(v52);
            *(_QWORD *)(v53 + 24) = 1714LL;
            WdLogEvent5_WdAssertion(v53);
          }
          v28 = HIDWORD(v58);
        }
        if ( !ADAPTER_RENDER::NodeSupportsGpuVa(*((ADAPTER_RENDER **)*v16 + 2), 0, v28)
          || (v33 = 1, *(_BYTE *)(*((_QWORD *)this + 2) + 1945LL)) )
        {
          v33 = 0;
        }
        v34 = *((_DWORD *)this + 13) == 1
            ? (struct DXGCONTEXT **)((char *)this + 64)
            : (struct DXGCONTEXT **)(*((_QWORD *)this + 8) + 8 * v26);
        Context = DXGDEVICE::CreateContext(v31, v34, v30, v59, v32, 0LL, 0, D3DKMT_CLIENTHINT_CDD, v33);
        v15 = Context;
        if ( Context < 0 )
          break;
        v26 = (unsigned int)(v26 + 1);
        if ( (unsigned int)v26 >= *((_DWORD *)this + 13) )
          goto LABEL_17;
      }
    }
    v54 = (_QWORD *)WdLogNewEntry5_WdEvent(v22, v21, v23, v24);
    v54[3] = *((_QWORD *)this + 2);
    v54[4] = Current;
    v54[5] = v15;
    WdLogEvent5_WdEvent(v54);
LABEL_17:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v56);
    if ( (int)v15 < 0 && *v16 )
    {
      ADAPTER_RENDER::DestroyDevice(*(DXGADAPTER ***)(*((_QWORD *)this + 2) + 1992LL), *v16, 0LL);
      if ( *((_DWORD *)this + 13) > 1u )
      {
        operator delete(*((void **)this + 8));
        *((_QWORD *)this + 8) = 0LL;
      }
      *v16 = 0LL;
    }
    else
    {
      if ( a2 )
      {
        *a2 = *v16;
        _InterlockedIncrement64((volatile signed __int64 *)*v16 + 8);
      }
      if ( a3 )
      {
        v55 = (volatile signed __int64 *)*((_QWORD *)this + 8);
        if ( *((_DWORD *)this + 13) != 1 )
          v55 = (volatile signed __int64 *)*v55;
        *a3 = (struct DXGCONTEXT *)v55;
        _InterlockedIncrement64(v55 + 4);
      }
    }
    goto LABEL_21;
  }
  v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
  v39[3] = *((_QWORD *)this + 2);
  v39[4] = *((_QWORD *)this + 3);
  v39[5] = Current;
  v39[6] = v15;
  WdLogEvent5_WdWarning(v39);
LABEL_21:
  v36 = v15;
LABEL_22:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v57.hKmdProcessHandle);
  CPROCESSATTACHHELPER::Detach(&ApcState);
  return v36;
}
