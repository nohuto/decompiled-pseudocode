/*
 * XREFs of ?GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z @ 0x180055410
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x1800288E8 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memset @ 0x180036D30 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterSoftware::GetChannelsPeakValues(CMeterSoftware *this, unsigned int a2, float *a3)
{
  __int64 v3; // rdi
  float *v4; // rsi
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  float *v9; // rax
  __int64 v10; // rcx
  float v11; // xmm0_4
  LPCRITICAL_SECTION v13; // [rsp+20h] [rbp-1C8h] BYREF
  char v14; // [rsp+28h] [rbp-1C0h]
  _BYTE v15[384]; // [rsp+30h] [rbp-1B8h] BYREF

  v3 = a2;
  v4 = a3;
  if ( !a3 )
  {
    v6 = -2147467261;
LABEL_24:
    AudSrvTraceLoggingErrorHelper("CMeterSoftware::GetChannelsPeakValues", 688, v6);
    return (unsigned int)v6;
  }
  if ( a2 != *((_DWORD *)this + 8) )
  {
    v6 = -2147024809;
    goto LABEL_24;
  }
  v6 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v13, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  v7 = *((_QWORD *)this + 5);
  if ( v7 && *((_DWORD *)this + 8) <= 0x20u )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, v15, (unsigned int)v3);
    v6 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -2147417848 || v8 == -2147023174 )
      {
        if ( (_DWORD)v3 )
          memset(v4, 0, 4 * v3);
        ATL::CComPtrBase<IAudioMeter>::Release((_QWORD *)this + 5);
        v6 = 0;
      }
    }
    else if ( (_DWORD)v3 )
    {
      v9 = (float *)v15;
      v10 = v3;
      do
      {
        v11 = fminf(*v9, 1.0);
        if ( v11 <= 0.0 )
          v11 = 0.0;
        *v4 = v11;
        v9 += 3;
        ++v4;
        --v10;
      }
      while ( v10 );
    }
  }
  else if ( (_DWORD)v3 )
  {
    memset(v4, 0, 4 * v3);
  }
  if ( v14 )
    ATL::CCritSecLock::Unlock(&v13);
  if ( v6 < 0 )
    goto LABEL_24;
  return (unsigned int)v6;
}
