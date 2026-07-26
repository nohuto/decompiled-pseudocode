/*
 * XREFs of ndisWmiQueryAllData @ 0x1C00CFBFC
 * Callers:
 *     ndisWMIDispatch @ 0x1C009EDDC (ndisWMIDispatch.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisWmiGetGuid @ 0x1C001A910 (ndisWmiGetGuid.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ndisQueryGuidDataSize @ 0x1C009F3C4 (ndisQueryGuidDataSize.c)
 *     ndisQueryGuidData @ 0x1C009F550 (ndisQueryGuidData.c)
 *     ndisWmiGuidIsAdapterSpecific @ 0x1C00CFAC8 (ndisWmiGuidIsAdapterSpecific.c)
 *     ndisReferenceMiniportByName @ 0x1C00E30F8 (ndisReferenceMiniportByName.c)
 *     ndisDereferenceVcPtr @ 0x1C00F3C4C (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C00F3EA0 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiQueryAllData(
        struct _NDIS_MINIPORT_BLOCK *a1,
        GUID *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // r12
  unsigned int *v10; // r13
  int GuidDataSize; // esi
  __int16 v12; // r9
  _NDIS_BIND_PATHS *BindPaths; // rcx
  int VcCount; // ecx
  unsigned int v15; // eax
  unsigned int v16; // r15d
  unsigned int v17; // ecx
  unsigned int v18; // r14d
  unsigned int v19; // r14d
  unsigned __int16 *v20; // r9
  unsigned int v21; // r15d
  unsigned __int16 v22; // cx
  unsigned int v23; // r8d
  __int64 v24; // rdx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v26; // r13
  unsigned int v27; // esi
  unsigned int v28; // eax
  unsigned __int16 *v29; // r9
  unsigned int v30; // r15d
  __int64 v31; // rcx
  __int64 v32; // r14
  unsigned int v33; // edx
  unsigned int v34; // ecx
  __int64 v35; // rax
  size_t v36; // rdx
  int v38; // [rsp+28h] [rbp-48h]
  unsigned int Size; // [rsp+40h] [rbp-30h] BYREF
  unsigned int Size_4; // [rsp+44h] [rbp-2Ch]
  unsigned int v41; // [rsp+48h] [rbp-28h]
  unsigned int v42; // [rsp+4Ch] [rbp-24h]
  __int64 v43; // [rsp+50h] [rbp-20h]
  unsigned __int16 *v44; // [rsp+58h] [rbp-18h]
  unsigned int *v45; // [rsp+60h] [rbp-10h] BYREF
  char v49; // [rsp+D8h] [rbp+68h]

  v5 = 0LL;
  v43 = 0LL;
  if ( (unsigned __int8)byte_1C0083719 >= 4u )
    WPP_SF_q(0x22u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  v10 = a5;
  *a5 = 0;
  if ( a4 < 0x38 )
  {
    GuidDataSize = -1073741789;
    *a5 = 4;
    goto LABEL_62;
  }
  if ( (int)ndisWmiGetGuid(&v45, (__int64)a1, (_QWORD *)(a3 + 24), 0) < 0 )
  {
    if ( (unsigned __int8)byte_1C0083719 >= 2u )
      WPP_SF_q(v12 + 35, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1);
    GuidDataSize = -1073741811;
    goto LABEL_62;
  }
  BindPaths = a1->BindPaths;
  if ( BindPaths )
  {
    ndisReferenceMiniportByName(BindPaths->Paths);
    v5 = (struct _NDIS_MINIPORT_BLOCK *)v43;
  }
  if ( ndisWmiGuidIsAdapterSpecific(a2) || (a1->Flags & 0x20000) == 0 )
  {
    GuidDataSize = ndisQueryGuidDataSize((int *)&Size, (__int64)a1, 0LL, a2, v5);
    if ( GuidDataSize < 0 )
    {
      if ( (unsigned __int8)byte_1C0083719 < 2u )
        goto LABEL_60;
      v22 = 36;
      goto LABEL_59;
    }
    v32 = (Size + 3) & 0xFFFFFFFC;
    v33 = a1->pAdapterInstanceName->Length + 2;
    v34 = v33 + v32 + 76;
    if ( v34 < 0x48 || v34 < (unsigned int)v32 || v34 < v33 )
    {
      if ( (unsigned __int8)byte_1C0083719 < 2u )
        goto LABEL_60;
      v22 = 37;
      goto LABEL_59;
    }
    if ( a4 >= v34 )
    {
      v35 = MEMORY[0xFFFFF78000000014];
      v36 = Size;
      v5 = (struct _NDIS_MINIPORT_BLOCK *)v43;
      *(_DWORD *)(a3 + 44) |= 0x10u;
      *(_QWORD *)(a3 + 16) = v35;
      *(_DWORD *)(a3 + 56) = v32 + 72;
      *(_DWORD *)a3 = v34;
      *(_DWORD *)(a3 + 52) = 1;
      *(_DWORD *)(a3 + 48) = 72;
      *(_DWORD *)(a3 + 60) = v36;
      GuidDataSize = ndisQueryGuidData((CHAR *)(a3 + 72), v36, a1, 0LL, a2, v38, v5);
      if ( GuidDataSize >= 0 )
      {
        *(_DWORD *)(*(unsigned int *)(a3 + 56) + a3) = v32 + 76;
        *(_WORD *)(v32 + a3 + 76) = a1->pAdapterInstanceName->Length;
        memmove(
          (void *)((unsigned int)v32 + a3 + 78),
          a1->pAdapterInstanceName->Buffer,
          a1->pAdapterInstanceName->Length);
        GuidDataSize = 0;
        *a5 = *(_DWORD *)a3;
        goto LABEL_60;
      }
      if ( (unsigned __int8)byte_1C0083719 < 2u )
        goto LABEL_60;
      v22 = 38;
      goto LABEL_59;
    }
    *(_DWORD *)(a3 + 48) = v34;
    goto LABEL_51;
  }
  VcCount = a1->VcCount;
  v49 = 0;
  v5 = (struct _NDIS_MINIPORT_BLOCK *)v43;
  *(_QWORD *)(a3 + 16) = MEMORY[0xFFFFF78000000014];
  v41 = VcCount + 1;
  v15 = ((8 * (VcCount + 1) + 3) & 0xFFFFFFFC) + 72;
  *(_DWORD *)(a3 + 56) = v15;
  v16 = (v15 + 4 * (VcCount + 1) + 7) & 0xFFFFFFF8;
  v45 = (unsigned int *)(a3 + v15);
  v44 = (unsigned __int16 *)(a3 + v16);
  GuidDataSize = ndisQueryGuidDataSize((int *)&Size, (__int64)a1, 0LL, a2, v5);
  if ( GuidDataSize < 0 )
  {
    if ( (unsigned __int8)byte_1C0083719 < 2u )
      goto LABEL_60;
    v22 = 40;
    goto LABEL_59;
  }
  v17 = a4;
  v18 = (a1->pAdapterInstanceName->Length + 9) & 0xFFFFFFF8;
  Size_4 = (Size + 7) & 0xFFFFFFF8;
  v19 = v16 + Size_4 + v18;
  if ( a4 >= v19 )
  {
    v20 = v44;
    *v45 = v16;
    *v20 = a1->pAdapterInstanceName->Length;
    memmove(v20 + 1, a1->pAdapterInstanceName->Buffer, a1->pAdapterInstanceName->Length);
    v21 = ((a1->pAdapterInstanceName->Length + 9) & 0xFFFFFFF8) + v16;
    GuidDataSize = ndisQueryGuidData((CHAR *)(a3 + v21), Size, a1, 0LL, a2, v38, v5);
    if ( GuidDataSize < 0 )
    {
      if ( (unsigned __int8)byte_1C0083719 < 2u )
        goto LABEL_60;
      v22 = 39;
LABEL_59:
      WPP_SF_q(v22, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1);
      goto LABEL_60;
    }
    v17 = a4;
    *(_DWORD *)(a3 + 64) = Size;
    *(_DWORD *)(a3 + 60) = v21;
    v16 = Size_4 + v21;
    v44 = (unsigned __int16 *)(a3 + v16);
  }
  v23 = v41;
  Size_4 = 1;
  v24 = 1LL;
  if ( v41 == 1 )
  {
    if ( v17 >= v19 )
    {
      *(_DWORD *)a3 = v19;
      *(_DWORD *)(a3 + 52) = 1;
      *a5 = v19;
LABEL_52:
      GuidDataSize = 0;
      goto LABEL_60;
    }
    *(_DWORD *)(a3 + 48) = v19;
LABEL_51:
    *(_DWORD *)(a3 + 44) |= 0x20u;
    *(_DWORD *)a3 = 56;
    *a5 = 56;
    goto LABEL_52;
  }
  Flink = a1->WmiEnabledVcs.Flink;
  v43 = (__int64)Flink;
  if ( Flink != &a1->WmiEnabledVcs )
  {
    while ( (unsigned int)v24 < v23 )
    {
      v26 = Flink - 20;
      if ( (unsigned __int8)ndisReferenceVcPtr(&Flink[-20], v24) )
      {
        if ( v26[19].Flink )
        {
          GuidDataSize = ndisQueryGuidDataSize((int *)&Size, (__int64)a1, v26, a2, v5);
          if ( GuidDataSize >= 0 )
          {
            v27 = Size;
            v28 = ((Size + 7) & 0xFFFFFFF8) + ((LOWORD(v26[18].Blink) + 9) & 0xFFFFFFF8);
            v42 = (Size + 7) & 0xFFFFFFF8;
            v19 += v28;
            if ( a4 >= v19 )
            {
              v29 = v44;
              v45[Size_4] = v16;
              *v29 = (unsigned __int16)v26[18].Blink;
              memmove(v29 + 1, v26[19].Flink, LOWORD(v26[18].Blink));
              v30 = ((LOWORD(v26[18].Blink) + 9) & 0xFFFFFFF8) + v16;
              GuidDataSize = ndisQueryGuidData((CHAR *)(a3 + v30), v27, a1, v26, a2, v38, v5);
              if ( GuidDataSize < 0 )
              {
                if ( (unsigned __int8)byte_1C0083719 >= 2u )
                  WPP_SF_qq(0x29u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a1, v26);
                ndisDereferenceVcPtr(v26);
                LODWORD(v24) = Size_4;
                break;
              }
              v31 = Size_4;
              *(_DWORD *)(a3 + 8LL * Size_4 + 64) = Size;
              *(_DWORD *)(a3 + 8 * v31 + 60) = v30;
              v16 = v42 + v30;
              ++Size_4;
              v44 = (unsigned __int16 *)(a3 + v16);
            }
            else
            {
              *(_DWORD *)(a3 + 44) |= 0x20u;
              *(_DWORD *)a3 = 56;
              GuidDataSize = 0;
              *(_DWORD *)(a3 + 48) = v19;
              *a5 = 56;
              v49 = 1;
            }
          }
        }
        ndisDereferenceVcPtr(v26);
      }
      v24 = Size_4;
      Flink = *(_LIST_ENTRY **)v43;
      v43 = (__int64)Flink;
      if ( Flink == &a1->WmiEnabledVcs )
        break;
      v23 = v41;
    }
    if ( v49 )
      goto LABEL_60;
    v10 = a5;
  }
  *(_DWORD *)a3 = v19;
  GuidDataSize = 0;
  *(_DWORD *)(a3 + 52) = v24;
  *v10 = v19;
LABEL_60:
  if ( v5 )
    ndisDereferenceMiniport((__int64)v5, 0x5Du);
LABEL_62:
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0083719 >= 4u )
    WPP_SF_qD(0x2Au, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1, GuidDataSize);
  return (unsigned int)GuidDataSize;
}
