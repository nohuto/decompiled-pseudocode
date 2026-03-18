/*
 * XREFs of NtSetTimerEx @ 0x140090CA0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer @ 0x140090DFC (ExpSetTimer.c)
 *     PoCaptureReasonContext @ 0x1400979A8 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x140098D20 (PoDestroyReasonContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetTimerEx(__int64 a1, __int64 a2, _OWORD *a3, unsigned int a4)
{
  _OWORD *v4; // rbx
  char PreviousMode; // di
  ULONG64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 result; // rax
  _BYTE v12[8]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+58h] [rbp-40h] BYREF
  _OWORD v14[3]; // [rsp+60h] [rbp-38h] BYREF

  v4 = a3;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && a4 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (ULONG64)a3 + a4;
    if ( v7 > MmUserProbeAddress || v7 < (unsigned __int64)a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( (_DWORD)a2 )
    return 3221225475LL;
  if ( a4 != 48 )
    return 3221225476LL;
  if ( PreviousMode )
  {
    v14[0] = *a3;
    v14[1] = a3[1];
    v14[2] = a3[2];
    v4 = v14;
  }
  if ( *((_DWORD *)v4 + 8) > 0x7FFFFFFFu )
    return 3221225713LL;
  v8 = *((_QWORD *)v4 + 3);
  if ( v8 )
  {
    LOBYTE(a2) = PreviousMode;
    result = PoCaptureReasonContext(v8, a2, 0, 0, (__int64)v12, (__int64)&v13);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v13 = 0LL;
    v12[0] = 0;
  }
  LOBYTE(a2) = PreviousMode;
  v9 = ExpSetTimer(
         a1,
         a2,
         v4,
         *((_QWORD *)v4 + 1),
         *((_QWORD *)v4 + 2),
         v13,
         v12[0],
         *((_DWORD *)v4 + 8),
         *((_DWORD *)v4 + 9),
         *((_QWORD *)v4 + 5));
  v10 = v9;
  if ( v9 < 0 || v9 == 1073741861 )
  {
    if ( v13 )
      PoDestroyReasonContext(v13);
  }
  return v10;
}
