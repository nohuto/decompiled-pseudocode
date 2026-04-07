/*
 * XREFs of ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180019FD0 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001B42C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180020590 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x1800305C0 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180033490 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::GDISurfaceChange(CWindowList *this, struct IDwmWindow *a2)
{
  __int64 v4; // rsi
  int SyncedWindowData; // eax
  unsigned int v6; // edi
  CWindowData *v7; // rbx
  __int64 v8; // rax
  int updated; // eax
  CBaseObject **v10; // r14
  volatile signed __int32 *v11; // rcx
  CResource *(__fastcall *v12)(CResource *, char); // rax
  unsigned int v13; // ebp
  __int64 v14; // r12
  void *(__fastcall *v15)(WPF::ProcessHeapImpl *, size_t); // rax
  CBaseObject *v16; // rax
  CBaseObject *v17; // rdi
  int v18; // eax
  int v19; // ebp
  __int64 v20; // rax
  int v21; // ecx
  CVisual *v22; // rdi
  char v23; // al
  _QWORD *v24; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  void (__fastcall *v28)(CVisual *); // rax
  unsigned int v29; // [rsp+20h] [rbp-A8h]
  CWindowData *v30; // [rsp+30h] [rbp-98h] BYREF
  _QWORD Buffer[2]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v32; // [rsp+50h] [rbp-78h]
  __int128 v33; // [rsp+60h] [rbp-68h]
  __int64 v34; // [rsp+70h] [rbp-58h]
  char v35; // [rsp+78h] [rbp-50h]
  unsigned int v36; // [rsp+E0h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v36 = 0;
  v30 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v30);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowData, 0xFD9u);
    goto LABEL_26;
  }
  v7 = v30;
  if ( !v30 )
    goto LABEL_26;
  v8 = *((_QWORD *)v30 + 51);
  if ( v8 )
  {
    v26 = *((_QWORD *)v30 + 46);
    if ( v26 )
    {
      v27 = *(_QWORD *)(v8 + 32);
      if ( v27 )
      {
        if ( *(_QWORD *)(v27 + 368) == v26 )
        {
          updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v26 + 16) + 864LL))(
                      *(_QWORD *)(v26 + 16),
                      *(unsigned int *)(v26 + 24));
          v6 = updated;
          if ( updated < 0 )
          {
            v29 = 4072;
LABEL_50:
            MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v29);
            goto LABEL_26;
          }
        }
      }
    }
  }
  updated = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD, unsigned int *))(*(_QWORD *)a2 + 320LL))(
              a2,
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
              &v36);
  v6 = updated;
  if ( updated < 0 )
  {
    v29 = 4076;
    goto LABEL_50;
  }
  v10 = (CBaseObject **)((char *)v7 + 368);
  v11 = (volatile signed __int32 *)*((_QWORD *)v7 + 46);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      v12 = **(CResource *(__fastcall ***)(CResource *, char))v11;
      if ( v12 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v11, 1);
      else
        v12((CResource *)v11, 1);
    }
    v7 = v30;
    *v10 = 0LL;
  }
  v13 = v36;
  if ( v36 )
  {
    v14 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    v15 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    if ( v15 == WPF::ProcessHeapImpl::AllocClear )
      v16 = (CBaseObject *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
    else
      v16 = (CBaseObject *)v15(WPF::g_pProcessHeap, 32LL);
    v17 = v16;
    if ( v16 )
    {
      *((_DWORD *)v16 + 2) = 1;
      *(_QWORD *)v16 = &CResource::`vftable';
      *((_DWORD *)v16 + 6) = v13;
      *((_QWORD *)v16 + 2) = v14;
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 80LL))(v14, v13);
      v19 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x66u);
        CBaseObject::Release(v17);
      }
      else
      {
        *v10 = v17;
      }
      v6 = v19;
      if ( v19 >= 0 )
        goto LABEL_17;
    }
    else
    {
      v19 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x61u);
      v6 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xFF3u);
    goto LABEL_26;
  }
LABEL_17:
  v20 = *((_QWORD *)v7 + 48);
  if ( v20 )
  {
    if ( *v10 )
    {
      v21 = *(_DWORD *)(v20 + 80);
      if ( (v21 & 0x2000000) == 0 )
      {
        v22 = *(CVisual **)(v20 + 24);
        for ( *(_DWORD *)(v20 + 80) = v21 | 0x2000000; v22; v22 = (CVisual *)*((_QWORD *)v22 + 3) )
        {
          if ( (*((_BYTE *)v22 + 80) & 1) != 0 )
            break;
          v28 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v22 + 32LL);
          if ( v28 == CVisual::SetDirtyChildren )
            CVisual::SetDirtyChildren(v22);
          else
            v28(v22);
        }
      }
    }
    else
    {
      *(_DWORD *)(v20 + 80) &= ~0x2000000u;
    }
  }
  (*(void (__fastcall **)(struct IDwmWindow *, __int64, __int64))(*(_QWORD *)a2 + 328LL))(
    a2,
    (__int64)v7 + 360,
    (__int64)v7 + 364);
  v23 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
  *((_BYTE *)v7 + 579) &= ~4u;
  *((_BYTE *)v7 + 579) |= 4 * (v23 & 1);
  updated = CWindowData::NotifyRepresentationChanged(v7);
  v6 = updated;
  if ( updated < 0 )
  {
    v29 = 4094;
    goto LABEL_50;
  }
  Buffer[0] = *((_QWORD *)v7 + 15);
  v32 = 0LL;
  v33 = 0LL;
  Buffer[1] = 0LL;
  v34 = -1LL;
  v35 = 0;
  v24 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( v24 )
    v4 = v24[6];
  if ( *((_QWORD *)v7 + 5) == v4 )
  {
    updated = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)v7 + 15));
    v6 = updated;
    if ( updated < 0 )
    {
      v29 = 4099;
      goto LABEL_50;
    }
  }
LABEL_26:
  if ( v36 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 120LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
