/*
 * XREFs of ScsiSyncCacheRequest @ 0x1C000C30C
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001000 (NVMeHwBuildIo.c)
 * Callees:
 *     GetSrbScsiAddress @ 0x1C0001F1C (GetSrbScsiAddress.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     GetNamespaceId @ 0x1C0004770 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 */

__int64 __fastcall ScsiSyncCacheRequest(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  char v7; // r8
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v6 = SrbExtension;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1080) + 525LL) & 1) != 0 )
  {
    v9 = 0;
    *(_BYTE *)(SrbExtension + 4245) &= 0xFCu;
    SrbAssignQueueId(a1, v5);
    GetSrbScsiAddress(a2, 0LL, 0LL, &v9);
    *(_DWORD *)(v6 + 4100) = GetNamespaceId(a1, v9);
    *(_BYTE *)(v6 + 4096) = v7;
  }
  else
  {
    *(_BYTE *)(v5 + 3) = 1;
  }
  return 0LL;
}
