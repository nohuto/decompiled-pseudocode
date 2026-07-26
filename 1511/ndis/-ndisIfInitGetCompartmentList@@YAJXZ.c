/*
 * XREFs of ?ndisIfInitGetCompartmentList@@YAJXZ @ 0x1C0020464
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0020060 (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C00206B4 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
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
  __int64 v17; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D8h]
  _QWORD v19[10]; // [rsp+38h] [rbp-D0h] BYREF
  char *PoolWithTag; // [rsp+88h] [rbp-80h]
  struct _NDIS_IF_COMPARTMENT_BLOCK *v21; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v22[14]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v23[204]; // [rsp+108h] [rbp+0h] BYREF

  v3 = 0LL;
  v21 = 0LL;
  LODWORD(v17) = 1;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_(33LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a3);
  memset(v22, 0, sizeof(v22));
  LODWORD(v22[1]) = 0;
  v22[2] = &NPI_MS_NDIS_MODULEID;
  LODWORD(v22[8]) = 1624;
  LODWORD(v22[3]) = 7;
  v22[4] = 0x100000000LL;
  v22[5] = 0LL;
  LODWORD(v22[6]) = 4;
  v22[7] = 0LL;
  LODWORD(v22[13]) = 0;
  v4 = NsiEnumerateObjectsAllParametersEx(v22);
  if ( v4 >= 0 )
  {
    v5 = v22[13];
    if ( LODWORD(v22[13]) )
    {
      while ( 1 )
      {
        if ( v3 )
        {
          ExFreePoolWithTag(v3, 0);
          v5 = v22[13];
          v3 = 0LL;
        }
        v6 = (4 * v5 + 7) & 0xFFFFFFF8;
        if ( 4 * (unsigned __int64)v5 > 0xFFFFFFFF || v6 + 1624 * v5 < v6 )
        {
          v4 = -1073741670;
          goto LABEL_22;
        }
        v7 = v6;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v6 + 1624LL * v5, 0x6669444Eu);
        v3 = PoolWithTag;
        if ( !PoolWithTag )
          break;
        memset(PoolWithTag, 0, v7 + 1624LL * LODWORD(v22[13]));
        v22[5] = PoolWithTag;
        v22[7] = &PoolWithTag[v7];
        LODWORD(v22[6]) = 4;
        LODWORD(v22[8]) = 1624;
        v4 = NsiEnumerateObjectsAllParametersEx(v22);
        if ( v4 != 261 )
          goto LABEL_11;
        v5 = v22[13];
      }
      v4 = -1073741670;
LABEL_11:
      if ( v4 >= 0 )
      {
        v8 = v22[7];
        v9 = 0;
        v10 = v22[13];
        v11 = v22[5];
        v18 = v22[7];
        if ( LODWORD(v22[13]) )
        {
          do
          {
            v12 = 1624LL * v9 + v8;
            if ( *(_BYTE *)v12 == 0xAD )
            {
              v13 = *(_BYTE *)(v12 + 1);
              if ( v13 )
              {
                v14 = *(_WORD *)(v12 + 2);
                if ( v14 >= 0x448u )
                {
                  if ( v13 < 2u || v14 < 0x654u )
                  {
                    *(_DWORD *)v12 = 106431149;
                    memset((void *)(v12 + 1096), 0, 0x204uLL);
                    *(_QWORD *)(v12 + 1612) = 1LL;
                    if ( *(_DWORD *)(v11 + 4LL * v9) == 1 )
                    {
                      *(_WORD *)(v12 + 1096) = 38;
                      *(_OWORD *)(v12 + 1098) = *(_OWORD *)L"Default Compartment";
                      *(_OWORD *)(v12 + 1114) = *(_OWORD *)L"Compartment";
                      *(_DWORD *)(v12 + 1130) = *(_DWORD *)L"ent";
                      *(_WORD *)(v12 + 1134) = aDefaultCompart[18];
                    }
                    memset(v19, 0, 0x48uLL);
                    LODWORD(v19[3]) = 7;
                    v19[0] = 0LL;
                    LODWORD(v19[1]) = 0;
                    v19[4] = 0LL;
                    v19[2] = &NPI_MS_NDIS_MODULEID;
                    LODWORD(v19[8]) = 1624;
                    v19[5] = v11 + 4LL * v9;
                    LODWORD(v19[6]) = 4;
                    v19[7] = v12;
                    NsiSetAllParametersEx(v19);
                  }
                  v15 = ndisIfCreateCompartmentBlock(
                          *(_DWORD *)(v11 + 4LL * v9),
                          0LL,
                          (struct _NDIS_NSI_COMPARTMENT_RW *)v12,
                          &v21);
                  v10 = v22[13];
                  v4 = v15;
                }
                v8 = v18;
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
      memset(v19, 0, 0x48uLL);
      v19[0] = 0LL;
      v19[5] = &v17;
      LODWORD(v19[1]) = 0;
      v19[2] = &NPI_MS_NDIS_MODULEID;
      LODWORD(v19[3]) = 7;
      v19[4] = 0x100000002LL;
      LODWORD(v19[6]) = 4;
      memset(v23, 0, 0x658uLL);
      LOWORD(v23[137]) = 38;
      *(_DWORD *)((char *)&v23[141] + 2) = *(_DWORD *)L"ent";
      *(_OWORD *)&v23[135] = xmmword_1C0075008;
      HIWORD(v23[141]) = aDefaultCompart[18];
      v19[7] = v23;
      LODWORD(v23[0]) = 106431149;
      *(_OWORD *)((char *)&v23[137] + 2) = *(_OWORD *)L"Default Compartment";
      HIDWORD(v23[201]) = 1;
      *(_OWORD *)((char *)&v23[139] + 2) = *(_OWORD *)L"Compartment";
      LODWORD(v19[8]) = 1624;
      v4 = NsiSetAllParametersEx(v19);
      if ( v4 >= 0 )
        goto LABEL_24;
    }
LABEL_22:
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
LABEL_24:
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_d(34LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (unsigned int)v4);
  return (unsigned int)v4;
}
