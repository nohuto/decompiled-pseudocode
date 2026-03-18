/*
 * XREFs of ??1CEventResponse@@UEAA@XZ @ 0x180116894
 * Callers:
 *     ??_ECEventResponse@@UEAAPEAXI@Z @ 0x1801168D0 (--_ECEventResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CEventResponse::~CEventResponse(HANDLE *this)
{
  *this = &CEventResponse::`vftable';
  CloseHandle(this[5]);
  *this = &CMILRefCountBase::`vftable';
}
