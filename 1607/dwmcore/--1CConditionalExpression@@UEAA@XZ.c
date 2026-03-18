/*
 * XREFs of ??1CConditionalExpression@@UEAA@XZ @ 0x180148A50
 * Callers:
 *     ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x180148BD0 (--_ECConditionalExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$DynArray@UConditionExpressionListEntry@CConditionalExpression@@$00@@QEAAJI@Z @ 0x180149394 (-RemoveAt@-$DynArray@UConditionExpressionListEntry@CConditionalExpression@@$00@@QEAAJI@Z.c)
 *     ?UnregisterSources@CConditionalExpression@@MEAAXXZ @ 0x1801494B0 (-UnregisterSources@CConditionalExpression@@MEAAXXZ.c)
 */

void __fastcall CConditionalExpression::~CConditionalExpression(CConditionalExpression *this)
{
  unsigned int i; // edi
  __int64 v3; // rcx

  *(_QWORD *)this = &CConditionalExpression::`vftable';
  CConditionalExpression::UnregisterSources(this);
  for ( i = *((_DWORD *)this + 80);
        (--i & 0x80000000) == 0;
        DynArray<CConditionalExpression::ConditionExpressionListEntry,1>::RemoveAt((char *)this + 296, i) )
  {
    ;
  }
  v3 = *((_QWORD *)this + 41);
  if ( v3 )
  {
    *((_QWORD *)this + 41) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 296);
  CBaseExpression::~CBaseExpression(this);
}
