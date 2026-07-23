/*
 * XREFs of ObAdjustSecurityQuota @ 0x14051D7E0
 * Callers:
 *     ObSetSecurityDescriptorInfo @ 0x14051D648 (ObSetSecurityDescriptorInfo.c)
 * Callees:
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x14010D3FC (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     PsChargeSharedPoolQuota @ 0x14051D950 (PsChargeSharedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x14051E3D0 (PsReturnSharedPoolQuota.c)
 */

__int64 __fastcall ObAdjustSecurityQuota(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 v4; // rbx
  __int64 v5; // rsi
  void *v6; // rcx

  v2 = a1 - 48;
  if ( *(_QWORD *)(v2 + 32) == 1LL )
    return 0LL;
  v4 = OBJECT_HEADER_TO_QUOTA_INFO(v2);
  v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, a2, 0LL);
  if ( v5 )
  {
    v6 = *(void **)(v4 + 16);
    if ( v6 )
      PsReturnSharedPoolQuota(v6);
    *(_DWORD *)(v4 + 8) = a2;
    *(_QWORD *)(v4 + 16) = v5;
    return 0LL;
  }
  return 3221225540LL;
}
