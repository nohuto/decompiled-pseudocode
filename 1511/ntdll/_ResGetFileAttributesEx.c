/*
 * XREFs of _ResGetFileAttributesEx @ 0x1800F9F9C
 * Callers:
 *     ResCCreateCultureMap @ 0x1800FAC98 (ResCCreateCultureMap.c)
 *     ResCLoadCultureMap @ 0x1800FB0DC (ResCLoadCultureMap.c)
 *     ResCReloadCultureMap @ 0x1800FB180 (ResCReloadCultureMap.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x18003D350 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180042E60 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtQueryFullAttributesFile @ 0x1800A76D0 (NtQueryFullAttributesFile.c)
 */

__int64 __fastcall ResGetFileAttributesEx(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG v4; // ecx
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  NTSTATUS FullAttributesFile; // edi
  __int128 v9; // [rsp+20h] [rbp-59h] BYREF
  __int128 v10; // [rsp+30h] [rbp-49h] BYREF
  __int64 v11; // [rsp+40h] [rbp-39h]
  int v12; // [rsp+50h] [rbp-29h]
  __int64 v13; // [rsp+58h] [rbp-21h]
  __int128 *v14; // [rsp+60h] [rbp-19h]
  int v15; // [rsp+68h] [rbp-11h]
  __int128 v16; // [rsp+70h] [rbp-9h]
  __int64 v17; // [rsp+80h] [rbp+7h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  __int64 v19; // [rsp+90h] [rbp+17h]
  int v20; // [rsp+A8h] [rbp+2Fh]
  int v21; // [rsp+ACh] [rbp+33h]
  int v22; // [rsp+B0h] [rbp+37h]

  if ( RtlDosPathNameToRelativeNtPathName_U(a1, (unsigned __int16 *)&v9, 0LL, (__int64)&v10) )
  {
    v5 = *((_QWORD *)&v9 + 1);
    if ( (_WORD)v10 )
    {
      v6 = v11;
      v9 = v10;
    }
    else
    {
      v6 = 0LL;
      v11 = 0LL;
    }
    v13 = v6;
    v12 = 48;
    v14 = &v9;
    v15 = 64;
    v16 = 0LL;
    FullAttributesFile = NtQueryFullAttributesFile();
    RtlReleaseRelativeName((__int64)&v10);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    if ( FullAttributesFile >= 0 )
    {
      *(_DWORD *)a3 = v22;
      *(_QWORD *)(a3 + 4) = v17;
      *(_QWORD *)(a3 + 12) = v18;
      *(_QWORD *)(a3 + 20) = v19;
      *(_DWORD *)(a3 + 28) = v21;
      *(_DWORD *)(a3 + 32) = v20;
      return 1LL;
    }
    v4 = RtlNtStatusToDosError(FullAttributesFile);
  }
  else
  {
    v4 = 3;
  }
  RtlSetLastWin32Error(v4);
  return 0LL;
}
