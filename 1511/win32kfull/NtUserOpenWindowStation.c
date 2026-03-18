/*
 * XREFs of NtUserOpenWindowStation @ 0x1C0122100
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _OpenWindowStation @ 0x1C01212E8 (_OpenWindowStation.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0217DDC (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall NtUserOpenWindowStation(unsigned __int64 a1, int a2)
{
  __int128 *v4; // r8
  unsigned __int64 v5; // rcx
  __int128 v6; // xmm1
  __int64 v7; // rax
  __int64 v8; // r8
  _BYTE *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  volatile void *Address[2]; // [rsp+30h] [rbp-A8h]
  __int128 v15; // [rsp+58h] [rbp-80h]
  int v16; // [rsp+F0h] [rbp+18h] BYREF
  unsigned int v17; // [rsp+F4h] [rbp+1Ch]
  unsigned __int64 v18; // [rsp+F8h] [rbp+20h]

  EnterCrit(0LL, 1LL);
  v4 = (__int128 *)a1;
  v5 = a1 + 48;
  if ( a1 + 48 < a1 || v5 > W32UserProbeAddress )
    v4 = (__int128 *)W32UserProbeAddress;
  v15 = *v4;
  v6 = v4[1];
  v7 = -PsGetCurrentProcessWow64Process(v5);
  v18 = (-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
  v9 = (_BYTE *)v6;
  if ( ((v7 != 0 ? 0 : 3) & (unsigned int)v6) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)v6 >= W32UserProbeAddress )
    v9 = (_BYTE *)W32UserProbeAddress;
  *v9 = *v9;
  v9[15] = v9[15];
  *(_OWORD *)Address = *(_OWORD *)v6;
  if ( *((_QWORD *)&v15 + 1) )
  {
    if ( Address[1] )
    {
      if ( LODWORD(Address[0]) == 3801144 )
      {
        ProbeForWrite(Address[1], 0x3AuLL, 2u);
        if ( !_wcsicmp((const wchar_t *)Address[1], L"Service-0x00000000-00000000$") )
        {
          GetProcessLuid(0LL, &v16);
          RtlStringCbPrintfW((wchar_t *)Address[1], 0x3AuLL, L"Service-0x%x-%x$", v17, v16);
          RtlInitUnicodeString((PUNICODE_STRING)v6, (PCWSTR)Address[1]);
        }
      }
    }
  }
  v10 = OpenWindowStation(a1, a2, v8);
  UserSessionSwitchLeaveCrit(v12, v11);
  return v10;
}
