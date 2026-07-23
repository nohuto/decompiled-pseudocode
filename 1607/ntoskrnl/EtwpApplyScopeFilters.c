/*
 * XREFs of EtwpApplyScopeFilters @ 0x14040CB48
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x14040B73C (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x14040D4A0 (EtwpRegisterUMGuid.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x140491C28 (EtwpUpdateRegEntryEnableMask.c)
 * Callees:
 *     EtwpApplyExeFilter @ 0x1406A8BD4 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1406A8C88 (EtwpApplyPackageIdFilter.c)
 */

__int64 __fastcall EtwpApplyScopeFilters(__int64 a1, char a2, char a3, _BYTE *a4)
{
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v12; // dl
  __int64 v13; // r8
  __int64 v14; // r9
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( (*(_BYTE *)(a1 + 98) & 1) == 0 )
  {
    *a4 = 0;
    if ( a3 )
      v8 = *(_QWORD *)(a1 + 40);
    else
      v8 = *(_QWORD *)(a1 + 32);
    v9 = 0LL;
    do
    {
      v10 = 32LL * (unsigned int)v9;
      if ( *(_DWORD *)(v10 + v8 + 112) )
      {
        if ( !a2 || (result = *(unsigned __int16 *)(v8 + 72), *(_WORD *)(v10 + v8 + 118) == (_WORD)result) )
        {
          v11 = *(_QWORD *)(v8 + 368);
          v12 = 1;
          if ( !v11 )
            goto LABEL_10;
          result = *(_DWORD *)(v11 + 80 * v9) & 0x80000004;
          if ( (_DWORD)result != -2147483644 )
            goto LABEL_29;
          v12 = 0;
          v13 = 0LL;
          result = *(_QWORD *)(v11 + 80 * v9 + 8);
          if ( *(_DWORD *)result )
          {
            while ( *(_DWORD *)(result + 4 * v13 + 4) != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 744LL) )
            {
              v13 = (unsigned int)(v13 + 1);
              if ( (unsigned int)v13 >= *(_DWORD *)result )
                goto LABEL_22;
            }
            v12 = 1;
          }
LABEL_22:
          if ( v12 )
          {
LABEL_29:
            if ( (*(_DWORD *)(v11 + 80 * v9) & 0x80000008) == 0x80000008 )
            {
              result = EtwpApplyExeFilter(a1, *(_QWORD *)(v11 + 80 * v9 + 16));
              v12 = result;
            }
            if ( v12 )
            {
              v14 = *(_QWORD *)(v8 + 368);
              if ( (*(_DWORD *)(v14 + 80 * v9) & 0x80000010) == 0x80000010
                || (result = *(_DWORD *)(v14 + 80 * v9) & 0x80000020, (_DWORD)result == -2147483616) )
              {
                result = EtwpApplyPackageIdFilter(a1, *(_QWORD *)(v14 + 80 * v9 + 24), *(_QWORD *)(v14 + 80 * v9 + 32));
                v12 = result;
              }
              if ( v12 )
              {
LABEL_10:
                result = (unsigned __int8)v9;
                *a4 |= 1 << v9;
              }
            }
          }
          if ( a2 )
            break;
        }
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < 8 );
  }
  return result;
}
