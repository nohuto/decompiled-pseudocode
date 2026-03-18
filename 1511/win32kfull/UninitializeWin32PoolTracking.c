/*
 * XREFs of UninitializeWin32PoolTracking @ 0x1C01062C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C010641C (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Empty@CLeakTrackingAllocator@NSInstrumentation@@QEAA_NXZ @ 0x1C0106520 (-Empty@CLeakTrackingAllocator@NSInstrumentation@@QEAA_NXZ.c)
 *     ?FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QEAAXXZ @ 0x1C02D4AD0 (-FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QEAAXXZ.c)
 */

__int64 __fastcall UninitializeWin32PoolTracking(NSInstrumentation::CLeakTrackingAllocator *a1)
{
  _DWORD *v1; // rbx
  unsigned int v2; // edi
  struct NSInstrumentation::CLeakTrackingAllocator *v3; // rcx
  unsigned int v4; // esi
  PVOID PoolWithTag; // rax
  NSInstrumentation::CLeakTrackingAllocator *v6; // rcx
  void *v7; // r14
  void *v8; // rcx
  int v10; // [rsp+90h] [rbp+30h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+48h] BYREF

  v1 = gpLeakTrackingAllocator;
  v2 = 0;
  if ( gpLeakTrackingAllocator )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::Empty(a1) )
    {
      v4 = v1[11];
      v2 = 1;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPool, 4 * v4, 0x746C7355u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (int)Win32ExtractSessionPoolTagInfo(gSessionId, PoolWithTag, v4, &v10, &v13, &v12, &v11, v1, v4) < 0 )
        {
          v13 = 0LL;
          v11 = 0LL;
          v12 = 0LL;
        }
        DbgkWerCaptureLiveKernelDump(L"win32k.sys", 171LL, gSessionId);
        ExFreePoolWithTag(v7, 0x746C7355u);
      }
      NSInstrumentation::CLeakTrackingAllocator::FreeAll(v6);
    }
    NSInstrumentation::CLeakTrackingAllocator::Destroy(v3);
    gpLeakTrackingAllocator = 0LL;
  }
  if ( !gSessionId )
  {
    if ( gpxsGlobals )
    {
      v8 = (void *)*((_QWORD *)gpxsGlobals + 5);
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
    }
  }
  return v2;
}
