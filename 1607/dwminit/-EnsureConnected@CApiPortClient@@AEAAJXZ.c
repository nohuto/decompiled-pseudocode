/*
 * XREFs of ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x1800050E4
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004CB8 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x180004E1C (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800011D8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003E40 (-DoStackCapture@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003F6C (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180004218 (--2@YAPEAX_K@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x180004B1C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x180004C24 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x180004C6C (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x1800050B4 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x18000544C (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG0@Z @ 0x1800055D8 (-ConnectWithName@CPortClient@@QEAAJPEBG0@Z.c)
 *     __security_check_cookie @ 0x180006E30 (__security_check_cookie.c)
 *     memset_0 @ 0x18000818E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800081B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApiPortClient::EnsureConnected(CApiPortClient *this)
{
  CApiPortClient *v1; // rcx
  unsigned int v2; // edi
  const struct reg_FeatureDescriptor *v3; // rcx
  CPortClient *v4; // rax
  volatile signed __int32 *v5; // rbx
  int v6; // edx
  CPortClient *v7; // rax
  int v8; // eax
  int v9; // edx
  const unsigned __int16 *v10; // r8
  unsigned int v11; // eax
  wchar_t Buffer[48]; // [rsp+40h] [rbp-D8h] BYREF
  wchar_t v14[48]; // [rsp+A0h] [rbp-78h] BYREF

  if ( CApiPortClient::IsConnected(this) )
    return 0;
  CApiPortClient::Disconnect(v1);
  if ( EvaluateCurrentState(v3) )
  {
    v4 = (CPortClient *)operator new(96LL);
    v5 = (volatile signed __int32 *)v4;
    if ( v4 )
    {
      CPortClient::CPortClient(v4, g_PortClient, 0LL);
      *((_DWORD *)v5 + 22) = 1;
      *(_QWORD *)v5 = &CPortClientRefCounted::`vftable';
    }
    else
    {
      v5 = 0LL;
    }
    if ( !v5 )
    {
      v2 = -2147024882;
      if ( &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST )
      {
        MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, 0x8007000E, 0x12Fu);
        return v2;
      }
      v6 = 303;
LABEL_10:
      DoStackCapture(-2147024882, v6);
      return v2;
    }
  }
  else
  {
    v7 = (CPortClient *)operator new(96LL);
    v5 = (volatile signed __int32 *)v7;
    if ( v7 )
    {
      CPortClient::CPortClient(v7, g_PortClient, hObject);
      *((_DWORD *)v5 + 22) = 1;
      *(_QWORD *)v5 = &CPortClientRefCounted::`vftable';
    }
    else
    {
      v5 = 0LL;
    }
    if ( !v5 )
    {
      v2 = -2147024882;
      if ( &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST )
      {
        MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, 0x8007000E, 0x133u);
        return v2;
      }
      v6 = 307;
      goto LABEL_10;
    }
  }
  memset_0(Buffer, 0, 0x52uLL);
  memset_0(v14, 0, 0x52uLL);
  LeaveCriticalSection(&CriticalSection);
  if ( NtCurrentPeb()->SessionId )
  {
    v8 = StringCchPrintfW(Buffer, 41LL, L"\\Sessions\\%d", NtCurrentPeb()->SessionId);
    v2 = v8;
    if ( v8 < 0 )
    {
      if ( &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST )
      {
        MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v8, 0x149u);
        goto LABEL_34;
      }
      v9 = 329;
      goto LABEL_32;
    }
  }
  v8 = StringCchPrintfW(v14, 41LL, L"%s\\Windows\\DwmApiPort", Buffer);
  v2 = v8;
  if ( v8 >= 0 )
  {
    v11 = CPortClient::ConnectWithName((CPortClient *)v5, v14, v10);
    v8 = CApiPortClient::Translate(v11);
    v2 = v8;
    if ( v8 >= 0 )
      goto LABEL_34;
    if ( &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST )
    {
      MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v8, 0x153u);
      goto LABEL_34;
    }
    v9 = 339;
    goto LABEL_32;
  }
  if ( !&CApiPortClient::MILINSTRUMENTATIONHRESULTLIST )
  {
    v9 = 336;
LABEL_32:
    DoStackCapture(v8, v9);
    goto LABEL_34;
  }
  MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v8, 0x150u);
LABEL_34:
  EnterCriticalSection(&CriticalSection);
  if ( (v2 & 0x80000000) == 0 && !*(&hObject + 1) )
  {
    *(&hObject + 1) = (HANDLE)v5;
    v5 = 0LL;
  }
  if ( v5 && _InterlockedExchangeAdd(v5 + 22, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v5)(v5, 1LL);
  return v2;
}
