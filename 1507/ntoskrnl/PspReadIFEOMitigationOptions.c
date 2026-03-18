/*
 * XREFs of PspReadIFEOMitigationOptions @ 0x14046A1C8
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x140545DF4 (RtlQueryImageFileKeyOption.c)
 *     PspValidateMitigationOptions @ 0x140553B58 (PspValidateMitigationOptions.c)
 */

void __fastcall PspReadIFEOMitigationOptions(__int64 a1, _QWORD *a2)
{
  void *v2; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+20h] [rbp-18h]
  __int64 v7; // [rsp+40h] [rbp+8h]

  if ( a1 )
  {
    v2 = *(void **)(a1 + 184);
    if ( v2 )
    {
      if ( (int)RtlQueryImageFileKeyOption(v2, 8, 0LL) >= 0
        && (int)PspValidateMitigationOptions(v7, 0LL, v4, v7, v6) >= 0 )
      {
        *a2 = v5;
      }
    }
  }
}
