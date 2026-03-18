/*
 * XREFs of ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C006A4A0
 * Callers:
 *     VidMmPurgeAllSegments @ 0x1C0012BF0 (VidMmPurgeAllSegments.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00547B0 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C006A79C (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgeAllSegments(VIDMM_GLOBAL *a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD v14[12]; // [rsp+20h] [rbp-68h] BYREF

  if ( *((_DWORD *)a1 + 10022) )
  {
    memset(v14, 0, 0x58uLL);
    v14[0] = -4294967194LL;
    LODWORD(v14[5]) = a2;
    v14[6] = a3;
    v6 = VIDMM_GLOBAL::QueueSystemCommandAndWait(a1, (struct _VIDMM_SYSTEM_COMMAND *)v14);
    v11 = v6;
    if ( v6 < 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7, v9, v10);
      v13[3] = 270LL;
      v13[4] = 23LL;
      v13[5] = v11;
      v13[6] = 0LL;
      v13[7] = 0LL;
      WdLogEvent5_WdCriticalError(v13);
    }
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(0);
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(a1);
    v12[3] = a1;
    v12[4] = a2;
    v12[5] = a3;
    WdLogEvent5_WdWarning(v12);
  }
}
