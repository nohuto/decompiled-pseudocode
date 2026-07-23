/*
 * XREFs of PiCMCaptureRegistryInputData @ 0x1404E47FC
 * Callers:
 *     PiCMOpenDeviceKey @ 0x1404B9A1C (PiCMOpenDeviceKey.c)
 *     PiCMOpenClassKey @ 0x1404C94B4 (PiCMOpenClassKey.c)
 *     PiCMOpenObjectKey @ 0x1404DCACC (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140647EF4 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C1740 (PiControlFreeUserModeCallersBuffer.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404E3368 (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureRegistryInputData(_DWORD *a1, unsigned int a2, int a3, char *a4)
{
  int v5; // r15d
  char PreviousMode; // r12
  int UserModeCallersCopy; // ebx
  unsigned __int64 v8; // r8
  _QWORD *v9; // r14
  void *v10; // rcx
  unsigned int v11; // r8d
  unsigned __int64 v13; // r8

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
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (unsigned __int64)a1 + a2;
    if ( v13 > 0x7FFFFFFF0000LL || v13 < (unsigned __int64)a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x24 && *a1 == 36 )
    {
      *(_DWORD *)a4 = 48;
      *((_DWORD *)a4 + 1) = a1[1];
      *((_DWORD *)a4 + 2) = a1[2];
      *((_QWORD *)a4 + 2) = (unsigned int)a1[3];
      *((_DWORD *)a4 + 6) = a1[4];
      *((_DWORD *)a4 + 7) = a1[5];
      *((_DWORD *)a4 + 8) = a1[6];
      *((_DWORD *)a4 + 9) = a1[7];
      *((_DWORD *)a4 + 10) = a1[8];
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  else
  {
    if ( ((unsigned __int8)a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (unsigned __int64)a1 + a2;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 < 0x30 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *((_OWORD *)a4 + 1) = *((_OWORD *)a1 + 1);
      *((_OWORD *)a4 + 2) = *((_OWORD *)a1 + 2);
      if ( *(_DWORD *)a4 != 48 )
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
        goto LABEL_37;
      }
      if ( *((_DWORD *)a4 + 6) >= 2u )
        goto LABEL_19;
    }
    else if ( !*((_DWORD *)a4 + 6) )
    {
      goto LABEL_19;
    }
    UserModeCallersCopy = -1073741811;
  }
LABEL_37:
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)a4 + 2));
  memset(a4, 0, 0x30uLL);
  return (unsigned int)UserModeCallersCopy;
}
