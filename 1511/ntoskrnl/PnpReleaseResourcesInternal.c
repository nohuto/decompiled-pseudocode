/*
 * XREFs of PnpReleaseResourcesInternal @ 0x140617424
 * Callers:
 *     IopReleaseResources @ 0x140603E54 (IopReleaseResources.c)
 *     PnpReallocateResources @ 0x140617258 (PnpReallocateResources.c)
 * Callees:
 *     IopWriteAllocatedResourcesToRegistry @ 0x140529A40 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopFindLegacyBusDeviceNode @ 0x14052B1EC (IopFindLegacyBusDeviceNode.c)
 *     IopCallArbiter @ 0x14052B248 (IopCallArbiter.c)
 */

__int64 __fastcall PnpReleaseResourcesInternal(_QWORD *a1)
{
  unsigned int *v2; // rdi
  unsigned int v3; // r12d
  unsigned int *v4; // r15
  unsigned int v5; // r9d
  int v6; // edx
  __int64 v7; // r11
  unsigned int v8; // r13d
  unsigned int v9; // eax
  _QWORD *LegacyBusDeviceNode; // rbx
  int v11; // ecx
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  _QWORD *v14; // r8
  _QWORD *v15; // rcx
  _QWORD **v16; // rax
  unsigned int v17; // eax
  unsigned int *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  _QWORD *v22; // [rsp+30h] [rbp-39h] BYREF
  _QWORD **v23; // [rsp+38h] [rbp-31h]
  int v24; // [rsp+40h] [rbp-29h]
  __int64 v25; // [rsp+48h] [rbp-21h]
  __int64 v26; // [rsp+50h] [rbp-19h]
  int v27; // [rsp+58h] [rbp-11h]
  int v28; // [rsp+5Ch] [rbp-Dh]
  __int64 v29; // [rsp+60h] [rbp-9h]
  __int64 v30; // [rsp+78h] [rbp+Fh]
  int v31; // [rsp+D0h] [rbp+67h]
  unsigned int v32; // [rsp+D8h] [rbp+6Fh]
  unsigned int v33; // [rsp+E0h] [rbp+77h]

  v24 = 0;
  v25 = 0LL;
  v28 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v2 = (unsigned int *)a1[52];
  v23 = &v22;
  v22 = &v22;
  v26 = a1[4];
  v27 = 4;
  if ( (v2 || (v2 = (unsigned int *)a1[68]) != 0LL) && (v3 = *v2) != 0 )
  {
    v4 = v2 + 1;
  }
  else
  {
    v2 = 0LL;
    v4 = 0LL;
    v3 = 1;
  }
  v5 = 0;
  v33 = 0;
  if ( v3 )
  {
    v6 = PnpDefaultInterfaceType;
    v7 = IopRootDeviceNode;
    while ( v2 )
    {
      v8 = *v4;
      v9 = v4[1];
      v32 = v9;
      if ( *v4 == -1 )
        goto LABEL_12;
LABEL_13:
      if ( a1 == (_QWORD *)v7 )
        LegacyBusDeviceNode = a1;
      else
        LegacyBusDeviceNode = (_QWORD *)a1[2];
      v11 = 1;
      v31 = 1;
      if ( LegacyBusDeviceNode )
      {
        do
        {
          if ( LegacyBusDeviceNode == (_QWORD *)v7 && v11 )
          {
            LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(v8, v9);
            if ( LegacyBusDeviceNode == (_QWORD *)v7 && !v8 )
              LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(1u, 0);
            v31 = 0;
          }
          v12 = LegacyBusDeviceNode + 61;
          v13 = (_QWORD *)LegacyBusDeviceNode[61];
          if ( v13 != LegacyBusDeviceNode + 61 )
          {
            do
            {
              if ( v13[3] )
              {
                v14 = v13 + 5;
                v13[6] = v13 + 5;
                v13[5] = v13 + 5;
                v22 = v14;
                v23 = (_QWORD **)(v13 + 5);
                v31 = 0;
                if ( (_QWORD *)*v14 != v14 )
                  __fastfail(3u);
                *v14 = &v22;
                v13[6] = &v22;
                IopCallArbiter((__int64)v13, 0LL, (__int64)v14);
                IopCallArbiter((__int64)v13, 2LL, 0LL);
                v15 = v22;
                v16 = v23;
                if ( (_QWORD **)v22[1] != &v22 || *v23 != &v22 )
                  __fastfail(3u);
                *v23 = v22;
                v15[1] = v16;
                v23 = &v22;
                v22 = &v22;
                v12 = LegacyBusDeviceNode + 61;
              }
              v13 = (_QWORD *)*v13;
            }
            while ( v13 != v12 );
            v7 = IopRootDeviceNode;
          }
          LegacyBusDeviceNode = (_QWORD *)LegacyBusDeviceNode[2];
          v11 = v31;
          v9 = v32;
        }
        while ( LegacyBusDeviceNode );
        v6 = PnpDefaultInterfaceType;
        v5 = v33;
      }
      if ( v3 > 1 )
      {
        v17 = v4[3];
        v18 = v4 + 4;
        if ( v17 )
        {
          v19 = v17;
          do
          {
            v20 = 0LL;
            if ( *(_BYTE *)v18 == 5 )
              v20 = v18[1];
            v18 = (unsigned int *)((char *)v18 + v20 + 20);
            --v19;
          }
          while ( v19 );
        }
        v4 = v18;
      }
      v33 = ++v5;
      if ( v5 >= v3 )
        return IopWriteAllocatedResourcesToRegistry((__int64)a1, 0LL, 0);
    }
    v9 = 0;
    v32 = 0;
LABEL_12:
    v8 = v6;
    goto LABEL_13;
  }
  return IopWriteAllocatedResourcesToRegistry((__int64)a1, 0LL, 0);
}
