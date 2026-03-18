/*
 * XREFs of NtGdiStartPage @ 0x1C026A420
 * Callers:
 *     <none>
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002D65C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C0267484 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@K@Z @ 0x1C0267D78 (-bEndDocInternal@@YAHPEAUHDC__@@K@Z.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0268C94 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0268CE8 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027D290 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiStartPage(HDC a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _EPROCESS *CurrentProcess; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-10h] BYREF
  XDCOBJ *v11; // [rsp+58h] [rbp+28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v2 = 0;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v10)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    EngSetLastError(6u);
  }
  else
  {
    v3 = *(_QWORD *)(v10[0] + 512LL);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v10[0] + 48LL);
      if ( *(_QWORD *)(v4 + 2584) )
      {
        if ( (*(_DWORD *)(v4 + 56) & 0x8000) != 0 )
        {
          v11 = (XDCOBJ *)v10;
          XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v10);
          if ( (gUMPDSecurityLevel == 2
             || gUMPDSecurityLevel
             && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v5, v6, v7),
                 (unsigned int)bIsProcessLocalSystem(CurrentProcess))
             || *(_QWORD *)(v4 + 2984))
            && (v2 = (*(__int64 (__fastcall **)(__int64))(v4 + 2984))(v3 + 24)) != 0 )
          {
            RESTORESAVEDCATTRS::vDone(&v11);
            *(_DWORD *)(v10[0] + 36LL) |= 0x100u;
            *(_DWORD *)(v10[0] + 2496LL) = 0;
            *(_DWORD *)(v10[0] + 2500LL) = 0;
          }
          else
          {
            RESTORESAVEDCATTRS::vDone(&v11);
            bEndDocInternal(a1, 1u);
          }
          RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(&v11);
        }
      }
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v10);
  return v2;
}
