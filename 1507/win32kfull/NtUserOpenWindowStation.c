/*
 * XREFs of NtUserOpenWindowStation @ 0x1C00DADB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _OpenWindowStation @ 0x1C00DBD88 (_OpenWindowStation.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0217F70 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall NtUserOpenWindowStation(unsigned __int64 a1, unsigned int a2)
{
  __int128 *v4; // r8
  unsigned __int64 v5; // rcx
  __int128 v6; // xmm1
  __int64 v7; // rax
  _BYTE *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  volatile void *Address[2]; // [rsp+30h] [rbp-A8h]
  __int128 v14; // [rsp+58h] [rbp-80h]
  int v15; // [rsp+F0h] [rbp+18h] BYREF
  unsigned int v16; // [rsp+F4h] [rbp+1Ch]
  unsigned __int64 v17; // [rsp+F8h] [rbp+20h]

  EnterCrit(1LL);
  v4 = (__int128 *)a1;
  v5 = a1 + 48;
  if ( a1 + 48 < a1 || v5 > W32UserProbeAddress )
    v4 = (__int128 *)W32UserProbeAddress;
  v14 = *v4;
  v6 = v4[1];
  v7 = -PsGetCurrentProcessWow64Process(v5);
  v17 = (-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
  v8 = (_BYTE *)v6;
  if ( ((v7 != 0 ? 0 : 3) & (unsigned int)v6) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)v6 >= W32UserProbeAddress )
    v8 = (_BYTE *)W32UserProbeAddress;
  *v8 = *v8;
  v8[15] = v8[15];
  *(_OWORD *)Address = *(_OWORD *)v6;
  if ( *((_QWORD *)&v14 + 1) )
  {
    if ( Address[1] )
    {
      if ( LODWORD(Address[0]) == 3801144 )
      {
        ProbeForWrite(Address[1], 0x3AuLL, 2u);
        if ( !_wcsicmp((const wchar_t *)Address[1], L"Service-0x00000000-00000000$") )
        {
          GetProcessLuid(0LL, &v15);
          RtlStringCbPrintfW((wchar_t *)Address[1], 0x3AuLL, L"Service-0x%x-%x$", v16, v15);
          RtlInitUnicodeString((PUNICODE_STRING)v6, (PCWSTR)Address[1]);
        }
      }
    }
  }
  v9 = OpenWindowStation(a1, a2);
  UserSessionSwitchLeaveCrit(v11, v10);
  return v9;
}
