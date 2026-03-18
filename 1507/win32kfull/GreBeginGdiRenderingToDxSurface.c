/*
 * XREFs of GreBeginGdiRenderingToDxSurface @ 0x1C0012E08
 * Callers:
 *     NtGdiBeginGdiRendering @ 0x1C0012E00 (NtGdiBeginGdiRendering.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bReset@DC@@QEAAHXZ @ 0x1C001D9FC (-bReset@DC@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreBeginGdiRenderingToDxSurface(HSURF a1, unsigned int a2, __int64 a3)
{
  __int64 v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rbx
  HDC v10; // rdx
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64); // rax
  unsigned int v12; // eax
  _BYTE v13[32]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h]
  DC *v15[7]; // [rsp+48h] [rbp-40h] BYREF

  if ( a3 && (int)GreDxgkEnableUnorderedWaitsForDevice((unsigned int)a3, 0LL) < 0 )
    return 0LL;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  SURFREF::SURFREF((SURFREF *)v13, a1);
  v7 = v14;
  v8 = 0;
  if ( v14 )
  {
    if ( ((unsigned __int64)a1 & 0x800000) != 0 )
      goto LABEL_18;
    if ( !(unsigned int)GreGetObjectOwner(a1, 5LL) )
    {
LABEL_17:
      v7 = v14;
LABEL_18:
      if ( v7 )
        DEC_SHARE_REF_CNT(v7);
      goto LABEL_20;
    }
    v7 = v14;
    if ( v14 )
    {
      v9 = *(_QWORD *)(v14 + 48);
      if ( (*(_DWORD *)(v14 + 116) & 8) == 0 && !*(_QWORD *)(v14 + 216) )
        goto LABEL_18;
      v10 = *(HDC *)(v14 + 152);
      *(_WORD *)(v14 + 102) &= ~0x200u;
      if ( v10 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v15, v10);
        if ( v15[0] )
          v8 = DC::bReset(v15[0]);
        DCOBJ::~DCOBJ((DCOBJ *)v15);
        if ( v8 )
        {
          if ( (*(_DWORD *)(v7 + 116) & 8) != 0 )
          {
            v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v9 + 3512);
            v8 = 0;
            if ( v11 )
            {
              v12 = v11(v7 + 24, a2, a3);
              *(_DWORD *)(v7 + 116) |= 0x200u;
              v8 = v12;
            }
          }
        }
      }
      goto LABEL_17;
    }
  }
LABEL_20:
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v13);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  return v8;
}
