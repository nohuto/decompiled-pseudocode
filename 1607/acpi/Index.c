/*
 * XREFs of Index @ 0x1C0013FA0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateTarget @ 0x1C001476C (ValidateTarget.c)
 *     ValidateArgTypes @ 0x1C00182D0 (ValidateArgTypes.c)
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     WriteObject @ 0x1C00191F0 (WriteObject.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 */

__int64 __fastcall Index(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int *v7; // r14
  __int64 v8; // rcx
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(a3) = 1;
  v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), a3, "CI");
  if ( !v5 )
  {
    v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 133LL, &v13);
    if ( !v5 )
    {
      v6 = *(_QWORD *)(a2 + 80);
      if ( *(_WORD *)(v6 + 2) == 3 )
      {
        if ( *(_DWORD *)(v6 + 56) < *(_DWORD *)(v6 + 24) )
        {
          *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 14;
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 48;
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = HeapAlloc(
                                                       *(_QWORD *)(a1 + 320),
                                                       1145455176LL,
                                                       *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
          v10 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL);
          if ( !v10 )
          {
            v5 = -1073741670;
            LogError(3221225626LL);
            AcpiDiagTraceAmlError(a1, 3221225626LL);
            PrintDebugMessage(60, 0, 0, 0, 0LL);
            return v5;
          }
          *(_DWORD *)(v10 + 16) = 0;
          *(_DWORD *)(v10 + 20) = 8;
          *(_QWORD *)v10 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL);
          *(_DWORD *)(v10 + 8) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
          *(_DWORD *)(v10 + 12) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
          return (unsigned int)WriteObject(a1, v13, *(_QWORD *)(a2 + 88));
        }
        v5 = -1072431100;
        LogError(3222536196LL);
        AcpiDiagTraceAmlError(a1, 3222536196LL);
        v12 = *(_QWORD *)(a2 + 80);
        v11 = *(_DWORD *)(v12 + 24);
LABEL_14:
        PrintDebugMessage(61, *(_QWORD *)(v12 + 56), v11, 0, 0LL);
        return v5;
      }
      if ( *(_WORD *)(v6 + 2) == 4 )
      {
        v7 = *(int **)(v6 + 32);
        if ( *(_DWORD *)(v6 + 56) < (unsigned int)*v7 )
        {
          *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 129;
          v8 = *(unsigned int *)(*(_QWORD *)(a2 + 80) + 56LL);
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = &v7[8 * v8 + 2 + 2 * v8];
          return (unsigned int)WriteObject(a1, v13, *(_QWORD *)(a2 + 88));
        }
        v5 = -1072431100;
        LogError(3222536196LL);
        AcpiDiagTraceAmlError(a1, 3222536196LL);
        v11 = *v7;
        v12 = *(_QWORD *)(a2 + 80);
        goto LABEL_14;
      }
    }
  }
  return v5;
}
