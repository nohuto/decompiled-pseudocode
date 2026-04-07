/*
 * XREFs of ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002F9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x18001D5D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18002F814 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180032060 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800335A0 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::OwnerChange(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  struct CWindowData *v5; // r14
  struct CWindowData *v6; // rsi
  int v7; // edi
  CWindowData **v8; // rcx
  struct CWindowData *v9; // rbp
  CWindowList *v10; // r15
  unsigned int v11; // ebx
  int SyncedWindowData; // eax
  CWindowData *v14; // rax
  CWindowData *v15; // rax
  __int64 v16; // rax
  struct IDwmWindow *v17; // rdx
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-48h]
  struct CWindowData *v21; // [rsp+78h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v9 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v9 || !a3 && !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v10 = this;
LABEL_5:
    v6 = v9;
    goto LABEL_6;
  }
  v14 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         1224LL);
  if ( !v14 || (v15 = CWindowData::CWindowData(v14), (v9 = v15) == 0LL) )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x5F8u);
    v11 = -2147024882;
    goto LABEL_19;
  }
  *((_QWORD *)v15 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v15);
  v16 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v17 = a2;
  *((_QWORD *)v9 + 5) = v16;
  v10 = this;
  v18 = CWindowList::SyncWindowData(this, v17, v9);
  v7 = v18;
  if ( v18 >= 0 )
    goto LABEL_5;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x5FCu);
LABEL_6:
  v11 = v7;
  if ( v7 < 0 )
  {
LABEL_19:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xBACu);
    goto LABEL_8;
  }
  if ( v6 )
  {
    v21 = 0LL;
    if ( a3 )
    {
      SyncedWindowData = CWindowList::GetSyncedWindowData(v10, a3, 0, &v21);
      v11 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v19 = 2996;
        goto LABEL_21;
      }
      v5 = v21;
    }
    SyncedWindowData = CWindowList::SetOwner(v8, v6, v5);
    v11 = SyncedWindowData;
    if ( SyncedWindowData >= 0 )
      goto LABEL_8;
    v19 = 3000;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, v19);
  }
LABEL_8:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v11;
}
