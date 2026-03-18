/*
 * XREFs of NtGdiStartPage @ 0x1C026B8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00199F4 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bHasSurface@XDCOBJ@@QEAAHXZ @ 0x1C026142C (-bHasSurface@XDCOBJ@@QEAAHXZ.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C02687E0 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0269108 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C026A0F0 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C026A144 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027DCF0 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiStartPage(HDC a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v7; // rcx
  _QWORD v9[6]; // [rsp+20h] [rbp-30h] BYREF
  XDCOBJ *v10; // [rsp+78h] [rbp+28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  v2 = 0;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v9)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    EngSetLastError(6u);
  }
  else if ( XDCOBJ::bHasSurface((XDCOBJ *)v9) )
  {
    v3 = *(_QWORD *)(v9[0] + 48LL);
    if ( *(_QWORD *)(v3 + 2584) )
    {
      v4 = *(_QWORD *)(v9[0] + 512LL);
      if ( (*(_DWORD *)(v3 + 56) & 0x8000) != 0 )
      {
        v10 = (XDCOBJ *)v9;
        XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v9);
        if ( (gUMPDSecurityLevel == 2
           || gUMPDSecurityLevel
           && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v5),
               (unsigned int)bIsProcessLocalSystem(CurrentProcess))
           || *(_QWORD *)(v3 + 2984))
          && (v4 ? (v7 = v4 + 24) : (v7 = 0LL), (v2 = (*(__int64 (__fastcall **)(__int64))(v3 + 2984))(v7)) != 0) )
        {
          RESTORESAVEDCATTRS::vDone(&v10);
          *(_DWORD *)(v9[0] + 36LL) |= 0x100u;
          *(_DWORD *)(v9[0] + 2520LL) = 0;
          *(_DWORD *)(v9[0] + 2524LL) = 0;
        }
        else
        {
          RESTORESAVEDCATTRS::vDone(&v10);
          bEndDocInternal(a1, 1u, 2);
        }
        RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(&v10);
      }
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return v2;
}
