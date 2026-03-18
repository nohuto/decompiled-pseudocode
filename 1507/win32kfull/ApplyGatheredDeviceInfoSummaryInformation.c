/*
 * XREFs of ApplyGatheredDeviceInfoSummaryInformation @ 0x1C01459D0
 * Callers:
 *     ApplyRimDevBackedDeviceSummaryInfomation @ 0x1C014573C (ApplyRimDevBackedDeviceSummaryInfomation.c)
 *     ProcessDeviceChanges @ 0x1C01DFB10 (ProcessDeviceChanges.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UpdateTPCurrentActiveState @ 0x1C0039CF4 (UpdateTPCurrentActiveState.c)
 *     GreMovePointer @ 0x1C0040870 (GreMovePointer.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     UpdateKeyLights @ 0x1C01383A4 (UpdateKeyLights.c)
 *     ?SetGlobalCursorLevel@@YAXH@Z @ 0x1C0146144 (-SetGlobalCursorLevel@@YAXH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall ApplyGatheredDeviceInfoSummaryInformation(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _DWORD *v22; // rcx
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  _DWORD *v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _DWORD *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v42; // ecx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v46; // ecx
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v50; // ecx

  if ( !a1 )
    goto LABEL_4;
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
      return;
LABEL_4:
    UpdateTPCurrentActiveState();
    if ( a2 )
    {
      if ( gnMice )
        goto LABEL_6;
      gdwGTERMFlags |= 1u;
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x13uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x4000) == 0 )
        {
LABEL_46:
          v26 = (_DWORD *)(gpsi + 2344LL);
LABEL_30:
          *v26 = 1;
          SetGlobalCursorLevel(0);
          GreMovePointer((HDEV)*gpDispInfo, *(_DWORD *)(gpsi + 3976LL), *(_DWORD *)(gpsi + 3980LL), 1);
          goto LABEL_6;
        }
      }
      else if ( IsDPIDWMSysMet(v23)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1 )
      {
        goto LABEL_46;
      }
      if ( IsDPIDWMSysMet(0x13uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v34 = 0)
          : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v34) )
      {
        v26 = (_DWORD *)(gpsi + 2732LL);
      }
      else
      {
        v26 = (_DWORD *)(gpsi + 1956LL);
      }
      goto LABEL_30;
    }
    if ( !gnMice )
    {
LABEL_6:
      if ( a1 )
        goto LABEL_7;
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2BuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) == 0 )
        {
LABEL_78:
          v14 = (_DWORD *)(gpsi + 2440LL);
          goto LABEL_17;
        }
      }
      else if ( IsDPIDWMSysMet(v11)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1 )
      {
        goto LABEL_78;
      }
      if ( IsDPIDWMSysMet(0x2BuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v42 = 0)
          : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v42) )
      {
        v14 = (_DWORD *)(gpsi + 2828LL);
      }
      else
      {
        v14 = (_DWORD *)(gpsi + 2052LL);
      }
LABEL_17:
      *v14 = a3;
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x4BuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x4000) == 0 )
        {
LABEL_94:
          v18 = (_DWORD *)(gpsi + 2568LL);
          goto LABEL_21;
        }
      }
      else if ( IsDPIDWMSysMet(v15)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1 )
      {
        goto LABEL_94;
      }
      if ( IsDPIDWMSysMet(0x4BuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v46 = 0)
          : (v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v46) )
      {
        v18 = (_DWORD *)(gpsi + 2956LL);
      }
      else
      {
        v18 = (_DWORD *)(gpsi + 2180LL);
      }
LABEL_21:
      *v18 = a4 != 0;
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x5BuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x4000) == 0 )
        {
LABEL_110:
          v22 = (_DWORD *)(gpsi + 2632LL);
LABEL_25:
          *v22 = a5;
LABEL_7:
          gnMice = a2;
          if ( a1 == 2 )
            gnHid = a7;
          return;
        }
      }
      else if ( IsDPIDWMSysMet(v19)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1 )
      {
        goto LABEL_110;
      }
      if ( IsDPIDWMSysMet(0x5BuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v50 = 0)
          : (v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v50) )
      {
        v22 = (_DWORD *)(gpsi + 3020LL);
      }
      else
      {
        v22 = (_DWORD *)(gpsi + 2244LL);
      }
      goto LABEL_25;
    }
    gdwGTERMFlags &= ~1u;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x13uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x4000) == 0 )
      {
LABEL_62:
        v30 = (_DWORD *)(gpsi + 2344LL);
LABEL_36:
        *v30 = 0;
        SetGlobalCursorLevel(-1);
        gwMouseOwnerButton = 0;
        goto LABEL_6;
      }
    }
    else if ( IsDPIDWMSysMet(v27)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1 )
    {
      goto LABEL_62;
    }
    if ( IsDPIDWMSysMet(0x13uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v38 = 0)
        : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v38) )
    {
      v30 = (_DWORD *)(gpsi + 2732LL);
    }
    else
    {
      v30 = (_DWORD *)(gpsi + 1956LL);
    }
    goto LABEL_36;
  }
  if ( a6 > gnKeyboards )
  {
    UpdateKeyLights(0);
    gdwUpdateKeyboard |= 1u;
  }
  gnKeyboards = a6;
}
