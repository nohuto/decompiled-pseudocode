/*
 * XREFs of ??_GCAudioStream@@MEAAPEAXI@Z @ 0x180081908
 * Callers:
 *     ??_ECAudioStream@@OBA@EAAPEAXI@Z @ 0x180044DC0 (--_ECAudioStream@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CAudioStream@@MEAA@XZ @ 0x18001E0B0 (--1CAudioStream@@MEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CAudioStream::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CAudioStream::~CAudioStream(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
