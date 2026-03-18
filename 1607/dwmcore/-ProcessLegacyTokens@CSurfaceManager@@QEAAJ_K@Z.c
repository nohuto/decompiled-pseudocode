/*
 * XREFs of ?ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z @ 0x1800374D0
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z @ 0x18011A2E0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z.c)
 * Callees:
 *     ?ExpireCaptureBitsResponse@CLegacySurfaceManager@@QEAA_N_N@Z @ 0x1800378F8 (-ExpireCaptureBitsResponse@CLegacySurfaceManager@@QEAA_N_N@Z.c)
 *     ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x180037928 (-GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180037978 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x180037AC0 (-FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 *     ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180120220 (-AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?RemoveAt@?$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z @ 0x180120528 (-RemoveAt@-$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CSurfaceManager::ProcessLegacyTokens(CSurfaceManager *this, unsigned __int64 a2)
{
  unsigned int v2; // esi
  unsigned __int64 v3; // r15
  unsigned int v5; // r13d
  unsigned int v6; // r12d
  CLegacySurfaceManager *v7; // rcx
  int v8; // ebx
  unsigned __int64 v9; // rdx
  int LegacyTokens; // eax
  unsigned int v11; // r15d
  __int64 v12; // rsi
  int v14; // eax
  __int64 *v15; // r12
  __int64 v16; // rax
  BOOL v17; // edx
  int v18; // eax
  bool v19; // r15
  int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-38h]
  unsigned int v22; // [rsp+30h] [rbp-28h] BYREF
  int v23; // [rsp+34h] [rbp-24h] BYREF
  BOOL v24; // [rsp+38h] [rbp-20h]
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v25; // [rsp+40h] [rbp-18h]
  bool v26; // [rsp+A0h] [rbp+48h] BYREF
  unsigned __int64 v27; // [rsp+A8h] [rbp+50h]
  unsigned int v28; // [rsp+B0h] [rbp+58h] BYREF

  v27 = a2;
  v2 = 0;
  v3 = a2;
  v5 = 0;
  v28 = 0;
  v6 = 0;
  v23 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Start);
  CLegacySurfaceManager::ExpireCaptureBitsResponse((CSurfaceManager *)((char *)this + 96), 0);
  v8 = 0;
  v22 = 0;
  if ( !*((_DWORD *)this + 56) )
    goto LABEL_4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v7, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Start);
  if ( *((_DWORD *)this + 56) )
  {
    v15 = (__int64 *)((char *)this + 200);
    while ( 1 )
    {
      v16 = *v15;
      v26 = 0;
      ++*(_DWORD *)(v16 + 16LL * v2);
      v17 = *(_DWORD *)(*v15 + 16LL * v2) > 0x64u;
      v25 = *(const struct _D3DKMT_PRESENTHISTORYTOKEN **)(*v15 + 16LL * v2 + 8);
      v24 = v17;
      v18 = CLegacySurfaceManager::ProcessToken((CSurfaceManager *)((char *)this + 96), v25, &v22, &v26);
      v8 = v18;
      if ( v18 < 0 )
        break;
      v19 = v26;
      if ( v26 || v24 )
      {
        v20 = DynArray<CLegacySurfaceManager::UnclaimedToken,0>::RemoveAt((char *)this + 200, v2);
        v8 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x1ACu);
          goto LABEL_33;
        }
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, const struct _D3DKMT_PRESENTHISTORYTOKEN *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v25);
        if ( !v19 )
          ++*((_DWORD *)this + 49);
        --v2;
      }
      if ( ++v2 >= *((_DWORD *)this + 56) )
        goto LABEL_33;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1A4u);
LABEL_33:
    v3 = v27;
    v6 = 0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v7, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Stop);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x112u);
  }
  else
  {
LABEL_4:
    v9 = v3;
    while ( 1 )
    {
      LegacyTokens = CLegacySurfaceManager::GetLegacyTokens(v7, v9, &v28, &v23);
      *((_DWORD *)this + 48) = LegacyTokens;
      if ( LegacyTokens < 0 )
      {
LABEL_8:
        if ( *((int *)this + 48) < 0 )
          CLegacySurfaceManager::FlushVistaBltPresentHistory((CSurfaceManager *)((char *)this + 96));
        goto LABEL_10;
      }
      v11 = 0;
      v12 = *((_QWORD *)this + 81);
      v5 += v28;
      if ( v28 )
        break;
LABEL_7:
      if ( !v23 )
        goto LABEL_8;
      v9 = v27;
      ++v6;
    }
    while ( 1 )
    {
      v26 = 0;
      v14 = CLegacySurfaceManager::ProcessToken(
              (CSurfaceManager *)((char *)this + 96),
              (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v12,
              &v22,
              &v26);
      v8 = v14;
      if ( v14 < 0 )
        break;
      if ( !v26 )
      {
        v14 = CLegacySurfaceManager::AddUnclaimedToken(
                (CSurfaceManager *)((char *)this + 96),
                (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v12);
        v8 = v14;
        if ( v14 < 0 )
        {
          v21 = 308;
          goto LABEL_41;
        }
      }
      ++v11;
      v12 += *(unsigned int *)(v12 + 4);
      if ( v11 >= v28 )
        goto LABEL_7;
    }
    v21 = 301;
LABEL_41:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v21);
  }
LABEL_10:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v7, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Stop, v5, v6);
  return (unsigned int)v8;
}
