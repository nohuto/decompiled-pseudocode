/*
 * XREFs of PpmResetDripsAccountingSnapshot @ 0x140235790
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140583AF8 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     <none>
 */

__int64 PpmResetDripsAccountingSnapshot()
{
  __int64 result; // rax
  __int64 v1; // r8
  __int64 *v2; // rdx
  _QWORD *v3; // rcx

  result = (unsigned int)dword_140353880;
  if ( PpmPlatformStates && dword_140353880 != -1 )
  {
    v1 = 26LL;
    v2 = (__int64 *)(992LL * (unsigned int)dword_140353880 + 184 + *(_QWORD *)(PpmPlatformStates + 48));
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
