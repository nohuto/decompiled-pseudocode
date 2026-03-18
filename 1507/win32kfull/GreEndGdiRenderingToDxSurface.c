/*
 * XREFs of GreEndGdiRenderingToDxSurface @ 0x1C0012FE8
 * Callers:
 *     NtGdiEndGdiRendering @ 0x1C0012FA0 (NtGdiEndGdiRendering.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreEndGdiRenderingToDxSurface(HSURF a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r14d
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, __int64); // rax
  _BYTE v13[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v6 = a2;
  if ( a3 )
  {
    LOBYTE(a2) = 1;
    GreDxgkEnableUnorderedWaitsForDevice((unsigned int)a3, a2);
  }
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  SURFREF::SURFREF((SURFREF *)v13, a1);
  v8 = v14;
  v9 = 0;
  if ( v14 )
  {
    if ( ((unsigned __int64)a1 & 0x800000) == 0 )
    {
      if ( (unsigned int)GreGetObjectOwner(a1, 5LL) )
      {
        v8 = v14;
        if ( !v14 )
          goto LABEL_15;
        v10 = *(_QWORD *)(v14 + 48);
        if ( (*(_DWORD *)(v14 + 116) & 8) == 0 && !*(_QWORD *)(v14 + 216) )
          goto LABEL_13;
        v9 = 1;
        *(_WORD *)(v14 + 102) |= 0x200u;
        if ( (*(_DWORD *)(v8 + 116) & 8) != 0 )
        {
          v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v10 + 3520);
          v9 = 0;
          if ( v11 )
            v9 = v11(v8 + 24, v6, a4, a3);
        }
      }
      v8 = v14;
    }
LABEL_13:
    if ( v8 )
      DEC_SHARE_REF_CNT(v8);
  }
LABEL_15:
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v13);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  return v9;
}
