/*
 * XREFs of ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002D050
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x18001A154 (--0CWindowData@@QEAA@XZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002A28C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002AA90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180032660 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180032D94 (-UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180033B04 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x180033C2C (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x1800357B8 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ZOrder(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  __int64 v6; // rax
  unsigned int v7; // edi
  int v8; // esi
  struct CWindowData *v9; // rbx
  unsigned int v10; // r14d
  char *v11; // rax
  struct CWindowData **v12; // rbx
  struct CWindowData *v13; // r14
  struct CWindowData *v14; // rdx
  struct CWindowData **v15; // rcx
  struct CWindowData *v16; // rcx
  struct CWindowData *v17; // rax
  struct CWindowData *v18; // rax
  struct CVisual *v19; // r15
  __int64 v20; // rsi
  char *v22; // rax
  struct CWindowData *v23; // rax
  struct CWindowData *v24; // rdx
  struct CWindowData *v25; // rbx
  _QWORD *v26; // rbx
  unsigned int v27; // eax
  unsigned int v28; // edx
  int v29; // eax
  unsigned int v30; // edx
  struct CWindowData **v31; // rax
  __int64 Element; // rax
  __int64 v33; // r14
  struct CVisual *v34; // rsi
  __int64 v35; // rax
  struct CWindowData **v36; // rax
  struct CWindowData *v37; // rax
  VisualCollection *v38; // rbx
  int inserted; // eax
  int v40; // eax
  struct CVisual *v41; // rdx
  CWindowData *v42; // rax
  CWindowData *v43; // rax
  int v44; // eax
  CWindowData *v45; // rax
  CWindowData *v46; // rax
  int v47; // eax
  int v48; // eax
  unsigned int v49; // [rsp+20h] [rbp-60h]
  __int64 Buffer; // [rsp+30h] [rbp-50h] BYREF
  __int64 v51; // [rsp+38h] [rbp-48h]
  __int128 v52; // [rsp+40h] [rbp-40h]
  __int128 v53; // [rsp+50h] [rbp-30h]
  __int64 v54; // [rsp+60h] [rbp-20h]
  char v55; // [rsp+68h] [rbp-18h]
  struct CWindowData *v56; // [rsp+C8h] [rbp+48h] BYREF
  struct CWindowData **v57; // [rsp+D8h] [rbp+58h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = *(_QWORD *)a2;
  v7 = 0;
  v56 = 0LL;
  v8 = 0;
  v9 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(v6 + 8))(a2);
  if ( v9 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v42 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         1232LL);
  if ( !v42 || (v43 = CWindowData::CWindowData(v42), (v9 = v43) == 0LL) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x56Au);
    v10 = -2147024882;
    goto LABEL_54;
  }
  *((_QWORD *)v43 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v43);
  *((_QWORD *)v9 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v44 = CWindowList::SyncWindowData(this, a2, v9);
  v8 = v44;
  if ( v44 >= 0 )
  {
LABEL_2:
    v56 = v9;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x56Eu);
    v9 = v56;
  }
  v10 = v8;
  if ( v8 < 0 )
  {
LABEL_54:
    v49 = 2163;
LABEL_81:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v49);
    goto LABEL_18;
  }
  if ( !v9 )
  {
    v10 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x875u);
    goto LABEL_18;
  }
  Buffer = *((_QWORD *)v9 + 15);
  v52 = 0LL;
  v53 = 0LL;
  v51 = 0LL;
  v54 = -1LL;
  v55 = 0;
  v11 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
  if ( !v11 || (v12 = (struct CWindowData **)(v11 + 64), v11 == (char *)-64LL) )
  {
    v49 = 2168;
LABEL_80:
    v8 = -2147024882;
    v10 = -2147024882;
    goto LABEL_81;
  }
  if ( a3 )
  {
    v8 = 0;
    v13 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 8LL))(a3);
    if ( v13 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 16LL))(a3) )
      goto LABEL_9;
    v45 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                           WPF::g_pProcessHeap,
                           1232LL);
    if ( !v45 || (v46 = CWindowData::CWindowData(v45), (v13 = v46) == 0LL) )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x56Au);
      v10 = -2147024882;
LABEL_62:
      v49 = 2174;
      goto LABEL_81;
    }
    *((_QWORD *)v46 + 3) = a3;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a3)(a3, v46);
    *((_QWORD *)v13 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 24LL))(a3);
    v47 = CWindowList::SyncWindowData(this, a3, v13);
    v8 = v47;
    if ( v47 >= 0 )
LABEL_9:
      v12 = (struct CWindowData **)v13;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0x56Eu);
    v10 = v8;
    if ( v8 >= 0 )
    {
      if ( !v12 )
      {
        v10 = -2147024890;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x881u);
        goto LABEL_18;
      }
      goto LABEL_12;
    }
    goto LABEL_62;
  }
LABEL_12:
  if ( v56 == *v12 )
    goto LABEL_18;
  v14 = *(struct CWindowData **)v56;
  v15 = (struct CWindowData **)*((_QWORD *)v56 + 1);
  if ( *(struct CWindowData **)(*(_QWORD *)v56 + 8LL) != v56 || *v15 != v56 )
    __fastfail(3u);
  *v15 = v14;
  *((_QWORD *)v14 + 1) = v15;
  v16 = *v12;
  v17 = v56;
  if ( *((struct CWindowData ***)*v12 + 1) != v12 )
    __fastfail(3u);
  *(_QWORD *)v56 = v16;
  *((_QWORD *)v17 + 1) = v12;
  *((_QWORD *)v16 + 1) = v17;
  *v12 = v17;
  v18 = v56;
  v19 = (struct CVisual *)*((_QWORD *)v56 + 48);
  if ( v19 )
  {
    Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                (char *)this + 8,
                *((_QWORD *)v56 + 15));
    if ( Element )
      v33 = *(_QWORD *)(Element + 24);
    else
      v33 = 0LL;
    v34 = 0LL;
    v35 = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
            (char *)this + 8,
            *((_QWORD *)v56 + 15));
    if ( v35 )
    {
      v36 = (struct CWindowData **)(v35 + 64);
      if ( v36 )
      {
        if ( v12 != v36 )
        {
          while ( 1 )
          {
            v34 = v12[48];
            if ( v34 )
              break;
            v12 = (struct CWindowData **)v12[1];
            if ( v12 == v36 )
              goto LABEL_43;
          }
          v37 = v12[50];
          if ( v37 && *((_QWORD *)v37 + 3) )
            v34 = v12[50];
        }
LABEL_43:
        v38 = (VisualCollection *)(v33 + 32);
        inserted = VisualCollection::InsertRelative((VisualCollection *)(v33 + 32), v19, v34, 1, 1);
        v10 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x8ABu);
          goto LABEL_18;
        }
        v40 = CTopLevelWindow3D::OnZOrderUpdated(*((CTopLevelWindow3D **)v56 + 49), 0);
        v10 = v40;
        if ( v40 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x8ACu);
          goto LABEL_18;
        }
        CWindowList::UpdateAccentBlurBehind(this, v56);
        v18 = v56;
        v41 = (struct CVisual *)*((_QWORD *)v56 + 50);
        if ( v41 )
        {
          v48 = VisualCollection::InsertRelative(v38, v41, *((struct CVisual **)v56 + 48), 1, 1);
          v10 = v48;
          if ( v48 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x8B2u);
            goto LABEL_18;
          }
          v18 = v56;
        }
        goto LABEL_17;
      }
    }
    v49 = 2193;
    goto LABEL_80;
  }
LABEL_17:
  v20 = *((_QWORD *)v18 + 66);
  if ( !v20 || *(_DWORD *)(v20 + 560) <= 1u )
    goto LABEL_18;
  Buffer = *((_QWORD *)v18 + 15);
  v52 = 0LL;
  v53 = 0LL;
  v51 = 0LL;
  v54 = -1LL;
  v55 = 0;
  v22 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
  if ( !v22 || (v23 = (struct CWindowData *)(v22 + 64)) == 0LL )
  {
    v24 = v56;
LABEL_25:
    v26 = (_QWORD *)(v20 + 536);
    if ( *(struct CWindowData **)(*(_QWORD *)(v20 + 536) + 8LL * (unsigned int)(*(_DWORD *)(v20 + 560) - 1)) != v24 )
    {
      DynArray<CWindowData *,0>::Remove(v20 + 536, &v56);
      v27 = *(_DWORD *)(v20 + 560);
      v28 = v27 + 1;
      if ( v27 + 1 < v27 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else if ( v28 <= *(_DWORD *)(v20 + 556) )
      {
        *(_QWORD *)(*v26 + 8LL * *(unsigned int *)(v20 + 560)) = v56;
        *(_DWORD *)(v20 + 560) = v28;
      }
      else
      {
        v57 = &v56;
        v29 = DynArrayImpl<0>::Grow(v20 + 536, 8u, 1, 0, (unsigned __int64 *)&v57);
        if ( v29 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xC0u);
        else
          *(_QWORD *)(*v26 + (unsigned int)(8 * (*(_DWORD *)(v20 + 560))++)) = *v57;
      }
    }
    goto LABEL_18;
  }
  v24 = v56;
  v25 = *(struct CWindowData **)v56;
  if ( *(struct CWindowData **)v56 == v23 )
    goto LABEL_25;
  while ( *((_QWORD *)v25 + 66) != v20 )
  {
    v25 = *(struct CWindowData **)v25;
    if ( v25 == v23 )
      goto LABEL_25;
  }
  DynArray<CWindowData *,0>::Remove(v20 + 536, &v56);
  v30 = *(_DWORD *)(v20 + 560);
  v31 = *(struct CWindowData ***)(v20 + 536);
  if ( v30 )
  {
    do
    {
      if ( v25 == *v31 )
        break;
      ++v7;
      ++v31;
    }
    while ( v7 < v30 );
  }
  DynArray<CWindowData *,0>::InsertAt(v20 + 536, &v56, v7);
LABEL_18:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v10;
}
