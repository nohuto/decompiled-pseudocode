/*
 * XREFs of NtSetTimerEx @ 0x140065D60
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer @ 0x140065EC0 (ExpSetTimer.c)
 *     PoDestroyReasonContext @ 0x1400D10E8 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400D1330 (PoCaptureReasonContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetTimerEx(int a1, int a2, _OWORD *a3, unsigned int a4)
{
  _OWORD *v4; // rbx
  unsigned __int8 v6; // di
  ULONG64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 result; // rax
  _BYTE v13[8]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v14; // [rsp+58h] [rbp-40h] BYREF
  _OWORD v15[3]; // [rsp+60h] [rbp-38h] BYREF

  v4 = a3;
  v6 = KeGetCurrentThread()->gap0[10];
  if ( v6 && a4 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (ULONG64)a3 + a4;
    if ( v7 > MmUserProbeAddress || v7 < (unsigned __int64)a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( a2 )
    return 3221225475LL;
  if ( a4 != 48 )
    return 3221225476LL;
  if ( v6 )
  {
    v15[0] = *a3;
    v15[1] = a3[1];
    v15[2] = a3[2];
    v4 = v15;
  }
  if ( *((_DWORD *)v4 + 8) > 0x7FFFFFFFu )
    return 3221225713LL;
  v8 = *((_QWORD *)v4 + 3);
  if ( v8 )
  {
    result = PoCaptureReasonContext(v8, v6, 0, 0, (__int64)v13, (__int64)&v14);
    if ( (int)result < 0 )
      return result;
    v9 = v14;
    LOBYTE(v8) = v13[0];
  }
  else
  {
    v9 = 0LL;
  }
  v10 = ExpSetTimer(
          a1,
          v6,
          (int)v4,
          *((_QWORD *)v4 + 1),
          *((_QWORD *)v4 + 2),
          v9,
          v8,
          *((_DWORD *)v4 + 8),
          *((_DWORD *)v4 + 9),
          *((_QWORD *)v4 + 5));
  v11 = v10;
  if ( v10 < 0 || v10 == 1073741861 )
  {
    if ( v9 )
      PoDestroyReasonContext(v9);
  }
  return v11;
}
