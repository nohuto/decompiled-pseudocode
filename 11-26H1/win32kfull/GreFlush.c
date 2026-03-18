/*
 * XREFs of GreFlush @ 0x14006B930
 * Callers:
 *     <none>
 * Callees:
 *     ?vSynchronizeDriver@@YAXK@Z @ 0x14006B94C (-vSynchronizeDriver@@YAXK@Z.c)
 */

void GreFlush()
{
  vSynchronizeDriver(0x40u);
}
