/*
 * XREFs of ?ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18002D360
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?QueueWorkItem@CSyncWorkItem@@UEAAJXZ @ 0x18002BFC0 (-QueueWorkItem@CSyncWorkItem@@UEAAJXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CProcess::ProcessTerminationWatcherCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        volatile signed __int32 *a2,
        struct _TP_WAIT *a3)
{
  _QWORD *v4; // rdi
  signed int (__fastcall *v5)(ULONG_PTR); // rbx
  signed int v6; // eax
  int v7; // esi
  __int64 v8; // rcx

  _InterlockedIncrement(a2 + 2);
  v4 = operator new(0x10uLL);
  if ( v4 )
  {
    v4[1] = a2;
    *v4 = &CProcessTerminatedWorkItem::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
  {
    v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    v7 = -2147024882;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control )
      return;
    if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 2u )
    {
      goto LABEL_19;
    }
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      25LL,
      &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      2147942414LL);
LABEL_18:
    v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_19:
    if ( (struct _GUID *)v8 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v8 + 28) & 0x40000000) != 0
      && *(_BYTE *)(v8 + 25) >= 2u )
    {
      WPP_SF_D(*(_QWORD *)(v8 + 16), 50LL, &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids, (unsigned int)v7);
    }
    return;
  }
  v5 = *(signed int (__fastcall **)(ULONG_PTR))(*v4 + 16LL);
  if ( v5 == CSyncWorkItem::QueueWorkItem )
    v6 = CSyncWorkItem::QueueWorkItem((ULONG_PTR)v4);
  else
    v6 = v5((ULONG_PTR)v4);
  v7 = v6;
  if ( v6 >= 0 )
    v4 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1LL);
  if ( v7 < 0 )
    goto LABEL_18;
}
