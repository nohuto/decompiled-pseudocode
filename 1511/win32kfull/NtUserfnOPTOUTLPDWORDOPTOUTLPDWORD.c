/*
 * XREFs of NtUserfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x1C00F47C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnOPTOUTLPDWORDOPTOUTLPDWORD(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v6; // r8

  v6 = _guard_dispatch_icall_fptr();
  if ( a3 )
  {
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (_DWORD *)W32UserProbeAddress;
    *a3 = 0;
  }
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (_DWORD *)W32UserProbeAddress;
    *a4 = 0;
  }
  return v6;
}
