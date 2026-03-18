/*
 * XREFs of InitMutex @ 0x1C0007678
 * Callers:
 *     Mutex @ 0x1C00074B0 (Mutex.c)
 *     AMLIInitialize @ 0x1C00A6000 (AMLIInitialize.c)
 * Callees:
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall InitMutex(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  unsigned int v7; // edi
  char *v9; // rax
  char *v10; // rbx

  v7 = 0;
  *(_WORD *)(a3 + 66) = 9;
  *(_DWORD *)(a3 + 88) = 192;
  v9 = (char *)HeapAlloc(a2, 1414876488LL, 192LL);
  *(_QWORD *)(a3 + 96) = v9;
  v10 = v9;
  if ( v9 )
  {
    memset(v9, 0, *(unsigned int *)(a3 + 88));
    *(_DWORD *)v10 = a4;
    if ( a5 )
      *((_DWORD *)v10 + 8) = 1;
    KeInitializeSpinLock((PKSPIN_LOCK)v10 + 23);
    *((_QWORD *)v10 + 3) = v10 + 16;
    *((_QWORD *)v10 + 2) = v10 + 16;
  }
  else
  {
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(a1, 3221225626LL);
    PrintDebugMessage(76, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v7;
}
