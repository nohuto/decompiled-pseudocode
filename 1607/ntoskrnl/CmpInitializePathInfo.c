/*
 * XREFs of CmpInitializePathInfo @ 0x140403828
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B030 (CmpGetSymbolicLinkTarget.c)
 * Callees:
 *     <none>
 */

void *__fastcall CmpInitializePathInfo(void *a1)
{
  return memset(a1, 0, 0xA8uLL);
}
