/*
 * XREFs of KeAbInitialize @ 0x14016354C
 * Callers:
 *     KiCompleteKernelInit @ 0x1403F98E4 (KiCompleteKernelInit.c)
 * Callees:
 *     <none>
 */

_QWORD *KeAbInitialize()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  result = &KiAbTreeArray;
  v1 = 1024LL;
  do
  {
    *result = 0LL;
    result[1] = 0LL;
    result[2] = 0LL;
    result += 8;
    --v1;
  }
  while ( v1 );
  if ( !KiAbForceDisable )
    KiAbEnabled = 1;
  return result;
}
