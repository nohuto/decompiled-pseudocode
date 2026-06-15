/*
 * XREFs of ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x18007A06C
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180077550 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18002EF60 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::NotifyClientOfDisconnection(
        const wchar_t **this,
        enum AudioSessionDisconnectReason a2)
{
  const wchar_t *v4; // rax
  unsigned int v5; // esi
  unsigned int v6; // ebp
  char *v7; // rax
  char *v8; // rdi
  int MediaEvent; // ebx

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x5Cu,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      this[88]);
  }
  v4 = this[88];
  v5 = 2 * *((_DWORD *)v4 - 4) + 2;
  v6 = 2 * *((_DWORD *)v4 - 4) + 66;
  v7 = (char *)operator new(v6);
  v8 = v7;
  if ( v7 )
  {
    *(_DWORD *)v7 = v6;
    *((_DWORD *)v7 + 6) = v5;
    *((_DWORD *)v7 + 1) = 32;
    *((_DWORD *)v7 + 12) = a2;
    StringCbCopyW(v7 + 64, v5, (char *)this[88]);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x5Du,
        (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        v8);
    }
    MediaEvent = GenerateMediaEvent(v8, 0LL);
    operator delete(v8);
  }
  else
  {
    MediaEvent = -2147024882;
  }
  if ( MediaEvent < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x5Eu,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      MediaEvent);
  }
  return (unsigned int)MediaEvent;
}
