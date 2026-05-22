/*
 * XREFs of ??1?$RefPtr@VWGIRawInputProvider@@@@QEAA@XZ @ 0x180061704
 * Callers:
 *     _WGIRawInputProvider::Create_::_1_::dtor$0 @ 0x1800A2198 (_WGIRawInputProvider--Create_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@PTPProcessor@@UEAAKXZ @ 0x180001BA0 (-Release@PTPProcessor@@UEAAKXZ.c)
 */

PTPProcessor *__fastcall RefPtr<WGIRawInputProvider>::~RefPtr<WGIRawInputProvider>(PTPProcessor **a1)
{
  PTPProcessor *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (PTPProcessor *)PTPProcessor::Release(result);
  return result;
}
