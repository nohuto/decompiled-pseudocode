/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x14057C9D8
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x14057C7A8 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x14066FFD0 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

char PopNetUpdateCsConsumptionFlags()
{
  char result; // al

  if ( qword_140328888 )
  {
    if ( (byte_14032892D & 1) == 0 )
    {
      result = (byte_14032892D ^ (PopNetCompliantNicCount != 0)) & 1;
      byte_14032892D ^= result;
    }
  }
  return result;
}
