/*
 * XREFs of PiCMCaptureObjectInputData @ 0x1404DCF48
 * Callers:
 *     PiCMGetObjectList @ 0x1404DBAE4 (PiCMGetObjectList.c)
 *     PiCMValidateDeviceInstance @ 0x1404DBCC4 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x1404DBEC4 (PiCMGetDeviceStatus.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405506E4 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMQueryRemove @ 0x14058A87C (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14058ACF4 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x14058D600 (PiCMGetDeviceDepth.c)
 *     PiCMCreateObject @ 0x140692170 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1406922D4 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1406923BC (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140692750 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x14069289C (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140692AC0 (PiCMDeleteObject.c)
 *     PiCMGetObjectPropertyKeys @ 0x1406930A8 (PiCMGetObjectPropertyKeys.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406937D4 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404379BC (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureObjectInputData(ULONG64 a1, unsigned int a2, int a3, char *a4)
{
  int v5; // r15d
  char PreviousMode; // r12
  int UserModeCallersCopy; // edi
  ULONG64 v8; // r8
  _QWORD *v9; // r14
  void *v10; // rcx
  unsigned int v11; // r8d
  ULONG64 v13; // r8
  void *v14; // rcx

  v5 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_19;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = a1 + a2;
    if ( v13 > MmUserProbeAddress || v13 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( a2 >= 0x1C && *(_DWORD *)a1 == 28 )
    {
      *(_DWORD *)a4 = 40;
      *((_DWORD *)a4 + 1) = *(_DWORD *)(a1 + 4);
      *((_DWORD *)a4 + 2) = *(_DWORD *)(a1 + 8);
      *((_QWORD *)a4 + 2) = *(unsigned int *)(a1 + 12);
      *((_DWORD *)a4 + 6) = *(_DWORD *)(a1 + 16);
      *((_DWORD *)a4 + 7) = *(_DWORD *)(a1 + 20);
      *((_DWORD *)a4 + 8) = *(_DWORD *)(a1 + 24);
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  else
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = a1 + a2;
    if ( v8 > MmUserProbeAddress || v8 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( a2 < 0x28 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *((_OWORD *)a4 + 1) = *(_OWORD *)(a1 + 16);
      *((_QWORD *)a4 + 4) = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)a4 != 40 )
        UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy >= 0 )
  {
    v9 = a4 + 16;
    v10 = (void *)*((_QWORD *)a4 + 2);
    *((_QWORD *)a4 + 2) = 0LL;
    if ( v10 )
    {
      v11 = *((_DWORD *)a4 + 6);
      if ( v11 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a4 + 2, v10, v11, 2u, PreviousMode, 1);
        if ( UserModeCallersCopy < 0 )
        {
          *v9 = 0LL;
          *((_DWORD *)a4 + 6) = 0;
        }
        else
        {
          v5 = 1;
          *(_WORD *)(*v9 + 2 * ((unsigned __int64)*((unsigned int *)a4 + 6) >> 1) - 2) = 0;
        }
LABEL_19:
        if ( UserModeCallersCopy >= 0 )
          return (unsigned int)UserModeCallersCopy;
        goto LABEL_35;
      }
    }
    else if ( !*((_DWORD *)a4 + 6) )
    {
      goto LABEL_19;
    }
    UserModeCallersCopy = -1073741811;
  }
LABEL_35:
  if ( v5 )
  {
    v14 = (void *)*((_QWORD *)a4 + 2);
    if ( PreviousMode )
    {
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
    }
  }
  memset(a4, 0, 0x28uLL);
  return (unsigned int)UserModeCallersCopy;
}
