/*
 * XREFs of ?Initialize@CAppInstanceId@@QEAAJPEAUIAudioProcess@@H@Z @ 0x18000DB44
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x18000F460 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800502E8 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppInstanceId::Initialize(CAppInstanceId *this, struct IAudioProcess *a2, int a3)
{
  struct IAudioProcess *v5; // rcx
  __int64 v6; // rax

  *((_DWORD *)this + 2) = a3;
  if ( a3 )
  {
    *(_DWORD *)this = 0;
    v5 = a2;
    v6 = *(_QWORD *)a2;
  }
  else
  {
    *(_DWORD *)this = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
    v5 = a2;
    v6 = *(_QWORD *)a2;
  }
  *((_DWORD *)this + 1) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v6 + 48))(v5);
  return 0LL;
}
