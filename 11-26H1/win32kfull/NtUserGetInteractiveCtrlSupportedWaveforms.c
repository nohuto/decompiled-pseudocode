/*
 * XREFs of NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1402B3C80
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z @ 0x1402F13B8 (-GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetInteractiveCtrlSupportedWaveforms(unsigned __int16 a1, volatile void *a2, __int64 a3)
{
  int v5; // edi
  int v6; // ecx
  __int64 v7; // rcx
  int ULongFromUser; // eax
  __int64 v9; // rdx
  SIZE_T v10; // r14
  __int64 v11; // rcx
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v13; // rax
  int v14; // esi
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF
  void *Src; // [rsp+88h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v17, 1LL);
  v5 = 0;
  LODWORD(v17) = 0;
  Src = 0LL;
  if ( !a3 )
  {
    v6 = 87;
LABEL_3:
    UserSetLastError(v6);
    goto LABEL_21;
  }
  if ( (a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  ULongFromUser = RtlReadULongFromUser(a3);
  v10 = ULongFromUser;
  v11 = (__int64)a2;
  if ( a2 && ULongFromUser > 0 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(a2, v9);
    ProbeForWrite(a2, v10, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  v13 = InteractiveControlManager::Instance(v11, v9);
  if ( (int)InteractiveControlManager::GetDeviceSupportedWaveforms(v13, a1, (struct _WAVEFORM_INFO **)&Src, (int *)&v17) >= 0 )
  {
    if ( (unsigned __int64)(int)v17 >= 0xFFFFFFF )
    {
      v6 = 534;
      goto LABEL_3;
    }
    v14 = 8 * v17;
    if ( (int)v10 > 0 && (int)v10 < v14 )
    {
      v6 = 122;
      goto LABEL_3;
    }
    if ( a2 && Src && (int)v10 >= v14 )
    {
      RtlWriteULongToUser(a3, (unsigned int)v14);
      memmove((void *)a2, Src, v14);
    }
    else
    {
      RtlWriteULongToUser(a3, (unsigned int)v14);
    }
    v5 = 1;
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v7);
  return v5;
}
