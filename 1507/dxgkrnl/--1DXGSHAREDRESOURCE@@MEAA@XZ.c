/*
 * XREFs of ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C009071C
 * Callers:
 *     ??_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z @ 0x1C0005420 (--_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z.c)
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C012C884 (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x1C001C140 (--_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1C009033C (--1DXGSHAREDRESOURCEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C00904BC (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 */

void __fastcall DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(DXGSHAREDRESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rdi
  DXGSHAREDRESOURCE_NONPAGED *v8; // rcx
  DXGSHAREDRESOURCE_NONPAGED ***v9; // rdi
  DXGSHAREDRESOURCE_NONPAGED **v10; // rax
  DXGSHAREDRESOURCE_NONPAGED **v11; // rsi
  char *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax

  *(_QWORD *)this = &DXGSHAREDRESOURCE::`vftable';
  v5 = (void *)*((_QWORD *)this + 11);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = (void *)*((_QWORD *)this + 13);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = (void *)*((_QWORD *)this + 17);
  if ( v7 )
  {
    DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(*((DXGSHAREDRESOURCEACCESS **)this + 17));
    operator delete(v7);
  }
  v8 = (DXGSHAREDRESOURCE_NONPAGED *)*((_QWORD *)this + 20);
  if ( v8 )
    DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(v8);
  v9 = (DXGSHAREDRESOURCE_NONPAGED ***)((char *)this + 120);
  while ( *v9 != (DXGSHAREDRESOURCE_NONPAGED **)v9 )
  {
    v10 = *v9;
    v8 = **v9;
    if ( (*v9)[1] != (DXGSHAREDRESOURCE_NONPAGED *)v9 || *((DXGSHAREDRESOURCE_NONPAGED ***)v8 + 1) != v10 )
      __fastfail(3u);
    v11 = v10 - 6;
    *v9 = (DXGSHAREDRESOURCE_NONPAGED **)v8;
    *((_QWORD *)v8 + 1) = v9;
    if ( v10 != (DXGSHAREDRESOURCE_NONPAGED **)48 )
    {
      DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION((DXGADAPTERALLOCATION *)(v10 - 6));
      operator delete(v11);
    }
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 14) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 314LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v12 = (char *)*((_QWORD *)this + 19);
  if ( v12 != (char *)this + 144 )
    operator delete(v12);
  v13 = *((_QWORD *)this + 9);
  if ( v13 )
    DXGADAPTER::ReleaseReference(*(DXGADAPTER **)(v13 + 16));
}
