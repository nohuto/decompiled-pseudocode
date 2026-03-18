/*
 * XREFs of InitEvent @ 0x1C0023258
 * Callers:
 *     Event @ 0x1C0023200 (Event.c)
 * Callees:
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall InitEvent(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  KSPIN_LOCK *v4; // rax
  KSPIN_LOCK *v5; // rdi

  v2 = 0;
  *(_WORD *)(a2 + 58) = 7;
  *(_DWORD *)(a2 + 80) = 24;
  v4 = (KSPIN_LOCK *)HeapAlloc(a1, 1314276680, 0x18u);
  *(_QWORD *)(a2 + 88) = v4;
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, *(unsigned int *)(a2 + 80));
    KeInitializeSpinLock(v5 + 2);
  }
  else
  {
    LogError(3221225626LL);
    PrintDebugMessage(65, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v2;
}
