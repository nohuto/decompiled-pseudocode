/*
 * XREFs of NtGdiEndPage @ 0x1C0267EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0048E14 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C026517C (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0266FF0 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0267044 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     GreDeleteWnd @ 0x1C027A5A0 (GreDeleteWnd.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027B480 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiEndPage(HDC a1)
{
  int v1; // ebx
  unsigned int v2; // esi
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  struct _EPROCESS *CurrentProcess; // rax
  EWNDOBJ *v8; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-20h] BYREF
  XDCOBJ *v12; // [rsp+68h] [rbp+18h] BYREF

  v1 = (int)a1;
  v2 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v10) )
  {
    v3 = v1 & 0x7F0000;
    if ( v3 != 0x10000 && v3 != 6684672 )
    {
      v4 = *(_QWORD *)(v10[0] + 512LL);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v10[0] + 48LL);
        v6 = *(_DWORD *)(v5 + 56);
        if ( (v6 & 1) == 0 )
        {
          if ( *(_QWORD *)(v5 + 2584) )
          {
            v12 = 0LL;
            if ( (v6 & 0x8000) != 0 )
            {
              v12 = (XDCOBJ *)v10;
              XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v10);
            }
            if ( gUMPDSecurityLevel == 2
              || gUMPDSecurityLevel
              && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel),
                  (unsigned int)bIsProcessLocalSystem(CurrentProcess))
              || *(_QWORD *)(v5 + 2968) )
            {
              v2 = (*(__int64 (__fastcall **)(__int64))(v5 + 2968))(v4 + 24);
              if ( v2 )
              {
                RESTORESAVEDCATTRS::vDone(&v12);
                if ( (*(_DWORD *)(v5 + 56) & 0x8000) != 0 )
                {
                  *(_DWORD *)(v10[0] + 36LL) &= ~0x100u;
                  v8 = *(EWNDOBJ **)(v4 + 128);
                  if ( v8 )
                  {
                    GreDeleteWnd(v8);
                    *(_QWORD *)(v4 + 128) = 0LL;
                  }
                  *(_WORD *)(v10[0] + 2504LL) = -1;
                }
              }
            }
            else if ( gfUMPDDebug )
            {
              DbgPrint(
                "windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:NtGdiEndPage:!(PPFNVALID(po, SendPage))\n",
                2360);
            }
            RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(&v12);
          }
        }
      }
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v10);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v11);
  return v2;
}
