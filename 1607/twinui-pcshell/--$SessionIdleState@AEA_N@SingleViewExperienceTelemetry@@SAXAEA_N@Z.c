/*
 * XREFs of ??$SessionIdleState@AEA_N@SingleViewExperienceTelemetry@@SAXAEA_N@Z @ 0x18001F22C
 * Callers:
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@AEAAJH@Z @ 0x18001C008 (-OnSessionIdleStateChanged@CSingleViewShellExperience@@AEAAJH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001134 (_TlgWrite.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026C94 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 */

int __fastcall SingleViewExperienceTelemetry::SessionIdleState<bool &>(__int64 a1)
{
  const struct _TlgProvider_t *v2; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]

  v2 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v2 > 5u
    && (*((_QWORD *)v2 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x200000000000LL) == *((_QWORD *)v2 + 3) )
  {
    v7 = 0;
    v5 = a1;
    v6 = 1;
    LODWORD(v2) = TlgWrite(v2, &unk_1800434A7, 0LL, 0LL, 3u, &pData);
  }
  return (int)v2;
}
