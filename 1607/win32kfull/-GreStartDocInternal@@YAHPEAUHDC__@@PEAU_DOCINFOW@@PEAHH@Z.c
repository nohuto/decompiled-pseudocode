/*
 * XREFs of ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0265CA4
 * Callers:
 *     NtGdiStartDoc @ 0x1C0268490 (NtGdiStartDoc.c)
 * Callees:
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0022AB0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C026517C (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0266FF0 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0267044 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     GreExtEscape @ 0x1C0267554 (GreExtEscape.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027B480 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall GreStartDocInternal(HDC a1, struct _DOCINFOW *a2, int *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rdx
  DC *v12; // rax
  __int64 (__fastcall *v13)(__int64, LPCWSTR, _QWORD); // rdi
  struct _EPROCESS *CurrentProcess; // rax
  int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rcx
  DC *v18; // rdx
  char v20[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h] BYREF
  DC **v22; // [rsp+40h] [rbp-40h] BYREF
  DC *v23[7]; // [rsp+48h] [rbp-38h] BYREF

  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  if ( RFONTOBJ::bValid((RFONTOBJ *)v23) )
  {
    if ( *((_WORD *)v23[0] + 6) != 1 )
    {
LABEL_10:
      v8 = -1;
      goto LABEL_34;
    }
    if ( ((unsigned int)a1 & 0x7F0000) != 0x10000 && ((unsigned int)a1 & 0x7F0000) != 0x660000 )
    {
      v9 = *((_QWORD *)v23[0] + 6);
      v21 = v9;
      v10 = *(_DWORD *)(v9 + 56);
      if ( (v10 & 1) == 0 && *(_QWORD *)(v9 + 2584) && !*((_DWORD *)v23[0] + 8) && !*((_QWORD *)v23[0] + 64) )
      {
        if ( (v10 & 0x8000) == 0 )
          goto LABEL_10;
        if ( PDEVOBJ::bMakeSurface((PDEVOBJ *)&v21, 0LL) )
        {
          v11 = v21;
          v12 = v23[0];
          *a3 = *(_DWORD *)(*(_QWORD *)(v21 + 2576) + 112LL) & 0x2000000;
          *((_QWORD *)v12 + 64) = *(_QWORD *)(v11 + 2576);
          if ( *a3 )
            *((_QWORD *)v23[0] + 66) = *(_QWORD *)(*(_QWORD *)(v21 + 2576) + 56LL);
          DC::bSetDefaultRegion(v23[0]);
          v22 = 0LL;
          v13 = *(__int64 (__fastcall **)(__int64, LPCWSTR, _QWORD))(v21 + 2992);
          if ( (*(_DWORD *)(v21 + 56) & 0x8000) != 0 )
          {
            v22 = v23;
            XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v23);
          }
          if ( gUMPDSecurityLevel == 2
            || gUMPDSecurityLevel
            && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel),
                (unsigned int)bIsProcessLocalSystem(CurrentProcess))
            || v13 )
          {
            v16 = *(_QWORD *)(v21 + 2576);
            if ( v16 )
              v17 = v16 + 24;
            else
              v17 = 0LL;
            v15 = v13(v17, a2->lpszDocName, a4);
          }
          else
          {
            if ( gfUMPDDebug )
              DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreStartDocInternal:!pfnDrvstartDoc\n", 1721);
            v15 = 0;
          }
          RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v22);
          v18 = v23[0];
          if ( *((_DWORD *)v23[0] + 627) != -1 )
          {
            *(_DWORD *)v20 = *((_DWORD *)v23[0] + 627);
            GreExtEscape(a1, 0x11u, 4u, v20, 0, 0LL);
            *((_DWORD *)v23[0] + 627) = -1;
            v18 = v23[0];
          }
          if ( (*((_DWORD *)v18 + 9) & 0x400) != 0 )
          {
            *(_WORD *)v20 = 1;
            GreExtEscape(a1, 0x21u, 2u, v20, 0, 0LL);
            *((_DWORD *)v23[0] + 9) &= ~0x400u;
            v18 = v23[0];
          }
          if ( v15 )
          {
            v8 = a4;
            *((_DWORD *)v18 + 30) = *((_DWORD *)v18 + 29);
          }
          RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS((XDCOBJ **)&v22);
        }
      }
    }
  }
LABEL_34:
  DCOBJ::~DCOBJ((DCOBJ *)v23);
  return v8;
}
