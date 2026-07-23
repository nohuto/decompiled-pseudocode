/*
 * XREFs of BiSetBootEntryOrder @ 0x140690F64
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x14068EDB0 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiExportEfiBootManager @ 0x1406902DC (BiExportEfiBootManager.c)
 * Callees:
 *     ZwSetBootEntryOrder @ 0x140153400 (ZwSetBootEntryOrder.c)
 *     BiReleasePrivilege @ 0x1404FB4AC (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1404FB4F8 (BiAcquirePrivilege.c)
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
