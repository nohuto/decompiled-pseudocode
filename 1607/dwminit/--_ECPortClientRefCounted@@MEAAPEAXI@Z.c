/*
 * XREFs of ??_ECPortClientRefCounted@@MEAAPEAXI@Z @ 0x180004B50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180004240 (--3@YAXPEAX@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x180005558 (--1CPortClient@@UEAA@XZ.c)
 */

CPortClientRefCounted *__fastcall CPortClientRefCounted::`vector deleting destructor'(
        CPortClientRefCounted *this,
        char a2)
{
  *(_QWORD *)this = &CPortClientRefCounted::`vftable';
  CPortClient::~CPortClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
