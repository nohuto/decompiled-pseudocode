/*
 * XREFs of ndisSetOpenEthAddDeleteMulticast @ 0x1C00C678C
 * Callers:
 *     ndisOidPreEthMulticastOid @ 0x1C00C4F00 (ndisOidPreEthMulticastOid.c)
 * Callees:
 *     ndisIsValidMulticastFilter @ 0x1C001DF90 (ndisIsValidMulticastFilter.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 *     Template_jqxqqq @ 0x1C004439C (Template_jqxqqq.c)
 *     WPP_SF_qqqDD @ 0x1C0044730 (WPP_SF_qqqDD.c)
 *     ethAddOneOpenMulticastAddress @ 0x1C00D38CC (ethAddOneOpenMulticastAddress.c)
 *     ethDeleteOneOpenMulticastAddress @ 0x1C00D3AB4 (ethDeleteOneOpenMulticastAddress.c)
 */

unsigned __int8 __fastcall ndisSetOpenEthAddDeleteMulticast(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // r15
  unsigned __int8 v4; // bp
  int *v5; // r12
  __int64 *v8; // rbx
  int IsValidMulticastFilter; // r14d
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 *v13; // r12
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // r8d
  int v18; // ecx
  __int64 v19; // r13
  __int64 v20; // r10
  __int64 v21; // r11
  unsigned int v22; // r9d
  unsigned int v23; // eax
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // dx
  unsigned int v26; // r9d
  __int64 v27; // r8
  char *v28; // rdx
  char *v29; // rcx
  int v30; // eax
  unsigned __int8 result; // al
  unsigned int v32; // [rsp+90h] [rbp+8h] BYREF
  int *v33; // [rsp+A0h] [rbp+18h]
  __int64 v34; // [rsp+A8h] [rbp+20h]

  v33 = a3;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 1;
  v5 = a3;
  LOBYTE(v32) = 1;
  v8 = *(__int64 **)(v3 + 400);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqq(0x68u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v3, a1, a2);
  IsValidMulticastFilter = ndisIsValidMulticastFilter(*(_QWORD *)(a1 + 16), a1, a2);
  if ( IsValidMulticastFilter )
  {
    if ( (unsigned __int8)byte_1C00895D2 < 4u )
      goto LABEL_53;
    WPP_SF_(0x69u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids);
LABEL_51:
    if ( (unsigned __int8)byte_1C00895D2 >= 4u )
      WPP_SF_qqqDD(0x6Bu, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v3, a1, a2, IsValidMulticastFilter, v4);
LABEL_53:
    if ( !IsValidMulticastFilter )
      goto LABEL_56;
    goto LABEL_54;
  }
  if ( !*(_DWORD *)(a1 + 440) )
  {
    IsValidMulticastFilter = 0;
    v4 = 1;
    goto LABEL_51;
  }
  if ( *(_DWORD *)(a2 + 48) == 6 )
  {
    memmove(*(void **)(a1 + 464), *(const void **)(a1 + 448), 12LL * *(unsigned int *)(a1 + 456));
    v10 = *(_DWORD *)(a1 + 456);
    *(_DWORD *)(a1 + 456) = 0;
    *(_DWORD *)(a1 + 472) = v10;
    v11 = *(_QWORD *)(a2 + 40);
    if ( *(_DWORD *)(a2 + 32) == 16843272 )
      v12 = ethAddOneOpenMulticastAddress(a1, v11, &v32);
    else
      v12 = ethDeleteOneOpenMulticastAddress(a1, v11, &v32);
    v4 = v32;
    IsValidMulticastFilter = v12;
    if ( (_BYTE)v32 != 1 )
    {
      v13 = v8;
      v14 = *v8;
      memmove((void *)v8[45], (const void *)v8[44], (unsigned int)(6 * *((_DWORD *)v8 + 86)));
      v15 = *((_DWORD *)v8 + 92);
      *((_DWORD *)v8 + 92) = 0;
      *((_DWORD *)v8 + 93) = v15;
      do
      {
        while ( 1 )
        {
          if ( !v14 )
          {
            if ( IsValidMulticastFilter )
              goto LABEL_42;
            if ( v13 != v8 || (v13 = v8 + 1, (v14 = v8[1]) == 0) )
            {
              if ( v13 != v8 + 1 )
                break;
              v13 = v8 + 2;
              v14 = v8[2];
              if ( !v14 )
                break;
            }
          }
          if ( IsValidMulticastFilter )
            goto LABEL_42;
          v16 = 0LL;
          v32 = 0;
          if ( *(_DWORD *)(v14 + 456) )
          {
            while ( 1 )
            {
              v17 = *((_DWORD *)v8 + 92);
              v18 = -1;
              v19 = 0LL;
              if ( v17 )
              {
                v20 = v8[44];
                v21 = 3 * v16;
                v18 = -1;
                v34 = *(_QWORD *)(v14 + 448);
                v22 = *(_DWORD *)(v34 + 12 * v16 + 6);
                while ( 1 )
                {
                  v23 = *(_DWORD *)(v20 + 6 * v19 + 2);
                  if ( v23 > v22 )
                    break;
                  if ( v23 >= v22 )
                  {
                    v24 = *(_WORD *)(v20 + 6 * v19);
                    v25 = *(_WORD *)(v34 + 4 * v21 + 4);
                    if ( v24 > v25 )
                      break;
                    if ( v24 >= v25 )
                      goto LABEL_31;
                  }
                  v19 = (unsigned int)(v19 + 1);
                  if ( (unsigned int)v19 >= v17 )
                    goto LABEL_27;
                }
                v18 = 1;
              }
LABEL_27:
              *((_DWORD *)v8 + 92) = v17 + 1;
              if ( v17 + 1 > *((_DWORD *)v8 + 86) )
                break;
              if ( v18 > 0 )
                memmove(
                  (void *)(v8[44] + 6LL * (unsigned int)(v19 + 1)),
                  (const void *)(v8[44] + 6 * v19),
                  6 * (v17 - (unsigned int)v19));
              memmove((void *)(v8[44] + 6 * v19), (const void *)(*(_QWORD *)(v14 + 448) + 4 * (3LL * v32 + 1)), 6uLL);
LABEL_31:
              v16 = v32 + 1;
              v32 = v16;
              if ( (unsigned int)v16 >= *(_DWORD *)(v14 + 456) )
                goto LABEL_34;
            }
            IsValidMulticastFilter = -1073676279;
          }
LABEL_34:
          v14 = *(_QWORD *)(v14 + 424);
        }
      }
      while ( v13 != v8 + 2 );
LABEL_42:
      v26 = *((_DWORD *)v8 + 92);
      if ( v26 == *((_DWORD *)v8 + 93) )
      {
        v27 = 0LL;
        if ( v26 )
        {
          v28 = (char *)v8[45];
          v29 = (char *)v8[44];
          while ( *(_DWORD *)&v29[6 * v27 + 2] == *(_DWORD *)&v28[6 * v27 + 2]
               && *(_WORD *)&v29[6 * v27] == *(_WORD *)&v28[6 * v27] )
          {
            v27 = (unsigned int)(v27 + 1);
            if ( (unsigned int)v27 >= v26 )
            {
              memmove(v29, v28, (unsigned int)(6 * *((_DWORD *)v8 + 86)));
              *((_DWORD *)v8 + 93) = 0;
              v4 = 1;
              goto LABEL_50;
            }
          }
        }
      }
      v4 = 0;
      *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(a2 + 160) = *(_DWORD *)(a2 + 48);
      *(_QWORD *)(a2 + 40) = v8[44];
      v30 = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 48) = 6 * *((_DWORD *)v8 + 92);
      *(_DWORD *)(a2 + 144) = v30;
      *(_DWORD *)(a2 + 32) = 16843011;
LABEL_50:
      v5 = v33;
    }
    goto LABEL_51;
  }
  *(_DWORD *)(a2 + 52) = 0;
  IsValidMulticastFilter = -1073676268;
  *(_DWORD *)(a2 + 56) = 0;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    WPP_SF_qqq(0x6Au, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v3, a1, a2);
    goto LABEL_51;
  }
LABEL_54:
  if ( (Microsoft_Windows_NDISEnableBits & 0x400000000LL) != 0 )
    Template_jqxqqq(
      *(unsigned int *)(v3 + 4112),
      &SetOpenEthAddDeleteMulticastFailed,
      (const GUID *)(v3 + 4064),
      v3 + 4064,
      *(_DWORD *)(v3 + 4112),
      *(_QWORD *)(v3 + 4080),
      IsValidMulticastFilter,
      202,
      a1);
LABEL_56:
  result = v4;
  *v5 = IsValidMulticastFilter;
  return result;
}
