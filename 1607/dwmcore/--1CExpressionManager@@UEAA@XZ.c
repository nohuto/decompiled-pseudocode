/*
 * XREFs of ??1CExpressionManager@@UEAA@XZ @ 0x1801376EC
 * Callers:
 *     ??_ECExpressionManager@@UEAAPEAXI@Z @ 0x1801377D0 (--_ECExpressionManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800A3238 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_GCTargetMapEntry@@QEAAPEAXI@Z @ 0x180137814 (--_GCTargetMapEntry@@QEAAPEAXI@Z.c)
 *     ??1CExpressionValueStack@@UEAA@XZ @ 0x180158948 (--1CExpressionValueStack@@UEAA@XZ.c)
 */

void __fastcall CExpressionManager::~CExpressionManager(CExpressionManager *this)
{
  struct _RTL_GENERIC_TABLE *i; // rsi
  CTargetMapEntry *v3; // rax
  unsigned int v4; // edx
  CTargetMapEntry *v5; // rdi
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CExpressionManager::`vftable';
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 312); ; RtlDeleteElementGenericTable(i, v5) )
  {
    RestartKey = 0LL;
    v3 = (CTargetMapEntry *)RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    v5 = v3;
    if ( !v3 )
      break;
    CTargetMapEntry::`scalar deleting destructor'(v3, v4);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 280);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 248);
  `vector destructor iterator'(
    (char *)this + 184,
    32LL,
    2LL,
    (void (__fastcall *)(char *))DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
  CExpressionValueStack::~CExpressionValueStack((CExpressionManager *)((char *)this + 40));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
