/*
 * XREFs of NtDCompositionPendingBatches @ 0x1C00D4038
 * Callers:
 *     NtTokenManagerGetOutOfFrameDirectFlipSurfaceUpdates @ 0x1C00DFE10 (NtTokenManagerGetOutOfFrameDirectFlipSurfaceUpdates.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0023418 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0023438 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

_BOOL8 NtDCompositionPendingBatches()
{
  union _SLIST_HEADER *DefaultConnection; // rax
  DirectComposition::CConnection *v1; // rdi
  BOOL v2; // ebx
  unsigned int v3; // edx

  DefaultConnection = (union _SLIST_HEADER *)DirectComposition::CConnection::GetDefaultConnection();
  v1 = (DirectComposition::CConnection *)DefaultConnection;
  if ( DefaultConnection )
  {
    v2 = ExQueryDepthSList(DefaultConnection + 6) != 0;
    DirectComposition::CConnection::Release(v1, v3);
  }
  else
  {
    return 1;
  }
  return v2;
}
