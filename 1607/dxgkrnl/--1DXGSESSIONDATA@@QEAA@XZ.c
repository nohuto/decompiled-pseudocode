/*
 * XREFs of ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C007BD08
 * Callers:
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C0001B70 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C00016AC (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGSESSIONDATA::~DXGSESSIONDATA(DXGSESSIONDATA *this)
{
  OUTPUTDUPL_SESSION_MGR *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  v2 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2313) = 0LL;
  if ( *((DXGSESSIONDATA **)this + 2317) != (DXGSESSIONDATA *)((char *)this + 18536) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v5 + 24) = 2607LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((DXGSESSIONDATA **)this + 2319) != (DXGSESSIONDATA *)((char *)this + 18552) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v6 + 24) = 2608LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v3 = (void *)*((_QWORD *)this + 2323);
  *((_QWORD *)this + 2324) = 0LL;
  ObfDereferenceObject(v3);
  v4 = (void *)*((_QWORD *)this + 2326);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 2326) = 0LL;
    *((_DWORD *)this + 4650) = 0;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 16));
}
