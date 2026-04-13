/*
 * XREFs of ??_GSubscriptionImpl@TargetedContent@ContentManagement@@EEAAPEAXI@Z @ 0x18003FB00
 * Callers:
 *     <none>
 * Callees:
 *     ??1SubscriptionImpl@TargetedContent@ContentManagement@@EEAA@XZ @ 0x18003F988 (--1SubscriptionImpl@TargetedContent@ContentManagement@@EEAA@XZ.c)
 */

ContentManagement::TargetedContent::SubscriptionImpl *__fastcall ContentManagement::TargetedContent::SubscriptionImpl::`scalar deleting destructor'(
        ContentManagement::TargetedContent::SubscriptionImpl *this,
        char a2)
{
  ContentManagement::TargetedContent::SubscriptionImpl::~SubscriptionImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
