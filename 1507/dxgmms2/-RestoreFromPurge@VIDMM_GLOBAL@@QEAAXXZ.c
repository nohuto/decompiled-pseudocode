/*
 * XREFs of ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0053334
 * Callers:
 *     VidMmRestoreFromPurge @ 0x1C000E810 (VidMmRestoreFromPurge.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0039A20 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C003B628 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C004F540 (-MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::RestoreFromPurge(VIDMM_GLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned int i; // edi
  __int64 v8; // rsi
  int inited; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  _QWORD *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  _QWORD *v18; // rax
  _DWORD v19[20]; // [rsp+20h] [rbp-58h] BYREF

  *((_DWORD *)this + 1616) = 0;
  if ( *((_DWORD *)this + 9986) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 8002LL;
    WdLogEvent5_WdAssertion(v5);
  }
  else
  {
    VIDMM_GLOBAL::MapAllPagingBuffers(this);
    for ( i = 0; i < *((_DWORD *)this + 1604); ++i )
    {
      v8 = *((_QWORD *)this + 4999) + 456LL * i;
      if ( (*(_BYTE *)(v8 + 420) & 0x20) != 0 )
      {
        inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, (__int64 *)i, 0LL, v6);
        v12 = inited;
        if ( inited < 0 )
        {
          v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10);
          v13[3] = 270LL;
          v13[4] = 23LL;
          v13[5] = this;
          v13[6] = i;
          v13[7] = v12;
          WdLogEvent5_WdCriticalError(v13);
        }
        *(_BYTE *)(v8 + 420) &= ~0x20u;
      }
    }
    memset(v19, 0, sizeof(v19));
    v19[1] = -1;
    v19[0] = 101;
    v14 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v19);
    v17 = v14;
    if ( v14 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15);
      v18[3] = 270LL;
      v18[4] = 23LL;
      v18[5] = v17;
      v18[6] = 0LL;
      v18[7] = 0LL;
      WdLogEvent5_WdCriticalError(v18);
    }
  }
}
