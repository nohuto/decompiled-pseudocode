/*
 * XREFs of IopChildToRootTranslation @ 0x140556D90
 * Callers:
 *     PnpBuildCmResourceList @ 0x14055690C (PnpBuildCmResourceList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopFindLegacyBusDeviceNode @ 0x14055795C (IopFindLegacyBusDeviceNode.c)
 */

__int64 __fastcall IopChildToRootTranslation(
        _QWORD *LegacyBusDeviceNode,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned int v6; // ebp
  bool v10; // r15
  _DWORD *PoolWithTag; // rdi
  _DWORD *v12; // rsi
  __int64 v13; // r13
  __int64 v14; // r11
  __int64 *v15; // rax
  __int64 v17; // r10
  int v18; // eax
  _DWORD *v19; // rcx
  bool v21; // [rsp+98h] [rbp+20h]

  v6 = 0;
  v10 = 0;
  v21 = a4 == 1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20207050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v12 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20207050u);
  if ( !v12 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225626LL;
  }
  *(_OWORD *)PoolWithTag = *(_OWORD *)a5;
  PoolWithTag[4] = *(_DWORD *)(a5 + 16);
  if ( LegacyBusDeviceNode )
  {
    v13 = LegacyBusDeviceNode[4];
  }
  else
  {
    LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(a2, a3);
    v13 = 0LL;
  }
  if ( LegacyBusDeviceNode )
  {
    v14 = IopRootDeviceNode;
    while ( !v10 )
    {
      if ( LegacyBusDeviceNode != (_QWORD *)v14 || v21 )
      {
        v15 = (__int64 *)LegacyBusDeviceNode[63];
        if ( v15 != LegacyBusDeviceNode + 63 )
        {
          while ( *((_BYTE *)v15 + 16) != *(_BYTE *)a5 )
          {
            v15 = (__int64 *)*v15;
            if ( v15 == LegacyBusDeviceNode + 63 )
              goto LABEL_10;
          }
          v17 = v15[3];
          if ( v17 )
          {
            v18 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD *))(v17 + 32))(
                    *(_QWORD *)(v17 + 8),
                    PoolWithTag,
                    0LL,
                    0LL,
                    0LL,
                    v13,
                    v12);
            v6 = v18;
            v19 = PoolWithTag;
            if ( v18 < 0 )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
              goto LABEL_13;
            }
            v14 = IopRootDeviceNode;
            PoolWithTag = v12;
            v10 = v18 == 288;
            v12 = v19;
          }
        }
LABEL_10:
        LegacyBusDeviceNode = (_QWORD *)LegacyBusDeviceNode[2];
      }
      else
      {
        v21 = 1;
        LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(a2, a3);
        if ( LegacyBusDeviceNode == (_QWORD *)v14 && !a2 )
          LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(1LL, 0LL);
      }
      if ( !LegacyBusDeviceNode )
        break;
    }
  }
  *a6 = PoolWithTag;
LABEL_13:
  ExFreePoolWithTag(v12, 0);
  return v6;
}
