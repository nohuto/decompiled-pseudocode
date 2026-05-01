/*
 * XREFs of ??_EResourceManagerServerProxy@@MEAAPEAXI@Z @ 0x180031930
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??1ResourceManagerServerProxy@@MEAA@XZ @ 0x180031880 (--1ResourceManagerServerProxy@@MEAA@XZ.c)
 */

ResourceManagerServerProxy *__fastcall ResourceManagerServerProxy::`vector deleting destructor'(
        ResourceManagerServerProxy *this,
        char a2)
{
  ResourceManagerServerProxy::~ResourceManagerServerProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
