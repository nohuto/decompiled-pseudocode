/*
 * XREFs of xInsertMetricsRFONTOBJ @ 0x1C00C1D50
 * Callers:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E60C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C01BF598 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1C002E568 (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002F568 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C00C1F54 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00C1FB8 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z @ 0x1C02BBDD0 (-ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z.c)
 */

__int64 __fastcall xInsertMetricsRFONTOBJ(RFONTOBJ *this, _QWORD *a2, unsigned __int16 a3)
{
  __int64 v5; // rbx
  unsigned int v6; // r14d
  unsigned int v7; // r12d
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // r15
  unsigned int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD, _QWORD, _OWORD *, _QWORD, _DWORD); // rbx
  int v15; // ebx
  __int64 v16; // rax
  unsigned __int16 v17; // [rsp+40h] [rbp-99h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-91h] BYREF
  _OWORD *v19; // [rsp+50h] [rbp-89h]
  __int64 v20; // [rsp+58h] [rbp-81h] BYREF
  __int64 v21; // [rsp+60h] [rbp-79h]
  _OWORD v22[4]; // [rsp+70h] [rbp-69h] BYREF
  _BYTE v23[64]; // [rsp+B0h] [rbp-29h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  v6 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)this + 68LL) & 2) != 0 )
  {
    v17 = a3;
    RFONTOBJ::vXlatGlyphArray(this, &v17, 1, &v18, 0, 0);
    v7 = v18;
  }
  else
  {
    v7 = a3;
  }
  v8 = *(_QWORD *)this;
  if ( v7 == *(_DWORD *)(*(_QWORD *)this + 456LL) && (v9 = *(_QWORD *)(v5 + 8)) != 0 )
  {
    *a2 = v9;
  }
  else
  {
    result = RFONTOBJ::bCheckMetricsCache(this);
    if ( !(_DWORD)result )
      return result;
    v11 = *(_QWORD *)this;
    v12 = 1;
    v13 = *(_QWORD *)(*(_QWORD *)this + 80LL);
    v20 = v13;
    if ( *(_DWORD *)(v11 + 72) == 2 )
      v12 = 2;
    v18 = v12;
    memset(v22, 0, sizeof(v22));
    if ( *(_DWORD *)(v11 + 652) )
      v19 = v22;
    else
      v19 = *(_OWORD **)(v8 + 536);
    v14 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _OWORD *, _QWORD, _DWORD))(v13 + 2936);
    v21 = *(_QWORD *)(v11 + 104);
    if ( gpepCSRSS )
    {
      ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v23, (struct PDEVOBJ *)&v20);
      v15 = v14(v21, v11, v18, v7, v19, 0LL, 0);
      if ( ValidateGlyphDataAndBitmap(v15, v18, 0LL) )
      {
        ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v23);
        if ( v15 != -1 )
        {
          if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
          {
            v16 = *(_QWORD *)(v8 + 536);
            *(_OWORD *)v16 = v22[0];
            *(_QWORD *)(v16 + 16) = *(_QWORD *)&v22[1];
          }
          **(_QWORD **)(v8 + 536) = 0LL;
          *a2 = *(_QWORD *)(v8 + 536);
          if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
            *(_QWORD *)(v8 + 536) += 24LL;
          else
            *(_QWORD *)(v8 + 536) += 64LL;
          return v6;
        }
      }
      else
      {
        ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v23);
      }
    }
    return 0;
  }
  return v6;
}
