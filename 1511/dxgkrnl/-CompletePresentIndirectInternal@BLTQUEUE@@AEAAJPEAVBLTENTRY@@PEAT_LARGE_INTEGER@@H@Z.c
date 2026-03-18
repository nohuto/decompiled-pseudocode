/*
 * XREFs of ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C015D9A0
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00BFA8C (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C015E028 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00035C0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C0021840 (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     Template_did @ 0x1C0021C88 (Template_did.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C0167398 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
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
  struct DXGPROCESS *Current; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  LONGLONG v29; // [rsp+30h] [rbp-49h] BYREF
  _D3DKMT_GETSETSWAPCHAINMETADATA v30; // [rsp+38h] [rbp-41h] BYREF
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v31; // [rsp+60h] [rbp-19h] BYREF
  __int64 v32; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v33; // [rsp+90h] [rbp+17h]
  __int64 v34; // [rsp+98h] [rbp+1Fh]
  int v35; // [rsp+A0h] [rbp+27h]

  v3 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 298);
  if ( v3 )
  {
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    v35 = 0;
    memset(&v30, 0, sizeof(v30));
    v7 = *v3;
    v30.pBuffer = &v32;
    *(_QWORD *)&v30.bProducer = 1LL;
    v30.bSetMetaData = 0;
    v30.BufferSize = 28;
    SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v7, &v30, 0, 0);
    if ( SetMetaDataInternal == -2147483643 )
      SetMetaDataInternal = 0;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v30, (struct _KTHREAD **)this + 19);
    DXGPUSHLOCK::AcquireShared(*(DXGPUSHLOCK **)&v30.bSetMetaData);
    v11 = HIDWORD(v32);
    if ( SetMetaDataInternal >= 0 && (v32 & 2) != 0 && (v9 = *((_QWORD *)this + 23), HIDWORD(v32) > v9) )
    {
      QuadPart = *((_QWORD *)this + 24) + *((_QWORD *)this + 25) * (HIDWORD(v32) - v9);
    }
    else if ( a3 )
    {
      QuadPart = a3->QuadPart;
    }
    else
    {
      QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
      v11 = HIDWORD(v32);
    }
    v29 = QuadPart;
    if ( SetMetaDataInternal < 0 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_did(v9, (unsigned int)Microsoft_Windows_DxgKrnlEnableBits, v10, v33, QuadPart, 0);
    }
    else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      Template_did((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, v11, v10, v33, QuadPart, v11);
    }
    v30.bGlobalMetaData = 0;
    ExReleasePushLockSharedEx(*(_QWORD *)&v30.bSetMetaData, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)a2 + 17) = HIDWORD(v32);
    memset(&v31, 0, sizeof(v31));
    v13 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 298);
    v31.bProducer = 1;
    v31.bSetMetaData = 1;
    v31.pBuffer = &v29;
    v14 = *v13;
    v31.BufferSize = 8;
    v15 = SwapChainGetSetMetaDataInternal(v14, &v31, 0x14u, 0);
    v20 = v15;
    if ( v15 < 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v21 + 24) = v20;
      WdLogEvent5_WdWarning(v21);
    }
    ObfReferenceObject(*((PVOID *)this + 298));
    Current = DXGPROCESS::GetCurrent();
    v23 = DXGWORKQUEUE::QueueWork(
            (PLIST_ENTRY)(*((_QWORD *)Current + 9) + 88LL),
            (struct _LIST_ENTRY *)sub_1C015D7F0,
            *((struct _LIST_ENTRY **)this + 298));
    v25 = v23;
    if ( v23 < 0 )
    {
      v26 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v26 + 24) = v25;
      WdLogEvent5_WdError(v26);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v30);
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v27 + 24) = 1252LL;
    WdLogEvent5_WdError(v27);
    LODWORD(v25) = -1073741823;
  }
  return (unsigned int)v25;
}
