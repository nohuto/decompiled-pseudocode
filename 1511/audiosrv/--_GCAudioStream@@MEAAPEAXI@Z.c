/*
 * XREFs of ??_GCAudioStream@@MEAAPEAXI@Z @ 0x18007CBB0
 * Callers:
 *     ??_ECAudioStream@@OBA@EAAPEAXI@Z @ 0x180048FE0 (--_ECAudioStream@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAudioStream@@MEAA@XZ @ 0x1800207D0 (--1CAudioStream@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 */

CAudioStream *__fastcall CAudioStream::`scalar deleting destructor'(CAudioStream *this, char a2)
{
  CAudioStream::~CAudioStream(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
