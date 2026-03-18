/*
 * XREFs of NtGdiStartPage @ 0x1C02688D0
 * Callers:
 *     <none>
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0048E14 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C026517C (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0266018 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0266FF0 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0267044 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027B480 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiStartPage(HDC a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v8[32]; // [rsp+30h] [rbp-20h] BYREF
  XDCOBJ *v9; // [rsp+78h] [rbp+28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v2 = 0;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v7)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    EngSetLastError(6u);
  }
  else
  {
    v3 = *(_QWORD *)(v7[0] + 512LL);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v7[0] + 48LL);
      if ( *(_QWORD *)(v4 + 2584) )
      {
        if ( (*(_DWORD *)(v4 + 56) & 0x8000) != 0 )
        {
          v9 = (XDCOBJ *)v7;
          XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v7);
          if ( (gUMPDSecurityLevel == 2
             || gUMPDSecurityLevel
             && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel),
                 (unsigned int)bIsProcessLocalSystem(CurrentProcess))
             || *(_QWORD *)(v4 + 2976))
            && (v2 = (*(__int64 (__fastcall **)(__int64))(v4 + 2976))(v3 + 24)) != 0 )
          {
            RESTORESAVEDCATTRS::vDone(&v9);
            *(_DWORD *)(v7[0] + 36LL) |= 0x100u;
            *(_DWORD *)(v7[0] + 2520LL) = 0;
            *(_DWORD *)(v7[0] + 2524LL) = 0;
          }
          else
          {
            RESTORESAVEDCATTRS::vDone(&v9);
            bEndDocInternal(a1, 1u, 2);
          }
          RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(&v9);
        }
      }
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v8);
  return v2;
}
