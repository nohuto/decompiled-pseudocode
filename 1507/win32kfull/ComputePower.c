/*
 * XREFs of ComputePower @ 0x1C01C7A10
 * Callers:
 *     ComputeHighMetricValue @ 0x1C01C7948 (ComputeHighMetricValue.c)
 *     RetrieveRealAngularPhysicalValues @ 0x1C01CC7E4 (RetrieveRealAngularPhysicalValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputePower(__int16 a1)
{
  int v1; // edx
  __int64 result; // rax
  bool v3; // zf

  v1 = 10;
  result = 1LL;
  v3 = a1 == 0;
  if ( a1 < 0 )
  {
    a1 = -a1;
    v3 = a1 == 0;
  }
  if ( !v3 )
  {
    do
    {
      if ( (a1 & 1) != 0 )
        result = (unsigned int)(v1 * result);
      v1 *= v1;
      a1 >>= 1;
    }
    while ( a1 );
  }
  return result;
}
