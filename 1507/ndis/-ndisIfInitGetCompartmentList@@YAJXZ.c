/*
 * XREFs of ?ndisIfInitGetCompartmentList@@YAJXZ @ 0x1C00124D0
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00120CC (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0012720 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 */

__int64 ndisIfInitGetCompartmentList(void)
{
  void *v0; // rdi
  int v1; // ebx
  unsigned int v2; // ecx
  unsigned int v3; // edx
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // r14d
  unsigned int v7; // ecx
  __int64 v8; // r13
  __int64 v9; // rsi
  unsigned __int8 v10; // al
  unsigned __int16 v11; // dx
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D8h]
  _QWORD v16[10]; // [rsp+38h] [rbp-D0h] BYREF
  char *PoolWithTag; // [rsp+88h] [rbp-80h]
  struct _NDIS_IF_COMPARTMENT_BLOCK *v18; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v19[14]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v20[204]; // [rsp+108h] [rbp+0h] BYREF

  v0 = 0LL;
  v18 = 0LL;
  LODWORD(v14) = 1;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_(33LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids);
  memset(v19, 0, sizeof(v19));
  LODWORD(v19[1]) = 0;
  v19[2] = &NPI_MS_NDIS_MODULEID;
  LODWORD(v19[8]) = 1624;
  LODWORD(v19[3]) = 7;
  v19[4] = 0x100000000LL;
  v19[5] = 0LL;
  LODWORD(v19[6]) = 4;
  v19[7] = 0LL;
  LODWORD(v19[13]) = 0;
  v1 = NsiEnumerateObjectsAllParametersEx(v19);
  if ( v1 >= 0 )
  {
    v2 = v19[13];
    if ( LODWORD(v19[13]) )
    {
      while ( 1 )
      {
        if ( v0 )
        {
          ExFreePoolWithTag(v0, 0);
          v2 = v19[13];
          v0 = 0LL;
        }
        v3 = (4 * v2 + 7) & 0xFFFFFFF8;
        if ( 4 * (unsigned __int64)v2 > 0xFFFFFFFF || v3 + 1624 * v2 < v3 )
        {
          v1 = -1073741670;
          goto LABEL_22;
        }
        v4 = v3;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v3 + 1624LL * v2, 0x6669444Eu);
        v0 = PoolWithTag;
        if ( !PoolWithTag )
          break;
        memset(PoolWithTag, 0, v4 + 1624LL * LODWORD(v19[13]));
        v19[5] = PoolWithTag;
        v19[7] = &PoolWithTag[v4];
        LODWORD(v19[6]) = 4;
        LODWORD(v19[8]) = 1624;
        v1 = NsiEnumerateObjectsAllParametersEx(v19);
        if ( v1 != 261 )
          goto LABEL_11;
        v2 = v19[13];
      }
      v1 = -1073741670;
LABEL_11:
      if ( v1 >= 0 )
      {
        v5 = v19[7];
        v6 = 0;
        v7 = v19[13];
        v8 = v19[5];
        v15 = v19[7];
        if ( LODWORD(v19[13]) )
        {
          do
          {
            v9 = 1624LL * v6 + v5;
            if ( *(_BYTE *)v9 == 0xAD )
            {
              v10 = *(_BYTE *)(v9 + 1);
              if ( v10 )
              {
                v11 = *(_WORD *)(v9 + 2);
                if ( v11 >= 0x448u )
                {
                  if ( v10 < 2u || v11 < 0x654u )
                  {
                    *(_DWORD *)v9 = 106431149;
                    memset((void *)(v9 + 1096), 0, 0x204uLL);
                    *(_QWORD *)(v9 + 1612) = 1LL;
                    if ( *(_DWORD *)(v8 + 4LL * v6) == 1 )
                    {
                      *(_WORD *)(v9 + 1096) = 38;
                      *(_OWORD *)(v9 + 1098) = *(_OWORD *)L"Default Compartment";
                      *(_OWORD *)(v9 + 1114) = *(_OWORD *)L"Compartment";
                      *(_DWORD *)(v9 + 1130) = *(_DWORD *)L"ent";
                      *(_WORD *)(v9 + 1134) = aDefaultCompart[18];
                    }
                    memset(v16, 0, 0x48uLL);
                    LODWORD(v16[3]) = 7;
                    v16[0] = 0LL;
                    LODWORD(v16[1]) = 0;
                    v16[4] = 0LL;
                    v16[2] = &NPI_MS_NDIS_MODULEID;
                    LODWORD(v16[8]) = 1624;
                    v16[5] = v8 + 4LL * v6;
                    LODWORD(v16[6]) = 4;
                    v16[7] = v9;
                    NsiSetAllParametersEx(v16);
                  }
                  v12 = ndisIfCreateCompartmentBlock(
                          *(_DWORD *)(v8 + 4LL * v6),
                          0LL,
                          (struct _NDIS_NSI_COMPARTMENT_RW *)v9,
                          &v18);
                  v7 = v19[13];
                  v1 = v12;
                }
                v5 = v15;
              }
            }
            ++v6;
          }
          while ( v6 < v7 );
          v0 = PoolWithTag;
        }
      }
    }
    else
    {
      memset(v16, 0, 0x48uLL);
      v16[0] = 0LL;
      v16[5] = &v14;
      LODWORD(v16[1]) = 0;
      v16[2] = &NPI_MS_NDIS_MODULEID;
      LODWORD(v16[3]) = 7;
      v16[4] = 0x100000002LL;
      LODWORD(v16[6]) = 4;
      memset(v20, 0, 0x658uLL);
      LOWORD(v20[137]) = 38;
      *(_DWORD *)((char *)&v20[141] + 2) = *(_DWORD *)L"ent";
      *(_OWORD *)&v20[135] = xmmword_1C0075F68;
      HIWORD(v20[141]) = aDefaultCompart[18];
      v16[7] = v20;
      LODWORD(v20[0]) = 106431149;
      *(_OWORD *)((char *)&v20[137] + 2) = *(_OWORD *)L"Default Compartment";
      HIDWORD(v20[201]) = 1;
      *(_OWORD *)((char *)&v20[139] + 2) = *(_OWORD *)L"Compartment";
      LODWORD(v16[8]) = 1624;
      v1 = NsiSetAllParametersEx(v16);
      if ( v1 >= 0 )
        goto LABEL_24;
    }
LABEL_22:
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
LABEL_24:
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_d(34LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, (unsigned int)v1);
  return (unsigned int)v1;
}
