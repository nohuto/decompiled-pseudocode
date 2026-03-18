/*
 * XREFs of ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0267750
 * Callers:
 *     NtGdiDoBanding @ 0x1C0269950 (NtGdiDoBanding.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002D65C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     GreDeleteWnd @ 0x1C027C3D0 (GreDeleteWnd.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027D290 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall GreDoBanding(HDC a1, int a2, struct _POINTL *a3, struct tagSIZE *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, struct _POINTL *); // rbx
  struct _EPROCESS *CurrentProcess; // rax
  unsigned int v15; // edi
  __int64 (__fastcall *v16)(__int64, struct _POINTL *); // rdi
  struct _EPROCESS *v17; // rax
  EWNDOBJ *v19; // rcx
  _QWORD v20[5]; // [rsp+20h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v20)
    || (v10 = v20[0], (v11 = *(_QWORD *)(v20[0] + 512LL)) == 0)
    || (v12 = *(_QWORD *)(v20[0] + 48LL), !*(_QWORD *)(v12 + 2584))
    || (*(_DWORD *)(v11 + 112) & 0x2000000) == 0 )
  {
LABEL_22:
    v15 = 0;
    goto LABEL_23;
  }
  if ( a2 )
  {
    v13 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v12 + 3176);
    if ( gUMPDSecurityLevel == 2
      || gUMPDSecurityLevel
      && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v7, v8, v9),
          (unsigned int)bIsProcessLocalSystem(CurrentProcess))
      || v13 )
    {
      v15 = v13(v11 + 24, a3);
    }
    else
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvStartBanding\n", 2437);
      v15 = 0;
    }
    a4->cx = *(_DWORD *)(v11 + 56);
    a4->cy = *(_DWORD *)(v11 + 60);
LABEL_15:
    *(struct _POINTL *)(v10 + 2496) = *a3;
    goto LABEL_23;
  }
  v16 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v12 + 3184);
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (v17 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v7, v8, v9),
          !(unsigned int)bIsProcessLocalSystem(v17)) )
    {
      if ( !v16 )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvNextBand\n", 2464);
        goto LABEL_22;
      }
    }
  }
  v15 = v16(v11 + 24, a3);
  if ( !v15 )
    goto LABEL_23;
  if ( a3->x != -1 )
    goto LABEL_15;
  v15 &= -((*(_DWORD *)(v12 + 56) & 0x8000) != 0);
  if ( v15 )
  {
    *(_DWORD *)(v10 + 36) &= ~0x100u;
    v19 = *(EWNDOBJ **)(v11 + 128);
    if ( v19 )
    {
      GreDeleteWnd(v19);
      *(_QWORD *)(v11 + 128) = 0LL;
    }
    *(_WORD *)(v10 + 2480) = 0;
  }
LABEL_23:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v20);
  return v15;
}
