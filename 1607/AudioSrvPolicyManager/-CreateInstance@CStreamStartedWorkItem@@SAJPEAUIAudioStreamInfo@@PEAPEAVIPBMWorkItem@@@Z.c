/*
 * XREFs of ?CreateInstance@CStreamStartedWorkItem@@SAJPEAUIAudioStreamInfo@@PEAPEAVIPBMWorkItem@@@Z @ 0x18001F874
 * Callers:
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180017F3C (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001F9EC (-Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamStartedWorkItem::CreateInstance(struct IAudioStreamInfo *a1, struct IPBMWorkItem **a2)
{
  HANDLE ProcessHeap; // rax
  CStreamStartedWorkItem *v5; // rax
  const GUID *v6; // r8
  const GUID *v7; // r9
  CStreamStartedWorkItem *v8; // rbx
  __int64 result; // rax
  UINT32 v10; // [rsp+20h] [rbp-39h]
  unsigned int v11; // [rsp+30h] [rbp-29h] BYREF
  CStreamStartedWorkItem *v12; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  CStreamStartedWorkItem **v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  unsigned int *v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]

  v11 = 0;
  ProcessHeap = GetProcessHeap();
  v5 = (CStreamStartedWorkItem *)HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v12 = v5;
  v8 = v5;
  if ( v5 )
  {
    *((_QWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *(_QWORD *)v5 = &CStreamStartedWorkItem::`vftable';
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    result = CStreamStartedWorkItem::Initialize(v8, a1);
    v11 = result;
    if ( (int)result >= 0 )
    {
      *a2 = v8;
      v8 = 0LL;
    }
  }
  else
  {
    result = 2147942414LL;
    v11 = -2147024882;
  }
  if ( v8 )
  {
    (*(void (__fastcall **)(CStreamStartedWorkItem *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1LL);
    result = v11;
  }
  if ( (int)result < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, result);
      result = v11;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v14 = "__FUNC__";
      v17 = &v12;
      v20 = &v11;
      v15 = 9;
      LODWORD(v12) = 68;
      v18 = 4;
      v21 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v6, v7, v10, &pData);
      return v11;
    }
  }
  return result;
}
