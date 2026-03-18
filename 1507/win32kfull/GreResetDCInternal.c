/*
 * XREFs of GreResetDCInternal @ 0x1C0293F34
 * Callers:
 *     NtGdiResetDC @ 0x1C02A82A0 (NtGdiResetDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bHasSurface@XDCOBJ@@QEAAHXZ @ 0x1C026142C (-bHasSurface@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GreResetDCInternal(HDC a1, __int64 a2, int *a3, __int64 a4, __int64 a5)
{
  int *v6; // r12
  int v7; // r14d
  HDC v8; // r15
  unsigned int v9; // edi
  DC *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  BOOL HasSurface; // esi
  BOOL v15; // r12d
  HDC v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  DC *v19; // rdx
  __int64 v20; // rcx
  void (__fastcall *v21)(_QWORD, _QWORD); // rax
  MLOCKFAST *v22; // rcx
  DC *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // rcx
  int v29; // [rsp+28h] [rbp-81h]
  __int64 v30; // [rsp+58h] [rbp-51h] BYREF
  DC *v31[6]; // [rsp+60h] [rbp-49h] BYREF
  DC *v32[13]; // [rsp+90h] [rbp-19h] BYREF

  v6 = a3;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v31, a1);
  v10 = v31[0];
  if ( !v31[0] || *((_WORD *)v31[0] + 6) > 1u )
  {
    EngSetLastError(6u);
LABEL_25:
    HasSurface = v30;
    goto LABEL_20;
  }
  v7 = *((_DWORD *)v31[0] + 9) & 0x800;
  if ( v7 )
  {
    DC::bMakeInfoDC(v31[0], 0);
    v10 = v31[0];
  }
  v11 = *((_QWORD *)v10 + 6);
  v12 = *(_QWORD *)(v11 + 1736);
  *(_QWORD *)(v11 + 1736) = 0LL;
  v30 = v12;
  if ( (*((_DWORD *)v31[0] + 9) & 0x100) != 0 || *((_DWORD *)v31[0] + 8) == 1 || (*(_DWORD *)(v11 + 56) & 0x80u) == 0 )
    goto LABEL_25;
  HasSurface = XDCOBJ::bHasSurface((XDCOBJ *)v31);
  v15 = *(_DWORD *)(v13 + 120) > 0;
  if ( XDCOBJ::bCleanDC((XDCOBJ *)v31, 0) )
  {
    if ( *(_DWORD *)(v11 + 32) == 1 )
    {
      v16 = (HDC)hdcOpenDCW(&qword_1C015E270, a2, 0LL, 0LL, *(_QWORD *)(v11 + 2584), v30, a4, a5, 0);
      v8 = v16;
      if ( v16 )
      {
        *(_QWORD *)(v11 + 2584) = 0LL;
        DCOBJ::DCOBJ((DCOBJ *)v32, v16);
        v19 = v32[0];
        if ( v32[0] )
        {
          if ( v15 )
          {
            *((_DWORD *)v32[0] + 30) = *((_DWORD *)v32[0] + 29);
            v19 = v32[0];
          }
          *((_QWORD *)v19 + 311) = *((_QWORD *)v31[0] + 311);
          *((_QWORD *)v31[0] + 311) = 0LL;
          v20 = *((_QWORD *)v31[0] + 312);
          *((_QWORD *)v32[0] + 312) = v20;
          *((_QWORD *)v31[0] + 312) = 0LL;
          v21 = *(void (__fastcall **)(_QWORD, _QWORD))(v11 + 2776);
          if ( v21 )
            v21(*(_QWORD *)(v11 + 1824), *(_QWORD *)(*((_QWORD *)v32[0] + 6) + 1824LL));
          GreAcquireHmgrSemaphore(v20, v19, v17, v18);
          LOBYTE(v29) = 1;
          HmgSwapLockedHandleContents(a1, 0LL, v8, 0LL, v29);
          GreReleaseHmgrSemaphore(v22);
          v9 = 1;
        }
        else
        {
          EngSetLastError(6u);
        }
        DCOBJ::~DCOBJ((DCOBJ *)v32);
      }
    }
  }
  v6 = a3;
LABEL_20:
  DCOBJ::~DCOBJ((DCOBJ *)v31);
  if ( v9 )
  {
    bDeleteDCInternal(v8, 1LL, 0LL);
    DCOBJ::DCOBJ((DCOBJ *)v32, a1);
    v23 = v32[0];
    if ( !v32[0] )
    {
      EngSetLastError(6u);
LABEL_23:
      v9 = 0;
LABEL_40:
      DCOBJ::~DCOBJ((DCOBJ *)v32);
      return v9;
    }
    v30 = *((_QWORD *)v32[0] + 6);
    if ( HasSurface )
    {
      if ( !PDEVOBJ::bMakeSurface((PDEVOBJ *)&v30, 0LL) )
        goto LABEL_23;
      *((_QWORD *)v32[0] + 64) = *(_QWORD *)(v30 + 2576);
      v24 = v30;
      v25 = *(_QWORD *)(v30 + 2576);
      v26 = (*(_DWORD *)(v25 + 112) & 0x2000000) == 0;
      *v6 = *(_DWORD *)(v25 + 112) & 0x2000000;
      if ( !v26 )
        *((_QWORD *)v32[0] + 66) = *(_QWORD *)(*(_QWORD *)(v24 + 2576) + 56LL);
      DC::bSetDefaultRegion(v32[0]);
      if ( *(_QWORD *)(v30 + 3000) )
      {
        v27 = *(_QWORD *)(v30 + 2576);
        if ( v27 )
          v27 += 24LL;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v30 + 3000))(v27, 0LL, 0LL);
      }
      else
      {
        v9 = 0;
      }
      v23 = v32[0];
    }
    else
    {
      *v6 = 0;
    }
    if ( v9 && v7 )
      DC::bMakeInfoDC(v23, 1);
    goto LABEL_40;
  }
  return v9;
}
