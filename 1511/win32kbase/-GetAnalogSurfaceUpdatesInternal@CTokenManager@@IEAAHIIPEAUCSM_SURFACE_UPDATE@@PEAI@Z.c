/*
 * XREFs of ?GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C00E2308
 * Callers:
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C00E1AA0 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 * Callees:
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C0039CF8 (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 *     ?DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C003C9AC (-DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C003CA28 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C003D4A4 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?IsValid@TokenQueueTableEntry@CTokenManager@@QEBA_NXZ @ 0x1C00A8F2C (-IsValid@TokenQueueTableEntry@CTokenManager@@QEBA_NXZ.c)
 *     ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C00E2A30 (-ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVC.c)
 */

_BOOL8 __fastcall CTokenManager::GetAnalogSurfaceUpdatesInternal(
        CTokenManager *this,
        unsigned int a2,
        unsigned int a3,
        struct CSM_SURFACE_UPDATE *a4,
        unsigned int *a5)
{
  CTokenManager *v5; // rbx
  CompositionSurfaceObject **v6; // rsi
  int v8; // r14d
  BOOL Updates; // r15d
  ULONG v10; // ebp
  CompositionSurfaceObject **ElementGenericTable; // rdi
  CTokenQueue *v12; // rcx
  struct CToken *v13; // rdi
  void *v14; // rcx
  struct CToken *v16; // [rsp+40h] [rbp-48h] BYREF
  CTokenManager *v17; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+98h] [rbp+10h]
  unsigned int v19; // [rsp+A0h] [rbp+18h]

  v19 = a3;
  v18 = a2;
  v17 = this;
  v5 = g_pTokenManager;
  v6 = 0LL;
  LOBYTE(v17) = 0;
  v8 = 0;
  Updates = 0;
  CTokenManager::AcquireTokenManagerLock(g_pTokenManager);
  v10 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)v5 + 128)) - 1;
  ElementGenericTable = (CompositionSurfaceObject **)RtlGetElementGenericTable(
                                                       (PRTL_GENERIC_TABLE)((char *)v5 + 128),
                                                       v10);
  if ( !ElementGenericTable )
    goto LABEL_11;
  do
  {
    if ( CompositionSurfaceObject::GetAnalogExclusive(*ElementGenericTable) )
    {
      ++v8;
      v6 = ElementGenericTable;
    }
    ElementGenericTable = (CompositionSurfaceObject **)RtlGetElementGenericTable(
                                                         (PRTL_GENERIC_TABLE)((char *)v5 + 128),
                                                         --v10);
  }
  while ( ElementGenericTable );
  if ( !v8 )
    goto LABEL_11;
  v12 = v6[1];
  v16 = 0LL;
  Updates = CTokenQueue::ReleaseAnalogTokensAndGetUpdates(v12, v18, a4, v19, (bool *)&v17, a5, &v16);
  if ( !CTokenManager::TokenQueueTableEntry::IsValid(v6) )
    CTokenManager::RemoveTokenQueueTableEntry(v5, (struct CTokenManager::TokenQueueTableEntry *)v6);
  v13 = v16;
  if ( v16 )
  {
    CTokenManager::DeleteOutstandingAnalogTokenInternal(v5);
    *((_QWORD *)v5 + 28) = v13;
  }
  if ( !(_BYTE)v17 )
  {
LABEL_11:
    v14 = (void *)*((_QWORD *)v5 + 7);
    if ( v14 )
      ZwClearEvent(v14);
  }
  *(_QWORD *)v5 = 0LL;
  ExReleasePushLockExclusiveEx((char *)v5 + 64);
  return Updates;
}
