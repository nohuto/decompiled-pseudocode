/*
 * XREFs of ??1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ @ 0x1C00BE150
 * Callers:
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C000CB78 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C000CB98 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C000CBB8 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0152E50 (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::~OUTPUTDUPL_SESSION_MGR(OUTPUTDUPL_SESSION_MGR *this)
{
  struct OUTPUTDUPL_MGR *v2; // rcx
  AUTOEXPANDALLOCATION *v3; // rcx
  DXGFASTMUTEX *v4; // rcx
  DXGFASTMUTEX *v5; // rcx

  v2 = (struct OUTPUTDUPL_MGR *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    DestroyOutputDuplManager(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  v3 = (AUTOEXPANDALLOCATION *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    AUTOEXPANDALLOCATION::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 2) = 0LL;
    *((_DWORD *)this + 1) = 0;
  }
  v4 = (DXGFASTMUTEX *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v4);
    *((_QWORD *)this + 4) = 0LL;
  }
  v5 = (DXGFASTMUTEX *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v5);
    *((_QWORD *)this + 1) = 0LL;
  }
}
