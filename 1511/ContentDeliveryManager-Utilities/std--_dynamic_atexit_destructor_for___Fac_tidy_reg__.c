/*
 * XREFs of std::_dynamic_atexit_destructor_for___Fac_tidy_reg__ @ 0x180029FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??_G_Fac_node@std@@QEAAPEAXI@Z @ 0x180022FA0 (--_G_Fac_node@std@@QEAAPEAXI@Z.c)
 */

std::_Fac_node *std::_dynamic_atexit_destructor_for___Fac_tidy_reg__()
{
  std::_Fac_node *result; // rax
  std::_Fac_node *v1; // rcx

  while ( 1 )
  {
    v1 = qword_18003D3D8;
    if ( !qword_18003D3D8 )
      break;
    qword_18003D3D8 = *(std::_Fac_node **)qword_18003D3D8;
    result = std::_Fac_node::`scalar deleting destructor'(v1, 1);
  }
  return result;
}
