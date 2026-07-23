/*
 * XREFs of PiDmObjectManagerPopulate @ 0x1405645E8
 * Callers:
 *     PiDmInit @ 0x1407B1E38 (PiDmInit.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1400C1E74 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400C23E4 (RtlInsertElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableAvl @ 0x1400C2520 (RtlEnumerateGenericTableAvl.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpGetObjectList @ 0x1404DE554 (_PnpGetObjectList.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiDmObjectCreate @ 0x14056471C (PiDmObjectCreate.c)
 */

__int64 __fastcall PiDmObjectManagerPopulate(__int64 a1)
{
  PVOID PoolWithTag; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int ObjectList; // edi
  _WORD *i; // rsi
  __int64 v8; // rax
  unsigned int **v10; // rax
  unsigned int **v11; // rbx
  unsigned int v12; // [rsp+68h] [rbp+10h] BYREF
  unsigned int *Buffer; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0x40000;
  PoolWithTag = 0LL;
  while ( 1 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x5A706E50u);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v12, 0x5A706E50u);
    if ( !PoolWithTag )
      break;
    ObjectList = PnpGetObjectList(v3, *(_DWORD *)(a1 + 208), v4, v5, (__int64)PoolWithTag, v12, (__int64)&v12, 0x10000);
    if ( ObjectList != -1073741789 )
      goto LABEL_6;
  }
  ObjectList = -1073741670;
LABEL_6:
  if ( ObjectList >= 0 )
  {
    if ( v12 )
    {
      for ( i = PoolWithTag; *i; i += v8 + 1 )
      {
        ObjectList = PiDmObjectCreate(*(unsigned int *)(a1 + 208), i, &Buffer);
        if ( ObjectList < 0 )
          break;
        Buffer[8] |= 1u;
        Buffer[3] = 1;
        if ( !RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), &Buffer, 8u, 0LL) )
        {
          PiDmObjectRelease(Buffer);
          ObjectList = -1073741670;
          break;
        }
        v8 = -1LL;
        do
          ++v8;
        while ( i[v8] );
      }
    }
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x5A706E50u);
  if ( ObjectList < 0 )
  {
    while ( 1 )
    {
      v10 = (unsigned int **)RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), 1u);
      v11 = v10;
      if ( !v10 )
        break;
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), v10);
      PiDmObjectRelease(*v11);
    }
  }
  return (unsigned int)ObjectList;
}
