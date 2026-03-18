/*
 * XREFs of ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0267A20
 * Callers:
 *     NtGdiStartDoc @ 0x1C0269FE0 (NtGdiStartDoc.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreExtEscape @ 0x1C01403F0 (GreExtEscape.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C0267484 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0268C94 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0268CE8 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027D290 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall GreStartDocInternal(HDC a1, struct _DOCINFOW *a2, int *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  DC *v14; // rax
  __int64 (__fastcall *v15)(__int64, LPCWSTR, _QWORD); // rdi
  struct _EPROCESS *CurrentProcess; // rax
  int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rcx
  DC *v20; // rdx
  char v22[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+38h] [rbp-28h] BYREF
  DC **v24; // [rsp+40h] [rbp-20h] BYREF
  DC *v25[3]; // [rsp+48h] [rbp-18h] BYREF

  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  if ( v25[0] )
  {
    if ( ((unsigned int)a1 & 0x7F0000) != 0x10000 && ((unsigned int)a1 & 0x7F0000) != 0x660000 )
    {
      v9 = *((_QWORD *)v25[0] + 6);
      v23 = v9;
      v10 = *(_DWORD *)(v9 + 56);
      if ( (v10 & 1) == 0 && *(_QWORD *)(v9 + 2584) && !*((_DWORD *)v25[0] + 8) && !*((_QWORD *)v25[0] + 64) )
      {
        if ( (v10 & 0x8000) != 0 )
        {
          if ( PDEVOBJ::bMakeSurface((PDEVOBJ *)&v23, 0LL) )
          {
            v13 = v23;
            v14 = v25[0];
            *a3 = *(_DWORD *)(*(_QWORD *)(v23 + 2576) + 112LL) & 0x2000000;
            *((_QWORD *)v14 + 64) = *(_QWORD *)(v13 + 2576);
            if ( *a3 )
            {
              *((_QWORD *)v25[0] + 66) = *(_QWORD *)(*(_QWORD *)(v23 + 2576) + 56LL);
              DC::bSetDefaultRegion(v25[0]);
            }
            v24 = 0LL;
            v15 = *(__int64 (__fastcall **)(__int64, LPCWSTR, _QWORD))(v23 + 3000);
            if ( (*(_DWORD *)(v23 + 56) & 0x8000) != 0 )
            {
              v24 = v25;
              XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v25);
            }
            if ( gUMPDSecurityLevel == 2
              || gUMPDSecurityLevel
              && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v13, v11, v12),
                  (unsigned int)bIsProcessLocalSystem(CurrentProcess))
              || v15 )
            {
              v18 = *(_QWORD *)(v23 + 2576);
              if ( v18 )
                v19 = v18 + 24;
              else
                v19 = 0LL;
              v17 = v15(v19, a2->lpszDocName, a4);
            }
            else
            {
              if ( gfUMPDDebug )
                DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreStartDocInternal:!pfnDrvstartDoc\n", 1708);
              v17 = 0;
            }
            RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v24);
            v20 = v25[0];
            if ( *((_DWORD *)v25[0] + 621) != -1 )
            {
              *(_DWORD *)v22 = *((_DWORD *)v25[0] + 621);
              GreExtEscape(a1, 17, 4, v22, 0, 0LL);
              *((_DWORD *)v25[0] + 621) = -1;
              v20 = v25[0];
            }
            if ( (*((_DWORD *)v20 + 9) & 0x400) != 0 )
            {
              *(_WORD *)v22 = 1;
              GreExtEscape(a1, 33, 2, v22, 0, 0LL);
              *((_DWORD *)v25[0] + 9) &= ~0x400u;
              v20 = v25[0];
            }
            if ( v17 )
            {
              v8 = a4;
              *((_DWORD *)v20 + 30) = *((_DWORD *)v20 + 29);
            }
            RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS((XDCOBJ **)&v24);
          }
        }
        else
        {
          v8 = -1;
        }
      }
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v25);
  return v8;
}
