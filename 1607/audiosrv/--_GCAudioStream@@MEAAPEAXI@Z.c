/*
 * XREFs of ??_GCAudioStream@@MEAAPEAXI@Z @ 0x1800643C0
 * Callers:
 *     ??_ECAudioStream@@OBA@EAAPEAXI@Z @ 0x1800392A0 (--_ECAudioStream@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAudioStream@@MEAA@XZ @ 0x180019C60 (--1CAudioStream@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioStream *__fastcall CAudioStream::`scalar deleting destructor'(CAudioStream *this, char a2)
{
  CAudioStream::~CAudioStream(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1F0);
  return this;
}
