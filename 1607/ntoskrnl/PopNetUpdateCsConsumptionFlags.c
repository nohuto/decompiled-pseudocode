/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x14057C52C
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x14057C2FC (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x14066FEEC (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

char PopNetUpdateCsConsumptionFlags()
{
  char result; // al

  if ( qword_140328848 )
  {
    if ( (byte_1403288ED & 1) == 0 )
    {
      result = (byte_1403288ED ^ (PopNetCompliantNicCount != 0)) & 1;
      byte_1403288ED ^= result;
    }
  }
  return result;
}
