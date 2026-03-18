/*
 * XREFs of WmipAddProviderIdToPIList @ 0x1404A9F84
 * Callers:
 *     WmipPrepareForWnodeAD @ 0x1404A9E74 (WmipPrepareForWnodeAD.c)
 *     WmipPrepareWnodeSI @ 0x14057AFF4 (WmipPrepareWnodeSI.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     WmipUnreferenceEntry @ 0x1404D2094 (WmipUnreferenceEntry.c)
 */

__int64 __fastcall WmipAddProviderIdToPIList(const void **a1, _DWORD *a2, unsigned int *a3, void *a4, __int64 a5)
{
  __int64 v5; // r13
  int v6; // ebx
  __int64 v7; // r15
  void *v8; // rsi
  unsigned int v10; // ebp
  __int64 v11; // r14
  PVOID PoolWithTag; // rdi
  void *v13; // r12
  _QWORD *v14; // rbx
  _DWORD *v16; // [rsp+78h] [rbp+10h]

  v16 = a2;
  v5 = (unsigned int)*a2;
  v6 = 0;
  v7 = *a3;
  v8 = (void *)*a1;
  if ( (_DWORD)v5 != (_DWORD)v7 )
    goto LABEL_2;
  v10 = 2 * v7;
  v11 = *a3;
  if ( (unsigned __int64)(2 * v7) > 0xFFFFFFFF )
  {
    v10 = -1;
    v6 = -1073741675;
    PoolWithTag = 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v10, 0x70696D57u);
  }
  v13 = v8;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, v8, 8 * v7);
    v8 = PoolWithTag;
    *a1 = PoolWithTag;
    *a3 = v10;
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      v14 = v8;
      do
      {
        WmipUnreferenceEntry(&WmipISChunkInfo, *v14++);
        --v11;
      }
      while ( v11 );
    }
    WmipUnreferenceEntry(&WmipISChunkInfo, a5);
    v6 = -1073741670;
    *a1 = 0LL;
  }
  if ( v13 != a4 )
    ExFreePoolWithTag(v13, 0);
  if ( v6 >= 0 )
  {
    a2 = v16;
LABEL_2:
    *((_QWORD *)v8 + v5) = a5;
    *a2 = v5 + 1;
  }
  return (unsigned int)v6;
}
