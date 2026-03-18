/*
 * XREFs of ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x180087B00
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180019620 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 *     ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180019C70 (-ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SET.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IIW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180088BC0 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IIW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelM.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x180088DA0 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180088FE0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?Stop@CScrollAnimation@@UEAAJXZ @ 0x18015E860 (-Stop@CScrollAnimation@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x1801377A0 (--1CTargetMapEntry@@QEAA@XZ.c)
 *     ??_GCTargetMapEntry@@QEAAPEAXI@Z @ 0x180137814 (--_GCTargetMapEntry@@QEAAPEAXI@Z.c)
 */

void __fastcall CExpressionManager::UnregisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  int v3; // r8d
  CTargetMapEntry *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // edx
  struct CBaseExpression **v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // edx
  struct CBaseExpression **v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-38h]
  __int64 Buffer; // [rsp+30h] [rbp-28h] BYREF
  int v21; // [rsp+38h] [rbp-20h]
  __int64 v22; // [rsp+40h] [rbp-18h]

  v3 = *((_DWORD *)a2 + 61);
  HIDWORD(v19) = *((_DWORD *)a2 + 60);
  LODWORD(v19) = *((_DWORD *)a2 + 56);
  Buffer = v19;
  v22 = 0LL;
  v21 = v3;
  v5 = (CTargetMapEntry *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 312), &Buffer);
  CTargetMapEntry::~CTargetMapEntry((CTargetMapEntry *)&Buffer);
  if ( v5 )
  {
    v6 = *((_QWORD *)v5 + 2);
    v7 = v6;
    v8 = v6;
    if ( v6 )
    {
      while ( *(struct CBaseExpression **)(v7 + 8) != a2 )
      {
        v8 = v7;
        v7 = *(_QWORD *)(v7 + 16);
        if ( !v7 )
          goto LABEL_11;
      }
      v9 = v7 == v6;
      v10 = *(_QWORD *)(v7 + 16);
      if ( v9 )
        *((_QWORD *)v5 + 2) = v10;
      else
        *(_QWORD *)(v8 + 16) = v10;
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    }
LABEL_11:
    if ( !*((_QWORD *)v5 + 2) )
    {
      CTargetMapEntry::`scalar deleting destructor'(v5, v7);
      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 312), v5);
    }
  }
  else
  {
    *((_BYTE *)a2 + 228) = 0;
  }
  v11 = 0;
  v12 = 32LL * *((int *)this + 45);
  v13 = *(_DWORD *)((char *)this + v12 + 208);
  v14 = *(struct CBaseExpression ***)((char *)this + v12 + 184);
  if ( v13 )
  {
    do
    {
      if ( a2 == *v14 )
        break;
      ++v11;
      ++v14;
    }
    while ( v11 < v13 );
  }
  if ( v11 < v13 )
    *(_QWORD *)(*(_QWORD *)((char *)this + v12 + 184) + 8LL * v11) = 0LL;
  if ( (*((_BYTE *)this + 384) & 1) != 0 )
  {
    v15 = 0;
    v16 = 32LL * (1 - *((_DWORD *)this + 45));
    v17 = *(_DWORD *)((char *)this + v16 + 208);
    v18 = *(struct CBaseExpression ***)((char *)this + v16 + 184);
    if ( v17 )
    {
      do
      {
        if ( a2 == *v18 )
          break;
        ++v15;
        ++v18;
      }
      while ( v15 < v17 );
    }
    if ( v15 < v17 )
      *(_QWORD *)(*(_QWORD *)((char *)this + v16 + 184) + 8LL * v15) = 0LL;
  }
}
