/*
 * XREFs of ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18014C474
 * Callers:
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18010B540 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x180149DC8 (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector3@@@Z @ 0x180149E90 (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector3@@@Z.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAA_N_N@Z @ 0x18014A2B0 (-CheckForIdle@CInteractionTracker@@AEAA_N_N@Z.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18014AEE0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ResolveNewBoundary@CInteractionTracker@@AEAAXW4ScrollAxis@@@Z @ 0x18014B10C (-ResolveNewBoundary@CInteractionTracker@@AEAAXW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x1801455A4 (-ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z.c)
 *     ??$RunForAllScrollAnimations@V_lambda_9350ba20521abdf2f955936e45fdc4df_@@@CInteractionTracker@@AEAAXAEBV_lambda_9350ba20521abdf2f955936e45fdc4df_@@@Z @ 0x180149700 (--$RunForAllScrollAnimations@V_lambda_9350ba20521abdf2f955936e45fdc4df_@@@CInteractionTracker@@A.c)
 *     ??$RunForAllScrollAnimationsWithAxis@V_lambda_55738fce9ccb5b08587947e191557d76_@@@CInteractionTracker@@AEAAXAEBV_lambda_55738fce9ccb5b08587947e191557d76_@@@Z @ 0x180149788 (--$RunForAllScrollAnimationsWithAxis@V_lambda_55738fce9ccb5b08587947e191557d76_@@@CInteractionTr.c)
 *     ?EnsureScrollAnimations@CInteractionTracker@@AEAAJXZ @ 0x18014A474 (-EnsureScrollAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18014ACFC (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x18014AE14 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18014BD80 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x18014C22C (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::TransitionToInertia(CInteractionTracker *this)
{
  char v2; // di
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  CInteractionTracker *v6; // rcx
  CInteraction *v7; // r8
  int v8; // eax
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  CInteractionTracker *v18; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v20; // [rsp+30h] [rbp-A8h]
  __int128 v21; // [rsp+40h] [rbp-98h]
  __int128 v22; // [rsp+50h] [rbp-88h]
  __int128 v23; // [rsp+60h] [rbp-78h]
  __int128 v24; // [rsp+70h] [rbp-68h]
  __int128 v25; // [rsp+80h] [rbp-58h]
  __int128 v26; // [rsp+90h] [rbp-48h]
  __int128 v27; // [rsp+A0h] [rbp-38h]
  __int128 v28; // [rsp+B0h] [rbp-28h]
  int v29; // [rsp+C0h] [rbp-18h]
  char v30; // [rsp+E0h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *((_DWORD *)this + 51);
  if ( !v3 )
    goto LABEL_5;
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return;
LABEL_5:
      if ( !CInteractionTracker::IsOutOfBounds(this) && !CInteractionTracker::HasImpulse(v6) )
        return;
      goto LABEL_7;
    }
    v30 = 0;
    v19[1] = &v30;
    v19[0] = this;
    CInteractionTracker::RunForAllScrollAnimationsWithAxis<_lambda_55738fce9ccb5b08587947e191557d76_>(
      (__int64)this,
      (__int64)v19);
    if ( !CInteractionTracker::IsOutOfBounds(this) && !CInteractionTracker::HasImpulse(v18) && !v30 )
      return;
    v2 = 1;
  }
LABEL_7:
  CInteractionTracker::StopCustomAnimations(this);
  CInteractionTracker::EnsureScrollAnimations(this);
  if ( v2 )
    CInteractionTracker::RunForAllScrollAnimations<_lambda_9350ba20521abdf2f955936e45fdc4df_>((__int64)this);
  v7 = (CInteraction *)*((_QWORD *)this + 69);
  v8 = *((_DWORD *)this + 153);
  *((_QWORD *)this + 74) = *(_QWORD *)((char *)this + 604);
  *((_DWORD *)this + 150) = v8;
  if ( v7 )
  {
    v9 = *((_QWORD *)this + 68) + 268LL;
    v10 = *(_OWORD *)(*((_QWORD *)this + 68) + 284LL);
    v20 = *(_OWORD *)v9;
    v11 = *(_OWORD *)(v9 + 32);
    v21 = v10;
    v12 = *(_OWORD *)(v9 + 48);
    v22 = v11;
    v13 = *(_OWORD *)(v9 + 64);
    v23 = v12;
    v14 = *(_OWORD *)(v9 + 80);
    v24 = v13;
    v15 = *(_OWORD *)(v9 + 96);
    v25 = v14;
    v16 = *(_OWORD *)(v9 + 128);
    v26 = v15;
    v17 = *(_OWORD *)(v9 + 112);
    LODWORD(v9) = *(_DWORD *)(v9 + 144);
    v27 = v17;
    v28 = v16;
    v29 = v9;
    if ( *((float *)&v26 + 2) != 0.0 || *((float *)&v26 + 3) != 0.0 )
      CInteraction::ReportInertiaStart(v7, SHIDWORD(v28), *((float *)&v26 + 2), *((float *)&v26 + 3));
  }
  CInteractionTracker::SetState((__int64)this, 2);
}
