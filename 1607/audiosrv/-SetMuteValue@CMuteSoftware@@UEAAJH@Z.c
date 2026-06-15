/*
 * XREFs of ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x1800562E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x18004FFB4 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMuteSoftware::SetMuteValue(CMuteSoftware *this, int a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  LPCRITICAL_SECTION v10; // [rsp+38h] [rbp-30h] BYREF
  char v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+70h] [rbp+8h] BYREF
  int v13; // [rsp+74h] [rbp+Ch]
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Bu,
      (__int64)&WPP_5d80dfde78b839f7e098599d7a4ea935_Traceguids,
      this,
      a2);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  *((_DWORD *)this + 6) = a2;
  v6 = *((_QWORD *)this + 5);
  if ( !v6 )
    goto LABEL_13;
  v14 = 50000LL;
  LOBYTE(v5) = a2 != 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v6 + 32LL))(
         v6,
         v5,
         0LL,
         1LL,
         &v14);
  v4 = v7;
  if ( v7 == -2147417848 || v7 == -2147023174 )
  {
    ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 5);
    v4 = 0;
  }
  if ( v4 < 0 )
  {
    AudSrvTraceLoggingErrorHelper("CMuteSoftware::SetMuteValue", 891, v4);
  }
  else
  {
LABEL_13:
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Cu,
        (__int64)&WPP_5d80dfde78b839f7e098599d7a4ea935_Traceguids,
        (__int64)this);
    }
    *((_BYTE *)this + 96) = 1;
    v12 = -10000000;
    v13 = -1;
    if ( ThreadPool )
      (*(void (__fastcall **)(CAudioThreadPool *, _QWORD, int *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        *((_QWORD *)this + 11),
        &v12,
        0LL,
        0);
  }
  if ( v11 )
    ATL::CCritSecLock::Unlock(&v10);
  return (unsigned int)v4;
}
