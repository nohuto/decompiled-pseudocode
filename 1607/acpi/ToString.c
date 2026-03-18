/*
 * XREFs of ToString @ 0x1C0060A70
 * Callers:
 *     <none>
 * Callees:
 *     ValidateTarget @ 0x1C001476C (ValidateTarget.c)
 *     ValidateArgTypes @ 0x1C00182D0 (ValidateArgTypes.c)
 *     IsCompatableDSDTRevision @ 0x1C002563C (IsCompatableDSDTRevision.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     ConvertToString @ 0x1C0060F58 (ConvertToString.c)
 */

__int64 __fastcall ToString(__int64 a1, __int64 a2)
{
  int v4; // edx
  unsigned int v5; // ebx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // eax
  int v10; // ecx
  char v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(_DWORD *)(a2 + 76) - 2;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError(a1, -1072431098);
      PrintDebugMessage(191, (const void *)*(unsigned int *)(a2 + 76), 0LL, 0LL, 0LL);
      return (unsigned int)-1072431098;
    }
    v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, (__int64)"BI");
    if ( !v5 )
    {
      v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 0x85u, (__int64)&v12);
      if ( !v5 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL) )
        {
          v6 = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
          v7 = *(_QWORD *)(a2 + 80);
          if ( *(_QWORD *)(v7 + 56) != v6 )
          {
            v8 = *(unsigned int *)(v7 + 56);
            goto LABEL_13;
          }
        }
LABEL_12:
        v8 = 0LL;
LABEL_13:
        v9 = ConvertToString(*(_QWORD *)(a2 + 80), v8, *(_QWORD *)(a2 + 88));
        v5 = v9;
        switch ( v9 )
        {
          case 0xC000009A:
            LogError(-1073741670);
            AcpiDiagTraceAmlError(a1, -1073741670);
            v10 = 190;
            break;
          case 0xC0000206:
            LogError(-1072431098);
            AcpiDiagTraceAmlError(a1, -1072431098);
            PrintDebugMessage(189, 0LL, 0LL, 0LL, 0LL);
            return (unsigned int)-1072431098;
          case 0xC0140006:
            LogError(-1072431098);
            AcpiDiagTraceAmlError(a1, -1072431098);
            v10 = 192;
            break;
          default:
            return v5;
        }
        PrintDebugMessage(v10, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, (__int64)"B");
    if ( !v5 )
    {
      v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 0x85u, (__int64)&v12);
      if ( !v5 )
        goto LABEL_12;
    }
  }
  return v5;
}
