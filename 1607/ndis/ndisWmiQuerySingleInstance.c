/*
 * XREFs of ndisWmiQuerySingleInstance @ 0x1C00A9BF4
 * Callers:
 *     ndisWMIDispatch @ 0x1C00A883C (ndisWMIDispatch.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisWmiGetGuid @ 0x1C00178A4 (ndisWmiGetGuid.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ndisQueryGuidDataSize @ 0x1C00A95E4 (ndisQueryGuidDataSize.c)
 *     ndisQueryGuidData @ 0x1C00A976C (ndisQueryGuidData.c)
 *     ndisWmiFindInstanceName @ 0x1C00A9DA0 (ndisWmiFindInstanceName.c)
 *     ndisReferenceMiniportByName @ 0x1C00E81F0 (ndisReferenceMiniportByName.c)
 *     ndisDereferenceVcPtr @ 0x1C00F9C38 (ndisDereferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiQuerySingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        struct _NDIS_MINIPORT_BLOCK *a5)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // r12
  int GuidDataSize; // ebx
  PVOID v10; // r14
  _NDIS_BIND_PATHS *BindPaths; // rcx
  GUID *v12; // r8
  unsigned int v13; // r15d
  size_t v14; // rdx
  CHAR *v15; // rcx
  unsigned __int16 v17; // cx
  int v18; // [rsp+28h] [rbp-28h]
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  size_t Size; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+50h]
  PVOID P; // [rsp+A8h] [rbp+58h] BYREF

  v21 = a3;
  P = 0LL;
  v6 = 0LL;
  a5 = 0LL;
  if ( (unsigned __int8)byte_1C00895D9 >= 4u )
    WPP_SF_q(0x2Bu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  *a4 = 0;
  if ( (*(_DWORD *)(a2 + 44) & 0x80u) != 0 )
  {
    v10 = 0LL;
    P = 0LL;
LABEL_6:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName(BindPaths->Paths);
      v6 = a5;
    }
LABEL_8:
    if ( (int)ndisWmiGetGuid(&v19, (__int64)a1, (_QWORD *)(a2 + 24), 0) < 0 )
    {
      if ( (unsigned __int8)byte_1C00895D9 >= 2u )
        WPP_SF_q(0x2Du, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
      GuidDataSize = -1073741811;
      goto LABEL_15;
    }
    GuidDataSize = ndisQueryGuidDataSize((int *)&Size, (__int64)a1, v10, v12, v6);
    if ( GuidDataSize < 0 )
    {
      if ( (unsigned __int8)byte_1C00895D9 < 2u )
        goto LABEL_15;
      v17 = 46;
    }
    else
    {
      v13 = Size + *(_DWORD *)(a2 + 56);
      if ( v13 < (unsigned int)Size )
      {
        GuidDataSize = -1073741823;
        goto LABEL_15;
      }
      if ( v21 < v13 )
      {
        if ( v21 < 0x38 )
        {
          GuidDataSize = -1073741789;
          *a4 = 4;
          goto LABEL_15;
        }
        *(_DWORD *)(a2 + 44) |= 0x20u;
        *(_DWORD *)a2 = 56;
        *(_DWORD *)(a2 + 48) = v13;
        *a4 = 56;
        goto LABEL_14;
      }
      v14 = (unsigned int)Size;
      v15 = (CHAR *)(a2 + *(unsigned int *)(a2 + 56));
      v6 = a5;
      v10 = P;
      *(_QWORD *)(a2 + 16) = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)a2 = v13;
      *(_DWORD *)(a2 + 60) = v14;
      GuidDataSize = ndisQueryGuidData(v15, v14, a1, v10, (_QWORD *)(a2 + 24), v18, v6);
      if ( GuidDataSize >= 0 )
      {
        *a4 = v13;
LABEL_14:
        GuidDataSize = 0;
LABEL_15:
        if ( v10 )
          ndisDereferenceVcPtr(v10);
        if ( v6 )
          ndisDereferenceMiniport((__int64)v6);
        goto LABEL_19;
      }
      if ( (unsigned __int8)byte_1C00895D9 < 2u )
        goto LABEL_15;
      v17 = 47;
    }
    WPP_SF_q(v17, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
    goto LABEL_15;
  }
  GuidDataSize = ndisWmiFindInstanceName(
                   &P,
                   a1,
                   *(unsigned int *)(a2 + 48) + a2 + 2,
                   *(unsigned __int16 *)(*(unsigned int *)(a2 + 48) + a2));
  if ( GuidDataSize >= 0 )
  {
    v10 = P;
    if ( P )
      goto LABEL_8;
    goto LABEL_6;
  }
  if ( (unsigned __int8)byte_1C00895D9 >= 2u )
    WPP_SF_q(0x2Cu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
LABEL_19:
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00895D9 >= 4u )
    WPP_SF_qD(0x30u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1, GuidDataSize);
  return (unsigned int)GuidDataSize;
}
