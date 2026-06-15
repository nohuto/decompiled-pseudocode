/*
 * XREFs of ?GetStreamGroup@CVADServer@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180071610
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVADServer::GetStreamGroup(CVADServer *this, struct IStreamGroupProxy **a2)
{
  unsigned int v4; // ebx
  LPCRITICAL_SECTION v6; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 232));
  v4 = (*(__int64 (__fastcall **)(__int64, struct IStreamGroupProxy **))(*(_QWORD *)(*((_QWORD *)this + 26) + 8LL)
                                                                       + 112LL))(
         *((_QWORD *)this + 26) + 8LL,
         a2);
  if ( v7 )
    ATL::CCritSecLock::Unlock(&v6);
  return v4;
}
