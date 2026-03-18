/*
 * XREFs of ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0268D84
 * Callers:
 *     NtGdiStartDoc @ 0x1C026B460 (NtGdiStartDoc.c)
 * Callees:
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0019EF0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     GreExtEscape @ 0x1C01257FC (GreExtEscape.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bHasSurface@XDCOBJ@@QEAAHXZ @ 0x1C026142C (-bHasSurface@XDCOBJ@@QEAAHXZ.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C02687E0 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C026A0F0 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C026A144 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027DCF0 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall GreStartDocInternal(HDC a1, struct _DOCINFOW *a2, int *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int16 v10; // r8
  __int64 v11; // rdx
  DC *v12; // rax
  __int64 v13; // rdx
  __int64 (__fastcall *v14)(__int64, LPCWSTR, _QWORD); // rdi
  struct _EPROCESS *CurrentProcess; // rax
  int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // rcx
  DC *v19; // rdx
  char v21[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  DC **v23; // [rsp+40h] [rbp-40h] BYREF
  DC *v24[7]; // [rsp+48h] [rbp-38h] BYREF

  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v24, a1);
  if ( RFONTOBJ::bValid((RFONTOBJ *)v24) )
  {
    if ( *((_WORD *)v24[0] + 6) != 1 )
    {
LABEL_10:
      v8 = -1;
      goto LABEL_34;
    }
    if ( ((unsigned int)a1 & 0x7F0000) != 0x10000 && ((unsigned int)a1 & 0x7F0000) != 0x660000 )
    {
      v9 = *((_QWORD *)v24[0] + 6);
      v22 = v9;
      if ( (*(_DWORD *)(v9 + 56) & 1) == 0
        && *(_QWORD *)(v9 + 2584)
        && !*((_DWORD *)v24[0] + 8)
        && !XDCOBJ::bHasSurface((XDCOBJ *)v24) )
      {
        if ( (v10 & 0x8000) == 0 )
          goto LABEL_10;
        if ( PDEVOBJ::bMakeSurface((PDEVOBJ *)&v22, 0LL) )
        {
          v11 = v22;
          v12 = v24[0];
          *a3 = *(_DWORD *)(*(_QWORD *)(v22 + 2576) + 112LL) & 0x2000000;
          *((_QWORD *)v12 + 64) = *(_QWORD *)(v11 + 2576);
          if ( *a3 )
            *((_QWORD *)v24[0] + 66) = *(_QWORD *)(*(_QWORD *)(v22 + 2576) + 56LL);
          DC::bSetDefaultRegion(v24[0]);
          v23 = 0LL;
          v14 = *(__int64 (__fastcall **)(__int64, LPCWSTR, _QWORD))(v22 + 3000);
          if ( (*(_DWORD *)(v22 + 56) & 0x8000) != 0 )
          {
            v23 = v24;
            XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v24);
          }
          if ( gUMPDSecurityLevel == 2
            || gUMPDSecurityLevel
            && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v13),
                (unsigned int)bIsProcessLocalSystem(CurrentProcess))
            || v14 )
          {
            v17 = *(_QWORD *)(v22 + 2576);
            if ( v17 )
              v18 = v17 + 24;
            else
              v18 = 0LL;
            v16 = v14(v18, a2->lpszDocName, a4);
          }
          else
          {
            if ( gfUMPDDebug )
              DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreStartDocInternal:!pfnDrvstartDoc\n", 1719);
            v16 = 0;
          }
          RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v23);
          v19 = v24[0];
          if ( *((_DWORD *)v24[0] + 627) != -1 )
          {
            *(_DWORD *)v21 = *((_DWORD *)v24[0] + 627);
            GreExtEscape(a1, 17, 4, v21, 0, 0LL);
            *((_DWORD *)v24[0] + 627) = -1;
            v19 = v24[0];
          }
          if ( (*((_DWORD *)v19 + 9) & 0x400) != 0 )
          {
            *(_WORD *)v21 = 1;
            GreExtEscape(a1, 33, 2, v21, 0, 0LL);
            *((_DWORD *)v24[0] + 9) &= ~0x400u;
            v19 = v24[0];
          }
          if ( v16 )
          {
            v8 = a4;
            *((_DWORD *)v19 + 30) = *((_DWORD *)v19 + 29);
          }
          RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS((XDCOBJ **)&v23);
        }
      }
    }
  }
LABEL_34:
  DCOBJ::~DCOBJ((DCOBJ *)v24);
  return v8;
}
