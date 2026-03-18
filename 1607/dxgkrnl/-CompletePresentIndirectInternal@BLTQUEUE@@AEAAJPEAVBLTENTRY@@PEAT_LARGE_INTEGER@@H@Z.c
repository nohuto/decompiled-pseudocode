/*
 * XREFs of ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C0183278
 * Callers:
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C01837C8 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C0183978 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C0028360 (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     Template_did @ 0x1C0028798 (Template_did.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C018F220 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall BLTQUEUE::CompletePresentIndirectInternal(
        BLTQUEUE *this,
        struct BLTENTRY *a2,
        union _LARGE_INTEGER *a3)
{
  struct DXGSWAPCHAIN **v3; // rsi
  struct DXGSWAPCHAIN *v7; // rcx
  int SetMetaDataInternal; // esi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  LONGLONG QuadPart; // rax
  struct DXGSWAPCHAIN **v13; // rcx
  struct DXGSWAPCHAIN *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 CurrentProcess; // rax
  __int64 v24; // rdx
  __int64 ProcessDxgProcess; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  LONGLONG v32; // [rsp+30h] [rbp-49h] BYREF
  _D3DKMT_GETSETSWAPCHAINMETADATA v33; // [rsp+38h] [rbp-41h] BYREF
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v34; // [rsp+60h] [rbp-19h] BYREF
  __int64 v35; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v36; // [rsp+90h] [rbp+17h]
  __int64 v37; // [rsp+98h] [rbp+1Fh]
  int v38; // [rsp+A0h] [rbp+27h]

  v3 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  if ( v3 )
  {
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0;
    memset(&v33, 0, sizeof(v33));
    v7 = *v3;
    v33.pBuffer = &v35;
    *(_QWORD *)&v33.bProducer = 1LL;
    v33.bSetMetaData = 0;
    v33.BufferSize = 28;
    SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v7, &v33, 0, 0);
    if ( SetMetaDataInternal == -2147483643 )
      SetMetaDataInternal = 0;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v33, (struct _KTHREAD **)this + 31);
    DXGPUSHLOCK::AcquireShared(*(DXGPUSHLOCK **)&v33.bSetMetaData);
    v11 = HIDWORD(v35);
    if ( SetMetaDataInternal >= 0 && (v35 & 2) != 0 && (v9 = *((_QWORD *)this + 35), HIDWORD(v35) > v9) )
    {
      QuadPart = *((_QWORD *)this + 36) + *((_QWORD *)this + 37) * (HIDWORD(v35) - v9);
    }
    else if ( a3 )
    {
      QuadPart = a3->QuadPart;
    }
    else
    {
      QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
      v11 = HIDWORD(v35);
    }
    v32 = QuadPart;
    if ( SetMetaDataInternal < 0 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_did(v9, (unsigned int)Microsoft_Windows_DxgKrnlEnableBits, v10, v36, QuadPart, 0);
    }
    else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      Template_did((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, v11, v10, v36, QuadPart, v11);
    }
    v33.bGlobalMetaData = 0;
    ExReleasePushLockSharedEx(*(_QWORD *)&v33.bSetMetaData, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)a2 + 17) = HIDWORD(v35);
    memset(&v34, 0, sizeof(v34));
    v13 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
    v34.bProducer = 1;
    v34.bSetMetaData = 1;
    v34.pBuffer = &v32;
    v14 = *v13;
    v34.BufferSize = 8;
    v15 = SwapChainGetSetMetaDataInternal(v14, &v34, 0x14u, 0);
    v20 = v15;
    if ( v15 < 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v21 + 24) = v20;
      WdLogEvent5_WdWarning(v21);
    }
    ObfReferenceObject(*((PVOID *)this + 320));
    CurrentProcess = PsGetCurrentProcess(v22);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v24);
    v26 = DXGWORKQUEUE::QueueWork(
            (PLIST_ENTRY)(*(_QWORD *)(ProcessDxgProcess + 64) + 88LL),
            (struct _LIST_ENTRY *)lambda_246b44cf883f607add60f46f40c31c28_::_lambda_invoker_cdecl_,
            *((struct _LIST_ENTRY **)this + 320));
    v28 = v26;
    if ( v26 < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v29 + 24) = v28;
      WdLogEvent5_WdError(v29);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v33);
  }
  else
  {
    v30 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v30 + 24) = 1267LL;
    WdLogEvent5_WdError(v30);
    LODWORD(v28) = -1073741823;
  }
  return (unsigned int)v28;
}
