/*
 * XREFs of ??_GInputDeliveryServerConversationHost@InputDeliveryServer@@UEAAPEAXI@Z @ 0x18006B210
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

InputDeliveryServer::InputDeliveryServerConversationHost *__fastcall InputDeliveryServer::InputDeliveryServerConversationHost::`scalar deleting destructor'(
        InputDeliveryServer::InputDeliveryServerConversationHost *this,
        char a2)
{
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
