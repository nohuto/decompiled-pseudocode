/*
 * XREFs of CmpDoBuildVirtualStack @ 0x1405E22EC
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1405E29D0 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x1403D7E1C (CmpAddSubKeyEx.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1403FE290 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpCreateEmptyKey @ 0x1405E1F44 (CmpCreateEmptyKey.c)
 */

__int64 __fastcall CmpDoBuildVirtualStack(__int64 a1, unsigned int a2, ULONG_PTR a3)
{
  __int64 v3; // rsi
  unsigned int *i; // rdi
  unsigned int v8; // eax
  unsigned int EmptyKey; // eax
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned int v17; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( !a2 )
    return 0LL;
  for ( i = (unsigned int *)(a1 + 28); ; i += 10 )
  {
    CmpFindSubKeyByNameWithStatus(a3, *(_QWORD *)(i - 3), (const UNICODE_STRING *)(a1 + 40 * v3), &v17);
    v8 = v17;
    i[1] = v17;
    if ( v8 != -1 )
      goto LABEL_10;
    if ( !HvpMarkCellDirty(a3, *i, 0) )
      break;
    EmptyKey = CmpCreateEmptyKey(a3, (unsigned __int16 *)(a1 + 40 * v3), *i);
    i[1] = EmptyKey;
    if ( EmptyKey == -1 || !CmpAddSubKeyEx(a3, *i, EmptyKey, 0) )
      return 3221225626LL;
    if ( (_DWORD)v3 )
    {
      v10 = *(_QWORD *)(i - 3);
      v11 = *((unsigned __int16 *)i - 14);
      if ( (unsigned __int16)*(_DWORD *)(v10 + 52) < v11 )
        *(_WORD *)(v10 + 52) = v11;
    }
LABEL_10:
    if ( (unsigned int)v3 < a2 - 1 )
    {
      v12 = i[1];
      v13 = (unsigned int)(v3 + 1);
      v14 = 5 * v13;
      *(_DWORD *)(a1 + 40 * v13 + 28) = v12;
      v15 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64))(a3 + 8))(a3, v12, a1 + 24 + 40 * v13);
      *(_QWORD *)(a1 + 8 * v14 + 16) = v15;
      if ( !v15 )
        return 3221225626LL;
    }
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= a2 )
      return 0LL;
  }
  return 3221225853LL;
}
