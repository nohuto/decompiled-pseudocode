/*
 * XREFs of HeapInsertFreeList @ 0x1C0013620
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     ParseField @ 0x1C000DD70 (ParseField.c)
 *     ParseTerm @ 0x1C000E250 (ParseTerm.c)
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     FreeObjData @ 0x1C0010360 (FreeObjData.c)
 *     ParsePackage @ 0x1C0010950 (ParsePackage.c)
 *     HeapFree @ 0x1C0010E2C (HeapFree.c)
 *     ParseCall @ 0x1C0010E80 (ParseCall.c)
 *     FreeNameSpaceObjects @ 0x1C0011A80 (FreeNameSpaceObjects.c)
 *     WriteFieldObj @ 0x1C0011C60 (WriteFieldObj.c)
 *     FindNSObj @ 0x1C0012550 (FindNSObj.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     WriteFieldLoop @ 0x1C0013810 (WriteFieldLoop.c)
 *     ParseRelease @ 0x1C0013A10 (ParseRelease.c)
 *     ParseAcquire @ 0x1C0013D20 (ParseAcquire.c)
 *     NewObjData @ 0x1C0014160 (NewObjData.c)
 *     ReadField @ 0x1C0015DD0 (ReadField.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall HeapInsertFreeList(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  unsigned __int64 v3; // r9
  __int64 v5; // rcx
  _QWORD **v6; // r10
  __int64 v7; // r10
  __int64 v8; // rcx
  _QWORD *result; // rax
  _QWORD **v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = *(__int64 **)(a1 + 40);
  v3 = a2 + 16;
  if ( !v2 )
  {
    *(_QWORD *)(a1 + 40) = v3;
    *(_QWORD *)(a2 + 24) = a2 + 16;
    *(_QWORD *)v3 = v3;
LABEL_3:
    *(_QWORD *)(a1 + 40) = v3;
    goto LABEL_4;
  }
  v11 = *(__int64 **)(a1 + 40);
  while ( v3 >= (unsigned __int64)v11 )
  {
    v11 = (__int64 *)v11[1];
    if ( v11 == v2 )
    {
      if ( v3 >= (unsigned __int64)v11 )
      {
        *(_QWORD *)(a2 + 24) = v2;
        *(_QWORD *)v3 = **(_QWORD **)(a1 + 40);
        *(_QWORD *)(**(_QWORD **)(a1 + 40) + 8LL) = v3;
        **(_QWORD **)(a1 + 40) = v3;
        goto LABEL_4;
      }
      break;
    }
  }
  *(_QWORD *)(a2 + 24) = v11;
  v12 = *v11;
  *(_QWORD *)v3 = *v11;
  *(_QWORD *)(v12 + 8) = v3;
  **(_QWORD **)(a2 + 24) = v3;
  if ( *(__int64 **)(a1 + 40) == v11 )
    goto LABEL_3;
LABEL_4:
  v5 = *(unsigned int *)(a2 + 4);
  v6 = (_QWORD **)(v5 + a2 + 16);
  if ( *(_QWORD ***)(a2 + 24) == v6 )
  {
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(v5 + a2 + 4) + v5;
    if ( v6[1] == v6 )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 40);
      if ( v6 == (_QWORD **)v15 )
        *(_QWORD *)(a1 + 40) = *(_QWORD *)(v15 + 8);
      *v6[1] = *v6;
      (*v6)[1] = v6[1];
    }
  }
  v7 = *(_QWORD *)v3 - 16LL;
  v8 = *(unsigned int *)(v7 + 4);
  if ( a2 == v7 + v8 )
  {
    *(_DWORD *)(v7 + 4) = *(_DWORD *)(a2 + 4) + v8;
    if ( *(_QWORD *)(a2 + 24) == a2 + 16 )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 40);
      if ( v3 == v13 )
        *(_QWORD *)(a1 + 40) = *(_QWORD *)(v13 + 8);
      **(_QWORD **)(a2 + 24) = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)(a2 + 24);
    }
    a2 = v7;
  }
  result = (_QWORD *)(a2 + *(unsigned int *)(a2 + 4));
  if ( *(_QWORD *)(a1 + 32) <= (unsigned __int64)result )
  {
    *(_QWORD *)(a1 + 32) = a2;
    v10 = (_QWORD **)(a2 + 16);
    if ( v10[1] == v10 )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 40);
      if ( v10 == (_QWORD **)v14 )
        *(_QWORD *)(a1 + 40) = *(_QWORD *)(v14 + 8);
      *v10[1] = *v10;
      result = v10[1];
      (*v10)[1] = result;
    }
  }
  return result;
}
