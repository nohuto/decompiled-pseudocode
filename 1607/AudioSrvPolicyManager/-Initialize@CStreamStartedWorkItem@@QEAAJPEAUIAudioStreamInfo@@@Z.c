/*
 * XREFs of ?Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001F9EC
 * Callers:
 *     ?CreateInstance@CStreamStartedWorkItem@@SAJPEAUIAudioStreamInfo@@PEAPEAVIPBMWorkItem@@@Z @ 0x18001F874 (-CreateInstance@CStreamStartedWorkItem@@SAJPEAUIAudioStreamInfo@@PEAPEAVIPBMWorkItem@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?GetProcessFromSessionInfo@CApplicationManager@@QEAAJPEAUIAudioSessionInfo@@PEAPEAVCProcess@@@Z @ 0x180012670 (-GetProcessFromSessionInfo@CApplicationManager@@QEAAJPEAUIAudioSessionInfo@@PEAPEAVCProcess@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamStartedWorkItem::Initialize(CStreamStartedWorkItem *this, struct IAudioStreamInfo *a2)
{
  __int64 result; // rax
  CApplicationManager *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  UINT32 v7; // [rsp+20h] [rbp-29h]
  unsigned int v8; // [rsp+30h] [rbp-19h] BYREF
  int v9; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const char *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  int *v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  unsigned int *v17; // [rsp+80h] [rbp+37h]
  int v18; // [rsp+88h] [rbp+3Fh]
  int v19; // [rsp+8Ch] [rbp+43h]

  v8 = 0;
  *((_QWORD *)this + 1) = a2;
  (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 8LL))(a2);
  result = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 1) + 24LL))(
             *((_QWORD *)this + 1),
             (char *)this + 16);
  v8 = result;
  if ( (int)result < 0
    || (result = CApplicationManager::GetProcessFromSessionInfo(
                   v4,
                   *((struct IAudioSessionInfo **)this + 2),
                   (struct CProcess **)this + 3),
        v8 = result,
        (int)result < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, result);
      result = v8;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v11 = "__FUNC__";
      v14 = &v9;
      v17 = &v8;
      v12 = 9;
      v9 = 96;
      v15 = 4;
      v18 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v5, v6, v7, &pData);
      return v8;
    }
  }
  return result;
}
