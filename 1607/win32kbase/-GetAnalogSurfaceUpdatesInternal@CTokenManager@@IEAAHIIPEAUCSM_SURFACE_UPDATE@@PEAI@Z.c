/*
 * XREFs of ?GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C00F4704
 * Callers:
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C00F4150 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 * Callees:
 *     ?DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C0019C44 (-DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C0019CA0 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C001A9BC (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?IsValid@TokenQueueTableEntry@CTokenManager@@QEBA_NXZ @ 0x1C001BCC8 (-IsValid@TokenQueueTableEntry@CTokenManager@@QEBA_NXZ.c)
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C001C130 (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 *     ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C00F4C00 (-ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVC.c)
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
    *((_QWORD *)v5 + 27) = v13;
  }
  if ( !(_BYTE)v17 )
  {
LABEL_11:
    v14 = (void *)*((_QWORD *)v5 + 6);
    if ( v14 )
      ZwClearEvent(v14);
  }
  *((_QWORD *)v5 + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v5 + 56, 0LL);
  return Updates;
}
