/*
 * XREFs of ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@@Z @ 0x1800356B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180004A28 (_TlgKeywordOn.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd_guid_ @ 0x180056540 (WPP_SF_qd_guid_.c)
 */

__int64 __fastcall CMuteControlBase::SetMute(CMuteControlBase *this, unsigned int a2, const struct _GUID *a3)
{
  unsigned int v4; // r9d
  const WCHAR *v6; // rdx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  int v9; // ebx
  __int64 v10; // rcx
  unsigned int v12; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  unsigned int *v14; // [rsp+60h] [rbp-48h]
  int v15; // [rsp+68h] [rbp-40h]
  int v16; // [rsp+6Ch] [rbp-3Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-38h] BYREF

  v12 = a2;
  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, (_DWORD)a3, (_DWORD)this, a2, (__int64)a3);
    v4 = v12;
  }
  if ( *((_DWORD *)this + 6) == v4 )
  {
    v9 = 1;
  }
  else
  {
    if ( dword_1800CA040 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800CA040, 0x400000000000uLL) )
    {
      v16 = 0;
      v6 = (const WCHAR *)*((_QWORD *)this + 4);
      v14 = &v12;
      v15 = 4;
      TlgCreateWsz(&pDesc, v6);
      TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A7DB4, v7, v8, 4u, &pData);
      v4 = v12;
    }
    v9 = (*(__int64 (__fastcall **)(CMuteControlBase *, _QWORD))(*(_QWORD *)this + 80LL))(this, v4);
    if ( v9 < 0 )
      goto LABEL_12;
    v10 = *((_QWORD *)this + 2);
    *((_DWORD *)this + 6) = v12;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, const struct _GUID *))(*(_QWORD *)v10 + 48LL))(v10, 0LL, a3);
  }
  if ( v9 < 0 )
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CMuteControlBase::SetMute", 229, v9);
  return (unsigned int)v9;
}
