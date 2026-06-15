/*
 * XREFs of ??_GCSid@ATL@@UEAAPEAXI@Z @ 0x18006B320
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18000A774 (--1CSid@ATL@@UEAA@XZ.c)
 */

ATL::CSid *__fastcall ATL::CSid::`scalar deleting destructor'(ATL::CSid *this, char a2)
{
  ATL::CSid::~CSid(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
