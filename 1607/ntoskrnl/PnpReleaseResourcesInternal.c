/*
 * XREFs of PnpReleaseResourcesInternal @ 0x140555F0C
 * Callers:
 *     IopReleaseResources @ 0x140555054 (IopReleaseResources.c)
 *     PnpReallocateResources @ 0x14064BD60 (PnpReallocateResources.c)
 * Callees:
 *     IopWriteAllocatedResourcesToRegistry @ 0x140556210 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopFindLegacyBusDeviceNode @ 0x14055795C (IopFindLegacyBusDeviceNode.c)
 *     IopCallArbiter @ 0x1405579B4 (IopCallArbiter.c)
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
  __int64 v10; // rbx
  int v11; // ecx
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  _QWORD *v14; // rcx
  _QWORD **v15; // rax
  __int64 LegacyBusDeviceNode; // rax
  unsigned int v18; // eax
  unsigned int *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
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
        goto LABEL_29;
LABEL_9:
      if ( a1 == (_QWORD *)v7 )
        v10 = (__int64)a1;
      else
        v10 = a1[2];
      v11 = 1;
      v31 = 1;
      if ( v10 )
      {
        do
        {
          if ( v10 == v7 && v11 )
          {
            LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(v8, v9);
            v10 = LegacyBusDeviceNode;
            if ( LegacyBusDeviceNode == v7 && !v8 )
              v10 = IopFindLegacyBusDeviceNode(1LL, 0LL);
            v31 = 0;
          }
          v12 = (_QWORD *)(v10 + 488);
          v13 = *(_QWORD **)(v10 + 488);
          if ( v13 != (_QWORD *)(v10 + 488) )
          {
            do
            {
              if ( v13[3] )
              {
                v31 = 0;
                v13[6] = v13 + 5;
                v13[5] = v13 + 5;
                v22 = v13 + 5;
                v23 = (_QWORD **)(v13 + 5);
                v13[5] = &v22;
                v13[6] = &v22;
                IopCallArbiter(v13, 0LL);
                IopCallArbiter(v13, 2LL);
                v14 = v22;
                v15 = v23;
                if ( (_QWORD **)v22[1] != &v22 || *v23 != &v22 )
                  __fastfail(3u);
                *v23 = v22;
                v14[1] = v15;
                v23 = &v22;
                v22 = &v22;
                v12 = (_QWORD *)(v10 + 488);
              }
              v13 = (_QWORD *)*v13;
            }
            while ( v13 != v12 );
            v7 = IopRootDeviceNode;
          }
          v10 = *(_QWORD *)(v10 + 16);
          v11 = v31;
          v9 = v32;
        }
        while ( v10 );
        v6 = PnpDefaultInterfaceType;
        v5 = v33;
      }
      if ( v3 > 1 )
      {
        v18 = v4[3];
        v19 = v4 + 4;
        if ( v18 )
        {
          v20 = v18;
          do
          {
            v21 = 0LL;
            if ( *(_BYTE *)v19 == 5 )
              v21 = v19[1];
            v19 = (unsigned int *)((char *)v19 + v21 + 20);
            --v20;
          }
          while ( v20 );
        }
        v4 = v19;
      }
      v33 = ++v5;
      if ( v5 >= v3 )
        return IopWriteAllocatedResourcesToRegistry(a1, 0LL, 0LL);
    }
    v9 = 0;
    v32 = 0;
LABEL_29:
    v8 = v6;
    goto LABEL_9;
  }
  return IopWriteAllocatedResourcesToRegistry(a1, 0LL, 0LL);
}
