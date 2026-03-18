/*
 * XREFs of NtGdiEndPage @ 0x1C0269A00
 * Callers:
 *     <none>
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002D65C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C0267484 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0268C94 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0268CE8 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     GreDeleteWnd @ 0x1C027C3D0 (GreDeleteWnd.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027D290 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiEndPage(HDC a1)
{
  int v1; // ebx
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // eax
  struct _EPROCESS *CurrentProcess; // rax
  EWNDOBJ *v11; // rcx
  _QWORD v13[2]; // [rsp+20h] [rbp-10h] BYREF
  XDCOBJ *v14; // [rsp+48h] [rbp+18h] BYREF

  v1 = (int)a1;
  v2 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v13) )
  {
    v6 = v1 & 0x7F0000;
    if ( v6 != 0x10000 && v6 != 6684672 )
    {
      v7 = *(_QWORD *)(v13[0] + 512LL);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v13[0] + 48LL);
        v9 = *(_DWORD *)(v8 + 56);
        if ( (v9 & 1) == 0 )
        {
          if ( *(_QWORD *)(v8 + 2584) )
          {
            v14 = 0LL;
            if ( (v9 & 0x8000) != 0 )
            {
              v14 = (XDCOBJ *)v13;
              XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v13);
            }
            if ( gUMPDSecurityLevel == 2
              || gUMPDSecurityLevel
              && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v3, v4, v5),
                  (unsigned int)bIsProcessLocalSystem(CurrentProcess))
              || *(_QWORD *)(v8 + 2976) )
            {
              v2 = (*(__int64 (__fastcall **)(__int64))(v8 + 2976))(v7 + 24);
              if ( v2 )
              {
                RESTORESAVEDCATTRS::vDone(&v14);
                if ( (*(_DWORD *)(v8 + 56) & 0x8000) != 0 )
                {
                  *(_DWORD *)(v13[0] + 36LL) &= ~0x100u;
                  v11 = *(EWNDOBJ **)(v7 + 128);
                  if ( v11 )
                  {
                    GreDeleteWnd(v11);
                    *(_QWORD *)(v7 + 128) = 0LL;
                  }
                  *(_WORD *)(v13[0] + 2480LL) = -1;
                }
              }
            }
            else if ( gfUMPDDebug )
            {
              DbgPrint(
                "windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:NtGdiEndPage:!(PPFNVALID(po, SendPage))\n",
                2333);
            }
            RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(&v14);
          }
        }
      }
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v13);
  return v2;
}
