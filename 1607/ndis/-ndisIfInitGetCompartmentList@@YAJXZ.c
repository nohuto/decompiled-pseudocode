/*
 * XREFs of ?ndisIfInitGetCompartmentList@@YAJXZ @ 0x1C001D070
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C001CC6C (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C001D2BC (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 */

__int64 __fastcall ndisIfInitGetCompartmentList(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rdi
  int v4; // ebx
  unsigned int v5; // ecx
  unsigned int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned int v9; // r14d
  unsigned int v10; // ecx
  __int64 v11; // r13
  __int64 v12; // rsi
  unsigned __int8 v13; // al
  unsigned __int16 v14; // dx
  int v15; // eax
  __int128 v17; // xmm0
  __int64 v18; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+30h] [rbp-D8h]
  _QWORD v20[10]; // [rsp+38h] [rbp-D0h] BYREF
  struct _NDIS_IF_COMPARTMENT_BLOCK *v21; // [rsp+88h] [rbp-80h] BYREF
  char *PoolWithTag; // [rsp+90h] [rbp-78h]
  _QWORD v23[14]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v24[206]; // [rsp+108h] [rbp+0h] BYREF

  v3 = 0LL;
  v21 = 0LL;
  LODWORD(v18) = 1;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_(33LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a3);
  memset(v23, 0, sizeof(v23));
  LODWORD(v23[1]) = 0;
  v23[2] = &NPI_MS_NDIS_MODULEID;
  LODWORD(v23[8]) = 1640;
  LODWORD(v23[3]) = 7;
  v23[4] = 0x100000000LL;
  v23[5] = 0LL;
  LODWORD(v23[6]) = 4;
  v23[7] = 0LL;
  LODWORD(v23[13]) = 0;
  v4 = NsiEnumerateObjectsAllParametersEx(v23);
  if ( v4 >= 0 )
  {
    v5 = v23[13];
    if ( LODWORD(v23[13]) )
    {
      while ( 1 )
      {
        if ( v3 )
        {
          ExFreePoolWithTag(v3, 0);
          v5 = v23[13];
          v3 = 0LL;
        }
        v6 = (4 * v5 + 7) & 0xFFFFFFF8;
        if ( 4 * (unsigned __int64)v5 > 0xFFFFFFFF || v6 + 1640 * v5 < v6 )
        {
          v4 = -1073741670;
          goto LABEL_22;
        }
        v7 = v6;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v6 + 1640LL * v5, 0x6669444Eu);
        v3 = PoolWithTag;
        if ( !PoolWithTag )
          break;
        memset(PoolWithTag, 0, v7 + 1640LL * LODWORD(v23[13]));
        v23[5] = PoolWithTag;
        v23[7] = &PoolWithTag[v7];
        LODWORD(v23[6]) = 4;
        LODWORD(v23[8]) = 1640;
        v4 = NsiEnumerateObjectsAllParametersEx(v23);
        if ( v4 != 261 )
          goto LABEL_11;
        v5 = v23[13];
      }
      v4 = -1073741670;
LABEL_11:
      if ( v4 >= 0 )
      {
        v8 = v23[7];
        v9 = 0;
        v10 = v23[13];
        v11 = v23[5];
        v19 = v23[7];
        if ( LODWORD(v23[13]) )
        {
          do
          {
            v12 = 1640LL * v9 + v8;
            if ( *(_BYTE *)v12 == 0xAD )
            {
              v13 = *(_BYTE *)(v12 + 1);
              if ( v13 )
              {
                v14 = *(_WORD *)(v12 + 2);
                if ( v14 >= 0x448u )
                {
                  if ( v13 < 3u || v14 < 0x664u )
                  {
                    *(_DWORD *)v12 = 107479981;
                    memset((void *)(v12 + 1096), 0, 0x204uLL);
                    *(_DWORD *)(v12 + 1616) = 0;
                    *(_DWORD *)(v12 + 1612) = 1;
                    if ( *(_DWORD *)(v11 + 4LL * v9) == 1 )
                    {
                      *(_WORD *)(v12 + 1096) = 38;
                      *(_OWORD *)(v12 + 1098) = *(_OWORD *)L"Default Compartment";
                      *(_OWORD *)(v12 + 1114) = *(_OWORD *)L"Compartment";
                      *(_DWORD *)(v12 + 1130) = *(_DWORD *)L"ent";
                      *(_WORD *)(v12 + 1134) = aDefaultCompart[18];
                      v17 = *(_OWORD *)(v12 + 1080);
                      *(_DWORD *)(v12 + 1616) |= 4u;
                      *(_OWORD *)(v12 + 1620) = v17;
                    }
                    memset(v20, 0, 0x48uLL);
                    LODWORD(v20[3]) = 7;
                    v20[0] = 0LL;
                    v20[2] = &NPI_MS_NDIS_MODULEID;
                    LODWORD(v20[1]) = 0;
                    LODWORD(v20[8]) = 1640;
                    v20[4] = 0LL;
                    v20[5] = v11 + 4LL * v9;
                    LODWORD(v20[6]) = 4;
                    v20[7] = v12;
                    NsiSetAllParametersEx(v20);
                  }
                  v15 = ndisIfCreateCompartmentBlock(
                          *(_DWORD *)(v11 + 4LL * v9),
                          0LL,
                          (struct _NDIS_NSI_COMPARTMENT_RW *)v12,
                          &v21);
                  v10 = v23[13];
                  v4 = v15;
                }
                v8 = v19;
              }
            }
            ++v9;
          }
          while ( v9 < v10 );
          v3 = PoolWithTag;
        }
      }
    }
    else
    {
      memset(v20, 0, 0x48uLL);
      v20[0] = 0LL;
      v20[5] = &v18;
      LODWORD(v20[1]) = 0;
      v20[2] = &NPI_MS_NDIS_MODULEID;
      LODWORD(v20[3]) = 7;
      v20[4] = 0x100000002LL;
      LODWORD(v20[6]) = 4;
      memset(v24, 0, 0x668uLL);
      LOWORD(v24[137]) = 38;
      *(_DWORD *)((char *)&v24[141] + 2) = *(_DWORD *)L"ent";
      *(_OWORD *)&v24[135] = xmmword_1C007A728;
      HIWORD(v24[141]) = aDefaultCompart[18];
      v20[7] = v24;
      LODWORD(v24[0]) = 107479981;
      *(_OWORD *)((char *)&v24[137] + 2) = *(_OWORD *)L"Default Compartment";
      HIDWORD(v24[201]) = 1;
      *(_OWORD *)((char *)&v24[139] + 2) = *(_OWORD *)L"Compartment";
      LODWORD(v24[202]) = 4;
      LODWORD(v20[8]) = 1640;
      v4 = NsiSetAllParametersEx(v20);
      if ( v4 >= 0 )
        goto LABEL_24;
    }
LABEL_22:
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
LABEL_24:
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_d(34LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, (unsigned int)v4);
  return (unsigned int)v4;
}
