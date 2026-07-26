/*
 * XREFs of ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00A8934
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00120CC (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C0019BD8 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisIfCreateFilterInterface @ 0x1C001A7E0 (ndisIfCreateFilterInterface.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C001AB24 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     ndisIfCreatePersistedInterface @ 0x1C0020620 (ndisIfCreatePersistedInterface.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C00B3900 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x1C00C63C0 (NdisIfAllocateNetLuidIndexEx.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00C64F8 (ndisIfCreateInterfaceForiScsi.c)
 * Callees:
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     WPP_SF_dL @ 0x1C003E17C (WPP_SF_dL.c)
 *     WPP_SF_dllL @ 0x1C003E2B8 (WPP_SF_dllL.c)
 *     ?ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z @ 0x1C00B3230 (-ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z.c)
 */

__int64 __fastcall ndisIfAllocateAndVerifyNetLuidIndex(
        unsigned __int16 a1,
        unsigned int *a2,
        unsigned __int8 a3,
        char a4)
{
  int v4; // r13d
  unsigned int v5; // ebx
  _LIST_ENTRY *v6; // r15
  char *v7; // r12
  unsigned int Blink; // r14d
  unsigned int v9; // edi
  char v11; // al
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rax
  _LIST_ENTRY *v18; // rdx
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
  _LIST_ENTRY *v32; // rax
  _LIST_ENTRY *v33; // rcx
  _LIST_ENTRY *v34; // rax
  char v35; // [rsp+30h] [rbp-58h]
  _BYTE *v36; // [rsp+38h] [rbp-50h]
  unsigned int *v38; // [rsp+98h] [rbp+10h]

  v38 = a2;
  v4 = 0;
  v5 = 0;
  v36 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  Blink = 0;
  v9 = 0;
  v35 = 0;
  v11 = byte_1C008531D;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
  {
    WPP_SF_dL(0x23u, (__int64)a2, a1, a3);
    v11 = byte_1C008531D;
    a2 = v38;
  }
  if ( a3 )
  {
    *a2 = 0;
LABEL_5:
    KeWaitForSingleObject(&ndisUsedIndicesMutex, Executive, 0, 0, 0LL);
    Flink = ndisIfTypesList.Flink;
    ndisUsedIndicesMutexOwner = 2231133;
    if ( ndisIfTypesList.Flink != &ndisIfTypesList )
    {
      while ( LOWORD(Flink[1].Flink) != a1 )
      {
        Flink = Flink->Flink;
        if ( Flink == &ndisIfTypesList )
          goto LABEL_28;
      }
      v6 = Flink;
      v13 = Flink[3].Flink;
      Blink = (unsigned int)Flink[2].Blink;
      if ( !a3 )
      {
        if ( Blink >= (v5 >> 3) + 1 )
        {
          if ( ((unsigned __int8)(1 << (v5 & 7)) & *((_BYTE *)&v13->Flink + ((unsigned __int64)v5 >> 3))) != 0 )
            goto LABEL_10;
          if ( (unsigned __int8)byte_1C008531D >= 3u )
            WPP_SF_dL(0x25u, a1, a1, v5);
        }
        v9 = -1073741072;
LABEL_10:
        if ( !v6 )
          v9 = -1073741072;
        goto LABEL_12;
      }
      v17 = 0LL;
      if ( !Blink )
        goto LABEL_35;
      v18 = Flink[3].Flink;
      while ( LOBYTE(v18->Flink) == 0xFF )
      {
        v4 += 8;
        v17 = (unsigned int)(v17 + 1);
        v18 = (_LIST_ENTRY *)((char *)v18 + 1);
        if ( (unsigned int)v17 >= Blink )
          goto LABEL_35;
      }
      v19 = (char *)v13 + v17;
      v20 = (unsigned int)v17;
      v21 = *((unsigned __int8 *)&v13->Flink + v17);
      v22 = 1;
      v23 = 0;
      while ( (v21 & v22) != 0 )
      {
        v22 *= 2;
        if ( (unsigned int)++v23 >= 8 )
          goto LABEL_35;
      }
      v35 = v23;
      v4 += v23;
      *v19 = v22 | v21;
      v7 = v19;
      if ( a4 )
      {
        *((_BYTE *)&Flink[3].Blink->Flink + v20) |= v22;
        v36 = (char *)Flink[3].Blink + v20;
      }
      if ( !v19 )
      {
LABEL_35:
        if ( 8 * Blink + 1 >= 0x1001 )
          v9 = -1073741670;
      }
    }
LABEL_28:
    if ( !a3 )
      goto LABEL_10;
    if ( !v9 )
    {
      if ( v7 )
      {
        v24 = v35;
LABEL_32:
        if ( a4 && (v9 = ndisIfWriteRegistry((struct _NDIS_IF_TYPE *)v6)) != 0 )
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
      v25 = v6 != 0LL ? Blink : 0;
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
          memmove(v31, v6[3].Flink, v26 - 1);
          memmove(*((void **)v28 + 7), v6[3].Blink, v26 - 1);
          v33 = v6->Flink;
          v34 = v6->Blink;
          if ( v6->Flink->Blink != v6 || v34->Flink != v6 )
            __fastfail(3u);
          v34->Flink = v33;
          v33->Blink = v34;
          ExFreePoolWithTag(v6, 0);
        }
        v32 = ndisIfTypesList.Flink;
        *(_QWORD *)v28 = ndisIfTypesList.Flink;
        *((_QWORD *)v28 + 1) = &ndisIfTypesList;
        if ( v32->Blink != &ndisIfTypesList )
          __fastfail(3u);
        v32->Blink = (_LIST_ENTRY *)v28;
        v6 = (_LIST_ENTRY *)v28;
        ndisIfTypesList.Flink = (_LIST_ENTRY *)v28;
        goto LABEL_32;
      }
      v9 = -1073741670;
    }
LABEL_12:
    ndisUsedIndicesMutexOwner = 0;
    KeReleaseMutex(&ndisUsedIndicesMutex, 0);
    if ( (unsigned __int8)byte_1C008531D >= 4u )
      WPP_SF_dllL(v15, v14, a1, v4);
    return v9;
  }
  v5 = *a2;
  if ( *a2 <= 0x1000 )
    goto LABEL_5;
  if ( (unsigned __int8)v11 >= 3u )
    WPP_SF_d(0x24u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, v5);
  return 3221226224LL;
}
