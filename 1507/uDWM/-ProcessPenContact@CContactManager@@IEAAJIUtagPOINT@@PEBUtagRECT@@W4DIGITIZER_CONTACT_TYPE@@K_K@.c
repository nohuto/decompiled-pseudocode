/*
 * XREFs of ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800807FC
 * Callers:
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x18007EC00 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18007FC74 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047610 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?LoadPenResources@CContactManager@@AEAAXXZ @ 0x18007E974 (-LoadPenResources@CContactManager@@AEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x180081820 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x180081A70 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800874E4 (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x180087650 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CContactManager::ProcessPenContact(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int64 a7)
{
  CContactManager *v9; // rcx
  unsigned int v10; // r12d
  __int64 v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  int started; // eax
  unsigned __int64 *v15; // r14
  CContactManager *v16; // rcx
  unsigned __int64 *v17; // r14
  CContactManager *v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rbx
  CPenBarrelKeyVisual *v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v27; // [rsp+20h] [rbp-40h]
  _BYTE v28[40]; // [rsp+30h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+A8h] [rbp+48h] BYREF

  v30 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = 0;
  v11 = 0LL;
  if ( !*(_DWORD *)(a1 + 112) )
    goto LABEL_5;
  v12 = (_QWORD *)(a1 + 88);
  v13 = *(_QWORD *)(a1 + 88);
  while ( 1 )
  {
    v9 = (CContactManager *)(5 * v11);
    if ( *(_DWORD *)(v13 + 40 * v11) == a2 )
      break;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 112) )
      goto LABEL_5;
  }
  if ( (int)v11 < 0 )
  {
LABEL_5:
    if ( !*(_QWORD *)(a1 + 40) )
      CContactManager::LoadPenResources((CContactManager *)a1);
    *(_DWORD *)&v28[24] = -1;
    *(_DWORD *)&v28[4] = a6;
    *(_QWORD *)&v28[28] = a3;
    *(_DWORD *)v28 = a2;
    *(_OWORD *)&v28[8] = 0LL;
    started = CContactManager::StartPenBarrelVisual(v9, (struct CPenContact *)v28, a7);
    v10 = started;
    if ( started >= 0 )
    {
      v22 = *(unsigned int *)(a1 + 112);
      v23 = v22 + 1;
      if ( (int)v22 + 1 < (unsigned int)v22 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        goto LABEL_26;
      }
      if ( v23 <= *(_DWORD *)(a1 + 108) )
      {
        v24 = 5 * v22;
        v25 = *(_QWORD *)(a1 + 88);
        *(_OWORD *)(v25 + 8 * v24) = *(_OWORD *)v28;
        *(_OWORD *)(v25 + 8 * v24 + 16) = *(_OWORD *)&v28[16];
        *(_QWORD *)(v25 + 8 * v24 + 32) = *(_QWORD *)&v28[32];
        *(_DWORD *)(a1 + 112) = v23;
        goto LABEL_26;
      }
      started = DynArrayImpl<0>::AddMultipleAndSet(a1 + 88, 0x28u, 1, v28);
      if ( started >= 0 )
        goto LABEL_26;
      v27 = 192;
    }
    else
    {
      v27 = 1566;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, v27);
    goto LABEL_26;
  }
  if ( a5 == 3 )
  {
    _mm_lfence();
    v15 = *(unsigned __int64 **)(*v12 + 40 * v11 + 8);
    if ( v15 )
    {
      (*(void (__fastcall **)(_QWORD))(*v15 + 184))(*(_QWORD *)(*v12 + 40 * v11 + 8));
      CContactManager::RemoveFromTouchNode(v16, v15[34], (struct CVisual *)v15);
      CBaseObject::Release((CBaseObject *)v15);
    }
    v17 = *(unsigned __int64 **)(*v12 + 40 * v11 + 16);
    if ( v17 )
    {
      (*(void (__fastcall **)(_QWORD))(*v17 + 184))(*(_QWORD *)(*v12 + 40 * v11 + 16));
      CContactManager::RemoveFromTouchNode(v18, v17[34], (struct CVisual *)v17);
      CBaseObject::Release((CBaseObject *)v17);
    }
    DynArray<CPenContact,0>::RemoveAt(v12, (unsigned int)v11);
  }
  else
  {
    v19 = 5 * v11;
    v20 = *(_QWORD *)(v13 + 8 * v19 + 8);
    if ( v20 )
    {
      v21 = *(CPenBarrelKeyVisual **)(v13 + 8 * v19 + 8);
      *(_QWORD *)(v20 + 284) = a3;
      *(_DWORD *)(v20 + 292) = a6;
      CPenBarrelKeyVisual::PlaceVisuals(v21);
      CPenBarrelKeyVisual::UpdateBarrelAlpha((CPenBarrelKeyVisual *)v20);
    }
    *(_QWORD *)(*v12 + 8 * v19 + 28) = a3;
  }
LABEL_26:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v30);
  return v10;
}
