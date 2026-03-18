/*
 * XREFs of NtGdiDdDDIGetDeviceState @ 0x1C006E240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIGetDeviceState(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 v11; // rax

  v4 = (_QWORD *)a1;
  if ( a1 >= (unsigned __int64)W32UserProbeAddress )
    v4 = W32UserProbeAddress;
  if ( HIDWORD(*v4) != 3 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_1C0104050)(a1);
  v6 = 0;
  v7 = 0LL;
  if ( grpdeskRitInput )
    v7 = *(_QWORD *)(grpdeskRitInput + 40);
  v8 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3);
  if ( ThreadWin32Thread )
    v8 = *ThreadWin32Thread;
  if ( v7
    && ((v11 = *(_QWORD *)(v8 + 408)) == 0 || *(_QWORD *)(v11 + 40) != v7)
    && (*(_DWORD *)(v8 + 440) & 8) == 0
    && (*(_DWORD *)(v8 + 1072) & 4) == 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 12) & 0x40010) != 0x40010 )
  {
    v6 = 1;
  }
  *(_DWORD *)(a1 + 8) = v6;
  return 0LL;
}
