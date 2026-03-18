/*
 * XREFs of NtGdiDdDDIGetDeviceState @ 0x1C000B5D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIGetDeviceState(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 *v5; // rdx
  int v6; // edi
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int128 v16; // [rsp+20h] [rbp-48h]
  __int128 v17; // [rsp+30h] [rbp-38h]

  v5 = (__int128 *)a1;
  if ( a1 >= (unsigned __int64)W32UserProbeAddress )
    v5 = (__int128 *)W32UserProbeAddress;
  v16 = *v5;
  v17 = v5[1];
  if ( HIDWORD(*(_QWORD *)v5) != 3 )
    return ((__int64 (__fastcall *)(unsigned __int64, __int128 *, __int64, __int64, _QWORD, _QWORD, _QWORD))qword_1C0101230)(
             a1,
             v5,
             a3,
             a4,
             v16,
             *((_QWORD *)&v16 + 1),
             v17);
  v6 = 0;
  v7 = 0LL;
  if ( grpdeskRitInput )
    v7 = *(_QWORD *)(grpdeskRitInput + 40);
  v8 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v8 = *ThreadWin32Thread;
  if ( v7
    && ((v14 = *(_QWORD *)(v8 + 416)) == 0 || *(_QWORD *)(v14 + 40) != v7)
    && (*(_DWORD *)(v8 + 448) & 8) == 0
    && (*(_DWORD *)(v8 + 1080) & 4) == 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11, v10, v12, v13, v16, *((_QWORD *)&v16 + 1), v17) + 12) & 0x40010) != 0x40010 )
  {
    v6 = 1;
  }
  *(_DWORD *)(a1 + 8) = v6;
  return 0LL;
}
