/*
 * XREFs of ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006A524
 * Callers:
 *     VidMmRestoreFromPurge @ 0x1C0012BE0 (VidMmRestoreFromPurge.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00547B0 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006A090 (-MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C006F124 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RestoreFromPurge(VIDMM_GLOBAL *this, __int64 a2)
{
  bool v2; // zf
  unsigned int i; // edi
  __int64 v5; // rsi
  int inited; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _DWORD v21[24]; // [rsp+20h] [rbp-68h] BYREF

  v2 = *((_DWORD *)this + 10022) == 0;
  *((_BYTE *)this + 6496) = 0;
  if ( v2 )
  {
    VIDMM_GLOBAL::MapAllPagingBuffers(this);
    for ( i = 0; i < *((_DWORD *)this + 1604); ++i )
    {
      v5 = *((_QWORD *)this + 5017) + 456LL * i;
      if ( (*(_BYTE *)(v5 + 420) & 0x20) != 0 )
      {
        inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, i, 0);
        v11 = inited;
        if ( inited < 0 )
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7, v9, v10);
          v19[3] = 270LL;
          v19[4] = 23LL;
          v19[5] = this;
          v19[6] = i;
          v19[7] = v11;
          WdLogEvent5_WdCriticalError(v19);
        }
        *(_BYTE *)(v5 + 420) &= ~0x20u;
      }
    }
    memset(v21, 0, 0x58uLL);
    v21[1] = -1;
    v21[0] = 101;
    v12 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v21);
    v17 = v12;
    if ( v12 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13, v15, v16);
      v20[3] = 270LL;
      v20[4] = 23LL;
      v20[5] = v17;
      v20[6] = 0LL;
      v20[7] = 0LL;
      WdLogEvent5_WdCriticalError(v20);
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v18 + 24) = 8253LL;
    WdLogEvent5_WdAssertion(v18);
  }
}
