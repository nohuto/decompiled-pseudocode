/*
 * XREFs of ??_GResourceManagerProxy@@UEAAPEAXI@Z @ 0x1800067F0
 * Callers:
 *     ?FreeResourceManagerProxy@@YAXXZ @ 0x1800069D0 (-FreeResourceManagerProxy@@YAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180008208 (--3@YAXPEAX@Z.c)
 */

RPC_BINDING_HANDLE *__fastcall ResourceManagerProxy::`scalar deleting destructor'(RPC_BINDING_HANDLE *this, char a2)
{
  *this = &ResourceManagerProxy::`vftable';
  RpcBindingFree(this + 2);
  this[2] = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
