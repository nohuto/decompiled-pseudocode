/*
 * XREFs of ??_EWGIController@@UEAAPEAXI@Z @ 0x180061E70
 * Callers:
 *     <none>
 * Callees:
 *     ??1WGIController@@UEAA@XZ @ 0x180061EF8 (--1WGIController@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

WGIController *__fastcall WGIController::`vector deleting destructor'(WGIController *this, char a2)
{
  WGIController::~WGIController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
