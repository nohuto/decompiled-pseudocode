/*
 * XREFs of ??_ECEventResponse@@UEAAPEAXI@Z @ 0x180100A60
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CEventResponse@@UEAA@XZ @ 0x1801009C0 (--1CEventResponse@@UEAA@XZ.c)
 */

HANDLE *__fastcall CEventResponse::`vector deleting destructor'(HANDLE *this, char a2)
{
  CEventResponse::~CEventResponse(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, HANDLE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
