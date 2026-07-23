/*
 * XREFs of PnpAddVetoInformation @ 0x140642844
 * Callers:
 *     PnpCollectOpenHandlesCallBack @ 0x140642A30 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall PnpAddVetoInformation(PVOID Object, _QWORD *a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rdi
  _QWORD *v7; // rsi
  char v9; // r10
  _QWORD *v10; // r9
  unsigned int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rsi
  _QWORD *v18; // rax
  _QWORD *v19; // rcx

  v3 = 0LL;
  v4 = *a2 - 24LL;
  v5 = 0LL;
  v7 = a2;
  v9 = 1;
  v10 = (_QWORD *)*a2;
  if ( a2 == (_QWORD *)*a2 )
    goto LABEL_15;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v4 + 16);
    if ( v11 == a3 )
    {
      v12 = *(_QWORD *)v4;
      v5 = (_QWORD *)v4;
      v9 = 0;
      while ( 1 )
      {
        v13 = v12 - 8;
        if ( v4 == v13 + 8 )
          goto LABEL_11;
        if ( *(PVOID *)v13 == Object )
          return;
        if ( *(_QWORD *)v13 > (unsigned __int64)Object )
        {
          v5 = (_QWORD *)(v13 + 8);
          goto LABEL_11;
        }
        v12 = *(_QWORD *)(v13 + 8);
      }
    }
    if ( v11 > a3 )
      break;
LABEL_11:
    v4 = *v10 - 24LL;
    v10 = (_QWORD *)*v10;
    if ( a2 == v10 )
      goto LABEL_14;
  }
  v7 = (_QWORD *)(v4 + 24);
LABEL_14:
  if ( v9 )
  {
LABEL_15:
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x4F706E50u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_DWORD *)PoolWithTag + 4) = a3;
      v15 = PoolWithTag + 3;
      v16 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v16 != v7 )
        __fastfail(3u);
      *v15 = v7;
      v5 = v3;
      v15[1] = v16;
      *v16 = v15;
      v7[1] = v15;
      v3[1] = v3;
      *v3 = v3;
      goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    v17 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x50706E50u);
    if ( v17 )
    {
      ObfReferenceObject(Object);
      *v17 = Object;
      v18 = v17 + 1;
      v19 = (_QWORD *)v5[1];
      if ( (_QWORD *)*v19 != v5 )
        __fastfail(3u);
      *v18 = v5;
      v17[2] = v19;
      *v19 = v18;
      v5[1] = v18;
    }
    else if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x4F706E50u);
    }
  }
}
