/*
 * XREFs of IsFreezeThawTimersSupported_0 @ 0x1C0001FE8
 * Callers:
 *     UserProcessFreezeCallout @ 0x1C0004F40 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C00075B4 (UserProcessThawCallout.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsFreezeThawTimersSupported_0()
{
  return IsFreezeThawTimersSupported();
}
