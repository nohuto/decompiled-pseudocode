/*
 * XREFs of ??1CExpressionManager@@UEAA@XZ @ 0x1801005CC
 * Callers:
 *     ??_ECExpressionManager@@UEAAPEAXI@Z @ 0x180100670 (--_ECExpressionManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1CExpressionValueStack@@UEAA@XZ @ 0x18010064C (--1CExpressionValueStack@@UEAA@XZ.c)
 */

void __fastcall CExpressionManager::~CExpressionManager(void **this)
{
  struct _RTL_GENERIC_TABLE *i; // rdi
  PVOID v3; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *this = &CExpressionManager::`vftable';
  for ( i = (struct _RTL_GENERIC_TABLE *)(this + 21); ; RtlDeleteElementGenericTable(i, v3) )
  {
    RestartKey = 0LL;
    v3 = RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    if ( !v3 )
      break;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 17);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 13);
  CExpressionValueStack::~CExpressionValueStack((CExpressionValueStack *)(this + 5));
  *this = &CMILRefCountBase::`vftable';
}
