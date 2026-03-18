/*
 * XREFs of ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00697A4
 * Callers:
 *     VidMmInitializePagingProcess @ 0x1C0014FA0 (VidMmInitializePagingProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0067308 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0067A28 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0067D00 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     VidSchCreateSystemDevices @ 0x1C0069E2C (VidSchCreateSystemDevices.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C006A100 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmInitializePagingProcess(VIDMM_GLOBAL *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int inited; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  inited = VIDMM_PAGING_PROCESS::InitPagingProcess((VIDMM_GLOBAL *)((char *)this + 40056), this);
  if ( inited < 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v3, v2, v5, v6);
    *(_QWORD *)(v24 + 24) = 19369LL;
LABEL_14:
    WdLogEvent5_WdAssertion(v24);
    goto LABEL_8;
  }
  inited = VidSchCreateSystemDevices(*(_QWORD *)(*((_QWORD *)this + 2) + 408LL));
  if ( inited < 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v24 + 24) = 19380LL;
    goto LABEL_14;
  }
  inited = VIDMM_GLOBAL::InitDmaPools(this);
  if ( inited < 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v24 + 24) = 19392LL;
    goto LABEL_14;
  }
  v15 = 0;
  if ( *((_DWORD *)this + 1604) )
  {
    while ( 1 )
    {
      inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, v15, 0LL, v14);
      if ( inited < 0 )
        break;
      if ( ++v15 >= *((_DWORD *)this + 1604) )
        goto LABEL_7;
    }
    v24 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v14);
    *(_QWORD *)(v24 + 24) = 19404LL;
    goto LABEL_14;
  }
LABEL_7:
  inited = VIDMM_GLOBAL::CreatePagingFenceObjects(this);
  if ( inited < 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    *(_QWORD *)(v24 + 24) = 19416LL;
    goto LABEL_14;
  }
LABEL_8:
  KeUnstackDetachProcess(&ApcState);
  return (unsigned int)inited;
}
