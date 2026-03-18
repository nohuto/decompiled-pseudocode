/*
 * XREFs of NtGdiEndPage @ 0x1C026AE80
 * Callers:
 *     <none>
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00199F4 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bHasSurface@XDCOBJ@@QEAAHXZ @ 0x1C026142C (-bHasSurface@XDCOBJ@@QEAAHXZ.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C02687E0 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C026A0F0 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C026A144 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     GreDeleteWnd @ 0x1C027CE10 (GreDeleteWnd.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027DCF0 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiEndPage(HDC a1)
{
  int v1; // ebx
  unsigned int v2; // esi
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdi
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v9; // rcx
  EWNDOBJ *v10; // rcx
  _QWORD v12[6]; // [rsp+20h] [rbp-30h] BYREF
  XDCOBJ *v13; // [rsp+68h] [rbp+18h] BYREF

  v1 = (int)a1;
  v2 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v12) )
  {
    v3 = v1 & 0x7F0000;
    if ( v3 != 0x10000 && v3 != 6684672 && XDCOBJ::bHasSurface((XDCOBJ *)v12) )
    {
      v5 = *(_QWORD *)(v12[0] + 48LL);
      v6 = *(_DWORD *)(v5 + 56);
      if ( (v6 & 1) == 0 )
      {
        if ( *(_QWORD *)(v5 + 2584) )
        {
          v13 = 0LL;
          v7 = *(_QWORD *)(v12[0] + 512LL);
          if ( (v6 & 0x8000) != 0 )
          {
            v13 = (XDCOBJ *)v12;
            XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v12);
          }
          if ( gUMPDSecurityLevel == 2
            || gUMPDSecurityLevel
            && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v4),
                (unsigned int)bIsProcessLocalSystem(CurrentProcess))
            || *(_QWORD *)(v5 + 2976) )
          {
            if ( v7 )
              v9 = v7 + 24;
            else
              v9 = 0LL;
            v2 = (*(__int64 (__fastcall **)(__int64))(v5 + 2976))(v9);
            if ( v2 )
            {
              RESTORESAVEDCATTRS::vDone(&v13);
              if ( (*(_DWORD *)(v5 + 56) & 0x8000) != 0 )
              {
                *(_DWORD *)(v12[0] + 36LL) &= ~0x100u;
                v10 = *(EWNDOBJ **)(v7 + 128);
                if ( v10 )
                {
                  GreDeleteWnd(v10);
                  *(_QWORD *)(v7 + 128) = 0LL;
                }
                *(_WORD *)(v12[0] + 2504LL) = -1;
              }
            }
          }
          else if ( gfUMPDDebug )
          {
            DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:NtGdiEndPage:!(PPFNVALID(po, SendPage))\n", 2344);
          }
          RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(&v13);
        }
      }
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v12);
  return v2;
}
