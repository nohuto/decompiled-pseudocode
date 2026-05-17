/*
 * XREFs of RtlpHpLfhOwnerInitialize @ 0x1800775A0
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1800770D8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhBucketActivate @ 0x180077310 (RtlpHpLfhBucketActivate.c)
 *     RtlpHpLfhBucketInitialize @ 0x180077538 (RtlpHpLfhBucketInitialize.c)
 * Callees:
 *     memset @ 0x1800ACCC0 (memset.c)
 */

_BYTE *__fastcall RtlpHpLfhOwnerInitialize(_BYTE *a1, char a2, int a3)
{
  _BYTE *result; // rax

  memset(a1, 0, 0x38uLL);
  if ( a3 == -1 )
    *a1 |= 1u;
  else
    a1[2] = a3;
  *((_QWORD *)a1 + 2) = 0LL;
  a1[1] = a2;
  *((_QWORD *)a1 + 4) = a1 + 24;
  *((_QWORD *)a1 + 3) = a1 + 24;
  result = a1 + 40;
  *((_QWORD *)a1 + 6) = a1 + 40;
  *((_QWORD *)a1 + 5) = a1 + 40;
  return result;
}
