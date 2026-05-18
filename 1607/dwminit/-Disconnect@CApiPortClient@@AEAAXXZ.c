/*
 * XREFs of ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x180004C24
 * Callers:
 *     ??1CApiPortClient@@QEAA@XZ @ 0x180004BD4 (--1CApiPortClient@@QEAA@XZ.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x1800050E4 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ResetConnection@CApiPortClient@@QEAAXXZ @ 0x1800053A8 (-ResetConnection@CApiPortClient@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800081B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApiPortClient::Disconnect(CApiPortClient *this)
{
  void (__fastcall ***v1)(_QWORD, __int64); // rcx

  v1 = (void (__fastcall ***)(_QWORD, __int64))*(&hObject + 1);
  if ( *(&hObject + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)*(&hObject + 1) + 22, 0xFFFFFFFF) == 1 )
    {
      if ( v1 )
        (**v1)(v1, 1LL);
    }
    *(&hObject + 1) = 0LL;
  }
}
