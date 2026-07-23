/*
 * XREFs of PnpInvalidateRelationsInList @ 0x140485900
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessCompletedEject @ 0x14062E050 (PnpProcessCompletedEject.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     PipClearDevNodeFlags @ 0x1403F22D8 (PipClearDevNodeFlags.c)
 *     IopSetRelationsTag @ 0x14048421C (IopSetRelationsTag.c)
 *     IopEnumerateRelations @ 0x140485C7C (IopEnumerateRelations.c)
 *     IopAllocateRelationList @ 0x140485D8C (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x140485DE0 (IopFreeRelationList.c)
 *     IopAddRelationToList @ 0x140486010 (IopAddRelationToList.c)
 */

__int64 __fastcall PnpInvalidateRelationsInList(_QWORD *a1, unsigned int a2, char a3, char a4)
{
  void *RelationList; // r14
  _DWORD *v9; // rdx
  unsigned int i; // r8d
  __int64 v11; // rax
  _DWORD *v12; // rax
  __int64 v13; // r9
  _QWORD *j; // rbx
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // eax
  int v19; // edx
  __int64 v20; // rbx
  int v21; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v22[3]; // [rsp+34h] [rbp-1Ch] BYREF
  PVOID Object[2]; // [rsp+40h] [rbp-10h] BYREF

  RelationList = (void *)IopAllocateRelationList(a2);
  if ( !RelationList )
    return 3221225626LL;
  v9 = (_DWORD *)*a1;
  for ( i = 0; i < *(_DWORD *)*a1; v9 = (_DWORD *)*a1 )
  {
    v11 = i++;
    v9[6 * v11 + 8] &= ~1u;
  }
  v12 = (_DWORD *)*a1;
  *(_QWORD *)&v22[1] = 0LL;
  v12[2] = 0;
LABEL_5:
  while ( (unsigned __int8)IopEnumerateRelations(
                             (_DWORD)a1,
                             (unsigned int)&v22[1],
                             (unsigned int)Object,
                             (unsigned int)&v21,
                             (__int64)v22) )
  {
    if ( (!a3 || !v21) && !v22[0] )
    {
      for ( j = Object[0]; ; j = *(_QWORD **)(v20 + 32) )
      {
        if ( (unsigned int)IopSetRelationsTag(a1, (__int64)j) )
        {
LABEL_27:
          if ( j )
            IopAddRelationToList(RelationList, j, 2LL);
          goto LABEL_5;
        }
        v16 = j[39];
        v17 = *(_QWORD *)(v16 + 40);
        if ( a4 )
        {
          PipClearDevNodeFlags(*(_QWORD *)(v16 + 40), 0x80000);
          v18 = *(_DWORD *)(v17 + 396);
          if ( (v18 & 0x10) != 0 )
          {
            if ( (v18 & 0x2000) != 0 && *(_DWORD *)(v17 + 404) == 47 )
            {
              v19 = 3;
            }
            else
            {
              if ( a2 != 4 )
                goto LABEL_24;
              v19 = 12;
            }
            PnpRequestDeviceAction(j, v19, 1, 0LL, 0LL, 0LL);
          }
        }
LABEL_24:
        v20 = *(_QWORD *)(v17 + 16);
        if ( !v20 )
        {
          j = 0LL;
          goto LABEL_27;
        }
      }
    }
  }
  *(_QWORD *)&v22[1] = 0LL;
  while ( (unsigned __int8)IopEnumerateRelations(
                             (_DWORD)RelationList,
                             (unsigned int)&v22[1],
                             (unsigned int)Object,
                             0,
                             0LL) )
    PnpRequestDeviceAction(Object[0], 9, 0, v13, 0LL, 0LL);
  IopFreeRelationList(RelationList);
  return 0LL;
}
