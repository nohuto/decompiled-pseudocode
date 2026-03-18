/*
 * XREFs of GreResetDCInternal @ 0x1C02931B4
 * Callers:
 *     NtGdiResetDC @ 0x1C02A9530 (NtGdiResetDC.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
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
  BOOL v13; // esi
  BOOL v14; // r12d
  HDC v15; // rax
  DC *v16; // rdx
  void (__fastcall *v17)(_QWORD, _QWORD); // rax
  MLOCKFAST *v18; // rcx
  DC *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  bool v22; // zf
  __int64 v23; // rcx
  int v25; // [rsp+28h] [rbp-81h]
  __int64 v26; // [rsp+58h] [rbp-51h] BYREF
  DC *v27[2]; // [rsp+60h] [rbp-49h] BYREF
  char v28[32]; // [rsp+70h] [rbp-39h] BYREF
  DC *v29[2]; // [rsp+90h] [rbp-19h] BYREF
  _BYTE v30[88]; // [rsp+A0h] [rbp-9h] BYREF

  v6 = a3;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  v10 = v27[0];
  if ( !v27[0] || *((_WORD *)v27[0] + 6) > 1u )
  {
    EngSetLastError(6u);
LABEL_25:
    v13 = v26;
    goto LABEL_20;
  }
  v7 = *((_DWORD *)v27[0] + 9) & 0x800;
  if ( v7 )
  {
    DC::bMakeInfoDC(v27[0], 0);
    v10 = v27[0];
  }
  v11 = *((_QWORD *)v10 + 6);
  v12 = *(_QWORD *)(v11 + 1736);
  *(_QWORD *)(v11 + 1736) = 0LL;
  v26 = v12;
  if ( (*((_DWORD *)v27[0] + 9) & 0x100) != 0 || *((_DWORD *)v27[0] + 8) == 1 || (*(_DWORD *)(v11 + 56) & 0x80u) == 0 )
    goto LABEL_25;
  v13 = *((_QWORD *)v27[0] + 64) != 0LL;
  v14 = *((_DWORD *)v27[0] + 30) > 0;
  if ( XDCOBJ::bCleanDC((XDCOBJ *)v27, 0) )
  {
    if ( *(_DWORD *)(v11 + 32) == 1 )
    {
      v15 = (HDC)hdcOpenDCW(&qword_1C015B240, a2, 0LL, 0LL, *(_QWORD *)(v11 + 2584), v26, a4, a5, 0);
      v8 = v15;
      if ( v15 )
      {
        *(_QWORD *)(v11 + 2584) = 0LL;
        DCOBJ::DCOBJ((DCOBJ *)v29, v15);
        v16 = v29[0];
        if ( v29[0] )
        {
          if ( v14 )
          {
            *((_DWORD *)v29[0] + 30) = *((_DWORD *)v29[0] + 29);
            v16 = v29[0];
          }
          *((_QWORD *)v16 + 311) = *((_QWORD *)v27[0] + 311);
          *((_QWORD *)v27[0] + 311) = 0LL;
          *((_QWORD *)v29[0] + 312) = *((_QWORD *)v27[0] + 312);
          *((_QWORD *)v27[0] + 312) = 0LL;
          v17 = *(void (__fastcall **)(_QWORD, _QWORD))(v11 + 2768);
          if ( v17 )
            v17(*(_QWORD *)(v11 + 1824), *(_QWORD *)(*((_QWORD *)v29[0] + 6) + 1824LL));
          GreAcquireHmgrSemaphore();
          LOBYTE(v25) = 1;
          HmgSwapLockedHandleContents(a1, 0LL, v8, 0LL, v25);
          GreReleaseHmgrSemaphore(v18);
          v9 = 1;
        }
        else
        {
          EngSetLastError(6u);
        }
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v29);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v30);
      }
    }
  }
  v6 = a3;
LABEL_20:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v27);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v28);
  if ( v9 )
  {
    bDeleteDCInternal(v8, 1LL, 0LL, 0LL);
    DCOBJ::DCOBJ((DCOBJ *)v29, a1);
    v19 = v29[0];
    if ( !v29[0] )
    {
      EngSetLastError(6u);
LABEL_23:
      v9 = 0;
LABEL_40:
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v29);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v30);
      return v9;
    }
    v26 = *((_QWORD *)v29[0] + 6);
    if ( v13 )
    {
      if ( !PDEVOBJ::bMakeSurface((PDEVOBJ *)&v26, 0LL) )
        goto LABEL_23;
      *((_QWORD *)v29[0] + 64) = *(_QWORD *)(v26 + 2576);
      v20 = v26;
      v21 = *(_QWORD *)(v26 + 2576);
      v22 = (*(_DWORD *)(v21 + 112) & 0x2000000) == 0;
      *v6 = *(_DWORD *)(v21 + 112) & 0x2000000;
      if ( !v22 )
        *((_QWORD *)v29[0] + 66) = *(_QWORD *)(*(_QWORD *)(v20 + 2576) + 56LL);
      DC::bSetDefaultRegion(v29[0]);
      if ( *(_QWORD *)(v26 + 2992) )
      {
        v23 = *(_QWORD *)(v26 + 2576);
        if ( v23 )
          v23 += 24LL;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v26 + 2992))(v23, 0LL, 0LL);
      }
      else
      {
        v9 = 0;
      }
      v19 = v29[0];
    }
    else
    {
      *v6 = 0;
    }
    if ( v9 && v7 )
      DC::bMakeInfoDC(v19, 1);
    goto LABEL_40;
  }
  return v9;
}
