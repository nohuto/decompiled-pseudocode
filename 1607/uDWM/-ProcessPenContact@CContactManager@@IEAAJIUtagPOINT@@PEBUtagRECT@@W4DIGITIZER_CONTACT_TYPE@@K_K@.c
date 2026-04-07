/*
 * XREFs of ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18003AA9C
 * Callers:
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18003AC88 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x1800866B8 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003A92C (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x180042228 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x18006E7E8 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x1800704C4 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?LoadPenResources@CContactManager@@AEAAXXZ @ 0x18007073C (-LoadPenResources@CContactManager@@AEAAXXZ.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18008A46C (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
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
  unsigned int v10; // r14d
  __int64 v11; // rdi
  int started; // eax
  __int64 v13; // rax
  unsigned int v14; // edx
  int v15; // r9d
  CContactManager *v16; // rcx
  __int64 v18; // rdi
  __int64 v19; // rbx
  CPenBarrelKeyVisual *v20; // rcx
  _QWORD *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // [rsp+20h] [rbp-40h]
  _BYTE v26[40]; // [rsp+30h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+A8h] [rbp+48h] BYREF

  v28 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = 0;
  v11 = 0LL;
  if ( !*(_DWORD *)(a1 + 112) )
    goto LABEL_2;
  v21 = (_QWORD *)(a1 + 88);
  v22 = *(_QWORD *)(a1 + 88);
  while ( 1 )
  {
    v9 = (CContactManager *)(5 * v11);
    if ( *(_DWORD *)(v22 + 40 * v11) == a2 )
      break;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 112) )
      goto LABEL_2;
  }
  if ( (int)v11 < 0 )
  {
LABEL_2:
    if ( !*(_QWORD *)(a1 + 40) )
      CContactManager::LoadPenResources((CContactManager *)a1);
    *(_DWORD *)&v26[24] = -1;
    *(_DWORD *)&v26[4] = a6;
    *(_QWORD *)&v26[28] = a3;
    *(_DWORD *)v26 = a2;
    *(_OWORD *)&v26[8] = 0LL;
    started = CContactManager::StartPenBarrelVisual(v9, (struct CPenContact *)v26, a7);
    v10 = started;
    if ( started < 0 )
    {
      v25 = 1566;
    }
    else
    {
      v13 = *(unsigned int *)(a1 + 112);
      v14 = v13 + 1;
      if ( (int)v13 + 1 < (unsigned int)v13 )
      {
        v25 = 181;
        v15 = -2147024362;
LABEL_7:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v25);
        goto LABEL_11;
      }
      if ( v14 <= *(_DWORD *)(a1 + 108) )
      {
        v23 = 5 * v13;
        v24 = *(_QWORD *)(a1 + 88);
        *(_OWORD *)(v24 + 8 * v23) = *(_OWORD *)v26;
        *(_OWORD *)(v24 + 8 * v23 + 16) = *(_OWORD *)&v26[16];
        *(_QWORD *)(v24 + 8 * v23 + 32) = *(_QWORD *)&v26[32];
        *(_DWORD *)(a1 + 112) = v14;
        goto LABEL_11;
      }
      started = DynArrayImpl<0>::AddMultipleAndSet(a1 + 88, 0x28u, 1, v26);
      if ( started >= 0 )
        goto LABEL_11;
      v25 = 192;
    }
    v15 = started;
    goto LABEL_7;
  }
  if ( a5 == 3 )
  {
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v9, *(struct CTouchVisual **)(v22 + 40 * v11 + 8));
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v16, *(struct CTouchVisual **)(*v21 + 40 * v11 + 16));
    DynArray<CPenContact,0>::RemoveAt(v21, (unsigned int)v11);
  }
  else
  {
    v18 = 5 * v11;
    v19 = *(_QWORD *)(v22 + 8 * v18 + 8);
    if ( v19 )
    {
      v20 = *(CPenBarrelKeyVisual **)(v22 + 8 * v18 + 8);
      *(_QWORD *)(v19 + 284) = a3;
      *(_DWORD *)(v19 + 292) = a6;
      CPenBarrelKeyVisual::PlaceVisuals(v20);
      CPenBarrelKeyVisual::UpdateBarrelAlpha((CPenBarrelKeyVisual *)v19);
    }
    *(_QWORD *)(*v21 + 8 * v18 + 28) = a3;
  }
LABEL_11:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v28);
  return v10;
}
