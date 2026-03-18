/*
 * XREFs of ?CreatePhysicalMonitor@CMonitorAPI@@QEAAJAEAU_LUID@@KPEAPEAX@Z @ 0x1C025B654
 * Callers:
 *     CreatePhysicalMonitorWrap @ 0x1C025C7A0 (CreatePhysicalMonitorWrap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAVCPhysicalMonitorHandle@@PEAPEAX@Z @ 0x1C025B560 (-AddHandleToTable@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAVCPhysicalMonitor.c)
 */

__int64 __fastcall CMonitorAPI::CreatePhysicalMonitor(CMonitorAPI *this, struct _LUID *a2, unsigned int a3, void **a4)
{
  __int64 v4; // rdi
  CMonitorPDO *PoolWithTag; // rax
  __int64 v9; // rbx
  unsigned int v10; // edi
  void *v12; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v13[32]; // [rsp+28h] [rbp-20h] BYREF
  CMonitorAPI *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = this;
  v4 = qword_1C03234C0;
  CAutoMutex::CAutoMutex((CAutoMutex *)v13, (struct CMutex *)qword_1C03234C0);
  v12 = 0LL;
  LODWORD(v14) = 0;
  PoolWithTag = (CMonitorPDO *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x63326947u);
  v9 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    CMonitorPDO::CMonitorPDO(PoolWithTag, a2, a3, (int *)&v14);
    *(_QWORD *)(v9 + 72) = 0LL;
    *(_DWORD *)(v9 + 80) = 0;
    *(_QWORD *)v9 = &CPhysicalMonitorHandle::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    if ( (int)v14 < 0
      || (LODWORD(v14) = CMonitorHandleTable<CPhysicalMonitorHandle,void *>::AddHandleToTable(v4 + 8, v9, &v12),
          v10 = (unsigned int)v14,
          (int)v14 < 0) )
    {
      (**(void (__fastcall ***)(__int64, __int64))v9)(v9, 1LL);
      v10 = (unsigned int)v14;
    }
    else
    {
      *a4 = v12;
    }
  }
  else
  {
    v10 = -1073741801;
    LODWORD(v14) = -1073741801;
  }
  CAutoMutex::~CAutoMutex((CAutoMutex *)v13);
  return v10;
}
