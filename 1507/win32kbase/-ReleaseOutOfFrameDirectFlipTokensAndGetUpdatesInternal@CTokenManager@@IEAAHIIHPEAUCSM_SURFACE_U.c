/*
 * XREFs of ?ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_UPDATE@@PEAIPEAH@Z @ 0x1C00E06D8
 * Callers:
 *     NtTokenManagerGetOutOfFrameDirectFlipSurfaceUpdates @ 0x1C00DFE10 (NtTokenManagerGetOutOfFrameDirectFlipSurfaceUpdates.c)
 * Callees:
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C0046EA4 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     ?DeleteOutstandingDirectFlipTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C006FE80 (-DeleteOutstandingDirectFlipTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     ?IsEmpty@CLegacyTokenBuffer@@QEAA_NXZ @ 0x1C00A3F38 (-IsEmpty@CLegacyTokenBuffer@@QEAA_NXZ.c)
 *     ?IsValid@TokenQueueTableEntry@CTokenManager@@QEBA_NXZ @ 0x1C00A44A8 (-IsValid@TokenQueueTableEntry@CTokenManager@@QEBA_NXZ.c)
 *     ?GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJPEA_N0@Z @ 0x1C00E050C (-GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJPEA_N0@Z.c)
 *     ?ReleaseOutOfFrameDirectFlipTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEAIPEA_NPEAPEAVCToken@@@Z @ 0x1C00E0D74 (-ReleaseOutOfFrameDirectFlipTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA.c)
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
  CTokenManager *v7; // rdi
  unsigned int v8; // r14d
  unsigned int v10; // ebp
  int v11; // r13d
  unsigned __int8 v12; // bl
  CTokenQueue **v13; // r15
  CLegacyTokenBuffer *v14; // rcx
  ULONG i; // ebp
  CompositionSurfaceObject **ElementGenericTable; // rax
  CompositionSurfaceObject **v17; // r14
  CompositionSurfaceObject *v18; // rcx
  bool Updates; // al
  BOOL v20; // ebp
  unsigned int v22[21]; // [rsp+44h] [rbp-54h] BYREF
  CTokenManager *v23; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+10h]
  unsigned int v25; // [rsp+B0h] [rbp+18h]
  bool v26; // [rsp+B8h] [rbp+20h] BYREF

  v25 = a3;
  v24 = a2;
  v23 = this;
  v7 = g_pTokenManager;
  v8 = a2;
  v22[0] = 0;
  v10 = a3;
  v11 = 0;
  v12 = 0;
  v13 = 0LL;
  ExAcquirePushLockExclusiveEx((char *)g_pTokenManager + 56, 0LL);
  if ( a4 && (v14 = (CLegacyTokenBuffer *)*((_QWORD *)v7 + 11)) != 0LL && !CLegacyTokenBuffer::IsEmpty(v14) )
  {
    v12 = 1;
  }
  else
  {
    for ( i = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)v7 + 96)) - 1; ; --i )
    {
      ElementGenericTable = (CompositionSurfaceObject **)RtlGetElementGenericTable(
                                                           (PRTL_GENERIC_TABLE)((char *)v7 + 96),
                                                           i);
      v17 = ElementGenericTable;
      if ( !ElementGenericTable )
        break;
      v18 = *ElementGenericTable;
      LOBYTE(v23) = 0;
      v26 = 0;
      CompositionSurfaceObject::GetOutOfFrameDirectFlipNotification(v18, &v26, (bool *)&v23);
      if ( v26 )
      {
        ++v11;
        v13 = v17;
      }
      else if ( *(CompositionSurfaceObject **)v17[1] != v17[1] )
      {
        v12 = 1;
        if ( a4 )
          goto LABEL_25;
      }
    }
    v8 = v24;
    v10 = v25;
  }
  if ( a4 && v12 )
  {
LABEL_25:
    v20 = 0;
  }
  else
  {
    if ( v11 )
    {
      CTokenManager::DeleteOutstandingDirectFlipTokensInternal(v7);
      Updates = CTokenQueue::ReleaseOutOfFrameDirectFlipTokensAndGetUpdates(
                  v13[1],
                  v8,
                  a5,
                  v10,
                  v22,
                  &v26,
                  (struct CToken **)v7 + 23);
      if ( v26 )
        v12 = 1;
      v20 = Updates;
      if ( CTokenManager::TokenQueueTableEntry::IsValid(v13) )
      {
        if ( *(CTokenQueue **)v13[1] == v13[1] && !v12 )
          ZwClearEvent(*((HANDLE *)v7 + 3));
      }
      else
      {
        CTokenManager::RemoveTokenQueueTableEntry(v7, (struct CTokenManager::TokenQueueTableEntry *)v13);
      }
    }
    else
    {
      v20 = 0;
      v12 = 1;
    }
    ZwClearEvent(*((HANDLE *)v7 + 5));
  }
  if ( a7 )
    *a7 = v12;
  *a6 = v22[0];
  ExReleasePushLockExclusiveEx((char *)v7 + 56, 0LL);
  return v20;
}
