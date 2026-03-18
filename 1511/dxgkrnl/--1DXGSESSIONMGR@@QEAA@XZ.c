/*
 * XREFs of ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C015AAEC
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0144EFC (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0006E14 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C00080CC (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGSESSIONMGR::~DXGSESSIONMGR(DXGSESSIONMGR *this)
{
  __int64 i; // rdi
  DXGSESSIONDATA *v3; // rcx
  char *v4; // rcx
  struct _KEVENT *v5; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 24); i = (unsigned int)(i + 1) )
  {
    v3 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 8) + 8 * i);
    if ( v3 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v3);
      *(_QWORD *)(*((_QWORD *)this + 8) + 8 * i) = 0LL;
    }
  }
  v4 = (char *)*((_QWORD *)this + 8);
  if ( v4 != (char *)this + 72 )
  {
    operator delete(v4);
    *((_QWORD *)this + 8) = 0LL;
  }
  v5 = (struct _KEVENT *)*((_QWORD *)this + 22);
  if ( v5 )
  {
    KeSetEvent(v5, 0, 0);
    ObfDereferenceObject(*((PVOID *)this + 22));
    *((_QWORD *)this + 22) = 0LL;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONMGR *)((char *)this + 104));
  DXGFASTMUTEX::~DXGFASTMUTEX(this);
}
