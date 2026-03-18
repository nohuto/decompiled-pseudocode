/*
 * XREFs of ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C00BE0C8
 * Callers:
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C000CB58 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C000CB78 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGSESSIONDATA::~DXGSESSIONDATA(DXGSESSIONDATA *this, __int64 a2, __int64 a3, __int64 a4)
{
  OUTPUTDUPL_SESSION_MGR *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  v5 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v5);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2313) = 0LL;
  if ( *((DXGSESSIONDATA **)this + 2317) != (DXGSESSIONDATA *)((char *)this + 18536) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 2283LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((DXGSESSIONDATA **)this + 2319) != (DXGSESSIONDATA *)((char *)this + 18552) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 2284LL;
    WdLogEvent5_WdAssertion(v8);
  }
  ObfDereferenceObject(*((PVOID *)this + 2321));
  v6 = (void *)*((_QWORD *)this + 2323);
  if ( v6 )
  {
    operator delete(v6);
    *((_QWORD *)this + 2323) = 0LL;
    *((_DWORD *)this + 4644) = 0;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 16));
}
