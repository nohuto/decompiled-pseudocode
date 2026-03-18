/*
 * XREFs of ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C012A900
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C001BC4C (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MU.c)
 */

__int64 __fastcall DxgEscapeEvictByNtHandle(struct _D3DKMT_VIDMM_ESCAPE *a1)
{
  __int64 v2; // rbx
  HANDLE hProcess; // rcx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD **v15; // rax
  _QWORD *v16; // r14
  _BYTE v18[88]; // [rsp+30h] [rbp-58h] BYREF
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v20; // [rsp+98h] [rbp+10h] BYREF

  LODWORD(v2) = 0;
  hProcess = a1->SuspendProcess.hProcess;
  if ( hProcess )
  {
    v4 = ObReferenceObjectByHandle(hProcess, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, &v20);
    v2 = v4;
    if ( v4 < 0 )
    {
      v9 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
      *(_QWORD *)(v9 + 24) = a1->EvictByNtHandle.NtHandle;
      *(_QWORD *)(v9 + 32) = v2;
      WdLogEvent5_WdWarning(v9);
      return (unsigned int)v2;
    }
    v10 = Object;
    v11 = *((_QWORD *)Object + 2);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 72);
      if ( v12 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, *(struct DXGADAPTER *const *)(v12 + 16), 0LL);
        LODWORD(v2) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18);
        if ( (int)v2 < 0 )
        {
          ObfDereferenceObject(v10);
LABEL_10:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18);
          return (unsigned int)v2;
        }
        if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v11 + 72) + 16LL)) >= 2000 )
        {
          v14 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v14 + 24) = 7671LL;
          WdLogEvent5_WdError(v14);
          ObfDereferenceObject(v10);
          LODWORD(v2) = -1073741595;
          goto LABEL_10;
        }
        v15 = (_QWORD **)(v10[2] + 120LL);
        v16 = *v15;
        while ( v16 != v15 )
        {
          VIDMM_EXPORT::VidMmEvictAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(v11 + 72) + 424LL),
            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v11 + 72) + 432LL),
            0LL,
            (struct _VIDMM_MULTI_GLOBAL_ALLOC *)*(v16 - 5),
            0LL);
          v16 = (_QWORD *)*v16;
          v15 = (_QWORD **)(v10[2] + 120LL);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18);
      }
    }
    ObfDereferenceObject(v10);
  }
  return (unsigned int)v2;
}
