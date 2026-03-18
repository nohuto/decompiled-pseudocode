/*
 * XREFs of ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C01567D8
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C013EAAC (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0004B5C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C000CB58 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGSESSIONMGR::~DXGSESSIONMGR(DXGSESSIONMGR *this)
{
  __int64 i; // rdi
  DXGSESSIONDATA *v3; // rcx
  char *v4; // rcx
  struct _KEVENT *v5; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
  {
    v3 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 5) + 8 * i);
    if ( v3 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v3);
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) = 0LL;
    }
  }
  v4 = (char *)*((_QWORD *)this + 5);
  if ( v4 != (char *)this + 48 )
  {
    operator delete(v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  v5 = (struct _KEVENT *)*((_QWORD *)this + 16);
  if ( v5 )
  {
    KeSetEvent(v5, 0, 0);
    ObfDereferenceObject(*((PVOID *)this + 16));
    *((_QWORD *)this + 16) = 0LL;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONMGR *)((char *)this + 80));
  DXGFASTMUTEX::~DXGFASTMUTEX(this);
}
