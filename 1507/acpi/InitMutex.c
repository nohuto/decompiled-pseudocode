/*
 * XREFs of InitMutex @ 0x1C0005CF8
 * Callers:
 *     Mutex @ 0x1C0005B80 (Mutex.c)
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 * Callees:
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall InitMutex(__int64 a1, __int64 a2, int a3, char a4)
{
  unsigned int v6; // edi
  void *v8; // rax
  void *v9; // rbx

  v6 = 0;
  *(_DWORD *)(a2 + 80) = 184;
  *(_WORD *)(a2 + 58) = 9;
  v8 = (void *)HeapAlloc(a1, 1414876488LL, 184LL);
  *(_QWORD *)(a2 + 88) = v8;
  v9 = v8;
  if ( v8 )
  {
    memset(v8, 0, *(unsigned int *)(a2 + 80));
    *(_DWORD *)v9 = a3;
    if ( a4 )
      *((_DWORD *)v9 + 6) = 1;
    KeInitializeSpinLock((PKSPIN_LOCK)v9 + 22);
  }
  else
  {
    LogError(3221225626LL);
    PrintDebugMessage(76, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v6;
}
