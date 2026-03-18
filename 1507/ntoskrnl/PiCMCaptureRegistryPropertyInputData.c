/*
 * XREFs of PiCMCaptureRegistryPropertyInputData @ 0x140441620
 * Callers:
 *     PiCMGetRegistryProperty @ 0x140440870 (PiCMGetRegistryProperty.c)
 *     PiCMSetRegistryProperty @ 0x14058C0C0 (PiCMSetRegistryProperty.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404379BC (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureRegistryPropertyInputData(ULONG64 a1, unsigned int a2, int a3, char *a4)
{
  char PreviousMode; // r13
  int UserModeCallersCopy; // edi
  ULONG64 v7; // r8
  _QWORD *v8; // r15
  void *v9; // rax
  unsigned int v10; // r8d
  void *v11; // rax
  unsigned int v13; // r8d
  ULONG64 v14; // r8
  void *v15; // rcx
  void *v16; // rcx
  int v17; // [rsp+34h] [rbp-44h]
  int v18; // [rsp+38h] [rbp-40h]

  v17 = 0;
  v18 = 0;
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
    v14 = a1 + a2;
    if ( v14 > MmUserProbeAddress || v14 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
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
    if ( v7 > MmUserProbeAddress || v7 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
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
        goto LABEL_26;
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
        v17 = 1;
        *(_WORD *)(*v8 + 2 * ((unsigned __int64)*((unsigned int *)a4 + 6) >> 1) - 2) = 0;
      }
    }
  }
  else if ( *((_DWORD *)a4 + 6) )
  {
    goto LABEL_26;
  }
  v11 = (void *)*((_QWORD *)a4 + 5);
  *((_QWORD *)a4 + 5) = 0LL;
  if ( !v11 )
  {
    if ( !*((_DWORD *)a4 + 12) )
      goto LABEL_21;
    goto LABEL_26;
  }
  v13 = *((_DWORD *)a4 + 12);
  if ( v13 )
  {
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a4 + 5, v11, v13, 1u, PreviousMode, 1);
    if ( UserModeCallersCopy < 0 )
    {
      *((_QWORD *)a4 + 5) = 0LL;
      *((_DWORD *)a4 + 12) = 0;
    }
    else
    {
      v18 = 1;
    }
LABEL_21:
    if ( UserModeCallersCopy >= 0 )
      return (unsigned int)UserModeCallersCopy;
    goto LABEL_45;
  }
LABEL_26:
  UserModeCallersCopy = -1073741811;
LABEL_45:
  if ( v17 )
  {
    v15 = (void *)*((_QWORD *)a4 + 2);
    if ( PreviousMode )
    {
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
    }
  }
  if ( v18 )
  {
    v16 = (void *)*((_QWORD *)a4 + 5);
    if ( PreviousMode )
    {
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
    }
  }
  memset(a4, 0, 0x38uLL);
  return (unsigned int)UserModeCallersCopy;
}
