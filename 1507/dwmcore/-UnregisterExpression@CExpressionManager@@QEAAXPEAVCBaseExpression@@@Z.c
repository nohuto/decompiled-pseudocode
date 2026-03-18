/*
 * XREFs of ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x180102CB8
 * Callers:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x18010D564 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?ProcessSetBindingBroken@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18010E230 (-ProcessSetBindingBroken@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SET.c)
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x18010E2D8 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x180100F74 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x1801021C0 (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

void __fastcall CExpressionManager::UnregisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  int v2; // r8d
  struct _RTL_GENERIC_TABLE *v3; // r15
  int v4; // r9d
  _QWORD *Element; // rax
  _QWORD *v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v12; // rax
  int v13[10]; // [rsp+20h] [rbp-28h] BYREF
  struct CBaseExpression *v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  v2 = *((_DWORD *)a2 + 26);
  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 168);
  v4 = *((_DWORD *)a2 + 27);
  v13[0] = *((_DWORD *)a2 + 24);
  v13[1] = v2;
  v13[2] = v4;
  Element = CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 168),
              v13);
  v8 = Element;
  if ( Element )
  {
    v9 = Element[2];
    v10 = v9;
    while ( v9 )
    {
      if ( *(struct CBaseExpression **)(v9 + 8) == a2 )
      {
        v11 = v9 == Element[2];
        v12 = *(_QWORD *)(v9 + 16);
        if ( v11 )
          v8[2] = v12;
        else
          *(_QWORD *)(v10 + 16) = v12;
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v9);
        break;
      }
      v10 = v9;
      v9 = *(_QWORD *)(v9 + 16);
    }
    if ( !v8[2] )
      RtlDeleteElementGenericTable(v3, v8);
    DynArray<CBaseExpression *,1>::Remove((__int64 *)this + 13, (__int64 *)&v14);
  }
  else
  {
    *((_BYTE *)a2 + 100) = 0;
  }
}
