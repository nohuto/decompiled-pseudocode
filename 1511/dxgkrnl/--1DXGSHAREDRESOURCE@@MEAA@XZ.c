/*
 * XREFs of ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C0065C14
 * Callers:
 *     ??_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z @ 0x1C0001820 (--_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z.c)
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C0132DD4 (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x1C001C940 (--_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C006B0FC (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1C00BCBFC (--1DXGSHAREDRESOURCEACCESS@@QEAA@XZ.c)
 */

void __fastcall DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(DXGSHAREDRESOURCE *this)
{
  void *v2; // rdi
  DXGSHAREDRESOURCE_NONPAGED *v3; // rcx
  DXGSHAREDRESOURCE_NONPAGED ***v4; // rdi
  DXGSHAREDRESOURCE_NONPAGED **v5; // rax
  DXGSHAREDRESOURCE_NONPAGED **v6; // rsi
  char *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax

  *(_QWORD *)this = &DXGSHAREDRESOURCE::`vftable';
  operator delete(*((void **)this + 11));
  operator delete(*((void **)this + 13));
  v2 = (void *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(*((DXGSHAREDRESOURCEACCESS **)this + 17));
    operator delete(v2);
  }
  v3 = (DXGSHAREDRESOURCE_NONPAGED *)*((_QWORD *)this + 20);
  if ( v3 )
    DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(v3);
  v4 = (DXGSHAREDRESOURCE_NONPAGED ***)((char *)this + 120);
  while ( *v4 != (DXGSHAREDRESOURCE_NONPAGED **)v4 )
  {
    v5 = *v4;
    v3 = **v4;
    if ( (*v4)[1] != (DXGSHAREDRESOURCE_NONPAGED *)v4 || *((DXGSHAREDRESOURCE_NONPAGED ***)v3 + 1) != v5 )
      __fastfail(3u);
    v6 = v5 - 6;
    *v4 = (DXGSHAREDRESOURCE_NONPAGED **)v3;
    *((_QWORD *)v3 + 1) = v4;
    if ( v5 != (DXGSHAREDRESOURCE_NONPAGED **)48 )
    {
      DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION((DXGADAPTERALLOCATION *)(v5 - 6));
      operator delete(v6);
    }
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 14) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v9 + 24) = 315LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v7 = (char *)*((_QWORD *)this + 19);
  if ( v7 != (char *)this + 144 )
    operator delete(v7);
  v8 = *((_QWORD *)this + 9);
  if ( v8 )
    DXGADAPTER::ReleaseReference(*(DXGADAPTER **)(v8 + 16));
}
