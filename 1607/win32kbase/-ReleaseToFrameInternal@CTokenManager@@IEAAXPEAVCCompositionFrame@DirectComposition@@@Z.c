/*
 * XREFs of ?ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C001A834
 * Callers:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C00181B0 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 * Callees:
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C0019CA0 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     ?ReleaseCompositionHandleTokensToFrame@CTokenManager@@IEAA_NPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C001A590 (-ReleaseCompositionHandleTokensToFrame@CTokenManager@@IEAA_NPEAVCCompositionFrame@DirectComposit.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001B12C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C001B168 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?IsValid@TokenQueueTableEntry@CTokenManager@@QEBA_NXZ @ 0x1C001BCC8 (-IsValid@TokenQueueTableEntry@CTokenManager@@QEBA_NXZ.c)
 *     ?ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C001BD04 (-ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@DirectComposition@@@Z.c)
 */

void __fastcall CTokenManager::ReleaseToFrameInternal(
        CTokenManager *this,
        struct DirectComposition::CCompositionFrame *a2)
{
  CTokenManager *v2; // rdi
  char v4; // bp
  char *v5; // rbx
  __int64 v6; // rcx
  ULONG v7; // r15d
  CTokenQueue **ElementGenericTable; // rsi
  CTokenQueue *v9; // rbx
  CPushLock *v10; // r12
  char v11; // bl
  char v12; // al

  v2 = g_pTokenManager;
  v4 = 0;
  v5 = (char *)g_pTokenManager + 56;
  ExAcquirePushLockExclusiveEx((char *)g_pTokenManager + 56, 0LL);
  v6 = *((_QWORD *)v2 + 15);
  *((_QWORD *)v2 + 8) = KeGetCurrentThread();
  if ( v6 && (*(_QWORD *)(v6 + 2088) != v6 + 16 || *(_DWORD *)(v6 + 32)) )
  {
    *((_QWORD *)a2 + 11) = v6;
    *(_QWORD *)(v6 + 2088) = v6 + 16;
    *(_BYTE *)(v6 + 2108) = 1;
    *((_DWORD *)a2 + 24) = 1;
    *((_QWORD *)v2 + 15) = 0LL;
  }
  if ( *((_DWORD *)v2 + 20) )
  {
    v7 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)v2 + 128)) - 1;
    ElementGenericTable = (CTokenQueue **)RtlGetElementGenericTable((PRTL_GENERIC_TABLE)((char *)v2 + 128), v7);
    if ( ElementGenericTable )
    {
      do
      {
        v9 = *ElementGenericTable;
        v10 = (CTokenQueue *)((char *)*ElementGenericTable + 32);
        if ( (int)CPushLock::AcquireLockShared(v10) < 0
          || (v11 = *((_BYTE *)v9 + 112), CPushLock::ReleaseLock(v10), !v11) )
        {
          v4 |= CTokenQueue::ReleaseTokensToFrame(ElementGenericTable[1], a2);
        }
        if ( !CTokenManager::TokenQueueTableEntry::IsValid((CTokenManager::TokenQueueTableEntry *)ElementGenericTable) )
          CTokenManager::RemoveTokenQueueTableEntry(
            v2,
            (struct CTokenManager::TokenQueueTableEntry *)ElementGenericTable);
        ElementGenericTable = (CTokenQueue **)RtlGetElementGenericTable((PRTL_GENERIC_TABLE)((char *)v2 + 128), --v7);
      }
      while ( ElementGenericTable );
      v5 = (char *)v2 + 56;
    }
  }
  else
  {
    v4 = 1;
  }
  v12 = CTokenManager::ReleaseCompositionHandleTokensToFrame(v2, a2);
  *((_QWORD *)v2 + 11) = *((_QWORD *)a2 + 8);
  if ( !((unsigned __int8)v12 | (unsigned __int8)v4) )
    ZwClearEvent(*((HANDLE *)v2 + 4));
  *((_QWORD *)v2 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
}
