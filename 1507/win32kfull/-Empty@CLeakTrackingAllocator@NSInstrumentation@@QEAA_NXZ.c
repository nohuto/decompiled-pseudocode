/*
 * XREFs of ?Empty@CLeakTrackingAllocator@NSInstrumentation@@QEAA_NXZ @ 0x1C0130D98
 * Callers:
 *     UninitializeWin32PoolTracking @ 0x1C0130B60 (UninitializeWin32PoolTracking.c)
 *     ?Win32kLeakTrackingLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x1C01F6A00 (-Win32kLeakTrackingLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::Empty(NSInstrumentation::CLeakTrackingAllocator *this)
{
  __int64 result; // rax
  __int64 v2; // rcx
  bool v3; // dl
  __int64 v4; // rcx
  bool v5; // cl

  result = 1LL;
  v2 = *((_QWORD *)gpLeakTrackingAllocator + 6);
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 48) == 0;
  else
    v3 = 1;
  v4 = *((_QWORD *)gpLeakTrackingAllocator + 7);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 40) == 0LL;
  else
    v5 = 1;
  if ( !v3 || !v5 )
    return 0LL;
  return result;
}
