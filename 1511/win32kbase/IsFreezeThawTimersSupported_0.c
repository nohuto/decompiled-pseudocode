/*
 * XREFs of IsFreezeThawTimersSupported_0 @ 0x1C0002018
 * Callers:
 *     UserProcessFreezeCallout @ 0x1C000CAB4 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C000EA64 (UserProcessThawCallout.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsFreezeThawTimersSupported_0()
{
  return IsFreezeThawTimersSupported();
}
