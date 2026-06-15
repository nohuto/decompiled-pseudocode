/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x18002A378
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x18000F460 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800502E8 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180012B18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18002A440 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppAudioSessionId::Initialize(GUID *this, struct IAudioProcess *a2, const struct _GUID *a3, int a4)
{
  __int64 v7; // rax
  GUID v8; // xmm0
  int v9; // ebx
  char *v11; // rax
  char *v12; // rax

  if ( a4 )
  {
    if ( !a3 )
      goto LABEL_13;
    v7 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v7 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v7 )
    {
LABEL_13:
      v9 = -2147024809;
LABEL_14:
      AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 371, v9);
      return (unsigned int)v9;
    }
  }
  if ( a3 )
    v8 = *a3;
  else
    v8 = GUID_00000000_0000_0000_0000_000000000000;
  this[1] = v8;
  if ( !a4 )
  {
    v11 = (char *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
    ATL::CSimpleStringT<unsigned short,0>::SetString(this->Data4, v11);
    v12 = (char *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 80LL))(a2);
    ATL::CSimpleStringT<unsigned short,0>::SetString(this, v12);
  }
  *(_DWORD *)this[2].Data4 = a4;
  v9 = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)this);
  if ( v9 < 0 )
    goto LABEL_14;
  return (unsigned int)v9;
}
