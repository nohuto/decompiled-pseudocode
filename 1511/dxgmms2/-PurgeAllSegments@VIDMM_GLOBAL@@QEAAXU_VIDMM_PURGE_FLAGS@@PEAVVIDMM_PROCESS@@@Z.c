/*
 * XREFs of ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0062FB8
 * Callers:
 *     VidMmPurgeAllSegments @ 0x1C0014E00 (VidMmPurgeAllSegments.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0067AF4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PurgeAllSegments(VIDMM_GLOBAL *a1, unsigned int a2, __int64 a3)
{
  bool v6; // r8
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD v15[10]; // [rsp+20h] [rbp-58h] BYREF

  if ( *((_DWORD *)a1 + 10000) )
  {
    memset(v15, 0, sizeof(v15));
    v15[0] = -4294967194LL;
    LODWORD(v15[5]) = a2;
    v15[6] = a3;
    result = VIDMM_GLOBAL::QueueSystemCommandAndWait(a1, (struct _VIDMM_SYSTEM_COMMAND *)v15, v6);
    v12 = (int)result;
    if ( (int)result < 0 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10, v11);
      v14[3] = 270LL;
      v14[4] = 23LL;
      v14[5] = v12;
      v14[6] = 0LL;
      v14[7] = 0LL;
      return WdLogEvent5_WdCriticalError(v14);
    }
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(a1);
    v13[3] = a1;
    v13[4] = a2;
    v13[5] = a3;
    return WdLogEvent5_WdWarning(v13);
  }
  return result;
}
