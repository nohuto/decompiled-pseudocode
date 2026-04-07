/*
 * XREFs of ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180021570
 * Callers:
 *     ?ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z @ 0x1800336D0 (-ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z.c)
 * Callees:
 *     ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x18001A8FC (-UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x18001AB40 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180038F64 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
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
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

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
  if ( CDesktopManager::CheckAnyPreference(2u) && (GetKeyState(16) & 0xFF80) != 0 )
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
      v23 = 0LL;
      if ( v20 && ((int (__fastcall *)(struct _SINGLE_LIST_ENTRY *, __int64 *))v20->Next[9].Next)(v20, &v23) >= 0 )
      {
        v21 = v23;
        v22 = v23 == 0;
        LOBYTE(v19[9].Next) = v23 == 0;
        if ( !v22 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          v23 = 0LL;
        }
      }
      else
      {
        LOBYTE(v19[9].Next) = 1;
      }
      if ( LOBYTE(v19[9].Next) )
        CTimelineBase::JumpToFinalValue((CTimelineBase *)v19);
      else
        ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *, struct _SINGLE_LIST_ENTRY *))v19[8].Next->Next[3].Next)(
          v19[8].Next,
          &v19[6]);
    }
    v17 = v17->Next;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v15, &UdwmAnimationRecalc_Stop);
}
