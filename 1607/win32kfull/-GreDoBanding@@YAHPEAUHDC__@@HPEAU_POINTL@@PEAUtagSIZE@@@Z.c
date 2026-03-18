/*
 * XREFs of ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0265450
 * Callers:
 *     NtGdiDoBanding @ 0x1C0267E00 (NtGdiDoBanding.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0048E14 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     GreDeleteWnd @ 0x1C027A5A0 (GreDeleteWnd.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027B480 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall GreDoBanding(HDC a1, int a2, struct _POINTL *a3, struct tagSIZE *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, struct _POINTL *); // rbx
  struct _EPROCESS *CurrentProcess; // rax
  unsigned int v11; // edi
  __int64 (__fastcall *v12)(__int64, struct _POINTL *); // rdi
  struct _EPROCESS *v13; // rax
  EWNDOBJ *v15; // rcx
  _QWORD v16[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v17[32]; // [rsp+30h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v16)
    || (v7 = *(_QWORD *)(v16[0] + 512LL)) == 0
    || (v8 = *(_QWORD *)(v16[0] + 48LL), !*(_QWORD *)(v8 + 2584))
    || (*(_DWORD *)(v7 + 112) & 0x2000000) == 0 )
  {
LABEL_22:
    v11 = 0;
    goto LABEL_23;
  }
  if ( a2 )
  {
    v9 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v8 + 3168);
    if ( gUMPDSecurityLevel == 2
      || gUMPDSecurityLevel
      && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel),
          (unsigned int)bIsProcessLocalSystem(CurrentProcess))
      || v9 )
    {
      v11 = v9(v7 + 24, a3);
    }
    else
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvStartBanding\n", 2464);
      v11 = 0;
    }
    a4->cx = *(_DWORD *)(v7 + 56);
    a4->cy = *(_DWORD *)(v7 + 60);
LABEL_15:
    *(struct _POINTL *)(v16[0] + 2520LL) = *a3;
    goto LABEL_23;
  }
  v12 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v8 + 3176);
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (v13 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel), !(unsigned int)bIsProcessLocalSystem(v13)) )
    {
      if ( !v12 )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvNextBand\n", 2491);
        goto LABEL_22;
      }
    }
  }
  v11 = v12(v7 + 24, a3);
  if ( !v11 )
    goto LABEL_23;
  if ( a3->x != -1 )
    goto LABEL_15;
  v11 &= -((*(_DWORD *)(v8 + 56) & 0x8000) != 0);
  if ( v11 )
  {
    *(_DWORD *)(v16[0] + 36LL) &= ~0x100u;
    v15 = *(EWNDOBJ **)(v7 + 128);
    if ( v15 )
    {
      GreDeleteWnd(v15);
      *(_QWORD *)(v7 + 128) = 0LL;
    }
    *(_WORD *)(v16[0] + 2504LL) = 0;
  }
LABEL_23:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v16);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v17);
  return v11;
}
