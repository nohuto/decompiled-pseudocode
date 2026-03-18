/*
 * XREFs of ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0063030
 * Callers:
 *     VidMmRestoreFromPurge @ 0x1C0014DF0 (VidMmRestoreFromPurge.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0062A98 (-MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0067308 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0067AF4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RestoreFromPurge(VIDMM_GLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  unsigned int i; // edi
  __int64 v7; // rsi
  int inited; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  bool v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _DWORD v24[20]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *((_DWORD *)this + 10000) == 0;
  *((_BYTE *)this + 6464) = 0;
  if ( v4 )
  {
    VIDMM_GLOBAL::MapAllPagingBuffers(this);
    for ( i = 0; i < *((_DWORD *)this + 1604); ++i )
    {
      v7 = *((_QWORD *)this + 5006) + 456LL * i;
      if ( (*(_BYTE *)(v7 + 420) & 0x20) != 0 )
      {
        inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, i, 0);
        v13 = inited;
        if ( inited < 0 )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v11, v12);
          v22[3] = 270LL;
          v22[4] = 23LL;
          v22[5] = this;
          v22[6] = i;
          v22[7] = v13;
          WdLogEvent5_WdCriticalError(v22);
        }
        *(_BYTE *)(v7 + 420) &= ~0x20u;
      }
    }
    memset(v24, 0, sizeof(v24));
    v24[1] = -1;
    v24[0] = 101;
    v15 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v24, v14);
    v20 = v15;
    if ( v15 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v18, v19);
      v23[3] = 270LL;
      v23[4] = 23LL;
      v23[5] = v20;
      v23[6] = 0LL;
      v23[7] = 0LL;
      WdLogEvent5_WdCriticalError(v23);
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v21 + 24) = 8087LL;
    WdLogEvent5_WdAssertion(v21);
  }
}
