/*
 * XREFs of ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002D570
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800066D0 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x180006730 (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180017DE8 (--0CWindowData@@QEAA@XZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180027868 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002EED0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180030240 (-UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180030F30 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::ZOrder(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  __int64 v6; // rax
  unsigned int v7; // r14d
  int v8; // edi
  struct CWindowData *v9; // rsi
  unsigned int v10; // r15d
  __int64 v11; // rax
  struct _RTL_GENERIC_TABLE *v12; // r13
  char *v13; // rax
  char *v14; // rsi
  struct CWindowData *v15; // r15
  CWindowList *v16; // r12
  struct CWindowData *v17; // rdx
  struct CWindowData **v18; // rcx
  struct CWindowData *v19; // rcx
  struct CWindowData *v20; // rax
  struct CWindowData *v21; // rax
  struct CVisual *v22; // rdi
  __int64 v23; // rdi
  char *v25; // rax
  struct CWindowData *v26; // rax
  struct CWindowData *v27; // rdx
  struct CWindowData *v28; // rbx
  unsigned int v29; // eax
  unsigned int v30; // edx
  unsigned int v31; // ecx
  struct CWindowData **v32; // rax
  __int64 Element; // rax
  __int64 v34; // r15
  struct CVisual *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  int inserted; // eax
  int v39; // eax
  CWindowData *v40; // rax
  CWindowData *v41; // rax
  int v42; // eax
  CWindowData *v43; // rax
  CWindowData *v44; // rax
  __int64 v45; // rax
  struct IDwmWindow *v46; // rdx
  int v47; // eax
  int v48; // eax
  unsigned int v49; // [rsp+20h] [rbp-60h]
  __int64 Buffer; // [rsp+30h] [rbp-50h] BYREF
  __int64 v51; // [rsp+38h] [rbp-48h]
  __int128 v52; // [rsp+40h] [rbp-40h]
  __int128 v53; // [rsp+50h] [rbp-30h]
  __int64 v54; // [rsp+60h] [rbp-20h]
  char v55; // [rsp+68h] [rbp-18h]
  struct CWindowData *v57; // [rsp+C8h] [rbp+48h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = *(_QWORD *)a2;
  v7 = 0;
  v57 = 0LL;
  v8 = 0;
  v9 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(v6 + 8))(a2);
  if ( v9 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v40 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         1216LL);
  if ( !v40 || (v41 = CWindowData::CWindowData(v40), (v9 = v41) == 0LL) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x603u);
    v10 = -2147024882;
    goto LABEL_51;
  }
  *((_QWORD *)v41 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v41);
  *((_QWORD *)v9 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v42 = CWindowList::SyncWindowData(this, a2, v9);
  v8 = v42;
  if ( v42 >= 0 )
  {
LABEL_2:
    v57 = v9;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v42, 0x607u);
    v9 = v57;
  }
  v10 = v8;
  if ( v8 < 0 )
  {
LABEL_51:
    v49 = 2436;
LABEL_73:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, v49);
    goto LABEL_19;
  }
  if ( !v9 )
  {
    v10 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024890, 0x986u);
    goto LABEL_19;
  }
  v11 = *((_QWORD *)v9 + 15);
  v51 = 0LL;
  v12 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  v52 = 0LL;
  v54 = -1LL;
  v55 = 0;
  v53 = 0LL;
  Buffer = v11;
  v13 = (char *)RtlLookupElementGenericTable(v12, &Buffer);
  if ( !v13 || (v14 = v13 + 64, v13 == (char *)-64LL) )
  {
    v49 = 2441;
LABEL_72:
    v8 = -2147024882;
    v10 = -2147024882;
    goto LABEL_73;
  }
  if ( !a3 )
  {
    v16 = this;
    goto LABEL_13;
  }
  v8 = 0;
  v15 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v15 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 16LL))(a3) )
  {
    v16 = this;
LABEL_10:
    v14 = (char *)v15;
    goto LABEL_11;
  }
  v43 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         1216LL);
  if ( !v43 || (v44 = CWindowData::CWindowData(v43), (v15 = v44) == 0LL) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x603u);
    v10 = -2147024882;
    goto LABEL_59;
  }
  *((_QWORD *)v44 + 3) = a3;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a3)(a3, v44);
  v45 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 24LL))(a3);
  v46 = a3;
  *((_QWORD *)v15 + 5) = v45;
  v16 = this;
  v47 = CWindowList::SyncWindowData(this, v46, v15);
  v8 = v47;
  if ( v47 >= 0 )
    goto LABEL_10;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v47, 0x607u);
LABEL_11:
  v10 = v8;
  if ( v8 < 0 )
  {
LABEL_59:
    v49 = 2447;
    goto LABEL_73;
  }
  if ( !v14 )
  {
    v10 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024890, 0x994u);
    goto LABEL_19;
  }
LABEL_13:
  if ( v57 == *(struct CWindowData **)v14 )
    goto LABEL_19;
  v17 = *(struct CWindowData **)v57;
  v18 = (struct CWindowData **)*((_QWORD *)v57 + 1);
  if ( *(struct CWindowData **)(*(_QWORD *)v57 + 8LL) != v57 || *v18 != v57 )
    __fastfail(3u);
  *v18 = v17;
  *((_QWORD *)v17 + 1) = v18;
  v19 = *(struct CWindowData **)v14;
  v20 = v57;
  *(_QWORD *)v57 = *(_QWORD *)v14;
  *((_QWORD *)v20 + 1) = v14;
  if ( *((char **)v19 + 1) != v14 )
    __fastfail(3u);
  *((_QWORD *)v19 + 1) = v20;
  *(_QWORD *)v14 = v20;
  v21 = v57;
  v22 = (struct CVisual *)*((_QWORD *)v57 + 46);
  if ( v22 )
  {
    Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                v12,
                *((_QWORD *)v57 + 15));
    if ( Element )
      v34 = *(_QWORD *)(Element + 24);
    else
      v34 = 0LL;
    v35 = 0LL;
    v36 = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
            v12,
            *((_QWORD *)v57 + 15));
    if ( v36 )
    {
      v37 = v36 + 64;
      if ( v37 )
      {
        for ( ; v14 != (char *)v37; v14 = (char *)*((_QWORD *)v14 + 1) )
        {
          v35 = (struct CVisual *)*((_QWORD *)v14 + 46);
          if ( v35 )
            break;
        }
        inserted = VisualCollection::InsertRelative((VisualCollection *)(v34 + 32), v22, v35, 1, 1);
        v10 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x9B9u);
          goto LABEL_19;
        }
        v39 = CTopLevelWindow3D::OnZOrderUpdated(*((CTopLevelWindow3D **)v57 + 47), 0);
        v10 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v39, 0x9BAu);
          goto LABEL_19;
        }
        CWindowList::UpdateAccentBlurBehind(v16, v57);
        v21 = v57;
        goto LABEL_18;
      }
    }
    v49 = 2470;
    goto LABEL_72;
  }
LABEL_18:
  v23 = *((_QWORD *)v21 + 63);
  if ( !v23 || *(_DWORD *)(v23 + 536) <= 1u )
    goto LABEL_19;
  Buffer = *((_QWORD *)v21 + 15);
  v52 = 0LL;
  v53 = 0LL;
  v51 = 0LL;
  v54 = -1LL;
  v55 = 0;
  v25 = (char *)RtlLookupElementGenericTable(v12, &Buffer);
  if ( !v25 || (v26 = (struct CWindowData *)(v25 + 64)) == 0LL )
  {
    v27 = v57;
LABEL_26:
    if ( *(struct CWindowData **)(*(_QWORD *)(v23 + 512) + 8LL * (unsigned int)(*(_DWORD *)(v23 + 536) - 1)) != v27 )
    {
      DynArray<CWindowData *,0>::Remove((__int64 *)(v23 + 512), (__int64 *)&v57);
      v29 = *(_DWORD *)(v23 + 536);
      v30 = v29 + 1;
      if ( v29 + 1 < v29 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else if ( v30 > *(_DWORD *)(v23 + 532) )
      {
        v48 = DynArrayImpl<0>::AddMultipleAndSet(v23 + 512, 8u, 1, &v57);
        if ( v48 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v48, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v23 + 512) + 8LL * v29) = v57;
        *(_DWORD *)(v23 + 536) = v30;
      }
    }
    goto LABEL_19;
  }
  v27 = v57;
  v28 = *(struct CWindowData **)v57;
  if ( *(struct CWindowData **)v57 == v26 )
    goto LABEL_26;
  while ( *((_QWORD *)v28 + 63) != v23 )
  {
    v28 = *(struct CWindowData **)v28;
    if ( v28 == v26 )
      goto LABEL_26;
  }
  DynArray<CWindowData *,0>::Remove((__int64 *)(v23 + 512), (__int64 *)&v57);
  v31 = *(_DWORD *)(v23 + 536);
  v32 = *(struct CWindowData ***)(v23 + 512);
  if ( v31 )
  {
    do
    {
      if ( v28 == *v32 )
        break;
      ++v7;
      ++v32;
    }
    while ( v7 < v31 );
  }
  DynArray<CWindowData *,0>::InsertAt((__int64 *)(v23 + 512), &v57, v7);
LABEL_19:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v10;
}
