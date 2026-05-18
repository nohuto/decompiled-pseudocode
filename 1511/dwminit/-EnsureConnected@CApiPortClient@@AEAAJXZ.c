/*
 * XREFs of ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004C60
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004914 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180004A90 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001228 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_check_icall_nop @ 0x180003620 (_guard_check_icall_nop.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003D40 (-DoStackCapture@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003DE4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180004098 (--2@YAPEAX_K@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x18000486C (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x1800048C8 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x180004C30 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x180004F80 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG0@Z @ 0x1800050F0 (-ConnectWithName@CPortClient@@QEAAJPEBG0@Z.c)
 *     __security_check_cookie @ 0x1800067F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180007B86 (memset_0.c)
 */

__int64 __fastcall CApiPortClient::EnsureConnected(CApiPortClient *this)
{
  CApiPortClient *v1; // rcx
  int v2; // edi
  CPortClient *v3; // rax
  volatile signed __int32 *v4; // rsi
  int v5; // eax
  int v6; // edx
  const unsigned __int16 *v7; // r8
  unsigned int v8; // eax
  wchar_t Buffer; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v11[94]; // [rsp+42h] [rbp-D6h] BYREF
  wchar_t v12; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v13[94]; // [rsp+A2h] [rbp-76h] BYREF

  if ( CApiPortClient::IsConnected(this) )
    return 0;
  CApiPortClient::Disconnect(v1);
  v3 = (CPortClient *)operator new(96LL);
  v4 = (volatile signed __int32 *)v3;
  if ( v3 )
  {
    CPortClient::CPortClient(v3, g_PortClient, hObject);
    *((_DWORD *)v4 + 22) = 1;
    *(_QWORD *)v4 = &CPortClientRefCounted::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
  {
    v2 = -2147024882;
    if ( &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST )
      MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, 0x8007000E, 0xFAu);
    else
      DoStackCapture(-2147024882, 250);
    return (unsigned int)v2;
  }
  Buffer = 0;
  memset_0(v11, 0, 0x50uLL);
  v12 = 0;
  memset_0(v13, 0, 0x50uLL);
  LeaveCriticalSection(&CriticalSection);
  if ( NtCurrentPeb()->SessionId
    && (v5 = StringCchPrintfW(&Buffer, 41LL, L"\\Sessions\\%d", NtCurrentPeb()->SessionId), v2 = v5, v5 < 0) )
  {
    if ( !&CApiPortClient::MILINSTRUMENTATIONHRESULTLIST )
    {
      v6 = 271;
LABEL_14:
      DoStackCapture(v5, v6);
      goto LABEL_24;
    }
    MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0x10Fu);
  }
  else
  {
    v5 = StringCchPrintfW(&v12, 41LL, L"%s\\Windows\\DwmApiPort", &Buffer);
    v2 = v5;
    if ( v5 >= 0 )
    {
      v8 = CPortClient::ConnectWithName((CPortClient *)v4, &v12, v7);
      v5 = CApiPortClient::Translate(v8);
      v2 = v5;
      if ( v5 < 0 )
      {
        if ( !&CApiPortClient::MILINSTRUMENTATIONHRESULTLIST )
        {
          v6 = 281;
          goto LABEL_14;
        }
        MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0x119u);
      }
    }
    else
    {
      if ( !&CApiPortClient::MILINSTRUMENTATIONHRESULTLIST )
      {
        v6 = 278;
        goto LABEL_14;
      }
      MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0x116u);
    }
  }
LABEL_24:
  EnterCriticalSection(&CriticalSection);
  if ( v2 >= 0 && !*(&hObject + 1) )
  {
    *(&hObject + 1) = (HANDLE)v4;
    v4 = 0LL;
  }
  if ( v4 && _InterlockedExchangeAdd(v4 + 22, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v4)(v4, 1LL);
  return (unsigned int)v2;
}
