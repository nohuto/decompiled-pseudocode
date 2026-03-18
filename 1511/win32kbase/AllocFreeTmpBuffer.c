/*
 * XREFs of AllocFreeTmpBuffer @ 0x1C0042C00
 * Callers:
 *     NtGdiGetRegionData @ 0x1C0026370 (NtGdiGetRegionData.c)
 *     NtGdiOpenDCW @ 0x1C00424A0 (NtGdiOpenDCW.c)
 *     NtGdiExtCreateRegion @ 0x1C0073F60 (NtGdiExtCreateRegion.c)
 *     NtGdiPolyPolyDraw @ 0x1C0080C70 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported_0 @ 0x1C0002BE8 (IsWin32AllocPoolImplSupported_0.c)
 *     Win32AllocPoolImpl_0 @ 0x1C0002BF0 (Win32AllocPoolImpl_0.c)
 */

__int64 __fastcall AllocFreeTmpBuffer(unsigned int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  _QWORD *v9; // rsi

  v1 = 0LL;
  if ( a1 > 0x1000 || (v2 = _InterlockedExchange64((volatile __int64 *)gpTmpGlobalFree, 0LL)) == 0 )
  {
    v2 = 0LL;
    if ( a1 < 0xFFFFEFDF && (int)IsWin32AllocPoolImplSupported_0() >= 0 )
    {
      v3 = Win32AllocPoolImpl_0();
      v4 = (_QWORD *)v3;
      if ( v3 )
      {
        v2 = v3 + 32;
        KeEnterCriticalRegion();
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v5, v6);
        if ( ThreadWin32Thread )
          v1 = *ThreadWin32Thread;
        v4[2] = v2;
        v4[3] = FreeThreadBufferWithTag;
        if ( v1 )
        {
          v8 = *(_QWORD *)(v1 + 88);
          v9 = (_QWORD *)(v1 + 88);
          *v4 = v8;
          v4[1] = v9;
          if ( *(_QWORD **)(v8 + 8) != v9 )
            __fastfail(3u);
          *(_QWORD *)(v8 + 8) = v4;
          *v9 = v4;
        }
        else
        {
          v4[1] = v4;
          *v4 = v4;
        }
        KeLeaveCriticalRegion();
      }
    }
  }
  return v2;
}
