/*
 * XREFs of ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002B330
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180017890 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180017DE8 (--0CWindowData@@QEAA@XZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180018FCC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180029D28 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002EED0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::GDISurfaceChange(CWindowList *this, struct IDwmWindow *a2)
{
  __int64 v4; // rax
  __int64 v5; // r14
  struct CWindowData *v6; // rbx
  int v7; // esi
  struct CWindowData *v8; // rbp
  unsigned int v9; // edi
  __int64 v10; // rax
  int updated; // eax
  volatile signed __int32 *v12; // rdi
  CResource *(__fastcall *v13)(CResource *, char); // rsi
  __int64 v14; // rsi
  void *(__fastcall *v15)(WPF::ProcessHeapImpl *, size_t); // rbp
  CBaseObject *v16; // rax
  CBaseObject *v17; // rdi
  int v18; // eax
  int v19; // esi
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rsi
  char v23; // al
  _QWORD *v24; // rax
  CResource *v26; // rcx
  __int64 v27; // rdx
  CWindowData *v28; // rax
  CWindowData *v29; // rax
  int v30; // eax
  unsigned int v31; // [rsp+20h] [rbp-98h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v33; // [rsp+40h] [rbp-78h]
  __int128 v34; // [rsp+50h] [rbp-68h]
  __int64 v35; // [rsp+60h] [rbp-58h]
  char v36; // [rsp+68h] [rbp-50h]
  unsigned int v37; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v38; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v39; // [rsp+D8h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_QWORD *)a2;
  v5 = 0LL;
  v37 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(v4 + 8))(a2);
  if ( v8 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v28 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         1216LL);
  if ( !v28 || (v29 = CWindowData::CWindowData(v28), (v8 = v29) == 0LL) )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x603u);
    v9 = -2147024882;
    goto LABEL_46;
  }
  *((_QWORD *)v29 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v29);
  *((_QWORD *)v8 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v30 = CWindowList::SyncWindowData(this, a2, v8);
  v7 = v30;
  if ( v30 >= 0 )
LABEL_2:
    v6 = v8;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v30, 0x607u);
  v9 = v7;
  if ( v7 < 0 )
  {
LABEL_46:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x1232u);
    goto LABEL_28;
  }
  if ( !v6 )
    goto LABEL_28;
  v10 = *((_QWORD *)v6 + 48);
  if ( v10 )
  {
    v26 = (CResource *)*((_QWORD *)v6 + 44);
    if ( v26 )
    {
      v27 = *(_QWORD *)(v10 + 32);
      if ( v27 )
      {
        if ( *(CResource **)(v27 + 352) == v26 )
        {
          v39 = 137LL;
          updated = CResource::Send(v26, &v39, 8u);
          v9 = updated;
          if ( updated < 0 )
          {
            v31 = 4675;
LABEL_55:
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, v31);
            goto LABEL_28;
          }
        }
      }
    }
  }
  updated = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD, unsigned int *))(*(_QWORD *)a2 + 320LL))(
              a2,
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
              &v37);
  v9 = updated;
  if ( updated < 0 )
  {
    v31 = 4679;
    goto LABEL_55;
  }
  v12 = (volatile signed __int32 *)*((_QWORD *)v6 + 44);
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      v13 = **(CResource *(__fastcall ***)(CResource *, char))v12;
      if ( v13 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v12, 1);
      else
        v13((CResource *)v12, 1);
    }
    *((_QWORD *)v6 + 44) = 0LL;
  }
  if ( v37 )
  {
    v38 = v37;
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
      *((_QWORD *)v16 + 2) = 0LL;
      *(_QWORD *)v16 = &CResource::`vftable';
      *((_DWORD *)v16 + 6) = v38;
      *((_QWORD *)v16 + 2) = v14;
      v18 = MilResource_CreateOrAddRefOnChannel(v14, 0LL, &v38);
      v19 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x6Bu);
        CBaseObject::Release(v17);
      }
      else
      {
        *((_QWORD *)v6 + 44) = v17;
      }
      v9 = v19;
      if ( v19 >= 0 )
        goto LABEL_19;
    }
    else
    {
      v19 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x61u);
      v9 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x124Eu);
    goto LABEL_28;
  }
LABEL_19:
  v20 = *((_QWORD *)v6 + 46);
  if ( v20 )
  {
    if ( *((_QWORD *)v6 + 44) )
    {
      v21 = *(_DWORD *)(v20 + 80);
      if ( (v21 & 0x2000000) == 0 )
      {
        v22 = *(_QWORD *)(v20 + 24);
        for ( *(_DWORD *)(v20 + 80) = v21 | 0x2000000; v22; v22 = *(_QWORD *)(v22 + 24) )
        {
          if ( (*(_BYTE *)(v22 + 80) & 1) != 0 )
            break;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
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
    (__int64)v6 + 344,
    (__int64)v6 + 348);
  v23 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
  *((_BYTE *)v6 + 555) &= ~4u;
  *((_BYTE *)v6 + 555) |= 4 * (v23 & 1);
  updated = CWindowData::NotifyRepresentationChanged(v6);
  v9 = updated;
  if ( updated < 0 )
  {
    v31 = 4698;
    goto LABEL_55;
  }
  Buffer[0] = *((_QWORD *)v6 + 15);
  v33 = 0LL;
  v34 = 0LL;
  Buffer[1] = 0LL;
  v35 = -1LL;
  v36 = 0;
  v24 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( v24 )
    v5 = v24[6];
  if ( *((_QWORD *)v6 + 5) == v5 )
  {
    updated = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)v6 + 15));
    v9 = updated;
    if ( updated < 0 )
    {
      v31 = 4705;
      goto LABEL_55;
    }
  }
LABEL_28:
  if ( v37 )
    MilResource_ReleaseOnChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4), v37, 0LL);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v9;
}
