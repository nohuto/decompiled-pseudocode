/*
 * XREFs of PiSwUpdateArrayProperties @ 0x140543E10
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x140487098 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpPropertySet @ 0x140543C44 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x140576D70 (PiSwIrpInterfacePropertySet.c)
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiSwUpdateArrayProperties(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // ebx
  __int64 v6; // r9
  unsigned int v7; // ebp
  unsigned int v9; // r12d
  __int64 v10; // rdi
  unsigned int v11; // r14d
  const wchar_t **v12; // r15
  __int64 v13; // r8
  __int64 v14; // rcx
  const wchar_t *v15; // rcx
  const wchar_t *v16; // rdx
  unsigned int v17; // eax
  void *v19; // r15
  unsigned int v20; // eax
  PVOID PoolWithTag; // rax

  v5 = 0;
  v6 = a3;
  v7 = a2;
  v9 = 0;
  if ( !a4 )
    return v5;
  v10 = a3 + 24;
  while ( 2 )
  {
    v11 = 0;
    if ( !v7 )
      goto LABEL_17;
    v12 = (const wchar_t **)(a1 + 24);
    while ( 1 )
    {
      if ( *(_DWORD *)(v10 - 8) == *((_DWORD *)v12 - 2) )
      {
        v13 = 48LL * v11;
        v14 = *(_QWORD *)(v6 + 48LL * v9) - *(_QWORD *)(v13 + a1);
        if ( !v14 )
          v14 = *(_QWORD *)(v6 + 48LL * v9 + 8) - *(_QWORD *)(v13 + a1 + 8);
        if ( !v14 && *(_DWORD *)(v10 - 4) == *((_DWORD *)v12 - 1) )
        {
          v15 = *(const wchar_t **)v10;
          v16 = *v12;
          if ( *(const wchar_t **)v10 == *v12 )
            goto LABEL_13;
          if ( v15 && v16 )
            break;
        }
      }
LABEL_6:
      ++v11;
      v12 += 6;
      if ( v11 >= v7 )
        goto LABEL_17;
    }
    if ( wcsicmp(v15, v16) )
    {
      v6 = a3;
      goto LABEL_6;
    }
LABEL_13:
    if ( *(_DWORD *)(v10 + 12) == *(_DWORD *)(a1 + 48LL * v11 + 36) )
      goto LABEL_14;
    v19 = *(void **)(a1 + 48LL * v11 + 40);
    *(_QWORD *)(a1 + 48LL * v11 + 40) = 0LL;
    v20 = *(_DWORD *)(v10 + 12);
    if ( v20 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x57706E50u);
      *(_QWORD *)(a1 + 48LL * v11 + 40) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v5 = -1073741670;
        *(_QWORD *)(a1 + 48LL * v11 + 40) = v19;
        return v5;
      }
    }
    if ( v19 )
      ExFreePoolWithTag(v19, 0x57706E50u);
    *(_DWORD *)(a1 + 48LL * v11 + 36) = *(_DWORD *)(v10 + 12);
LABEL_14:
    *(_DWORD *)(a1 + 48LL * v11 + 32) = *(_DWORD *)(v10 + 8);
    v17 = *(_DWORD *)(a1 + 48LL * v11 + 36);
    if ( v17 )
      memmove(*(void **)(a1 + 48LL * v11 + 40), *(const void **)(v10 + 16), v17);
    v7 = a2;
LABEL_17:
    ++v9;
    v10 += 48LL;
    if ( v9 < a4 )
    {
      v6 = a3;
      continue;
    }
    return v5;
  }
}
