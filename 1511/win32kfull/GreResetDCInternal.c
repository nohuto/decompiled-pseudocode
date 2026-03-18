/*
 * XREFs of GreResetDCInternal @ 0x1C0293A78
 * Callers:
 *     NtGdiResetDC @ 0x1C02A7AB0 (NtGdiResetDC.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreResetDCInternal(HDC a1, __int64 a2, int *a3, __int64 a4, __int64 a5)
{
  int *v6; // r12
  int v7; // r14d
  HDC v8; // r15
  unsigned int v9; // edi
  DC *v10; // rbx
  int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rax
  BOOL v14; // r12d
  HDC v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  void (__fastcall *v18)(_QWORD, _QWORD); // rax
  DC *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rcx
  int v25; // [rsp+20h] [rbp-50h]
  _QWORD v26[2]; // [rsp+50h] [rbp-20h] BYREF
  DC *v27[2]; // [rsp+60h] [rbp-10h] BYREF

  v6 = a3;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  v10 = v27[0];
  if ( !v27[0] )
  {
    EngSetLastError(6u);
LABEL_3:
    v11 = v26[0];
    goto LABEL_21;
  }
  v7 = *((_DWORD *)v27[0] + 9) & 0x800;
  if ( v7 )
  {
    DC::bMakeInfoDC(v27[0], 0);
    v10 = v27[0];
  }
  v12 = *((_QWORD *)v10 + 6);
  v13 = *(_QWORD *)(v12 + 1736);
  *(_QWORD *)(v12 + 1736) = 0LL;
  v26[0] = v13;
  if ( (*((_DWORD *)v27[0] + 9) & 0x100) != 0 || *((_DWORD *)v27[0] + 8) == 1 || (*(_DWORD *)(v12 + 56) & 0x80u) == 0 )
    goto LABEL_3;
  v11 = *((_QWORD *)v27[0] + 64) != 0LL;
  v14 = *((_DWORD *)v27[0] + 30) > 0;
  if ( XDCOBJ::bCleanDC((XDCOBJ *)v27, 0) )
  {
    if ( *(_DWORD *)(v12 + 32) == 1 )
    {
      v15 = (HDC)hdcOpenDCW(&word_1C0153C60, a2, 0LL, 0LL, *(_QWORD *)(v12 + 2584), v26[0], a4, a5, 0);
      v8 = v15;
      if ( v15 )
      {
        *(_QWORD *)(v12 + 2584) = 0LL;
        DCOBJ::DCOBJ((DCOBJ *)v26, v15);
        v16 = (_QWORD *)v26[0];
        if ( v26[0] )
        {
          if ( v14 )
            *(_DWORD *)(v26[0] + 120LL) = *(_DWORD *)(v26[0] + 116LL);
          v16[308] = *((_QWORD *)v27[0] + 308);
          *((_QWORD *)v27[0] + 308) = 0LL;
          v17 = *((_QWORD *)v27[0] + 309);
          v16[309] = v17;
          *((_QWORD *)v27[0] + 309) = 0LL;
          v18 = *(void (__fastcall **)(_QWORD, _QWORD))(v12 + 2776);
          if ( v18 )
            v18(*(_QWORD *)(v12 + 1824), *(_QWORD *)(v16[6] + 1824LL));
          GreAcquireHmgrSemaphore(v17, v16);
          LOBYTE(v25) = 1;
          HmgSwapLockedHandleContents(a1, 0LL, v8, 0LL, v25);
          GreReleaseHmgrSemaphore();
          v9 = 1;
        }
        else
        {
          EngSetLastError(6u);
        }
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v26);
      }
    }
  }
  v6 = a3;
LABEL_21:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v27);
  if ( v9 )
  {
    bDeleteDCInternal(v8, 1LL, 0LL);
    DCOBJ::DCOBJ((DCOBJ *)v27, a1);
    v19 = v27[0];
    if ( !v27[0] )
    {
      EngSetLastError(6u);
LABEL_24:
      v9 = 0;
LABEL_38:
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v27);
      return v9;
    }
    v26[0] = *((_QWORD *)v27[0] + 6);
    if ( v11 )
    {
      if ( !PDEVOBJ::bMakeSurface((PDEVOBJ *)v26, 0LL) )
        goto LABEL_24;
      *((_QWORD *)v19 + 64) = *(_QWORD *)(v26[0] + 2576LL);
      v20 = v26[0];
      v21 = *(_QWORD *)(v26[0] + 2576LL);
      v22 = (*(_DWORD *)(v21 + 112) & 0x2000000) == 0;
      *v6 = *(_DWORD *)(v21 + 112) & 0x2000000;
      if ( !v22 )
      {
        *((_QWORD *)v19 + 66) = *(_QWORD *)(*(_QWORD *)(v20 + 2576) + 56LL);
        DC::bSetDefaultRegion(v19);
        v20 = v26[0];
      }
      if ( *(_QWORD *)(v20 + 3000) )
      {
        v23 = *(_QWORD *)(v20 + 2576);
        if ( v23 )
          v23 += 24LL;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v20 + 3000))(v23, 0LL, 0LL);
      }
      else
      {
        v9 = 0;
      }
    }
    else
    {
      *v6 = 0;
    }
    if ( v9 && v7 )
      DC::bMakeInfoDC(v19, 1);
    goto LABEL_38;
  }
  return v9;
}
