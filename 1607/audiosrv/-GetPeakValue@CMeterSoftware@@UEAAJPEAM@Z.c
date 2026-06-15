/*
 * XREFs of ?GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z @ 0x180035590
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x1800288E8 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterSoftware::GetPeakValue(CMeterSoftware *this, float *a2)
{
  int v2; // ebx
  float v5; // xmm6_4
  int v6; // eax
  __int64 v7; // rcx
  float *v8; // rax
  float v9; // xmm0_4
  float v10; // xmm6_4
  __int64 v12; // rcx
  LPCRITICAL_SECTION v13; // [rsp+20h] [rbp-1C8h] BYREF
  char v14; // [rsp+28h] [rbp-1C0h]
  _BYTE v15[384]; // [rsp+30h] [rbp-1B8h] BYREF

  v2 = 0;
  v5 = 0.0;
  if ( !a2 )
    return 2147500035LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v13, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  v12 = *((_QWORD *)this + 5);
  if ( !v12 )
    goto LABEL_8;
  if ( *((_DWORD *)this + 8) <= 0x20u )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 24LL))(v12, v15);
    v2 = v6;
    if ( v6 < 0 )
    {
      if ( v6 == -2147417848 || v6 == -2147023174 )
      {
        ATL::CComPtrBase<IAudioMeter>::Release((_QWORD *)this + 5);
        v2 = 0;
      }
    }
    else if ( *((_DWORD *)this + 8) )
    {
      v7 = *((unsigned int *)this + 8);
      v8 = (float *)v15;
      do
      {
        v9 = *v8;
        v8 += 3;
        v5 = fmaxf(v9, v5);
        --v7;
      }
      while ( v7 );
    }
LABEL_8:
    if ( v14 )
      ATL::CCritSecLock::Unlock(&v13);
    v10 = fminf(v5, 1.0);
    if ( v10 <= 0.0 )
      v10 = 0.0;
    *a2 = v10;
    if ( v2 < 0 )
      AudSrvTraceLoggingErrorHelper("CMeterSoftware::GetPeakValue", 607, v2);
    return (unsigned int)v2;
  }
  if ( v14 )
    ATL::CCritSecLock::Unlock(&v13);
  return 2147942487LL;
}
