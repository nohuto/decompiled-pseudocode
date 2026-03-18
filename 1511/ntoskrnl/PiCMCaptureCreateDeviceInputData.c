/*
 * XREFs of PiCMCaptureCreateDeviceInputData @ 0x14061165C
 * Callers:
 *     PiCMCreateDevice @ 0x140611DAC (PiCMCreateDevice.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404390E4 (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureCreateDeviceInputData(ULONG64 a1, unsigned int a2, int a3, char *a4)
{
  char PreviousMode; // r13
  int UserModeCallersCopy; // esi
  ULONG64 v7; // r8
  ULONG64 v8; // r8
  _QWORD *v9; // r15
  void *v10; // rax
  unsigned int v11; // r8d
  _QWORD *v12; // r15
  void *v13; // rax
  unsigned int v14; // r8d
  void *v15; // rcx
  void *v16; // rcx
  int v18; // [rsp+34h] [rbp-44h]
  int v19; // [rsp+38h] [rbp-40h]

  v18 = 0;
  v19 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_44;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = a1 + a2;
    if ( v7 > MmUserProbeAddress || v7 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( a2 >= 0x1C && *(_DWORD *)a1 == 28 )
    {
      *(_DWORD *)a4 = 40;
      *((_DWORD *)a4 + 1) = *(_DWORD *)(a1 + 4);
      *((_QWORD *)a4 + 1) = *(unsigned int *)(a1 + 8);
      *((_DWORD *)a4 + 4) = *(_DWORD *)(a1 + 12);
      *((_QWORD *)a4 + 3) = *(unsigned int *)(a1 + 16);
      *((_DWORD *)a4 + 8) = *(_DWORD *)(a1 + 20);
      *((_DWORD *)a4 + 9) = *(_DWORD *)(a1 + 24);
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
    if ( a2 >= 0x28 )
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *((_OWORD *)a4 + 1) = *(_OWORD *)(a1 + 16);
      *((_QWORD *)a4 + 4) = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)a4 != 40 )
        UserModeCallersCopy = -1073741811;
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy >= 0 )
  {
    v9 = a4 + 8;
    v10 = (void *)*((_QWORD *)a4 + 1);
    *((_QWORD *)a4 + 1) = 0LL;
    if ( v10 )
    {
      v11 = *((_DWORD *)a4 + 4);
      if ( v11 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a4 + 1, v10, v11, 2u, PreviousMode, 1);
        if ( UserModeCallersCopy < 0 )
        {
          *v9 = 0LL;
          *((_DWORD *)a4 + 4) = 0;
        }
        else
        {
          v18 = 1;
          *(_WORD *)(*v9 + 2 * ((unsigned __int64)*((unsigned int *)a4 + 4) >> 1) - 2) = 0;
        }
LABEL_33:
        v12 = a4 + 24;
        v13 = (void *)*((_QWORD *)a4 + 3);
        *((_QWORD *)a4 + 3) = 0LL;
        if ( v13 )
        {
          v14 = *((_DWORD *)a4 + 8);
          if ( v14 >= 2 )
          {
            UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a4 + 3, v13, v14, 2u, PreviousMode, 1);
            if ( UserModeCallersCopy < 0 )
            {
              *v12 = 0LL;
              *((_DWORD *)a4 + 8) = 0;
            }
            else
            {
              v19 = 1;
              *(_WORD *)(*v12 + 2 * ((unsigned __int64)*((unsigned int *)a4 + 8) >> 1) - 2) = 0;
            }
LABEL_44:
            if ( UserModeCallersCopy >= 0 )
              return (unsigned int)UserModeCallersCopy;
            goto LABEL_45;
          }
          if ( *((_DWORD *)a4 + 8) >= 2u )
            goto LABEL_44;
        }
        else if ( !*((_DWORD *)a4 + 8) )
        {
          goto LABEL_44;
        }
        goto LABEL_32;
      }
      if ( *((_DWORD *)a4 + 4) >= 2u )
        goto LABEL_33;
    }
    else if ( !*((_DWORD *)a4 + 4) )
    {
      goto LABEL_33;
    }
LABEL_32:
    UserModeCallersCopy = -1073741811;
  }
LABEL_45:
  if ( v18 )
  {
    v15 = (void *)*((_QWORD *)a4 + 1);
    if ( PreviousMode )
    {
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
    }
  }
  if ( v19 )
  {
    v16 = (void *)*((_QWORD *)a4 + 3);
    if ( PreviousMode )
    {
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
    }
  }
  memset(a4, 0, 0x28uLL);
  return (unsigned int)UserModeCallersCopy;
}
