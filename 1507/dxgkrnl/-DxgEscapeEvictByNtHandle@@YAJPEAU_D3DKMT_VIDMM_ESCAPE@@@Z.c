/*
 * XREFs of ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0124848
 * Callers:
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C001B19C (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MU.c)
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
  __int64 v11; // rbp
  __int64 v12; // rdx
  _QWORD **v13; // rax
  _QWORD *v14; // rsi
  _BYTE v16[88]; // [rsp+30h] [rbp-58h] BYREF
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v18; // [rsp+98h] [rbp+10h] BYREF

  LODWORD(v2) = 0;
  hProcess = a1->SuspendProcess.hProcess;
  if ( hProcess )
  {
    v4 = ObReferenceObjectByHandle(hProcess, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, &v18);
    v2 = v4;
    if ( v4 >= 0 )
    {
      v10 = Object;
      v11 = *((_QWORD *)Object + 2);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 72);
        if ( v12 )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, *(struct DXGADAPTER *const *)(v12 + 16), 0LL);
          LODWORD(v2) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16);
          if ( (int)v2 < 0 )
          {
            ObfDereferenceObject(v10);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
            return (unsigned int)v2;
          }
          v13 = (_QWORD **)(v10[2] + 120LL);
          v14 = *v13;
          while ( v14 != v13 )
          {
            VIDMM_EXPORT::VidMmEvictAllocation(
              *(VIDMM_EXPORT **)(*(_QWORD *)(v11 + 72) + 400LL),
              *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v11 + 72) + 408LL),
              0LL,
              (struct _VIDMM_MULTI_GLOBAL_ALLOC *)*(v14 - 5),
              0LL);
            v14 = (_QWORD *)*v14;
            v13 = (_QWORD **)(v10[2] + 120LL);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
        }
      }
      ObfDereferenceObject(v10);
      return (unsigned int)v2;
    }
    v9 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    *(_QWORD *)(v9 + 24) = a1->EvictByNtHandle.NtHandle;
    *(_QWORD *)(v9 + 32) = v2;
    WdLogEvent5_WdWarning(v9);
  }
  return (unsigned int)v2;
}
