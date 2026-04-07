/*
 * XREFs of ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002C640
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800066D0 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180017DE8 (--0CWindowData@@QEAA@XZ.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x1800188DC (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x1800189BC (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180018FCC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800280C0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180029520 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002EED0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::OwnerChange(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  unsigned int v5; // esi
  CWindowData *v6; // r14
  int v7; // edi
  struct CWindowData *v8; // rbp
  CWindowData *v9; // rax
  CWindowData *v10; // rax
  __int64 v11; // rax
  struct IDwmWindow *v12; // rdx
  CWindowList *v13; // r15
  int v14; // eax
  int v15; // ebx
  CWindowData *v16; // rbp
  int SyncedWindowData; // eax
  __int64 v18; // rdi
  unsigned int v19; // r8d
  CWindowData *v20; // rdx
  int v21; // eax
  _QWORD *v22; // rdi
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // eax
  CWindowData *v28; // [rsp+78h] [rbp+10h] BYREF
  CWindowData **v29; // [rsp+80h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v8 && (a3 || (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2)) )
  {
    v9 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                          WPF::g_pProcessHeap,
                          1216LL);
    if ( !v9 || (v10 = CWindowData::CWindowData(v9), (v8 = v10) == 0LL) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x603u);
      v15 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xBB8u);
      goto LABEL_39;
    }
    *((_QWORD *)v10 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v10);
    v11 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v12 = a2;
    *((_QWORD *)v8 + 5) = v11;
    v13 = this;
    v14 = CWindowList::SyncWindowData(this, v12, v8);
    v7 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x607u);
      goto LABEL_11;
    }
  }
  else
  {
    v13 = this;
  }
  v6 = v8;
LABEL_11:
  v15 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xBB8u);
    goto LABEL_39;
  }
  if ( !v6 )
    goto LABEL_39;
  v28 = 0LL;
  v16 = 0LL;
  if ( a3 )
  {
    SyncedWindowData = CWindowList::GetSyncedWindowData(v13, a3, 0, &v28);
    v15 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0xBC0u);
      goto LABEL_39;
    }
    v16 = v28;
  }
  v28 = v6;
  v15 = 0;
  v18 = *((_QWORD *)v6 + 63);
  if ( (CWindowData *)v18 == v16 )
    goto LABEL_37;
  if ( v18 )
  {
    CWindowData::UpdateOwnerLists(v6, 0);
    v6 = v28;
  }
  *((_QWORD *)v6 + 63) = 0LL;
  if ( v18 )
  {
    DynArray<CWindowData *,0>::Remove((__int64 *)(v18 + 512), (__int64 *)&v28);
    v19 = *(_DWORD *)(v18 + 424);
    if ( v19 )
    {
      v20 = v28;
      while ( *(CWindowData **)(*(_QWORD *)(*(_QWORD *)(v18 + 400) + 8LL * v5) + 64LL) != v28 )
      {
        if ( ++v5 >= v19 )
          goto LABEL_30;
      }
      v21 = CWindowData::NotifyRepresentationChanged((CWindowData *)v18);
      v15 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0xBF8u);
        goto LABEL_37;
      }
    }
  }
  v20 = v28;
LABEL_30:
  *((_QWORD *)v20 + 63) = v16;
  if ( !v16 )
    goto LABEL_37;
  v22 = (_QWORD *)((char *)v16 + 512);
  v23 = *((_DWORD *)v16 + 134);
  v24 = v23 + 1;
  if ( v23 + 1 < v23 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v15 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xC04u);
    goto LABEL_37;
  }
  if ( v24 <= *((_DWORD *)v16 + 133) )
  {
    *(_QWORD *)(*v22 + 8LL * *((unsigned int *)v16 + 134)) = v28;
    *((_DWORD *)v16 + 134) = v24;
    goto LABEL_35;
  }
  v29 = &v28;
  v15 = DynArrayImpl<0>::Grow((__int64)v16 + 512, 8u, 1, 0, (unsigned __int64 *)&v29);
  if ( v15 >= 0 )
  {
    *(_QWORD *)(*v22 + (unsigned int)(8 * (*((_DWORD *)v16 + 134))++)) = *v29;
LABEL_35:
    CWindowData::CheckOwnedWindowEligibility(v28);
    v25 = CWindowData::NotifyRepresentationChanged(v16);
    v15 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0xC09u);
    goto LABEL_37;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0xC0u);
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0xC04u);
LABEL_37:
  if ( v15 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0xBC4u);
LABEL_39:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v15;
}
