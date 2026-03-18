/*
 * XREFs of ??1CExpressionManager@@UEAA@XZ @ 0x180119450
 * Callers:
 *     ??_ECExpressionManager@@UEAAPEAXI@Z @ 0x1801194F0 (--_ECExpressionManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1CExpressionValueStack@@UEAA@XZ @ 0x1801194D4 (--1CExpressionValueStack@@UEAA@XZ.c)
 */

void __fastcall CExpressionManager::~CExpressionManager(void **this)
{
  struct _RTL_GENERIC_TABLE *i; // rdi
  PVOID v3; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *this = &CExpressionManager::`vftable';
  for ( i = (struct _RTL_GENERIC_TABLE *)(this + 31); ; RtlDeleteElementGenericTable(i, v3) )
  {
    RestartKey = 0LL;
    v3 = RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    if ( !v3 )
      break;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 27);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 23);
  CExpressionValueStack::~CExpressionValueStack((CExpressionValueStack *)(this + 5));
  *this = &CMILRefCountBase::`vftable';
}
