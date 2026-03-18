/*
 * XREFs of ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x180087CA8
 * Callers:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IIW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180088BC0 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IIW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x1800ADE14 (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     ?FindElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@I@Z @ 0x1800B2BE4 (-FindElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x1801377A0 (--1CTargetMapEntry@@QEAA@XZ.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x180137900 (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CExpressionManager::RegisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  __int64 v2; // rax
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  unsigned int v7; // eax
  struct CBaseExpression *v8; // rax
  __int64 v9; // r14
  _QWORD *inserted; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int64 Element; // rax
  unsigned int v16; // [rsp+20h] [rbp-50h]
  int v17; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-2Ch]
  unsigned int v19; // [rsp+48h] [rbp-28h]
  __int64 v20; // [rsp+50h] [rbp-20h]
  unsigned __int64 Buffer; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+60h] [rbp-10h]
  __int64 v23; // [rsp+68h] [rbp-8h]
  unsigned __int8 NewElement; // [rsp+90h] [rbp+20h] BYREF
  struct CBaseExpression *v25; // [rsp+98h] [rbp+28h] BYREF

  v25 = a2;
  v2 = *((unsigned int *)this + 45);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0LL;
  v4 = DynArray<CBaseExpression *,1>::AddMultipleAndSet((char *)this + 32 * v2 + 184, &v25);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x61u);
    goto LABEL_23;
  }
  v6 = *((_DWORD *)this + 4);
  v7 = (*(__int64 (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v25 + 120LL))(v25);
  if ( v7 > v6 )
    v6 = v7;
  v8 = v25;
  v23 = 0LL;
  *((_DWORD *)this + 4) = v6;
  v18 = *((_DWORD *)v8 + 60);
  v19 = *((_DWORD *)v8 + 61);
  v9 = *((_QWORD *)v8 + 31);
  LODWORD(v8) = *((_DWORD *)v8 + 56);
  v22 = v19;
  Buffer = __PAIR64__(v18, (unsigned int)v8);
  v17 = (int)v8;
  inserted = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 312), &Buffer);
  CTargetMapEntry::~CTargetMapEntry((CTargetMapEntry *)&Buffer);
  if ( !inserted )
  {
    inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 312), &v17, 0x18u, &NewElement);
    if ( !inserted )
    {
      v16 = 129;
LABEL_12:
      v5 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v16);
      DynArray<CBaseExpression *,1>::Remove((char *)this + 32 * *((unsigned int *)this + 45) + 184, &v25);
      goto LABEL_23;
    }
  }
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    24LL);
  v12 = v11;
  if ( v11 )
  {
    *v11 = 0LL;
    v11[1] = 0LL;
    v11[2] = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
    v16 = 133;
    goto LABEL_12;
  }
  *v12 = v9;
  v12[1] = v25;
  v12[2] = inserted[2];
  inserted[2] = v12;
  if ( (*((_BYTE *)this + 384) & 4) == 0 )
  {
    v13 = (_QWORD *)*((_QWORD *)v25 + 29);
    if ( v13 )
      v13 = (_QWORD *)*v13;
    if ( v13 )
    {
      Element = CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(v13 + 5, v19);
      if ( Element )
        Element = *(_QWORD *)(Element + 8);
      if ( Element )
        *((_BYTE *)this + 384) |= 4u;
    }
  }
  v5 = 0;
LABEL_23:
  CTargetMapEntry::~CTargetMapEntry((CTargetMapEntry *)&v17);
  return v5;
}
