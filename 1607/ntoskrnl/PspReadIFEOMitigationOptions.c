/*
 * XREFs of PspReadIFEOMitigationOptions @ 0x1404721B0
 * Callers:
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1404732C4 (RtlQueryImageFileKeyOption.c)
 *     PspValidateMitigationOptions @ 0x1404EC4B4 (PspValidateMitigationOptions.c)
 */

void __fastcall PspReadIFEOMitigationOptions(__int64 a1, _QWORD *a2)
{
  void *v2; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // [rsp+40h] [rbp+8h]

  if ( a1 )
  {
    v2 = *(void **)(a1 + 184);
    if ( v2 )
    {
      if ( (int)RtlQueryImageFileKeyOption(v2, 8, 0LL) >= 0 && (int)PspValidateMitigationOptions(v6, 0LL, v4, v6) >= 0 )
        *a2 = v5;
    }
  }
}
