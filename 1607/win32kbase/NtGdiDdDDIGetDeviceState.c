/*
 * XREFs of NtGdiDdDDIGetDeviceState @ 0x1C0073EA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSurfaceAccessCheck @ 0x1C0073F40 (UserSurfaceAccessCheck.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIGetDeviceState(ULONGLONG a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdx
  int v7; // ebx
  __int64 v8; // rcx

  v5 = (_QWORD *)a1;
  if ( a1 >= W32UserProbeAddress )
    v5 = (_QWORD *)W32UserProbeAddress;
  if ( HIDWORD(*v5) != 3 )
    return ((__int64 (__fastcall *)(ULONGLONG, _QWORD *, __int64, __int64, _QWORD, _QWORD, _QWORD))qword_1C011B390)(
             a1,
             v5,
             a3,
             a4,
             *v5,
             v5[1],
             v5[2]);
  v7 = 0;
  v8 = 0LL;
  if ( grpdeskRitInput )
    v8 = *(_QWORD *)(grpdeskRitInput + 40);
  if ( !(unsigned int)UserSurfaceAccessCheck(v8) )
    v7 = 1;
  *(_DWORD *)(a1 + 8) = v7;
  return 0LL;
}
