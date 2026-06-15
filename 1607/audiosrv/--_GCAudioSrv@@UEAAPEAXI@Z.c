/*
 * XREFs of ??_GCAudioSrv@@UEAAPEAXI@Z @ 0x180052020
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioSrv@@UEAA@XZ @ 0x180051EEC (--1CAudioSrv@@UEAA@XZ.c)
 */

CAudioSrv *__fastcall CAudioSrv::`scalar deleting destructor'(CAudioSrv *this, char a2)
{
  CAudioSrv::~CAudioSrv(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD0);
  return this;
}
