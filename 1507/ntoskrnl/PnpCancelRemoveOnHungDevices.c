/*
 * XREFs of PnpCancelRemoveOnHungDevices @ 0x14067E6F8
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpNotifyTargetDeviceChange @ 0x14045EA84 (PnpNotifyTargetDeviceChange.c)
 *     IopAddRelationToList @ 0x140535BF0 (IopAddRelationToList.c)
 *     IopAllocateRelationList @ 0x140535F08 (IopAllocateRelationList.c)
 *     PnpCompileDeviceInstancePaths @ 0x140536BE4 (PnpCompileDeviceInstancePaths.c)
 *     IopEnumerateRelations @ 0x140536D78 (IopEnumerateRelations.c)
 *     PnpDeleteLockedDeviceNode @ 0x140536DF4 (PnpDeleteLockedDeviceNode.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140536EEC (PnpNotifyUserModeDeviceRemoval.c)
 */

__int64 __fastcall PnpCancelRemoveOnHungDevices(__int64 a1, unsigned int a2, char a3, __int64 a4, __int64 *a5)
{
  int v8; // ebx
  _BYTE *RelationList; // rdi
  __int64 v10; // rcx
  __int64 v11; // r9
  ULONG_PTR v12; // rcx
  _QWORD *v13; // r9
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // eax
  PVOID v17; // rdi
  __int64 v19; // [rsp+20h] [rbp-30h]
  int v20; // [rsp+30h] [rbp-20h] BYREF
  int v21; // [rsp+34h] [rbp-1Ch]
  PVOID Object; // [rsp+38h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+78h] [rbp+28h] BYREF

  P[0] = 0LL;
  if ( (a2 & 0xFFFFFFFB) != 0 )
    __fastfail(5u);
  v8 = PnpCompileDeviceInstancePaths(a2, a4, a3, 1, a5);
  if ( v8 >= 0 )
  {
    RelationList = IopAllocateRelationList(a2);
    if ( RelationList )
    {
      v21 = 0;
      v20 = 2;
      while ( IopEnumerateRelations(a4, &v20, &Object, &v24, 0LL) )
      {
        if ( Object )
          v10 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
        else
          v10 = 0LL;
        if ( v10 )
        {
          if ( (*(_DWORD *)(v10 + 704) & 2) != 0 )
          {
            v8 = IopAddRelationToList(RelationList, (__int64)Object, v24, 0);
            if ( v8 < 0 )
              return (unsigned int)v8;
          }
        }
      }
      v21 = 0;
      RelationList[8] = 1;
      v20 = 1;
      while ( IopEnumerateRelations((__int64)RelationList, &v20, &Object, 0LL, 0LL) )
      {
        if ( Object )
          v12 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
        else
          v12 = 0LL;
        if ( *(_DWORD *)(v12 + 300) == 784 )
          PnpDeleteLockedDeviceNode(v12, 1, 0, v11, v11 & v19);
      }
      v21 &= v11;
      v20 = 1;
      while ( IopEnumerateRelations((__int64)RelationList, &v20, &Object, 0LL, 0LL) )
      {
        if ( Object )
          v14 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
        else
          v14 = 0LL;
        v15 = *(_DWORD *)(v14 + 300);
        if ( ((v15 - 769) & 0xFFFFFFEE) != 0 || v15 == 785 )
          PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_REMOVE_CANCELLED, Object, 0LL, v13);
      }
      v16 = PnpCompileDeviceInstancePaths(a2, (__int64)RelationList, 0, (char)v13, (__int64 *)P);
      v17 = P[0];
      v8 = v16;
      if ( v16 >= 0 )
        v8 = PnpNotifyUserModeDeviceRemoval(
               a1,
               (_WORD *)P[0],
               (__int128 *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED,
               0LL,
               0LL);
      if ( v17 )
        ExFreePoolWithTag(v17, 0x4B706E50u);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v8;
}
