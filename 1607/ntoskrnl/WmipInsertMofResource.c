/*
 * XREFs of WmipInsertMofResource @ 0x140551338
 * Callers:
 *     WmipAddMofResource @ 0x140551180 (WmipAddMofResource.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     WmipReferenceEntry @ 0x140473870 (WmipReferenceEntry.c)
 */

__int64 __fastcall WmipInsertMofResource(__int64 a1, ULONG_PTR a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  unsigned int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned int v10; // r12d
  unsigned int v11; // r13d
  __int64 v12; // r15
  unsigned __int64 v13; // rax
  size_t v14; // r14
  char *PoolWithTag; // rax
  char *v16; // rbp
  bool v17; // [rsp+50h] [rbp+8h]

  v2 = 0;
  v4 = *(unsigned int *)(a1 + 64);
  v6 = 0;
  if ( (_DWORD)v4 )
  {
    v7 = *(_QWORD *)(a1 + 72);
    while ( 1 )
    {
      v8 = *(_QWORD *)(v7 + 8LL * v6);
      if ( v8 == a2 )
        break;
      if ( !v8 )
      {
        *(_QWORD *)(v7 + 8LL * v6) = a2;
        goto LABEL_6;
      }
      if ( ++v6 >= (unsigned int)v4 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    if ( v6 == (_DWORD)v4 )
    {
      v10 = v4 + 4;
      v17 = *(_QWORD *)(a1 + 72) != a1 + 80;
      v11 = -1;
      v12 = 8 * v4;
      if ( (unsigned __int64)(8 * v4) <= 0xFFFFFFFF )
        v11 = 8 * v4;
      v13 = 8LL * v10;
      if ( v13 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      v14 = (unsigned int)v13;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x70696D57u);
      v16 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, v14);
      memmove(v16, *(const void **)(a1 + 72), v11);
      if ( v17 )
        ExFreePoolWithTag(*(PVOID *)(a1 + 72), 0);
      *(_QWORD *)(a1 + 72) = v16;
      *(_QWORD *)&v16[v12] = a2;
      *(_DWORD *)(a1 + 64) = v10;
    }
    WmipReferenceEntry(a2);
  }
  return v2;
}
