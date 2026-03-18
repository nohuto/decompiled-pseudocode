/*
 * XREFs of NtRaiseHardError @ 0x1406F7EF4
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseHardError @ 0x1406F78B0 (ExRaiseHardError.c)
 *     ExpRaiseHardError @ 0x1406F7B94 (ExpRaiseHardError.c)
 */

NTSTATUS __stdcall NtRaiseHardError(
        NTSTATUS ErrorStatus,
        ULONG NumberOfParameters,
        ULONG UnicodeStringParameterMask,
        PULONG_PTR Parameters,
        ULONG ValidResponseOptions,
        PULONG Response)
{
  __int64 v7; // rbx
  _DWORD *v10; // rcx
  __int64 v11; // rdi
  unsigned int i; // eax
  __int64 v13; // r9
  _OWORD *v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // r10
  unsigned __int16 v17; // ax
  ULONG64 v18; // rcx
  ULONG64 v19; // rdx
  NTSTATUS v20; // edx
  ULONG v21; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-F4h]
  NTSTATUS v23; // [rsp+48h] [rbp-F0h]
  _QWORD Src[5]; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v25[15]; // [rsp+78h] [rbp-C0h] BYREF

  v7 = NumberOfParameters;
  if ( NumberOfParameters > 5 )
    return -1073741584;
  if ( !Parameters )
  {
    if ( !NumberOfParameters )
      goto LABEL_7;
    return -1073741584;
  }
  if ( !NumberOfParameters )
    return -1073741584;
LABEL_7:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ValidResponseOptions > 8 )
      return -1073741582;
    v10 = Response;
    if ( (unsigned __int64)Response >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
    if ( Parameters )
    {
      v11 = NumberOfParameters;
      if ( v11 * 8 )
      {
        if ( ((unsigned __int8)Parameters & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Parameters[v11] > MmUserProbeAddress || &Parameters[v11] < Parameters )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(Src, Parameters, 8LL * NumberOfParameters);
      memmove(v25, Src, 8 * v7);
      if ( UnicodeStringParameterMask )
      {
        for ( i = 0; ; ++i )
        {
          v22 = i;
          if ( i >= (unsigned int)v7 )
            break;
          if ( _bittest((const int *)&UnicodeStringParameterMask, i) )
          {
            v13 = i;
            v14 = (_OWORD *)Src[i];
            if ( ((unsigned __int8)v14 & 7) != 0 )
              ExRaiseDatatypeMisalignment();
            v15 = 2LL * i;
            v16 = &v25[v15 + 5];
            *(_OWORD *)&v25[v15 + 5] = *v14;
            v17 = WORD1(v25[v15 + 5]);
            if ( v17 )
            {
              v18 = v25[v15 + 6];
              v19 = v18 + v17;
              if ( v19 > MmUserProbeAddress || v19 < v18 )
                *(_BYTE *)MmUserProbeAddress = 0;
            }
            v25[v13] = v16;
            i = v22;
          }
        }
      }
    }
    v20 = ExpRaiseHardError(ErrorStatus, v7, UnicodeStringParameterMask, Src, (__int64)v25, ValidResponseOptions, &v21);
    v23 = v20;
    *Response = v21;
  }
  else
  {
    v20 = ExRaiseHardError(
            ErrorStatus,
            NumberOfParameters,
            UnicodeStringParameterMask,
            (char *)Parameters,
            ValidResponseOptions,
            (int *)&v21);
    *Response = v21;
  }
  return v20;
}
