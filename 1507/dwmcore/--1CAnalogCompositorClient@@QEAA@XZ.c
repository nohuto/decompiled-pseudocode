/*
 * XREFs of ??1CAnalogCompositorClient@@QEAA@XZ @ 0x18009791C
 * Callers:
 *     _dynamic_atexit_destructor_for__g_AnalogCompositor__ @ 0x18009C700 (_dynamic_atexit_destructor_for__g_AnalogCompositor__.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnalogCompositorClient::~CAnalogCompositorClient(CAnalogCompositorClient *this)
{
  Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease(&qword_180195FD0);
}
