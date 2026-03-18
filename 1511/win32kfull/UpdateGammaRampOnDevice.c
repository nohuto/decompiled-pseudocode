/*
 * XREFs of UpdateGammaRampOnDevice @ 0x1C00E3FF0
 * Callers:
 *     GreSetDeviceGammaRampInternal @ 0x1C00E3D30 (GreSetDeviceGammaRampInternal.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00EFE70 (-SETFLAG@@YAXHAECKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UpdateGammaRampOnDevice(__int64 a1, int a2)
{
  unsigned int v2; // edi
  int v4; // ecx
  bool v6; // zf
  __int64 (__fastcall *v7)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( a1 )
  {
    v4 = *(_DWORD *)(a1 + 2132);
    if ( (unsigned int)(v4 - 3) <= 3 )
    {
      if ( *(_QWORD *)(a1 + 3256) && (*(_DWORD *)(a1 + 2152) & 0x10) != 0 )
      {
        if ( *(_QWORD *)(a1 + 1728) )
          return (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 3256))(*(_QWORD *)(a1 + 1824), 1LL);
      }
      else if ( v4 == 3 && (*(_DWORD *)(a1 + 2196) & 0x100) != 0 && (a2 || *(_QWORD *)(a1 + 1728)) )
      {
        v6 = *(_QWORD *)(a1 + 1728) == 0LL;
        v8 = *(_QWORD *)(a1 + 1832);
        SETFLAG(!v6, (volatile unsigned int *)(v8 + 24), 0x800000u);
        *(_QWORD *)(v8 + 64) = a1;
        v9 = *(_QWORD *)(a1 + 72);
        GreAcquireSemaphore(v9);
        GreAcquireSemaphore(*(_QWORD *)(a1 + 64));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(a1 + 64), 11LL);
        if ( (*(_DWORD *)(a1 + 56) & 0x400) == 0 )
        {
          v7 = *(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(a1 + 2896);
          if ( v7 )
            v2 = v7(*(_QWORD *)(a1 + 1824), &v8, 0LL, 0LL, *(_DWORD *)(v8 + 28));
        }
        EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_QWORD *)(a1 + 64));
        GreReleaseSemaphoreInternal(*(_QWORD *)(a1 + 64));
        SEMOBJ::vUnlock((SEMOBJ *)&v9);
      }
    }
  }
  return v2;
}
