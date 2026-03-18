/*
 * XREFs of AllocFreeTmpBuffer @ 0x1C0053560
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C0053100 (NtGdiExtCreateRegion.c)
 *     NtGdiOpenDCW @ 0x1C0053200 (NtGdiOpenDCW.c)
 *     NtGdiGetRegionData @ 0x1C00533E0 (NtGdiGetRegionData.c)
 *     NtGdiPolyPolyDraw @ 0x1C0068CF0 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported_0 @ 0x1C0002BB8 (IsWin32AllocPoolImplSupported_0.c)
 *     Win32AllocPoolImpl_0 @ 0x1C0002BC0 (Win32AllocPoolImpl_0.c)
 */

__int64 __fastcall AllocFreeTmpBuffer(unsigned int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rax
  _QWORD *v4; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  _QWORD *v7; // rsi

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
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( ThreadWin32Thread )
          v1 = *ThreadWin32Thread;
        v4[2] = v2;
        v4[3] = FreeThreadBufferWithTag;
        if ( v1 )
        {
          v6 = *(_QWORD *)(v1 + 88);
          v7 = (_QWORD *)(v1 + 88);
          *v4 = v6;
          v4[1] = v7;
          if ( *(_QWORD **)(v6 + 8) != v7 )
            __fastfail(3u);
          *(_QWORD *)(v6 + 8) = v4;
          *v7 = v4;
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
