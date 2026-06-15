/*
 * XREFs of ??_GCAtlStringMgr@ATL@@UEAAPEAXI@Z @ 0x140032510
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 */

ATL::CAtlStringMgr *__fastcall ATL::CAtlStringMgr::`scalar deleting destructor'(ATL::CAtlStringMgr *this, char a2)
{
  *(_QWORD *)this = &ATL::CAtlStringMgr::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
