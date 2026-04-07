/*
 * XREFs of ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x18001BF30
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800424A0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x1800156B4 (-UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800197A0 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x18004823C (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     TemplateEventDescriptor @ 0x18006B828 (TemplateEventDescriptor.c)
 */

void __fastcall CDesktopManager::AdvanceTimelines(CDesktopManager *this, double a2)
{
  __int64 v2; // rdx
  double v4; // xmm6_8
  struct _SINGLE_LIST_ENTRY *v5; // rsi
  char v6; // bp
  struct _SINGLE_LIST_ENTRY *Next; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  struct _SINGLE_LIST_ENTRY *v11; // rbx
  bool i; // zf
  CTimelineBase *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  struct _SINGLE_LIST_ENTRY *v17; // r14
  bool j; // zf
  struct _SINGLE_LIST_ENTRY *v19; // rdi
  struct _SINGLE_LIST_ENTRY *v20; // rsi
  __int64 v21; // rsi
  bool v22; // al
  struct _SINGLE_LIST_ENTRY *v23; // rsi
  struct _SINGLE_LIST_ENTRY *v24; // xmm0_8
  __int64 v25; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(this, &UdwmAnimationRecalc_Start);
  if ( CDesktopManager::s_fTimelineDirty )
  {
    v5 = &CDesktopManager::s_listTimeline;
    v6 = 1;
    CDesktopManager::s_fTimelineDirty = 0;
    if ( CDesktopManager::s_listTimeline.Next )
    {
      do
      {
        Next = v5->Next;
        v8 = (__int64)&v5->Next[-2];
        if ( !v5->Next )
          v8 = 0LL;
        if ( *(_DWORD *)(v8 + 8) )
        {
          if ( v6
            && *(_BYTE *)(v8 + 73)
            && (int)CTimelineBase::UpdateBeforeTickWorker((CTimelineBase *)v8, (CDesktopManager *)((char *)this + 256)) < 0 )
          {
            v6 = 0;
          }
          v5 = v5->Next;
        }
        else
        {
          if ( Next )
            v5->Next = Next->Next;
          (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
        }
      }
      while ( v5->Next );
    }
    v9 = *((_QWORD *)this + 34);
    if ( v9
      && v6
      && (*(int (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)v9 + 88LL))(*((_QWORD *)this + 34), v2, 0LL) < 0 )
    {
      v6 = 0;
    }
    v10 = *((_QWORD *)this + 34);
    if ( v10 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL))(*((_QWORD *)this + 34));
      *((_QWORD *)this + 34) = 0LL;
    }
    v11 = CDesktopManager::s_listTimeline.Next;
    for ( i = CDesktopManager::s_listTimeline.Next == 0LL; v11; i = v11 == 0LL )
    {
      v13 = (CTimelineBase *)&v11[-2];
      if ( i )
        v13 = 0LL;
      if ( *((_BYTE *)v13 + 73) )
      {
        if ( !v6 )
          CTimelineBase::JumpToFinalValue(v13);
        *((_BYTE *)v13 + 73) = 0;
      }
      v11 = v11->Next;
    }
  }
  if ( (unsigned __int8)CDesktopManager::CheckAnyPreference(2u) && (GetKeyState(16) & 0xFF80) != 0 )
    v4 = a2 / 20.0;
  v16 = *((_QWORD *)this + 32);
  *((double *)this + 31) = v4 + *((double *)this + 31);
  if ( v16 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v16 + 64LL))(v16, v14, 0LL);
  v17 = CDesktopManager::s_listTimeline.Next;
  for ( j = CDesktopManager::s_listTimeline.Next == 0LL; v17; j = v17 == 0LL )
  {
    v19 = v17 - 2;
    if ( j )
      v19 = 0LL;
    if ( !LOBYTE(v19[9].Next) )
    {
      v20 = v19[8].Next;
      v25 = 0LL;
      if ( v20 && ((int (__fastcall *)(struct _SINGLE_LIST_ENTRY *, __int64 *))v20->Next[9].Next)(v20, &v25) >= 0 )
      {
        v21 = v25;
        v22 = v25 == 0;
        LOBYTE(v19[9].Next) = v25 == 0;
        if ( !v22 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          v25 = 0LL;
        }
      }
      else
      {
        LOBYTE(v19[9].Next) = 1;
      }
      v23 = v19[8].Next;
      if ( LOBYTE(v19[9].Next) )
      {
        if ( v23 )
        {
          ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *))v23->Next[2].Next)(v19[8].Next);
          v19[8].Next = 0LL;
        }
        if ( *(double *)&v19[3].Next >= 0.0 )
          v24 = v19[5].Next;
        else
          v24 = v19[4].Next;
        v19[6].Next = v24;
        LOBYTE(v19[9].Next) = 1;
      }
      else
      {
        ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *, struct _SINGLE_LIST_ENTRY *))v23->Next[3].Next)(v23, v19 + 6);
      }
    }
    v17 = v17->Next;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v15, &UdwmAnimationRecalc_Stop);
}
