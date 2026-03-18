/*
 * XREFs of NtGdiDdDDIOpenAdapterFromLuid @ 0x1C0078610
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromLuid(_QWORD *a1, __int64 a2)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  const char *v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx

  if ( !a1 )
    return ((__int64 (__fastcall *)(_QWORD *))qword_1C0103EF8)(a1);
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
  v6 = (unsigned __int16)gProtocolType;
  v7 = (const char *)ProcessImageFileName;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
    return ((__int64 (__fastcall *)(_QWORD *))qword_1C0103EF8)(a1);
  if ( !Object )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C0103EF8)(a1);
  LOWORD(v6) = gProtocolType - 1;
  if ( (PVOID)PsGetCurrentProcess(v5, v6) == gpepCSRSS
    || UserIsCurrentProcessDwm(v10, v9)
    || !v7
    || !_stricmp(v7, "rdpshell.exe")
    || !_stricmp(v7, "rdpclip.exe")
    || *a1 == qword_1C0104874 )
  {
    return ((__int64 (__fastcall *)(_QWORD))qword_1C0103EF8)(a1);
  }
  else
  {
    return 3221225485LL;
  }
}
