/*
 * XREFs of NtReplacePartitionUnit @ 0x1402724C4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404379BC (PiControlMakeUserModeCallersCopy.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     IoReplacePartitionUnit @ 0x14067AA18 (IoReplacePartitionUnit.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtReplacePartitionUnit(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  struct _DEVICE_OBJECT *v6; // rsi
  struct _DEVICE_OBJECT *v7; // rdi
  NTSTATUS UserModeCallersCopy; // ebx
  ULONG v9; // r8d
  struct _DEVICE_OBJECT *v10; // rdx
  struct _DEVICE_OBJECT *v11; // rcx
  _BYTE *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-68h]
  PVOID v19[3]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v20; // [rsp+48h] [rbp-40h] BYREF
  __int128 v21; // [rsp+58h] [rbp-30h] BYREF
  PVOID P; // [rsp+A8h] [rbp+20h] BYREF

  P = 0LL;
  v6 = 0LL;
  v19[1] = 0LL;
  v19[0] = 0LL;
  v7 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
  {
    UserModeCallersCopy = -1073741790;
    goto LABEL_35;
  }
  if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, 1) )
  {
    UserModeCallersCopy = -1073741727;
    goto LABEL_35;
  }
  v9 = 0x80000000;
  if ( a3 == 0x80000000 )
  {
    v10 = 0LL;
    v11 = 0LL;
LABEL_7:
    UserModeCallersCopy = IoReplacePartitionUnit(v11, v10, v9);
    goto LABEL_35;
  }
  if ( a3 )
  {
    UserModeCallersCopy = -1073741583;
    goto LABEL_35;
  }
  if ( (a2 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = (_BYTE *)MmUserProbeAddress;
  if ( a2 + 16 > MmUserProbeAddress || a2 + 16 < a2 )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
    v12 = (_BYTE *)MmUserProbeAddress;
  }
  if ( (a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 16 > (unsigned __int64)v12 || a1 + 16 < a1 )
    *v12 = 0;
  v20 = *(_OWORD *)a2;
  v21 = *(_OWORD *)a1;
  if ( (unsigned __int16)(v21 - 1) > 0xC8u || (BYTE2(v21) & 1) != 0 )
    goto LABEL_34;
  if ( (unsigned __int16)(v20 - 1) > 0xC8u || (BYTE2(v20) & 1) != 0 )
  {
LABEL_33:
    UserModeCallersCopy = -1073741584;
    goto LABEL_35;
  }
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&P, *((_QWORD *)&v20 + 1), (unsigned __int16)v20, 2LL, 1, 1);
  if ( UserModeCallersCopy >= 0 )
  {
    LOBYTE(v18) = 1;
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy(
                            v19,
                            *((_QWORD *)&v21 + 1),
                            (unsigned __int16)v21,
                            2LL,
                            v18,
                            1);
    if ( UserModeCallersCopy >= 0 )
    {
      *((_QWORD *)&v20 + 1) = P;
      WORD1(v20) = v20;
      *((PVOID *)&v21 + 1) = v19[0];
      WORD1(v21) = v21;
      v13 = PnpDeviceObjectFromDeviceInstance(&v20);
      v6 = (struct _DEVICE_OBJECT *)v13;
      if ( v13 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
        if ( v14 )
        {
          if ( (*(_DWORD *)(v14 + 396) & 0x20000) == 0 )
          {
            v15 = PnpDeviceObjectFromDeviceInstance(&v21);
            v7 = (struct _DEVICE_OBJECT *)v15;
            if ( v15 )
            {
              v16 = *(_QWORD *)(*(_QWORD *)(v15 + 312) + 40LL);
              if ( v16 )
              {
                if ( (*(_DWORD *)(v16 + 396) & 0x20000) == 0 )
                {
                  v9 = 0;
                  v10 = v6;
                  v11 = v7;
                  goto LABEL_7;
                }
              }
            }
LABEL_34:
            UserModeCallersCopy = -1073741585;
            goto LABEL_35;
          }
        }
      }
      goto LABEL_33;
    }
  }
LABEL_35:
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v19[0] )
    ExFreePoolWithTag(v19[0], 0);
  return (unsigned int)UserModeCallersCopy;
}
