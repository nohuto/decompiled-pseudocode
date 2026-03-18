/*
 * XREFs of PpmPerfReadFeedback @ 0x1400E7378
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
