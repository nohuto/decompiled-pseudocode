/*
 * XREFs of PpmCheckArmPeriod @ 0x140144334
 * Callers:
 *     PpmCheckReInit @ 0x14056A6F4 (PpmCheckReInit.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14000D0F8 (PopExecuteOnTargetProcessors.c)
 */

char PpmCheckArmPeriod()
{
  __int64 v0; // rcx
  char result; // al

  v0 = PpmCheckMinimumPeriod;
  if ( (unsigned int)(10000 * HIDWORD(PpmCurrentProfile[174 * dword_140303D4C + 7])) > (unsigned __int64)PpmCheckMinimumPeriod )
    v0 = (unsigned int)(10000 * HIDWORD(PpmCurrentProfile[174 * dword_140303D4C + 7]));
  result = PpmCheckArmed;
  if ( !PpmCheckArmed )
    goto LABEL_7;
  if ( v0 != PpmCheckPeriod )
  {
    _InterlockedExchange64(&PpmCheckLastExecutionTime, 0LL);
    result = 0;
    PpmCheckArmed = 0;
  }
  if ( !result )
  {
LABEL_7:
    PpmCheckPeriod = v0;
    PopExecuteOnTargetProcessors((__int64)PpmCheckRegistered, (__int64)PpmCheckReset, 0LL, 0LL);
    result = _InterlockedExchange64(&PpmCheckLastExecutionTime, 1LL);
    PpmCheckArmed = 1;
  }
  return result;
}
