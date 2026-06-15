/*
 * XREFs of ??_ECDacl@ATL@@UEAAPEAXI@Z @ 0x18006B2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18000896C (--1CDacl@ATL@@UEAA@XZ.c)
 */

ATL::CDacl *__fastcall ATL::CDacl::`vector deleting destructor'(ATL::CDacl *this, char a2)
{
  ATL::CDacl::~CDacl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
