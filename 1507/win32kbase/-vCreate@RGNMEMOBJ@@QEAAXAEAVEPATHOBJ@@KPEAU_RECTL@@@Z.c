/*
 * XREFs of ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C004B680
 * Callers:
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00690C8 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     bConstructGET @ 0x1C000ED40 (bConstructGET.c)
 *     vMoveNewEdges @ 0x1C0011EE0 (vMoveNewEdges.c)
 *     ?bFlatten@EPATHOBJ@@QEAAHXZ @ 0x1C0025A90 (-bFlatten@EPATHOBJ@@QEAAHXZ.c)
 *     ?vCloseAllFigures@EPATHOBJ@@QEAAXXZ @ 0x1C0025C00 (-vCloseAllFigures@EPATHOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C003E6C0 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C004B530 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C004BA64 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C004BAF4 (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 *     AllocateObject @ 0x1C004C110 (AllocateObject.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     vAdvanceAETEdges @ 0x1C004C910 (vAdvanceAETEdges.c)
 *     vXSortAETEdges @ 0x1C004C950 (vXSortAETEdges.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     ?bDeleteRGNOBJ@RGNOBJ@@QEAAHXZ @ 0x1C00A4064 (-bDeleteRGNOBJ@RGNOBJ@@QEAAHXZ.c)
 *     UIntAdd @ 0x1C00B125C (UIntAdd.c)
 *     UIntMult @ 0x1C00B1274 (UIntMult.c)
 */

void __fastcall RGNMEMOBJ::vCreate(RGNMEMOBJ *this, struct EPATHOBJ *a2, unsigned int a3, struct _RECTL *a4)
{
  bool v4; // zf
  UINT v8; // edx
  UINT v9; // edi
  __m128i *v10; // rcx
  _DWORD *v11; // r9
  struct EDGE *v12; // r14
  int v13; // r15d
  __m128i *v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // xmm0_8
  unsigned __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 Object; // rax
  unsigned int v22; // edi
  _QWORD *v23; // rax
  int v24; // esi
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v26; // r13d
  __int64 v27; // rax
  int v28; // edx
  int v29; // eax
  _DWORD *v30; // r9
  UINT puResult; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v32; // [rsp+24h] [rbp-DCh]
  _QWORD *v33; // [rsp+28h] [rbp-D8h] BYREF
  int v34; // [rsp+34h] [rbp-CCh]
  int v35; // [rsp+38h] [rbp-C8h]
  _QWORD v36[7]; // [rsp+58h] [rbp-A8h] BYREF
  char v37; // [rsp+90h] [rbp-70h] BYREF

  v4 = *((_QWORD *)a2 + 1) == 0LL;
  v32 = a3;
  if ( v4 )
    return;
  *(_QWORD *)this = 0LL;
  if ( (*(_DWORD *)a2 & 1) != 0 && !(unsigned int)EPATHOBJ::bFlatten(a2) )
    return;
  EPATHOBJ::vCloseAllFigures(a2);
  v9 = *((_DWORD *)a2 + 1);
  if ( v9 < 2 )
    return;
  if ( !a4
    || (v10 = (__m128i *)*((_QWORD *)a2 + 1), a4->top < (int)HIDWORD(v10[3].m128i_i64[0]))
    && a4->bottom > _mm_srli_si128(v10[48LL], 8).m128i_i32[1] )
  {
    if ( (unsigned int)RGNMEMOBJ::bFastFillWrapper(this, a2) )
    {
      RGNOBJ::vTighten(this);
      v11 = *(_DWORD **)this;
      if ( (((*(_DWORD *)(*(_QWORD *)this + 88LL) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
        || (((v11[25] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
        || (((v11[24] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
        || (((v11[23] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
      {
        RGNOBJ::bDeleteRGNOBJ(this);
      }
      return;
    }
  }
  if ( v9 >= 0x14 )
  {
    if ( UIntAdd(v9, v8, &puResult) < 0 )
      return;
    if ( UIntMult(0x30u, puResult, &puResult) < 0 )
      return;
    v12 = (struct EDGE *)PALLOCMEM2(puResult);
    if ( !v12 )
      return;
    v13 = 1;
  }
  else
  {
    v12 = (struct EDGE *)&v37;
    v13 = 0;
  }
  v14 = (__m128i *)*((_QWORD *)a2 + 1);
  v15 = HIDWORD(v14[3].m128i_i64[0]);
  v16 = _mm_srli_si128(v14[3], 8).m128i_u64[0];
  v17 = HIDWORD(v16);
  if ( SHIDWORD(v16) < (int)v15 )
    goto LABEL_53;
  if ( a4 )
  {
    if ( (int)v15 <= a4->top )
      LODWORD(v15) = a4->top;
    if ( SHIDWORD(v16) >= a4->bottom )
      LODWORD(v17) = a4->bottom;
  }
  v18 = 0LL;
  v19 = (int)v17 - (__int64)(int)v15;
  if ( v19 > 0 )
    v18 = v19;
  v20 = 32 * (v18 >> 4) + 536;
  if ( v20 > 0x7FFFFFFF )
    goto LABEL_53;
  Object = AllocateObject((unsigned int)v20);
  *(_QWORD *)this = Object;
  if ( !Object )
    goto LABEL_53;
  *(_DWORD *)(Object + 24) = v20;
  v22 = 0x80000000;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + 104LL;
  v23 = (_QWORD *)(*(_QWORD *)this + 48LL);
  v23[1] = v23;
  *v23 = v23;
  v24 = bConstructGET((__int64)a2, (__int64)v36, v12, a4);
  if ( !v24 )
    goto LABEL_52;
  CurrentThread = KeGetCurrentThread();
  v35 = 0;
  v26 = v32;
  v33 = &v33;
  v34 = 0x7FFFFFFF;
  while ( !PsIsThreadTerminating(CurrentThread) )
  {
    if ( v33 != &v33 )
    {
      vAdvanceAETEdges(&v33);
      if ( v33 != &v33 )
      {
        if ( (_QWORD **)*v33 != &v33 )
          vXSortAETEdges(&v33);
LABEL_40:
        v27 = v36[0];
        goto LABEL_41;
      }
    }
    v27 = v36[0];
    if ( (_QWORD *)v36[0] == v36 )
      goto LABEL_46;
    v28 = v22;
    v22 = *(_DWORD *)(v36[0] + 16LL);
    if ( v22 != v28 )
    {
      if ( !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v28, v22) )
        goto LABEL_52;
      goto LABEL_40;
    }
LABEL_41:
    if ( *(_DWORD *)(v27 + 16) == v22 )
      vMoveNewEdges((__int64)v36, &v33, v22);
    v29 = RGNMEMOBJ::bAddScans(this, v22++, (struct EDGE *)&v33, v26);
    v24 = v29;
    if ( !v29 )
      goto LABEL_52;
  }
  v24 = 0;
LABEL_46:
  if ( !v24
    || !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v22, 0x7FFFFFFF)
    || (RGNOBJ::vTighten(this),
        v30 = *(_DWORD **)this,
        (((*(_DWORD *)(*(_QWORD *)this + 88LL) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0)
    || (((v30[25] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((v30[24] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((v30[23] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
LABEL_52:
    RGNOBJ::bDeleteRGNOBJ(this);
  }
LABEL_53:
  if ( v13 )
    Win32FreePool();
}
