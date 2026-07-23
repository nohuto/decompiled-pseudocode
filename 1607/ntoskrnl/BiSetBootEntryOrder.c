/*
 * XREFs of BiSetBootEntryOrder @ 0x1406D5868
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x1406D365C (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiExportEfiBootManager @ 0x1406D4BB8 (BiExportEfiBootManager.c)
 * Callees:
 *     ZwSetBootEntryOrder @ 0x14015D070 (ZwSetBootEntryOrder.c)
 *     BiReleasePrivilege @ 0x14053C260 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14053C2AC (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiSetBootEntryOrder(PULONG Ids, PULONG Count)
{
  unsigned int v2; // edi
  NTSTATUS v4; // ebx
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = (unsigned int)Count;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v6);
  if ( v4 >= 0 )
  {
    v4 = ZwSetBootEntryOrder(Ids, (PULONG)v2);
    BiReleasePrivilege(&v6);
  }
  return (unsigned int)v4;
}
