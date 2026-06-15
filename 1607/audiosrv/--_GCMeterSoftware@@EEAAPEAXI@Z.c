/*
 * XREFs of ??_GCMeterSoftware@@EEAAPEAXI@Z @ 0x1800596D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMeterSoftware@@EEAA@XZ @ 0x1800593C8 (--1CMeterSoftware@@EEAA@XZ.c)
 */

CMeterSoftware *__fastcall CMeterSoftware::`scalar deleting destructor'(CMeterSoftware *this, char a2)
{
  CMeterSoftware::~CMeterSoftware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
