/*
 * XREFs of ??_GCAce@CAcl@ATL@@UEAAPEAXI@Z @ 0x18006B210
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x180067A00 (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 */

void **__fastcall ATL::CAcl::CAce::`scalar deleting destructor'(void **this, char a2)
{
  ATL::CAcl::CAce::~CAce(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
