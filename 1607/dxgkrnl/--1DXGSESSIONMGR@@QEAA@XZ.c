/*
 * XREFs of ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C017FAE4
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0168A04 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C0001B70 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0006DF8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGSESSIONMGR::~DXGSESSIONMGR(DXGSESSIONMGR *this)
{
  __int64 i; // rdi
  DXGSESSIONDATA *v3; // rcx
  char *v4; // rcx
  struct _KEVENT *v5; // rcx
  __int64 v6; // rax

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
  v5 = (struct _KEVENT *)*((_QWORD *)this + 17);
  if ( v5 )
  {
    KeSetEvent(v5, 0, 0);
    ObfDereferenceObject(*((PVOID *)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( *((_BYTE *)this + 240) || *((DXGSESSIONMGR **)this + 28) != (DXGSESSIONMGR *)((char *)this + 224) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 127LL;
    WdLogEvent5_WdAssertion(v6);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONMGR *)((char *)this + 184));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONMGR *)((char *)this + 80));
  DXGFASTMUTEX::~DXGFASTMUTEX(this);
}
