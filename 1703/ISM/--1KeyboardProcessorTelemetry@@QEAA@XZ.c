/*
 * XREFs of ??1KeyboardProcessorTelemetry@@QEAA@XZ @ 0x18003C9DC
 * Callers:
 *     _KeyboardProcessor::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1800A1229 (_KeyboardProcessor--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _KeyboardProcessor::Create_::_1_::dtor$2 @ 0x1800A1261 (_KeyboardProcessor--Create_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyboardProcessorTelemetry::~KeyboardProcessorTelemetry(KeyboardProcessorTelemetry *this)
{
  *(_DWORD *)this = 0;
}
