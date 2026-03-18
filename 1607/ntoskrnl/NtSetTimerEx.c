/*
 * XREFs of NtSetTimerEx @ 0x1400EFE6C
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer @ 0x1400EF85C (ExpSetTimer.c)
 *     PoDestroyReasonContext @ 0x1400FB8C8 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400FC0BC (PoCaptureReasonContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetTimerEx(void *a1, int a2, LARGE_INTEGER *a3, unsigned int a4)
{
  LARGE_INTEGER *v4; // rbx
  KPROCESSOR_MODE PreviousMode; // di
  unsigned __int64 v7; // rcx
  LARGE_INTEGER v8; // rcx
  NTSTATUS v9; // eax
  unsigned int v10; // ebx
  __int64 result; // rax
  char v12[8]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+58h] [rbp-40h] BYREF
  _OWORD v14[3]; // [rsp+60h] [rbp-38h] BYREF

  v4 = a3;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && a4 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (unsigned __int64)a3 + a4;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < (unsigned __int64)a3 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( a2 )
    return 3221225475LL;
  if ( a4 != 48 )
    return 3221225476LL;
  if ( PreviousMode )
  {
    v14[0] = *(_OWORD *)&a3->LowPart;
    v14[1] = *(_OWORD *)&a3[2].LowPart;
    v14[2] = *(_OWORD *)&a3[4].LowPart;
    v4 = (LARGE_INTEGER *)v14;
  }
  if ( v4[4].LowPart > 0x7FFFFFFF )
    return 3221225713LL;
  v8 = v4[3];
  if ( v8.QuadPart )
  {
    LOBYTE(a2) = PreviousMode;
    result = PoCaptureReasonContext(v8.LowPart, a2, 0, 0, (__int64)v12, (__int64)&v13);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v13 = 0LL;
    v12[0] = 0;
  }
  v9 = ExpSetTimer(
         a1,
         PreviousMode,
         v4,
         v4[1].QuadPart,
         v4[2].QuadPart,
         v13,
         v12[0],
         v4[4].LowPart,
         v4[4].HighPart,
         (_BYTE *)v4[5].QuadPart);
  v10 = v9;
  if ( v9 < 0 || v9 == 1073741861 )
  {
    if ( v13 )
      PoDestroyReasonContext(v13);
  }
  return v10;
}
