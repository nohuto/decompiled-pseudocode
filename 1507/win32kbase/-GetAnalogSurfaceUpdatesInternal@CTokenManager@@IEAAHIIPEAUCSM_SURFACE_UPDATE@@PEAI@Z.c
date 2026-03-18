/*
 * XREFs of ?GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C00E03D4
 * Callers:
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C00DFB50 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 * Callees:
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C0046EA4 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     ?DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C006FE60 (-DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C00A3DC8 (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 *     ?IsValid@TokenQueueTableEntry@CTokenManager@@QEBA_NXZ @ 0x1C00A44A8 (-IsValid@TokenQueueTableEntry@CTokenManager@@QEBA_NXZ.c)
 *     ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C00E0AB4 (-ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVC.c)
 */

_BOOL8 __fastcall CTokenManager::GetAnalogSurfaceUpdatesInternal(
        CTokenManager *this,
        unsigned int a2,
        unsigned int a3,
        struct CSM_SURFACE_UPDATE *a4,
        unsigned int *a5)
{
  CTokenManager *v5; // rbx
  CTokenQueue **v6; // rsi
  int v7; // r14d
  BOOL Updates; // r15d
  ULONG v9; // ebp
  CompositionSurfaceObject **ElementGenericTable; // rdi
  void *v11; // rcx
  CTokenManager *v13; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+98h] [rbp+10h]
  unsigned int v15; // [rsp+A0h] [rbp+18h]
  struct CSM_SURFACE_UPDATE *v16; // [rsp+A8h] [rbp+20h]

  v16 = a4;
  v15 = a3;
  v14 = a2;
  v13 = this;
  v5 = g_pTokenManager;
  v6 = 0LL;
  LOBYTE(v13) = 0;
  v7 = 0;
  Updates = 0;
  ExAcquirePushLockExclusiveEx((char *)g_pTokenManager + 56, 0LL);
  v9 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)v5 + 96)) - 1;
  ElementGenericTable = (CompositionSurfaceObject **)RtlGetElementGenericTable(
                                                       (PRTL_GENERIC_TABLE)((char *)v5 + 96),
                                                       v9);
  if ( !ElementGenericTable )
    goto LABEL_9;
  do
  {
    if ( CompositionSurfaceObject::GetAnalogExclusive(*ElementGenericTable) )
    {
      ++v7;
      v6 = ElementGenericTable;
    }
    ElementGenericTable = (CompositionSurfaceObject **)RtlGetElementGenericTable(
                                                         (PRTL_GENERIC_TABLE)((char *)v5 + 96),
                                                         --v9);
  }
  while ( ElementGenericTable );
  if ( !v7 )
    goto LABEL_9;
  CTokenManager::DeleteOutstandingAnalogTokenInternal(v5);
  Updates = CTokenQueue::ReleaseAnalogTokensAndGetUpdates(
              v6[1],
              v14,
              v16,
              v15,
              (bool *)&v13,
              a5,
              (struct CToken **)v5 + 24);
  if ( !CTokenManager::TokenQueueTableEntry::IsValid(v6) )
    CTokenManager::RemoveTokenQueueTableEntry(v5, (struct CTokenManager::TokenQueueTableEntry *)v6);
  if ( !(_BYTE)v13 )
  {
LABEL_9:
    v11 = (void *)*((_QWORD *)v5 + 6);
    if ( v11 )
      ZwClearEvent(v11);
  }
  ExReleasePushLockExclusiveEx((char *)v5 + 56, 0LL);
  return Updates;
}
