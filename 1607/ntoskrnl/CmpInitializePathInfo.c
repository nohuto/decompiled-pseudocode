/*
 * XREFs of CmpInitializePathInfo @ 0x140404968
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 * Callees:
 *     <none>
 */

void *__fastcall CmpInitializePathInfo(void *a1)
{
  return memset(a1, 0, 0xA8uLL);
}
