/*
 * XREFs of PpmResetDripsAccountingSnapshot @ 0x1401E84C8
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14050C7FC (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     <none>
 */

__int64 PpmResetDripsAccountingSnapshot()
{
  __int64 result; // rax
  __int64 v1; // r8
  __int64 *v2; // rdx
  _QWORD *v3; // rcx

  result = (unsigned int)dword_140305B00;
  if ( PpmPlatformStates && dword_140305B00 != -1 )
  {
    v1 = 26LL;
    v2 = (__int64 *)(1000LL * (unsigned int)dword_140305B00 + 192 + *(_QWORD *)(PpmPlatformStates + 48));
    v3 = &PpmDripsAccountingSnapshot;
    do
    {
      result = *v2;
      v2 += 4;
      *v3++ = result;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
