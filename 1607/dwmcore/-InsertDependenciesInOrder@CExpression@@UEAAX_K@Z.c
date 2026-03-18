/*
 * XREFs of ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x180019810
 * Callers:
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x180019CC0 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180087F90 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x1800ADE14 (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x1801377A0 (--1CTargetMapEntry@@QEAA@XZ.c)
 */

void __fastcall CExpression::InsertDependenciesInOrder(CExpression *this, __int64 a2)
{
  unsigned int i; // esi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r8
  _QWORD *v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rbx
  char v12; // r12
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-30h]
  __int64 Buffer; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+38h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp-10h]
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF

  for ( i = 0; i < *((_DWORD *)this + 124); ++i )
  {
    v5 = *((_QWORD *)this + 2);
    v6 = *((_QWORD *)this + 59);
    v17 = 0LL;
    v7 = *(_QWORD *)(v5 + 168);
    LODWORD(v14) = *((_DWORD *)this + 56);
    v8 = 32LL * i;
    LODWORD(v5) = *(_DWORD *)(v8 + v6 + 4);
    HIDWORD(v14) = *(_DWORD *)(*((_QWORD *)this + 47) + 16LL * *(unsigned int *)(v8 + v6 + 28));
    Buffer = v14;
    v16 = v5;
    v9 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v7 + 312), &Buffer);
    CTargetMapEntry::~CTargetMapEntry((CTargetMapEntry *)&Buffer);
    if ( v9 )
      v9 = (_QWORD *)v9[2];
    if ( v9 )
    {
      v10 = CBaseExpression::s_recursionLevel;
      do
      {
        v11 = v9[1];
        v12 = 0;
        if ( (int)++*(_DWORD *)(v11 + 204) <= 1 && *(_QWORD *)(v11 + 208) != a2 && v10 <= 0x10 )
        {
          CBaseExpression::s_recursionLevel = v10 + 1;
          v12 = 1;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 136LL))(v11, a2);
          if ( *(_BYTE *)(v11 + 228) )
          {
            v13 = *(_QWORD *)(v11 + 16);
            v18 = v11;
            DynArray<CBaseExpression *,1>::AddMultipleAndSet(
              *(_QWORD *)(v13 + 168) + 184LL + 32LL * (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)(v13 + 168) + 180LL)),
              &v18);
          }
          v10 = CBaseExpression::s_recursionLevel;
        }
        *(_QWORD *)(v11 + 208) = a2;
        if ( v12 )
          CBaseExpression::s_recursionLevel = --v10;
        --*(_DWORD *)(v11 + 204);
        v9 = (_QWORD *)v9[2];
      }
      while ( v9 );
    }
  }
}
