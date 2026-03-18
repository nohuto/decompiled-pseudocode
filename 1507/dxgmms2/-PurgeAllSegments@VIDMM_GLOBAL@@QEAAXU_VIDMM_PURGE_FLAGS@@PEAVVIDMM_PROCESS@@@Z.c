/*
 * XREFs of ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C005139C
 * Callers:
 *     VidMmPurgeAllSegments @ 0x1C000E720 (VidMmPurgeAllSegments.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C003B628 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PurgeAllSegments(VIDMM_GLOBAL *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD v13[10]; // [rsp+20h] [rbp-58h] BYREF

  v5 = a2;
  if ( *((_DWORD *)a1 + 9986) )
  {
    memset(v13, 0, sizeof(v13));
    v13[0] = -4294967194LL;
    LODWORD(v13[5]) = v5;
    v13[6] = a3;
    result = VIDMM_GLOBAL::QueueSystemCommandAndWait(a1, (struct _VIDMM_SYSTEM_COMMAND *)v13);
    v11 = (int)result;
    if ( (int)result < 0 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9);
      v12[3] = 270LL;
      v12[4] = 23LL;
      v12[5] = v11;
      v12[6] = 0LL;
      v12[7] = 0LL;
      return WdLogEvent5_WdCriticalError(v12);
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 7958LL;
    return WdLogEvent5_WdAssertion(v7);
  }
  return result;
}
