/*
 * XREFs of ?DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00F7E80
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0009E68 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009F4C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C00F8030 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 */

__int64 __fastcall DxgkPresentVirtualFrameBuffer(__int64 a1, unsigned int a2, const struct _D3DKMT_DISPLAYMODE *a3)
{
  unsigned int v4; // ebx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct DXGDEVICE **v10; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  struct DXGGLOBAL *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD v28[2]; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v29[16]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v30[16]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v31[96]; // [rsp+68h] [rbp-19h] BYREF
  struct DXGCONTEXT *v32; // [rsp+100h] [rbp+7Fh] BYREF

  v4 = a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( ProcessDxgProcess )
  {
    v32 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30, v4, ProcessDxgProcess, &v32, 0);
    v10 = (struct DXGDEVICE **)v32;
    if ( !v32 )
    {
      LODWORD(v23) = 0;
LABEL_14:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30);
      return (unsigned int)v23;
    }
    Global = DXGGLOBAL::GetGlobal(v9);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (struct DXGGLOBAL *)((char *)Global + 1016));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
    v13 = *((_QWORD *)DXGGLOBAL::GetGlobal(v12) + 113);
    v15 = DXGGLOBAL::GetGlobal(v14);
    if ( v13 || *((_DWORD *)v15 + 224) != 1 )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v16) + 251) != 4 )
      {
        v17 = (__int64)v10[2];
        v18 = *(_QWORD *)(v17 + 2856);
        if ( v18 == *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28, v10[2]);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, v17, 1, v19, 0);
          v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v31);
          v23 = v20;
          if ( v20 < 0 )
          {
            v27 = WdLogNewEntry5_WdEvent(v21);
            *(_QWORD *)(v27 + 24) = v23;
            *(_QWORD *)(v27 + 32) = v17;
            WdLogEvent5_WdEvent(v27);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
            if ( v28[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28);
            goto LABEL_12;
          }
          if ( !*(_BYTE *)(v17 + 2904) )
          {
            LOBYTE(v22) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 2136) + 376LL)
                                                                         + 8LL)
                                                             + 472LL))(
              *(_QWORD *)(v17 + 568),
              3LL,
              v22);
            *(_BYTE *)(v17 + 2904) = 1;
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
          if ( v28[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28);
        }
      }
      LODWORD(v23) = PresentCddShadowBuffer((struct DXGCONTEXT *)v10, a2);
    }
    else
    {
      LODWORD(v23) = -1073741823;
    }
LABEL_12:
    if ( v29[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
    goto LABEL_14;
  }
  v25 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v25 + 24) = -1073741811LL;
  *(_QWORD *)(v25 + 32) = PsGetCurrentProcess(v26);
  WdLogEvent5_WdError(v25);
  return 3221225485LL;
}
