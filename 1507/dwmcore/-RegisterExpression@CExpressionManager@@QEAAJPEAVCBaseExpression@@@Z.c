/*
 * XREFs of ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x180101FA8
 * Callers:
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x18010E2D8 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180051AB0 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x180100F74 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x1801021C0 (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CExpressionManager::RegisterExpression(
        CExpressionManager *this,
        struct CBaseExpression *a2,
        __int64 a3)
{
  _QWORD *v3; // r15
  __int64 v4; // rax
  char v5; // r12
  unsigned int v7; // edx
  int v8; // ebx
  int v9; // edi
  unsigned int v10; // esi
  unsigned int v11; // eax
  struct CBaseExpression *v12; // rax
  __int64 v13; // r8
  _QWORD *Element; // rsi
  int v15; // eax
  _QWORD *v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-40h]
  int v19[4]; // [rsp+30h] [rbp-30h] BYREF
  int Buffer; // [rsp+40h] [rbp-20h] BYREF
  int v21; // [rsp+44h] [rbp-1Ch]
  int v22; // [rsp+48h] [rbp-18h]
  __int64 v23; // [rsp+50h] [rbp-10h]
  unsigned __int8 NewElement; // [rsp+A0h] [rbp+40h] BYREF
  struct CBaseExpression *v25; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+50h]

  v25 = a2;
  Buffer = 0;
  v3 = (_QWORD *)((char *)this + 104);
  v4 = *((unsigned int *)this + 32);
  v5 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0LL;
  v7 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
  {
    if ( v7 > *((_DWORD *)this + 31) )
    {
      v15 = DynArrayImpl<1>::AddMultipleAndSet((__int64)this + 104, 8u, a3, &v25);
      v8 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
      v9 = v8;
      if ( v8 < 0 )
        goto LABEL_14;
    }
    else
    {
      *(_QWORD *)(*v3 + 8 * v4) = v25;
      *((_DWORD *)this + 32) = v7;
    }
    v5 = 1;
    v10 = *((_DWORD *)this + 4);
    v11 = (*(__int64 (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v25 + 96LL))(v25);
    if ( v11 > v10 )
      v10 = v11;
    v12 = v25;
    *((_DWORD *)this + 4) = v10;
    v21 = *((_DWORD *)v12 + 26);
    v22 = *((_DWORD *)v12 + 27);
    v13 = *((_QWORD *)v12 + 14);
    LODWORD(v12) = *((_DWORD *)v12 + 24);
    v19[1] = v21;
    v19[2] = v22;
    v26 = v13;
    Buffer = (int)v12;
    v19[0] = (int)v12;
    Element = CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement(
                (struct _RTL_GENERIC_TABLE *)((char *)this + 168),
                v19);
    if ( Element
      || (Element = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 168), &Buffer, 0x18u, &NewElement)) != 0LL )
    {
      v16 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        24LL);
      if ( v16 )
      {
        *v16 = 0LL;
        v16[1] = 0LL;
        v16[2] = 0LL;
      }
      else
      {
        v16 = 0LL;
      }
      if ( v16 )
      {
        v9 = 0;
        *v16 = v26;
        v16[1] = v25;
        v16[2] = Element[2];
        Element[2] = v16;
        goto LABEL_21;
      }
      v18 = 300;
    }
    else
    {
      v18 = 296;
    }
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v18);
LABEL_23:
    DynArray<CBaseExpression *,1>::Remove(v3, &v25);
    return (unsigned int)v9;
  }
  v8 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v9 = -2147024362;
LABEL_14:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x108u);
LABEL_21:
  if ( v9 < 0 && v5 )
    goto LABEL_23;
  return (unsigned int)v9;
}
