/*
 * XREFs of CloseHandle @ 0x1400151C4
 * Callers:
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x140014214 (BasepGetVolumeDosLetterNameFromNTName.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14000CF40 (_guard_dispatch_icall_nop.c)
 *     SetStdHandleEx @ 0x140015914 (SetStdHandleEx.c)
 *     BaseSetLastNTError @ 0x14001603C (BaseSetLastNTError.c)
 */

__int64 __fastcall CloseHandle(HANDLE Handle, __int64 a2)
{
  HANDLE v2; // rbx
  void (*v3)(void); // rax
  NTSTATUS v4; // eax
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = Handle;
  if ( (unsigned int)((_DWORD)Handle + 12) <= 2 && (unsigned int)SetStdHandleEx(Handle, a2, &v6) )
    v2 = v6;
  v3 = (void (*)(void))SbSelectProcedure(2880154539LL, 1LL, "kLsE", 4LL);
  if ( v3 )
    v3();
  v4 = NtClose(v2);
  if ( v4 >= 0 )
    return 1LL;
  BaseSetLastNTError((unsigned int)v4);
  return 0LL;
}
