/*
 * XREFs of WmipQueueNotification @ 0x1405385DC
 * Callers:
 *     WmipWriteWnodeToObject @ 0x14012C9E4 (WmipWriteWnodeToObject.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipQueueNotification(struct _KEVENT *a1, char **a2, unsigned int *a3)
{
  char *v3; // rsi
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  char *v7; // r15
  unsigned int v9; // edx
  struct _KEVENT *v10; // r12
  unsigned int v11; // r14d
  char *PoolWithTag; // rax
  char *v13; // rcx
  void *v15; // rcx
  unsigned int Size; // [rsp+68h] [rbp+10h]

  v3 = *a2;
  v5 = *((_DWORD *)a2 + 4);
  v6 = 0;
  v7 = a2[1];
  v9 = *a3;
  v10 = a1;
  Size = *a3;
  v11 = (*((_DWORD *)a2 + 5) + *a3 + 7) & 0xFFFFFFF8;
  if ( !v3 )
    goto LABEL_20;
  if ( v11 > v5 )
    v3 = 0LL;
  if ( !v3 )
  {
LABEL_20:
    if ( v11 > 0x80000 )
      goto LABEL_17;
    if ( v11 > v5 )
      v5 = (v11 + 0x3FFF) & 0xFFFFC000;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v5, 0x70696D57u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_17:
      ++*((_DWORD *)a2 + 6);
      return (unsigned int)-1073741670;
    }
    memset(PoolWithTag, 0, v5);
    if ( *a2 )
    {
      memmove(v3, *a2, *((unsigned int *)a2 + 5));
      v15 = *a2;
      v7 += v3 - *a2;
      a2[1] = v7;
      ExFreePoolWithTag(v15, 0);
    }
    v9 = Size;
    v10 = a1;
    *a2 = v3;
    *((_DWORD *)a2 + 4) = v5;
  }
  v13 = &v3[*((unsigned int *)a2 + 5)];
  if ( v7 )
    *((_DWORD *)v7 + 3) = (_DWORD)v13 - (_DWORD)v7;
  a2[1] = v13;
  *((_DWORD *)a2 + 5) = v11;
  memmove(v13, a3, v9);
  KeSetEvent(v10, 0, 0);
  return v6;
}
