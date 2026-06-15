/*
 * XREFs of ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800064D0
 * Callers:
 *     ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180004F20 (-OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1P.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     WPP_SF_ @ 0x180005B4C (WPP_SF_.c)
 *     WPP_SF_ddS @ 0x180005D78 (WPP_SF_ddS.c)
 *     ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x180007EB0 (-QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000A2E8 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::OnStreamStateChanged(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  _UNKNOWN **v8; // rcx
  const wchar_t *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  USHORT v12; // dx
  int PBMRelatedAudioStreamCategory; // ebx
  struct IAudioProcess *v14; // rbx
  unsigned int v15; // eax
  int v16; // r9d
  _UNKNOWN **v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r9d
  struct IAudioProcess *v22; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v23; // [rsp+60h] [rbp+8h] BYREF

  v22 = 0LL;
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
    if ( v8 == &WPP_GLOBAL_Control || (*((_DWORD *)v8 + 7) & 0x8000000) == 0 || *((_BYTE *)v8 + 25) < 4u )
      goto LABEL_16;
    v12 = 15;
LABEL_15:
    WPP_SF_((TRACEHANDLE)v8[2], v12, &WPP_f0c26e893d54393037413041046a80ee_Traceguids);
LABEL_16:
    PBMRelatedAudioStreamCategory = 0;
    goto LABEL_48;
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) )
  {
    v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_16;
    }
    v12 = 16;
    goto LABEL_15;
  }
  PBMRelatedAudioStreamCategory = (*(__int64 (__fastcall **)(__int64, struct IAudioProcess **))(*(_QWORD *)a2 + 24LL))(
                                    a2,
                                    &v22);
  if ( PBMRelatedAudioStreamCategory >= 0 )
  {
    v14 = v22;
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 40LL))(a5);
    PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(v14, v15, &v23);
    if ( PBMRelatedAudioStreamCategory >= 0 )
    {
      if ( v23 != 3 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids);
        }
        goto LABEL_48;
      }
      if ( a4 == 1 )
      {
        v16 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 288));
        v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v16);
          v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
        }
        if ( *(_DWORD *)(a1 + 292) != 3 )
        {
          v18 = *(unsigned int *)(a1 + 288);
          v19 = 1LL;
LABEL_38:
          PBMRelatedAudioStreamCategory = CDuckingManager::QueueDuckingWorkItem(a1 - 16, a2, v18, v19, 1);
          goto LABEL_39;
        }
      }
      else
      {
        if ( a4 )
        {
LABEL_39:
          v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
          goto LABEL_40;
        }
        v20 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 288));
        v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v20);
          v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
        }
        if ( *(_DWORD *)(a1 + 292) != 3 )
        {
          v19 = 2LL;
          v18 = 0LL;
          goto LABEL_38;
        }
      }
LABEL_40:
      if ( PBMRelatedAudioStreamCategory >= 0 )
        goto LABEL_48;
      goto LABEL_43;
    }
  }
  v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_43:
  if ( v17 != &WPP_GLOBAL_Control && (*((_DWORD *)v17 + 7) & 0x8000000) != 0 && *((_BYTE *)v17 + 25) >= 2u )
    WPP_SF_D(
      (TRACEHANDLE)v17[2],
      0x14u,
      &WPP_f0c26e893d54393037413041046a80ee_Traceguids,
      PBMRelatedAudioStreamCategory);
  AudPolicyLogError("CDuckingManager::OnStreamStateChanged", 276, PBMRelatedAudioStreamCategory);
LABEL_48:
  if ( v22 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v22 + 16LL))(v22);
  return (unsigned int)PBMRelatedAudioStreamCategory;
}
