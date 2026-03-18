/*
 * XREFs of ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C0159680
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00AD7D0 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C0159D08 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B60 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C0021950 (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     Template_did @ 0x1C0021D94 (Template_did.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C0162E68 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
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
  struct DXGPROCESS *Current; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  LONGLONG v30; // [rsp+30h] [rbp-49h] BYREF
  _D3DKMT_GETSETSWAPCHAINMETADATA v31; // [rsp+38h] [rbp-41h] BYREF
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v32; // [rsp+60h] [rbp-19h] BYREF
  __int64 v33; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v34; // [rsp+90h] [rbp+17h]
  __int64 v35; // [rsp+98h] [rbp+1Fh]
  int v36; // [rsp+A0h] [rbp+27h]

  v3 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 295);
  if ( v3 )
  {
    v33 = 0LL;
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0;
    memset(&v31, 0, sizeof(v31));
    v7 = *v3;
    v31.pBuffer = &v33;
    *(_QWORD *)&v31.bProducer = 1LL;
    v31.bSetMetaData = 0;
    v31.BufferSize = 28;
    SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v7, &v31, 0, 0);
    if ( SetMetaDataInternal == -2147483643 )
      SetMetaDataInternal = 0;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v31, (struct _KTHREAD **)this + 19);
    DXGPUSHLOCK::AcquireShared(*(DXGPUSHLOCK **)&v31.bSetMetaData);
    v11 = HIDWORD(v33);
    if ( SetMetaDataInternal >= 0 && (v33 & 2) != 0 && (v9 = *((_QWORD *)this + 23), HIDWORD(v33) > v9) )
    {
      QuadPart = *((_QWORD *)this + 24) + *((_QWORD *)this + 25) * (HIDWORD(v33) - v9);
    }
    else if ( a3 )
    {
      QuadPart = a3->QuadPart;
    }
    else
    {
      QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
      v11 = HIDWORD(v33);
    }
    v30 = QuadPart;
    if ( SetMetaDataInternal < 0 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_did(v9, (unsigned int)Microsoft_Windows_DxgKrnlEnableBits, v10, v34, QuadPart, 0);
    }
    else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      Template_did((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, v11, v10, v34, QuadPart, v11);
    }
    v31.bGlobalMetaData = 0;
    ExReleasePushLockSharedEx(*(_QWORD *)&v31.bSetMetaData, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)a2 + 17) = HIDWORD(v33);
    memset(&v32, 0, sizeof(v32));
    v13 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 295);
    v32.bProducer = 1;
    v32.bSetMetaData = 1;
    v32.pBuffer = &v30;
    v14 = *v13;
    v32.BufferSize = 8;
    v15 = SwapChainGetSetMetaDataInternal(v14, &v32, 0x14u, 0);
    v20 = v15;
    if ( v15 < 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v21 + 24) = v20;
      WdLogEvent5_WdWarning(v21);
    }
    ObfReferenceObject(*((PVOID *)this + 295));
    Current = DXGPROCESS::GetCurrent(v22);
    v24 = DXGWORKQUEUE::QueueWork(
            (PLIST_ENTRY)(*((_QWORD *)Current + 9) + 88LL),
            (struct _LIST_ENTRY *)lambda_7150a169cdd0c5f2e5952f51a82ef394_::_helper_func_cdecl_,
            *((struct _LIST_ENTRY **)this + 295));
    v26 = v24;
    if ( v24 < 0 )
    {
      v27 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v27 + 24) = v26;
      WdLogEvent5_WdError(v27);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v31);
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v28 + 24) = 1261LL;
    WdLogEvent5_WdError(v28);
    LODWORD(v26) = -1073741823;
  }
  return (unsigned int)v26;
}
