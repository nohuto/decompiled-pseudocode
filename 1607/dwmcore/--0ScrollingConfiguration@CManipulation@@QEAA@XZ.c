/*
 * XREFs of ??0ScrollingConfiguration@CManipulation@@QEAA@XZ @ 0x1800C0790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CManipulation::ScrollingConfiguration *__fastcall CManipulation::ScrollingConfiguration::ScrollingConfiguration(
        CManipulation::ScrollingConfiguration *this)
{
  CManipulation::ScrollingConfiguration *result; // rax

  *(_BYTE *)this &= ~1u;
  result = this;
  *(_BYTE *)this |= 2u;
  return result;
}
