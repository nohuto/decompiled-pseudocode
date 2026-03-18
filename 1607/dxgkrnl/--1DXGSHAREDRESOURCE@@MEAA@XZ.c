/*
 * XREFs of ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C008F868
 * Callers:
 *     ??_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z @ 0x1C0006F50 (--_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z.c)
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C0151170 (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x1C0021180 (--_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C008F6D0 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1C00D30E4 (--1DXGSHAREDRESOURCEACCESS@@QEAA@XZ.c)
 */

void __fastcall DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(DXGSHAREDRESOURCE *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rdi
  DXGSHAREDRESOURCE_NONPAGED *v5; // rcx
  DXGSHAREDRESOURCE_NONPAGED ***v6; // rdi
  DXGSHAREDRESOURCE_NONPAGED **v7; // rax
  DXGSHAREDRESOURCE_NONPAGED **v8; // rsi
  char *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax

  *(_QWORD *)this = &DXGSHAREDRESOURCE::`vftable';
  v2 = (void *)*((_QWORD *)this + 12);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (void *)*((_QWORD *)this + 14);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = (void *)*((_QWORD *)this + 18);
  if ( v4 )
  {
    DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(*((DXGSHAREDRESOURCEACCESS **)this + 18));
    operator delete(v4);
  }
  v5 = (DXGSHAREDRESOURCE_NONPAGED *)*((_QWORD *)this + 21);
  if ( v5 )
    DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(v5);
  v6 = (DXGSHAREDRESOURCE_NONPAGED ***)((char *)this + 128);
  while ( *v6 != (DXGSHAREDRESOURCE_NONPAGED **)v6 )
  {
    v7 = *v6;
    v5 = **v6;
    if ( (*v6)[1] != (DXGSHAREDRESOURCE_NONPAGED *)v6 || *((DXGSHAREDRESOURCE_NONPAGED ***)v5 + 1) != v7 )
      __fastfail(3u);
    v8 = v7 - 6;
    *v6 = (DXGSHAREDRESOURCE_NONPAGED **)v5;
    *((_QWORD *)v5 + 1) = v6;
    if ( v7 != (DXGSHAREDRESOURCE_NONPAGED **)48 )
    {
      DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION((DXGADAPTERALLOCATION *)(v7 - 6));
      operator delete(v8);
    }
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 14) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v11 + 24) = 313LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v9 = (char *)*((_QWORD *)this + 20);
  if ( v9 != (char *)this + 152 )
    operator delete(v9);
  v10 = *((_QWORD *)this + 9);
  if ( v10 )
    DXGADAPTER::ReleaseReference(*(DXGADAPTER **)(v10 + 16));
}
