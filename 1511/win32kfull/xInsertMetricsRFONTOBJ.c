/*
 * XREFs of xInsertMetricsRFONTOBJ @ 0x1C001AE8C
 * Callers:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0023760 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C01C2F10 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C001B08C (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1C0023620 (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C00246E0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall xInsertMetricsRFONTOBJ(RFONTOBJ *this, _QWORD *a2, unsigned __int16 a3)
{
  __int64 v3; // rax
  unsigned int v5; // r14d
  __int64 v6; // rbx
  unsigned int v7; // r12d
  __int64 v8; // rdi
  __int64 v9; // r15
  unsigned int v10; // eax
  __int64 v11; // rbx
  bool v12; // zf
  _BYTE *v13; // r13
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD, _QWORD, _BYTE *, _QWORD, _DWORD); // rbx
  int v15; // ebx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  __int64 v19; // rax
  unsigned int v20; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int16 v21; // [rsp+48h] [rbp-81h] BYREF
  _QWORD *v22; // [rsp+50h] [rbp-79h]
  __int64 v23; // [rsp+58h] [rbp-71h] BYREF
  __int64 v24; // [rsp+60h] [rbp-69h]
  _BYTE v25[64]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-19h] BYREF
  _KAPC_STATE ApcState; // [rsp+B8h] [rbp-11h] BYREF

  v3 = *(_QWORD *)this;
  v22 = a2;
  v5 = 1;
  v6 = *(_QWORD *)(v3 + 480);
  if ( (*(_DWORD *)(v3 + 68) & 2) != 0 )
  {
    v21 = a3;
    RFONTOBJ::vXlatGlyphArray(this, &v21, 1u, &v20, 0, 0);
    a2 = v22;
    v7 = v20;
  }
  else
  {
    v7 = a3;
  }
  v8 = *(_QWORD *)this;
  if ( v7 == *(_DWORD *)(*(_QWORD *)this + 456LL) )
  {
    v19 = *(_QWORD *)(v6 + 8);
    if ( v19 )
    {
      *a2 = v19;
      return v5;
    }
  }
  if ( (unsigned int)RFONTOBJ::bCheckMetricsCache(this) )
  {
    v9 = *(_QWORD *)this;
    v10 = 1;
    v11 = *(_QWORD *)(*(_QWORD *)this + 80LL);
    v23 = v11;
    v12 = *(_DWORD *)(v9 + 72) == 2;
    *(_QWORD *)v25 = 0LL;
    if ( v12 )
      v10 = 2;
    v20 = v10;
    memset(&v25[8], 0, 0x38uLL);
    v13 = v25;
    if ( !*(_DWORD *)(v9 + 652) )
      v13 = *(_BYTE **)(v8 + 536);
    v14 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _BYTE *, _QWORD, _DWORD))(v11 + 2944);
    v24 = *(_QWORD *)(v9 + 104);
    if ( !gpepCSRSS )
      return 0;
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v26, (struct PDEVOBJ *)&v23);
    v15 = v14(v24, v9, v20, v7, v13, 0LL, 0);
    if ( v26 )
      KeUnstackDetachProcess(&ApcState);
    if ( v15 == -1 )
    {
      return 0;
    }
    else
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
      {
        v16 = *(_QWORD *)(v8 + 536);
        *(_OWORD *)v16 = *(_OWORD *)v25;
        *(_QWORD *)(v16 + 16) = *(_QWORD *)&v25[16];
      }
      v17 = v22;
      **(_QWORD **)(v8 + 536) = 0LL;
      *v17 = *(_QWORD *)(v8 + 536);
      if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
        *(_QWORD *)(v8 + 536) += 24LL;
      else
        *(_QWORD *)(v8 + 536) += 64LL;
    }
    return v5;
  }
  return 0LL;
}
