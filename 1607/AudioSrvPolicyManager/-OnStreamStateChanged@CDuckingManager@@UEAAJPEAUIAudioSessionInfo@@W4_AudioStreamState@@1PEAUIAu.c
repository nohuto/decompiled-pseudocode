/*
 * XREFs of ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180005D90
 * Callers:
 *     ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180004C60 (-OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1P.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_ @ 0x18000537C (WPP_SF_.c)
 *     WPP_SF_ddS @ 0x1800055BC (WPP_SF_ddS.c)
 *     ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x180007CE8 (-QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000A564 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::OnStreamStateChanged(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  _UNKNOWN **v8; // rcx
  const wchar_t *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  USHORT v12; // dx
  const GUID *v13; // r8
  unsigned __int64 v14; // r9
  struct IAudioProcess *v15; // rbx
  unsigned int v16; // eax
  _UNKNOWN **v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  UINT32 cData; // [rsp+20h] [rbp-61h]
  int PBMRelatedAudioStreamCategory; // [rsp+30h] [rbp-51h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-4Dh] BYREF
  int v25; // [rsp+38h] [rbp-49h] BYREF
  struct IAudioProcess *v26; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-31h] BYREF
  const char *v28; // [rsp+70h] [rbp-11h]
  int v29; // [rsp+78h] [rbp-9h]
  int v30; // [rsp+7Ch] [rbp-5h]
  int *v31; // [rsp+80h] [rbp-1h]
  int v32; // [rsp+88h] [rbp+7h]
  int v33; // [rsp+8Ch] [rbp+Bh]
  int *v34; // [rsp+90h] [rbp+Fh]
  int v35; // [rsp+98h] [rbp+17h]
  int v36; // [rsp+9Ch] [rbp+1Bh]

  PBMRelatedAudioStreamCategory = 0;
  v26 = 0LL;
  v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
    WPP_SF_ddS(*((_QWORD *)WPP_GLOBAL_Control + 2), v10, v11, a4, *(_DWORD *)(a1 + 292), v9);
    v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *(_DWORD *)(a1 + 296) )
  {
    if ( v8 != &WPP_GLOBAL_Control && (*((_DWORD *)v8 + 7) & 0x8000000) != 0 && *((_BYTE *)v8 + 25) >= 4u )
    {
      v12 = 15;
LABEL_22:
      WPP_SF_((TRACEHANDLE)v8[2], v12, &WPP_f0c26e893d54393037413041046a80ee_Traceguids);
      goto LABEL_48;
    }
    goto LABEL_48;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) )
  {
    PBMRelatedAudioStreamCategory = (*(__int64 (__fastcall **)(__int64, struct IAudioProcess **))(*(_QWORD *)a2 + 24LL))(
                                      a2,
                                      &v26);
    if ( PBMRelatedAudioStreamCategory < 0
      || (v15 = v26,
          v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 40LL))(a5),
          PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(v15, v16, &v24),
          PBMRelatedAudioStreamCategory < 0) )
    {
      v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_42:
      if ( v17 != &WPP_GLOBAL_Control && (*((_DWORD *)v17 + 7) & 0x8000000) != 0 && *((_BYTE *)v17 + 25) >= 2u )
        WPP_SF_D(
          (TRACEHANDLE)v17[2],
          0x14u,
          &WPP_f0c26e893d54393037413041046a80ee_Traceguids,
          PBMRelatedAudioStreamCategory);
      if ( (unsigned int)dword_180034030 > 2 )
      {
        v30 = 0;
        v33 = 0;
        v36 = 0;
        v28 = "__FUNC__";
        v31 = &v25;
        v34 = &PBMRelatedAudioStreamCategory;
        v29 = 9;
        v25 = 276;
        v32 = 4;
        v35 = 4;
        TlgWrite((TraceLoggingHProvider)v17, &unk_18002D869, v13, (LPCGUID)v14, cData, &pData);
      }
      goto LABEL_48;
    }
    if ( v24 != 3 )
    {
      v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v12 = 17;
        goto LABEL_22;
      }
      goto LABEL_48;
    }
    if ( a4 == 1 )
    {
      v14 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 288));
      v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v14);
        v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      if ( *(_DWORD *)(a1 + 292) != 3 )
      {
        v18 = *(unsigned int *)(a1 + 288);
        v19 = 1LL;
LABEL_30:
        cData = 1;
        PBMRelatedAudioStreamCategory = CDuckingManager::QueueDuckingWorkItem(a1 - 16, a2, v18, v19);
LABEL_38:
        v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
    }
    else
    {
      if ( a4 )
        goto LABEL_38;
      v14 = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a1 + 288));
      v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v14);
        v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      if ( *(_DWORD *)(a1 + 292) != 3 )
      {
        v19 = 2LL;
        v18 = 0LL;
        goto LABEL_30;
      }
    }
    if ( PBMRelatedAudioStreamCategory >= 0 )
      goto LABEL_48;
    goto LABEL_42;
  }
  v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v12 = 16;
    goto LABEL_22;
  }
LABEL_48:
  v20 = PBMRelatedAudioStreamCategory;
  if ( v26 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v26 + 16LL))(v26);
  return v20;
}
