/*
 * XREFs of ProcessHidInputViaRim @ 0x1C022DE3C
 * Callers:
 *     UserProcessDwmInput @ 0x1C00F1FE0 (UserProcessDwmInput.c)
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 *     ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C0155600 (-WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z.c)
 * Callees:
 *     UpdateInputGlobalsEx @ 0x1C004A4E0 (UpdateInputGlobalsEx.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C007F108 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C012D508 (FindRimDevBackedDeviceInfo.c)
 *     ProcessTouchInputViaRim @ 0x1C01F6554 (ProcessTouchInputViaRim.c)
 */

__int64 __fastcall ProcessHidInputViaRim(__int64 a1, char a2, int a3, __int64 a4)
{
  __int64 v7; // r8
  int v8; // esi
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = a3;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
  v8 = 0;
  v9 = a1;
  if ( (a2 & 0x1C) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 48);
    v10 = *(_QWORD *)&aDeviceTemplate[312];
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 48) )
      {
        HMAssignmentUnlock(v10 + 48);
        *(_QWORD *)(v10 + 48) = 0LL;
      }
      if ( *(_QWORD *)(v10 + 56) )
      {
        HMAssignmentUnlock(v10 + 56);
        *(_QWORD *)(v10 + 56) = 0LL;
      }
    }
  }
  else
  {
    v9 = 0LL;
  }
  result = (__int64)FindRimDevBackedDeviceInfo(a4, v8, v7);
  v14 = result;
  if ( result )
  {
    v15 = *(_QWORD *)(result + 416);
    if ( v15 )
      ProcessTouchInputViaRim(
        *(void **)v14,
        a1,
        (unsigned int)-__CFSHR__(*(_DWORD *)(v14 + 184), 12),
        (unsigned int)-__CFSHR__(*(_DWORD *)(v15 + 236), 5),
        *(_DWORD *)(v9 + 52));
    result = *(unsigned int *)(v14 + 340);
    if ( (result & 2) == 0 )
      result = UpdateInputGlobalsEx(
                 (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                 0,
                 2u,
                 0);
  }
  if ( !v16 )
    return UserSessionSwitchLeaveCrit(v13, v12);
  return result;
}
