/*
 * XREFs of ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00A17D0
 * Callers:
 *     ndisIfCreateFilterInterface @ 0x1C00140D8 (ndisIfCreateFilterInterface.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C00146A0 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001491C (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C001CC6C (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ndisIfCreatePersistedInterface @ 0x1C0043470 (ndisIfCreatePersistedInterface.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C00C4490 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x1C00C44A0 (NdisIfAllocateNetLuidIndexEx.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00C44B8 (ndisIfCreateInterfaceForiScsi.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 *     WPP_SF_dL @ 0x1C0042EBC (WPP_SF_dL.c)
 *     WPP_SF_dllL @ 0x1C0043038 (WPP_SF_dllL.c)
 *     ?ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z @ 0x1C00C3F9C (-ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z.c)
 */

__int64 __fastcall ndisIfAllocateAndVerifyNetLuidIndex(
        unsigned __int16 a1,
        unsigned int *a2,
        unsigned __int8 a3,
        char a4)
{
  int v4; // r13d
  unsigned int v5; // ebx
  struct _NDIS_IF_TYPE *v6; // r15
  char *v7; // r12
  unsigned int v8; // r14d
  unsigned int v9; // edi
  char v11; // al
  struct _NDIS_IF_TYPE *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rax
  _BYTE *v18; // rdx
  char *v19; // r11
  __int64 v20; // r10
  int v21; // eax
  int v22; // edx
  int v23; // r8d
  char v24; // si
  unsigned int v25; // r13d
  unsigned int v26; // ebp
  char *PoolWithTag; // rax
  char *v28; // rbx
  __int64 v29; // r14
  __int64 v30; // rax
  char *v31; // rcx
  struct _NDIS_IF_TYPE *v32; // rax
  __int64 v33; // rcx
  struct _NDIS_IF_TYPE **v34; // rax
  char v35; // [rsp+30h] [rbp-58h]
  _BYTE *v36; // [rsp+38h] [rbp-50h]
  unsigned int *v38; // [rsp+98h] [rbp+10h]

  v38 = a2;
  v4 = 0;
  v5 = 0;
  v36 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v35 = 0;
  v11 = byte_1C00895DD;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
  {
    WPP_SF_dL(0x23u, (__int64)a2, a1, a3);
    v11 = byte_1C00895DD;
    a2 = v38;
  }
  if ( a3 )
  {
    *a2 = 0;
LABEL_5:
    KeWaitForSingleObject(&ndisUsedIndicesMutex, Executive, 0, 0, 0LL);
    v12 = ndisIfTypesList;
    if ( ndisIfTypesList != (struct _NDIS_IF_TYPE *)&ndisIfTypesList )
    {
      while ( *((_WORD *)v12 + 8) != a1 )
      {
        v12 = *(struct _NDIS_IF_TYPE **)v12;
        if ( v12 == (struct _NDIS_IF_TYPE *)&ndisIfTypesList )
          goto LABEL_26;
      }
      v6 = v12;
      v13 = *((_QWORD *)v12 + 6);
      v8 = *((_DWORD *)v12 + 10);
      if ( !a3 )
      {
        if ( v8 >= (v5 >> 3) + 1 )
        {
          if ( ((unsigned __int8)(1 << (v5 & 7)) & *(_BYTE *)(((unsigned __int64)v5 >> 3) + v13)) != 0 )
            goto LABEL_10;
          if ( (unsigned __int8)byte_1C00895DD >= 3u )
            WPP_SF_dL(0x25u, a1, a1, v5);
        }
        v9 = -1073741072;
LABEL_10:
        if ( !v6 )
          v9 = -1073741072;
        goto LABEL_12;
      }
      v17 = 0LL;
      if ( !v8 )
        goto LABEL_44;
      v18 = (_BYTE *)*((_QWORD *)v12 + 6);
      while ( *v18 == 0xFF )
      {
        v4 += 8;
        v17 = (unsigned int)(v17 + 1);
        ++v18;
        if ( (unsigned int)v17 >= v8 )
          goto LABEL_44;
      }
      v19 = (char *)(v17 + v13);
      v20 = (unsigned int)v17;
      v21 = *(unsigned __int8 *)(v17 + v13);
      v22 = 1;
      v23 = 0;
      while ( (v21 & v22) != 0 )
      {
        v22 *= 2;
        if ( (unsigned int)++v23 >= 8 )
          goto LABEL_44;
      }
      v35 = v23;
      v4 += v23;
      *v19 = v22 | v21;
      v7 = v19;
      if ( a4 )
      {
        *(_BYTE *)(*((_QWORD *)v12 + 7) + v20) |= v22;
        v36 = (_BYTE *)(v20 + *((_QWORD *)v12 + 7));
      }
      if ( !v19 )
      {
LABEL_44:
        if ( 8 * v8 + 1 >= 0x1001 )
          v9 = -1073741670;
      }
    }
LABEL_26:
    if ( !a3 )
      goto LABEL_10;
    if ( !v9 )
    {
      if ( v7 )
      {
        v24 = v35;
LABEL_30:
        if ( a4 && (v9 = ndisIfWriteRegistry(v6)) != 0 )
        {
          if ( v7 )
            *v7 &= ~(1 << v24);
          if ( v36 )
            *v36 &= ~(1 << v24);
        }
        else
        {
          *v38 = v4;
        }
        goto LABEL_12;
      }
      v25 = v6 != 0LL ? v8 : 0;
      v26 = v25 + 1;
      v4 = 8 * v25;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v26 + 64, 0x6669444Eu);
      v28 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x40uLL);
        *((_WORD *)v28 + 8) = a1;
        *((_DWORD *)v28 + 10) = v26;
        *((_QWORD *)v28 + 7) = &v28[v26 + 64];
        *((_QWORD *)v28 + 6) = v28 + 64;
        v29 = v26 - 1;
        v28[v29 + 64] = 1;
        v30 = *((_QWORD *)v28 + 7);
        if ( a4 )
        {
          *(_BYTE *)(v29 + v30) = 1;
          v36 = (_BYTE *)(v29 + *((_QWORD *)v28 + 7));
        }
        else
        {
          *(_BYTE *)(v29 + v30) = 0;
        }
        v31 = (char *)*((_QWORD *)v28 + 6);
        v24 = 0;
        v7 = &v31[v29];
        if ( v6 )
        {
          memmove(v31, *((const void **)v6 + 6), v26 - 1);
          memmove(*((void **)v28 + 7), *((const void **)v6 + 7), v26 - 1);
          v33 = *(_QWORD *)v6;
          v34 = (struct _NDIS_IF_TYPE **)*((_QWORD *)v6 + 1);
          if ( *(struct _NDIS_IF_TYPE **)(*(_QWORD *)v6 + 8LL) != v6 || *v34 != v6 )
            __fastfail(3u);
          *v34 = (struct _NDIS_IF_TYPE *)v33;
          *(_QWORD *)(v33 + 8) = v34;
          ExFreePoolWithTag(v6, 0);
        }
        v32 = ndisIfTypesList;
        if ( *((struct _NDIS_IF_TYPE ***)ndisIfTypesList + 1) != &ndisIfTypesList )
          __fastfail(3u);
        *(_QWORD *)v28 = ndisIfTypesList;
        v6 = (struct _NDIS_IF_TYPE *)v28;
        *((_QWORD *)v28 + 1) = &ndisIfTypesList;
        *((_QWORD *)v32 + 1) = v28;
        ndisIfTypesList = (struct _NDIS_IF_TYPE *)v28;
        goto LABEL_30;
      }
      v9 = -1073741670;
    }
LABEL_12:
    KeReleaseMutex(&ndisUsedIndicesMutex, 0);
    if ( (unsigned __int8)byte_1C00895DD >= 4u )
      WPP_SF_dllL(v15, v14, a1, v4);
    return v9;
  }
  v5 = *a2;
  if ( *a2 <= 0x1000 )
    goto LABEL_5;
  if ( (unsigned __int8)v11 >= 3u )
    WPP_SF_d(0x24u, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, v5);
  return 3221226224LL;
}
