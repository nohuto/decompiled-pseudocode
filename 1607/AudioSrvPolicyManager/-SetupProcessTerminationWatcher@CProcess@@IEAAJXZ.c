/*
 * XREFs of ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x18000F97C
 * Callers:
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHH@Z @ 0x18000DDF4 (-Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcess::SetupProcessTerminationWatcher(CProcess *this)
{
  __int64 v2; // rax
  signed int LastError; // eax
  const GUID *v4; // r8
  const GUID *v5; // r9
  signed int v6; // ecx
  UINT32 v8; // [rsp+20h] [rbp-29h]
  unsigned int v9; // [rsp+30h] [rbp-19h] BYREF
  int v10; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const char *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  int *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]
  unsigned int *v18; // [rsp+80h] [rbp+37h]
  int v19; // [rsp+88h] [rbp+3Fh]
  int v20; // [rsp+8Ch] [rbp+43h]

  v9 = 0;
  v2 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int), CProcess *))(*(_QWORD *)ThreadPool + 80LL))(
         ThreadPool,
         CProcess::ProcessTerminationWatcherCallback,
         this);
  *((_QWORD *)this + 51) = v2;
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ThreadPool + 88LL))(
      ThreadPool,
      *((_QWORD *)this + 51),
      *((_QWORD *)this + 20),
      0LL);
    v6 = v9;
  }
  else
  {
    LastError = GetLastError();
    v6 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v6 = LastError;
    v9 = v6;
  }
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x32u, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, v6);
      v6 = v9;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v12 = "__FUNC__";
      v15 = &v10;
      v18 = &v9;
      v13 = 9;
      v10 = 3423;
      v16 = 4;
      v19 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v4, v5, v8, &pData);
      return v9;
    }
  }
  return (unsigned int)v6;
}
