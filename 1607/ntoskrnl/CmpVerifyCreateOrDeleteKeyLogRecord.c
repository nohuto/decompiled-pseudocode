/*
 * XREFs of CmpVerifyCreateOrDeleteKeyLogRecord @ 0x140605B94
 * Callers:
 *     CmpVerifyLogRecord @ 0x140605BF4 (CmpVerifyLogRecord.c)
 * Callees:
 *     RtlValidRelativeSecurityDescriptor @ 0x1403F5F04 (RtlValidRelativeSecurityDescriptor.c)
 */

__int64 __fastcall CmpVerifyCreateOrDeleteKeyLogRecord(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int16 v2; // r9
  unsigned int v3; // r8d

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 < 0x40 )
    return 3222863920LL;
  if ( *(_DWORD *)(a1 + 48) > 1u )
    return 3222863920LL;
  v2 = *(_WORD *)(a1 + 32);
  if ( (v2 & 1) != 0 )
    return 3222863920LL;
  v3 = v2 + 64;
  if ( v1 < v3 )
    return 3222863920LL;
  else
    return RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v2 + a1 + 64), v1 - v3, 0) != 0 ? 0 : 0xC0190030;
}
