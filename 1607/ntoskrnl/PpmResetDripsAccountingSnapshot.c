/*
 * XREFs of PpmResetDripsAccountingSnapshot @ 0x140200ED8
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140547F5C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     <none>
 */

__int64 PpmResetDripsAccountingSnapshot()
{
  __int64 result; // rax
  __int64 v1; // r8
  __int64 *v2; // rdx
  _QWORD *v3; // rcx

  result = (unsigned int)dword_140328940;
  if ( PpmPlatformStates && dword_140328940 != -1 )
  {
    v1 = 26LL;
    v2 = (__int64 *)(1000LL * (unsigned int)dword_140328940 + 192 + *(_QWORD *)(PpmPlatformStates + 48));
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
