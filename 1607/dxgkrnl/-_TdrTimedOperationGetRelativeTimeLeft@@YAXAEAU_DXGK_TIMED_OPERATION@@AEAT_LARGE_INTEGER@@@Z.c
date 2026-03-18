/*
 * XREFs of ?_TdrTimedOperationGetRelativeTimeLeft@@YAXAEAU_DXGK_TIMED_OPERATION@@AEAT_LARGE_INTEGER@@@Z @ 0x1C0023620
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C0023820 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C0167B80 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __fastcall _TdrTimedOperationGetRelativeTimeLeft(struct _DXGK_TIMED_OPERATION *a1, union _LARGE_INTEGER *a2)
{
  __int64 v2; // rax
  LONGLONG v3; // rbx

  v2 = MEMORY[0xFFFFF78000000320];
  if ( a1->StartTick.QuadPart > MEMORY[0xFFFFF78000000320] )
    a1->StartTick.QuadPart = MEMORY[0xFFFFF78000000320];
  v3 = a1->StartTick.QuadPart + a1->Timeout.QuadPart - v2;
  if ( v3 < 0 )
    v3 = 0LL;
  a2->QuadPart = -(v3 * KeQueryTimeIncrement());
}
