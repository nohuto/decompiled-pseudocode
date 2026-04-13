/*
 * XREFs of ??_Gsystem_error@std@@UEAAPEAXI@Z @ 0x18001B860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

std::system_error *__fastcall std::system_error::`scalar deleting destructor'(std::system_error *this, char a2)
{
  exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
