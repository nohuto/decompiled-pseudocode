/*
 * XREFs of ?ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_UPDATE@@PEAIPEAH@Z @ 0x1C00E262C
 * Callers:
 *     NtTokenManagerGetOutOfFrameDirectFlipSurfaceUpdates @ 0x1C00E1D60 (NtTokenManagerGetOutOfFrameDirectFlipSurfaceUpdates.c)
 * Callees:
 *     ?DeleteOutstandingDirectFlipTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C003C9CC (-DeleteOutstandingDirectFlipTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C003CA28 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C003D4A4 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?IsEmpty@CLegacyTokenBuffer@@QEAA_NXZ @ 0x1C00A8A34 (-IsEmpty@CLegacyTokenBuffer@@QEAA_NXZ.c)
 *     ?IsValid@TokenQueueTableEntry@CTokenManager@@QEBA_NXZ @ 0x1C00A8F2C (-IsValid@TokenQueueTableEntry@CTokenManager@@QEBA_NXZ.c)
 *     ?GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJPEA_N0@Z @ 0x1C00E2460 (-GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJPEA_N0@Z.c)
 *     ?ReleaseOutOfFrameDirectFlipTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEAIPEA_NPEAPEAVCToken@@@Z @ 0x1C00E2CD0 (-ReleaseOutOfFrameDirectFlipTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA.c)
 */

_BOOL8 __fastcall CTokenManager::ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal(
        CTokenManager *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        struct CSM_SURFACE_UPDATE *a5,
        unsigned int *a6,
        int *a7)
{
  CTokenManager *v7; // rbx
  unsigned int v9; // ebp
  unsigned int v10; // r14d
  int v11; // r13d
  unsigned __int8 v12; // di
  CTokenQueue **v13; // r15
  CLegacyTokenBuffer *v14; // rcx
  ULONG v15; // eax
  struct _RTL_GENERIC_TABLE *v16; // rcx
  ULONG i; // ebp
  CompositionSurfaceObject **ElementGenericTable; // rax
  CompositionSurfaceObject **v19; // r14
  CompositionSurfaceObject *v20; // rcx
  bool Updates; // al
  BOOL v22; // ebp
  unsigned int v24[21]; // [rsp+44h] [rbp-54h] BYREF
  CTokenManager *v25; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+10h]
  unsigned int v27; // [rsp+B0h] [rbp+18h]
  bool v28; // [rsp+B8h] [rbp+20h] BYREF

  v27 = a3;
  v26 = a2;
  v25 = this;
  v7 = g_pTokenManager;
  v24[0] = 0;
  v9 = a3;
  v10 = a2;
  v11 = 0;
  v12 = 0;
  v13 = 0LL;
  CTokenManager::AcquireTokenManagerLock(g_pTokenManager);
  if ( a4 && (v14 = (CLegacyTokenBuffer *)*((_QWORD *)v7 + 15)) != 0LL && !CLegacyTokenBuffer::IsEmpty(v14) )
  {
    v12 = 1;
  }
  else
  {
    v15 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)v7 + 128));
    v16 = (struct _RTL_GENERIC_TABLE *)((char *)v7 + 128);
    for ( i = v15 - 1; ; --i )
    {
      ElementGenericTable = (CompositionSurfaceObject **)RtlGetElementGenericTable(v16, i);
      v19 = ElementGenericTable;
      if ( !ElementGenericTable )
        break;
      v20 = *ElementGenericTable;
      LOBYTE(v25) = 0;
      v28 = 0;
      CompositionSurfaceObject::GetOutOfFrameDirectFlipNotification(v20, &v28, (bool *)&v25);
      if ( v28 )
      {
        ++v11;
        v13 = v19;
      }
      else if ( *(CompositionSurfaceObject **)v19[1] != v19[1] )
      {
        v12 = 1;
        if ( a4 )
          goto LABEL_25;
      }
      v16 = (struct _RTL_GENERIC_TABLE *)((char *)v7 + 128);
    }
    v10 = v26;
    v9 = v27;
  }
  if ( a4 && v12 )
  {
LABEL_25:
    v22 = 0;
  }
  else
  {
    if ( v11 )
    {
      CTokenManager::DeleteOutstandingDirectFlipTokensInternal(v7);
      Updates = CTokenQueue::ReleaseOutOfFrameDirectFlipTokensAndGetUpdates(
                  v13[1],
                  v10,
                  a5,
                  v9,
                  v24,
                  &v28,
                  (struct CToken **)v7 + 27);
      if ( v28 )
        v12 = 1;
      v22 = Updates;
      if ( CTokenManager::TokenQueueTableEntry::IsValid(v13) )
      {
        if ( *(CTokenQueue **)v13[1] == v13[1] && !v12 )
          ZwClearEvent(*((HANDLE *)v7 + 4));
      }
      else
      {
        CTokenManager::RemoveTokenQueueTableEntry(v7, (struct CTokenManager::TokenQueueTableEntry *)v13);
      }
    }
    else
    {
      v22 = 0;
      v12 = 1;
    }
    ZwClearEvent(*((HANDLE *)v7 + 6));
  }
  if ( a7 )
    *a7 = v12;
  *a6 = v24[0];
  *(_QWORD *)v7 = 0LL;
  ExReleasePushLockExclusiveEx((char *)v7 + 64);
  return v22;
}
