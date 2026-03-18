/*
 * XREFs of ?UpdateSQMDataForAllSessions@DXGSESSIONMGR@@QEAAXXZ @ 0x1C015AD74
 * Callers:
 *     ?DxgkSqmThread@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0150040 (-DxgkSqmThread@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGSESSIONMGR::UpdateSQMDataForAllSessions(DXGSESSIONMGR *this)
{
  __int64 i; // rbx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  if ( !(unsigned __int8)DMgrIsSetupRunning() )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, this);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 24); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * i);
      if ( v3 )
      {
        KeStackAttachProcess(*(PRKPROCESS *)(v3 + 18592), &ApcState);
        Current = DXGPROCESS::GetCurrent();
        if ( Current )
          Current = (struct DXGPROCESS *)*((_QWORD *)Current + 10);
        if ( Current )
          (*((void (**)(void))Current + 44))();
        KeUnstackDetachProcess(&ApcState);
      }
    }
    if ( v5[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
  }
}
