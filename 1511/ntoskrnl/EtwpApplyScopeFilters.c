/*
 * XREFs of EtwpApplyScopeFilters @ 0x1404382E0
 * Callers:
 *     EtwpRegisterUMGuid @ 0x140435640 (EtwpRegisterUMGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x14046CBFC (EtwpAddRegEntryToGroup.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x1404CE398 (EtwpUpdateRegEntryEnableMask.c)
 * Callees:
 *     EtwpApplyExeFilter @ 0x140666B58 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140666C0C (EtwpApplyPackageIdFilter.c)
 */

void __fastcall EtwpApplyScopeFilters(__int64 a1, char a2, __int64 a3, _BYTE *a4)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // r9
  __int64 v13; // rcx
  _DWORD *v14; // rax
  __int64 v15; // rdx

  if ( (*(_BYTE *)(a1 + 98) & 1) == 0 )
  {
    *a4 = 0;
    if ( (_BYTE)a3 )
      v7 = *(_QWORD *)(a1 + 40);
    else
      v7 = *(_QWORD *)(a1 + 32);
    v8 = 0LL;
    do
    {
      v9 = 32LL * (unsigned int)v8;
      if ( *(_DWORD *)(v9 + v7 + 112) && (!a2 || *(_WORD *)(v9 + v7 + 118) == *(_WORD *)(v7 + 72)) )
      {
        v10 = *(_QWORD *)(v7 + 368);
        LOBYTE(a3) = 1;
        if ( !v10 )
          goto LABEL_10;
        v11 = *(_DWORD *)(72 * v8 + v10);
        v12 = 72 * v8 + v10;
        if ( (v11 & 0x80000004) != 0x80000004 )
          goto LABEL_29;
        LOBYTE(a3) = 0;
        v13 = 0LL;
        v14 = *(_DWORD **)(v12 + 8);
        if ( *v14 )
        {
          while ( v14[v13 + 1] != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 744LL) )
          {
            v13 = (unsigned int)(v13 + 1);
            if ( (unsigned int)v13 >= *v14 )
              goto LABEL_22;
          }
          LOBYTE(a3) = 1;
        }
LABEL_22:
        if ( (_BYTE)a3 )
        {
LABEL_29:
          if ( (v11 & 0x80000008) == 0x80000008 )
            LOBYTE(a3) = EtwpApplyExeFilter(a1, *(_QWORD *)(v12 + 16), a3, v12);
          if ( (_BYTE)a3 )
          {
            v15 = *(_QWORD *)(v7 + 368);
            if ( (*(_DWORD *)(v15 + 72 * v8) & 0x80000010) == 0x80000010
              || (*(_DWORD *)(v15 + 72 * v8) & 0x80000020) == 0x80000020 )
            {
              a3 = (unsigned __int8)EtwpApplyPackageIdFilter(
                                      a1,
                                      *(_QWORD *)(v15 + 72 * v8 + 24),
                                      *(_QWORD *)(v15 + 72 * v8 + 32),
                                      v12);
            }
            if ( (_BYTE)a3 )
LABEL_10:
              *a4 |= 1 << v8;
          }
        }
        if ( a2 )
          break;
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < 8 );
  }
}
