/*
 * XREFs of NtGdiDdDDIOpenAdapterFromLuid @ 0x1C0016730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromLuid(_QWORD *a1)
{
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax

  if ( a1
    && dword_1C0102080
    && (CurrentProcess = PsGetCurrentProcess(),
        (ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess)) != 0LL)
    && !_stricmp(ProcessImageFileName, "rdvgm.exe")
    && *a1 != qword_1C0102084 )
  {
    return 3221225485LL;
  }
  else
  {
    return ((__int64 (__fastcall *)(_QWORD *))qword_1C01010D8)(a1);
  }
}
