/*
 * XREFs of ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1C009033C
 * Callers:
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C009071C (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 * Callees:
 *     ??_GDXGPROCESSSHAREDACCESS@@QEAAPEAXI@Z @ 0x1C0004FD8 (--_GDXGPROCESSSHAREDACCESS@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(DXGSHAREDRESOURCEACCESS *this)
{
  __int64 **v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // rcx

  v2 = (__int64 **)((char *)this + 48);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    if ( v3 != (__int64 *)8 )
      DXGPROCESSSHAREDACCESS::`scalar deleting destructor'((DXGPROCESSSHAREDACCESS *)(v3 - 1));
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSHAREDRESOURCEACCESS *)((char *)this + 8));
}
