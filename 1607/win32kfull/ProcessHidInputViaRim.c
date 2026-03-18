/*
 * XREFs of ProcessHidInputViaRim @ 0x1C0229C44
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 *     UserProcessDwmInput @ 0x1C00E0620 (UserProcessDwmInput.c)
 *     ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C0119964 (-WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C009A5A8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UpdateInputGlobalsEx @ 0x1C00A3FC0 (UpdateInputGlobalsEx.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C00E16D4 (FindRimDevBackedDeviceInfo.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ProcessTouchInputViaRim @ 0x1C01EDC08 (ProcessTouchInputViaRim.c)
 *     ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C023B958 (-OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z.c)
 */

__int64 __fastcall ProcessHidInputViaRim(_DWORD *a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // r8
  int v9; // esi
  _DWORD *v10; // r15
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  InteractiveControlManager *v17; // rax
  unsigned int v18; // r8d
  int v19; // [rsp+68h] [rbp+10h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v19);
  v9 = 0;
  v10 = a1;
  if ( (a2 & 0x1C) != 0 )
  {
    v9 = a1[12];
    v11 = aDeviceTemplate[153];
    if ( v11 )
    {
      if ( *(_QWORD *)(v11 + 48) )
      {
        HMAssignmentUnlock(v11 + 48);
        *(_QWORD *)(v11 + 48) = 0LL;
      }
      if ( *(_QWORD *)(v11 + 56) )
      {
        HMAssignmentUnlock(v11 + 56);
        *(_QWORD *)(v11 + 56) = 0LL;
      }
    }
  }
  else
  {
    v10 = 0LL;
  }
  result = (__int64)FindRimDevBackedDeviceInfo(a4, v9, v8);
  v16 = result;
  if ( v10 )
  {
LABEL_11:
    if ( !v16 )
      goto LABEL_22;
    goto LABEL_12;
  }
  if ( !result )
  {
    result = (__int64)FindRimDevBackedDeviceInfo(a4, v9 == 0, v15);
    v16 = result;
    goto LABEL_11;
  }
LABEL_12:
  if ( *(_DWORD *)(v16 + 316) )
  {
    ProcessTouchInputViaRim(
      *(void **)v16,
      (__int64)a1,
      (unsigned int)-__CFSHR__(*(_DWORD *)(v16 + 184), 12),
      (unsigned int)-__CFSHR__(*(_DWORD *)(*(_QWORD *)(v16 + 480) + 252LL), 7),
      v10[13]);
  }
  else if ( *(_DWORD *)(v16 + 320) )
  {
    v17 = InteractiveControlManager::Instance();
    InteractiveControlManager::OnInputReport(v17, (struct RawInputManagerDeviceObject *)(v16 - 64), a1, a3);
  }
  result = *(unsigned int *)(v16 + 348);
  v18 = 2;
  if ( (result & 2) == 0 )
  {
    if ( a2 == 4 )
    {
      v18 = 11;
    }
    else if ( a2 == 16 )
    {
      v18 = 9;
    }
    result = UpdateInputGlobalsEx(
               (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
               0,
               v18,
               0);
  }
LABEL_22:
  if ( !v19 )
    return UserSessionSwitchLeaveCrit(v14, v13);
  return result;
}
