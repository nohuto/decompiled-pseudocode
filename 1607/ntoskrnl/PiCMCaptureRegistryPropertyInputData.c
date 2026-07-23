/*
 * XREFs of PiCMCaptureRegistryPropertyInputData @ 0x1404E5B98
 * Callers:
 *     PiCMGetRegistryProperty @ 0x1404E5D50 (PiCMGetRegistryProperty.c)
 *     PiCMSetRegistryProperty @ 0x140648964 (PiCMSetRegistryProperty.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C1740 (PiControlFreeUserModeCallersBuffer.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404E3368 (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureRegistryPropertyInputData(unsigned __int64 a1, unsigned int a2, int a3, char *a4)
{
  char PreviousMode; // r13
  int UserModeCallersCopy; // edi
  unsigned __int64 v7; // r8
  _QWORD *v8; // r15
  void *v9; // rax
  unsigned int v10; // r8d
  void *v11; // rax
  unsigned __int64 v13; // r8
  unsigned int v14; // r8d
  int v15; // [rsp+34h] [rbp-44h]
  int v16; // [rsp+38h] [rbp-40h]

  v15 = 0;
  v16 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_21;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = a1 + a2;
    if ( v13 > 0x7FFFFFFF0000LL || v13 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x28 && *(_DWORD *)a1 == 40 )
    {
      *(_DWORD *)a4 = 56;
      *((_DWORD *)a4 + 1) = *(_DWORD *)(a1 + 4);
      *((_DWORD *)a4 + 2) = *(_DWORD *)(a1 + 8);
      *((_QWORD *)a4 + 2) = *(unsigned int *)(a1 + 12);
      *((_DWORD *)a4 + 6) = *(_DWORD *)(a1 + 16);
      *((_DWORD *)a4 + 7) = *(_DWORD *)(a1 + 20);
      *((_DWORD *)a4 + 8) = *(_DWORD *)(a1 + 24);
      *((_QWORD *)a4 + 5) = *(unsigned int *)(a1 + 28);
      *((_DWORD *)a4 + 12) = *(_DWORD *)(a1 + 32);
      *((_DWORD *)a4 + 13) = *(_DWORD *)(a1 + 36);
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
    v7 = a1 + a2;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 < 0x38 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *((_OWORD *)a4 + 1) = *(_OWORD *)(a1 + 16);
      *((_OWORD *)a4 + 2) = *(_OWORD *)(a1 + 32);
      *((_QWORD *)a4 + 6) = *(_QWORD *)(a1 + 48);
      if ( *(_DWORD *)a4 != 56 )
        UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy < 0 )
    goto LABEL_45;
  v8 = a4 + 16;
  v9 = (void *)*((_QWORD *)a4 + 2);
  *((_QWORD *)a4 + 2) = 0LL;
  if ( v9 )
  {
    v10 = *((_DWORD *)a4 + 6);
    if ( v10 < 2 )
    {
      if ( *((_DWORD *)a4 + 6) < 2u )
        goto LABEL_24;
    }
    else
    {
      UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a4 + 2, v9, v10, 2u, PreviousMode, 1);
      if ( UserModeCallersCopy < 0 )
      {
        *v8 = 0LL;
        *((_DWORD *)a4 + 6) = 0;
      }
      else
      {
        v15 = 1;
        *(_WORD *)(*v8 + 2 * ((unsigned __int64)*((unsigned int *)a4 + 6) >> 1) - 2) = 0;
      }
    }
  }
  else if ( *((_DWORD *)a4 + 6) )
  {
    goto LABEL_24;
  }
  v11 = (void *)*((_QWORD *)a4 + 5);
  *((_QWORD *)a4 + 5) = 0LL;
  if ( !v11 )
  {
    if ( !*((_DWORD *)a4 + 12) )
      goto LABEL_21;
    goto LABEL_24;
  }
  v14 = *((_DWORD *)a4 + 12);
  if ( v14 )
  {
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a4 + 5, v11, v14, 1u, PreviousMode, 1);
    if ( UserModeCallersCopy < 0 )
    {
      *((_QWORD *)a4 + 5) = 0LL;
      *((_DWORD *)a4 + 12) = 0;
    }
    else
    {
      v16 = 1;
    }
LABEL_21:
    if ( UserModeCallersCopy >= 0 )
      return (unsigned int)UserModeCallersCopy;
    goto LABEL_45;
  }
LABEL_24:
  UserModeCallersCopy = -1073741811;
LABEL_45:
  if ( v15 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)a4 + 2));
  if ( v16 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)a4 + 5));
  memset(a4, 0, 0x38uLL);
  return (unsigned int)UserModeCallersCopy;
}
