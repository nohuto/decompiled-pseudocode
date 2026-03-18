/*
 * XREFs of UserSurfaceAccessCheck @ 0x1C0073F40
 * Callers:
 *     NtGdiDdDDIGetDeviceState @ 0x1C0073EA0 (NtGdiDdDDIGetDeviceState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserSurfaceAccessCheck(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  v2 = 0;
  v3 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  if ( (!a1
     || (v6 = *(_QWORD *)(v3 + 408)) != 0 && *(_QWORD *)(v6 + 40) == a1
     || (*(_DWORD *)(v3 + 440) & 8) != 0
     || (*(_DWORD *)(v3 + 1096) & 4) != 0)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 12) & 0x40010) == 0x40010 )
  {
    return 1;
  }
  return v2;
}
