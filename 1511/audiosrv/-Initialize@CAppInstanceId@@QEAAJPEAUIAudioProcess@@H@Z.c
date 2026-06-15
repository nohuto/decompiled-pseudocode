/*
 * XREFs of ?Initialize@CAppInstanceId@@QEAAJPEAUIAudioProcess@@H@Z @ 0x180012458
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x180014E70 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 * Callees:
 *     ?GetTsSessionId@CProcess@@UEAAKXZ @ 0x180028B70 (-GetTsSessionId@CProcess@@UEAAKXZ.c)
 *     ?GetProcessId@CProcess@@UEAAKXZ @ 0x180028B80 (-GetProcessId@CProcess@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAppInstanceId::Initialize(CAppInstanceId *this, struct IAudioProcess *a2, int a3)
{
  unsigned int (__fastcall *v5)(CProcess *__hidden); // rsi
  CProcess *v6; // rcx
  unsigned int TsSessionId; // eax
  unsigned int (__fastcall *v9)(CProcess *__hidden); // rsi
  unsigned int ProcessId; // eax

  *((_DWORD *)this + 2) = a3;
  if ( !a3 )
  {
    v9 = *(unsigned int (__fastcall **)(CProcess *__hidden))(*(_QWORD *)a2 + 40LL);
    if ( v9 == CProcess::GetProcessId )
      ProcessId = CProcess::GetProcessId(a2);
    else
      ProcessId = v9(a2);
    *(_DWORD *)this = ProcessId;
    v5 = *(unsigned int (__fastcall **)(CProcess *__hidden))(*(_QWORD *)a2 + 48LL);
    if ( v5 == CProcess::GetTsSessionId )
    {
      v6 = a2;
      goto LABEL_4;
    }
LABEL_11:
    TsSessionId = v5(a2);
    goto LABEL_5;
  }
  *(_DWORD *)this = 0;
  v5 = *(unsigned int (__fastcall **)(CProcess *__hidden))(*(_QWORD *)a2 + 48LL);
  if ( v5 != CProcess::GetTsSessionId )
    goto LABEL_11;
  v6 = a2;
LABEL_4:
  TsSessionId = CProcess::GetTsSessionId(v6);
LABEL_5:
  *((_DWORD *)this + 1) = TsSessionId;
  return 0LL;
}
