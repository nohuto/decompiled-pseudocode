/*
 * XREFs of PpmPerfReadFeedback @ 0x1400D5108
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PpmPerfReadFeedback()
{
  char v0; // bl

  v0 = 0;
  if ( !PpmPerfControlReadFeedback )
    return 1;
  PpmPerfControlReadFeedback(PpmPerfControlActionCallback);
  return v0;
}
