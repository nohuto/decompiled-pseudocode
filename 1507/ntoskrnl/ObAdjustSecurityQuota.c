/*
 * XREFs of ObAdjustSecurityQuota @ 0x1404CF5A0
 * Callers:
 *     ObSetSecurityDescriptorInfo @ 0x1404CF3B0 (ObSetSecurityDescriptorInfo.c)
 * Callees:
 *     PsChargeSharedPoolQuota @ 0x1404CF74C (PsChargeSharedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x1404D0010 (PsReturnSharedPoolQuota.c)
 */

__int64 __fastcall ObAdjustSecurityQuota(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx
  __int64 v5; // rsi
  void *v6; // rcx

  v2 = a1 - 48;
  if ( *(_QWORD *)(a1 - 48 + 32) == 1LL )
    return 0LL;
  if ( (*(_BYTE *)(v2 + 26) & 8) != 0 )
    v4 = v2 - ObpInfoMaskToOffset[*(_BYTE *)(v2 + 26) & 0xF];
  else
    v4 = 0LL;
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
