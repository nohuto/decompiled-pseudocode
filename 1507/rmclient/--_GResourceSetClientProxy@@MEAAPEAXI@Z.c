/*
 * XREFs of ??_GResourceSetClientProxy@@MEAAPEAXI@Z @ 0x180011870
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180008208 (--3@YAXPEAX@Z.c)
 *     ??1ResourceSetClientProxy@@MEAA@XZ @ 0x1800117C8 (--1ResourceSetClientProxy@@MEAA@XZ.c)
 */

ResourceSetClientProxy *__fastcall ResourceSetClientProxy::`scalar deleting destructor'(
        ResourceSetClientProxy *this,
        char a2)
{
  ResourceSetClientProxy::~ResourceSetClientProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
