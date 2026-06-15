/*
 * XREFs of ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180018080
 * Callers:
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180017E50 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?CreateInstance@CStreamStoppedWorkItem@@SAJPEAUIAudioStreamInfo@@PEAPEAVIPBMWorkItem@@@Z @ 0x1800200D0 (-CreateInstance@CStreamStoppedWorkItem@@SAJPEAUIAudioStreamInfo@@PEAPEAVIPBMWorkItem@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaybackManager::QueueStreamStoppedWorkItem(CPlaybackManager *this, struct IAudioStreamInfo *a2)
{
  __int64 result; // rax
  const GUID *v3; // r8
  const GUID *v4; // r9
  struct IPBMWorkItem *v5; // rbx
  const struct _TlgProvider_t *v6; // rcx
  UINT32 v7; // [rsp+20h] [rbp-29h]
  unsigned int v8; // [rsp+30h] [rbp-19h] BYREF
  struct IPBMWorkItem *v9; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const char *v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  struct IPBMWorkItem **v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]
  unsigned int *v15; // [rsp+80h] [rbp+37h]
  __int64 v16; // [rsp+88h] [rbp+3Fh]

  v9 = 0LL;
  result = CStreamStoppedWorkItem::CreateInstance(a2, &v9);
  v5 = v9;
  v8 = result;
  if ( (int)result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(struct IPBMWorkItem *))(*(_QWORD *)v9 + 16LL))(v9);
    v8 = result;
    if ( (int)result >= 0 )
      v5 = 0LL;
  }
  if ( v5 )
  {
    (*(void (__fastcall **)(struct IPBMWorkItem *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1LL);
    result = v8;
  }
  if ( (int)result < 0 )
  {
    v6 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_9a8bf233b577350336875a646611b6e3_Traceguids, result);
      result = v8;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v12 = 9LL;
      v11 = "__FUNC__";
      v13 = &v9;
      v15 = &v8;
      LODWORD(v9) = 222;
      v14 = 4LL;
      v16 = 4LL;
      TlgWrite(v6, &unk_18002D869, v3, v4, v7, &pData);
      return v8;
    }
  }
  return result;
}
