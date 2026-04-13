/*
 * XREFs of ??_ENoOpService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x180055CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CreativeFramework::Actions::NoOpService *__fastcall CreativeFramework::Actions::NoOpService::`vector deleting destructor'(
        CreativeFramework::Actions::NoOpService *this,
        char a2)
{
  *(_QWORD *)this = &CreativeFramework::Actions::IActionService::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
