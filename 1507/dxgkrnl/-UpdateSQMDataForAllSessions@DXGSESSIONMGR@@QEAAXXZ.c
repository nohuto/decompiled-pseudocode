/*
 * XREFs of ?UpdateSQMDataForAllSessions@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0156A5C
 * Callers:
 *     ?DxgkSqmThread@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C014B2F0 (-DxgkSqmThread@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGSESSIONMGR::UpdateSQMDataForAllSessions(DXGSESSIONMGR *this)
{
  __int64 i; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  if ( !(unsigned __int8)DMgrIsSetupRunning() )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, this);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i);
      if ( v3 )
      {
        KeStackAttachProcess(*(PRKPROCESS *)(v3 + 18568), &ApcState);
        Current = DXGPROCESS::GetCurrent(v4);
        if ( Current )
          Current = (struct DXGPROCESS *)*((_QWORD *)Current + 10);
        if ( Current )
          (*((void (**)(void))Current + 44))();
        KeUnstackDetachProcess(&ApcState);
      }
    }
    if ( v6[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  }
}
