/*
 * XREFs of ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180055A90
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
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

__int64 __fastcall CMuteSoftware::InitializeAPOs(
        CMuteSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  int v7; // ebx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-38h]
  LPCRITICAL_SECTION v13; // [rsp+30h] [rbp-28h] BYREF
  char v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Du,
      (__int64)&WPP_5d80dfde78b839f7e098599d7a4ea935_Traceguids,
      (__int64)this);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v13, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  if ( !a3 )
    goto LABEL_6;
  v8 = 0;
  do
  {
    ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 5);
    if ( ((__int64 (__fastcall *)(_QWORD, GUID *, char *))(*a4)->lpVtbl->QueryInterface)(
           *a4,
           &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
           (char *)this + 40) >= 0
      && *((_QWORD *)this + 5) )
    {
      break;
    }
    ++v8;
    ++a4;
  }
  while ( v8 < a3 );
  v9 = *((_QWORD *)this + 5);
  if ( !v9 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_5d80dfde78b839f7e098599d7a4ea935_Traceguids);
    }
LABEL_6:
    v7 = -2147467262;
LABEL_21:
    AudSrvTraceLoggingErrorHelper("CMuteSoftware::InitializeAPOs", 977, v7);
    goto LABEL_22;
  }
  v15 = 50000LL;
  v10 = (*(__int64 (__fastcall **)(__int64, bool, _QWORD, __int64, __int64 *))(*(_QWORD *)v9 + 32LL))(
          v9,
          *((_DWORD *)this + 6) != 0,
          0LL,
          1LL,
          &v15);
  v7 = v10;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LODWORD(v12) = v10;
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Fu,
      (__int64)&WPP_5d80dfde78b839f7e098599d7a4ea935_Traceguids,
      this,
      v12);
  }
  if ( v7 < 0 )
    goto LABEL_21;
LABEL_22:
  if ( v14 )
    ATL::CCritSecLock::Unlock(&v13);
  return (unsigned int)v7;
}
