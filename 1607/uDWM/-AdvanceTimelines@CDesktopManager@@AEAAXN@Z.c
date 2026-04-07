/*
 * XREFs of ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x18001E310
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045230 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x1800178D0 (-UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z.c)
 *     ??_E?$CTimeline@M@@UEAAPEAXI@Z @ 0x180017AB0 (--_E-$CTimeline@M@@UEAAPEAXI@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x18004CD14 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 */

void __fastcall CDesktopManager::AdvanceTimelines(CDesktopManager *this, double a2)
{
  __int64 v2; // rdx
  double v4; // xmm6_8
  __int64 v5; // rdx
  struct _SINGLE_LIST_ENTRY *v6; // rcx
  struct _SINGLE_LIST_ENTRY *j; // rbx
  struct _SINGLE_LIST_ENTRY *v8; // rdi
  struct _SINGLE_LIST_ENTRY *v9; // rcx
  __int64 v10; // rcx
  struct _SINGLE_LIST_ENTRY *v11; // xmm0_8
  struct _SINGLE_LIST_ENTRY *v12; // rbx
  char v13; // bp
  struct _SINGLE_LIST_ENTRY *Next; // rax
  struct _SINGLE_LIST_ENTRY *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct _SINGLE_LIST_ENTRY *i; // rbx
  struct _SINGLE_LIST_ENTRY *v19; // rax
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(this, &UdwmAnimationRecalc_Start);
  if ( CDesktopManager::s_fTimelineDirty )
  {
    v12 = &CDesktopManager::s_listTimeline;
    v13 = 1;
    CDesktopManager::s_fTimelineDirty = 0;
    if ( CDesktopManager::s_listTimeline.Next )
    {
      do
      {
        Next = v12->Next;
        if ( v12->Next )
          v15 = Next - 2;
        else
          v15 = 0LL;
        if ( LODWORD(v15[1].Next) )
        {
          if ( v13
            && BYTE1(v15[9].Next)
            && (int)CTimelineBase::UpdateBeforeTickWorker((CTimelineBase *)v15, (CDesktopManager *)((char *)this + 240)) < 0 )
          {
            v13 = 0;
          }
          v12 = v12->Next;
        }
        else
        {
          if ( Next )
            v12->Next = Next->Next;
          v19 = v15->Next->Next;
          if ( v19 == (struct _SINGLE_LIST_ENTRY *)CTimeline<float>::`vector deleting destructor' )
            CTimeline<float>::`vector deleting destructor'(v15, 1);
          else
            ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *, __int64))v19)(v15, 1LL);
        }
      }
      while ( v12->Next );
    }
    v16 = *((_QWORD *)this + 32);
    if ( v16 && v13 && (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v16 + 88LL))(v16, v2, 0LL) < 0 )
      v13 = 0;
    v17 = *((_QWORD *)this + 32);
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      *((_QWORD *)this + 32) = 0LL;
    }
    for ( i = CDesktopManager::s_listTimeline.Next; i; i = i->Next )
    {
      if ( BYTE1(i[7].Next) )
      {
        if ( !v13 )
          CTimelineBase::JumpToFinalValue((CTimelineBase *)&i[-2]);
        BYTE1(i[7].Next) = 0;
      }
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7)
                                                          + 64LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
         2LL)
    && (GetKeyState(16) & 0xFF80) != 0 )
  {
    v4 = a2 / 20.0;
  }
  v6 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)this + 30);
  *((double *)this + 29) = v4 + *((double *)this + 29);
  if ( v6 )
    ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *, __int64, _QWORD))v6->Next[8].Next)(v6, v5, 0LL);
  for ( j = CDesktopManager::s_listTimeline.Next; j; j = j->Next )
  {
    v8 = j - 2;
    if ( !LOBYTE(j[7].Next) )
    {
      v9 = v8[8].Next;
      v20 = 0LL;
      if ( v9 && ((int (__fastcall *)(struct _SINGLE_LIST_ENTRY *, __int64 *))v9->Next[9].Next)(v9, &v20) >= 0 )
      {
        v10 = v20;
        LOBYTE(v8[9].Next) = v20 == 0;
        if ( v10 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          v20 = 0LL;
        }
      }
      else
      {
        LOBYTE(v8[9].Next) = 1;
      }
      v6 = v8[8].Next;
      if ( LOBYTE(v8[9].Next) )
      {
        if ( v6 )
        {
          ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *))v6->Next[2].Next)(v6);
          v8[8].Next = 0LL;
        }
        if ( *(double *)&v8[3].Next < 0.0 )
          v11 = v8[4].Next;
        else
          v11 = v8[5].Next;
        v8[6].Next = v11;
        LOBYTE(v8[9].Next) = 1;
      }
      else
      {
        ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *, struct _SINGLE_LIST_ENTRY *))v6->Next[3].Next)(v6, v8 + 6);
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v6, &UdwmAnimationRecalc_Stop);
}
