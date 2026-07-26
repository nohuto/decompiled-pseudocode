/*
 * XREFs of ndisSetAddWakeUpPattern @ 0x1C00CB6A8
 * Callers:
 *     ndisOidPrePMAddWOLPattern @ 0x1C009A060 (ndisOidPrePMAddWOLPattern.c)
 *     ndisOidPreAddWakeUpPattern @ 0x1C00C9DA0 (ndisOidPreAddWakeUpPattern.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     memcmp @ 0x1C00235F0 (memcmp.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     ndisGetNewPatternEntryId @ 0x1C009A3E4 (ndisGetNewPatternEntryId.c)
 *     ndisPMPatternIdExist @ 0x1C00B20A4 (ndisPMPatternIdExist.c)
 *     ndisCreateWakeUpPatternEntry @ 0x1C00C9B68 (ndisCreateWakeUpPatternEntry.c)
 */

__int64 __fastcall ndisSetAddWakeUpPattern(__int64 a1, __int64 a2, _BYTE *a3)
{
  _QWORD *v3; // r12
  __int64 v4; // r9
  unsigned int v8; // r8d
  unsigned int *v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // ebx
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 i; // rcx
  __int64 v15; // r13
  __int64 **v16; // rax
  __int64 *v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // r13
  size_t v20; // r8
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // edx
  int v24; // edx
  _QWORD *j; // rax
  _DWORD *WakeUpPatternEntry; // rax
  _DWORD *v27; // r9
  unsigned int NewPatternEntryId; // eax
  __int64 *v30; // [rsp+30h] [rbp-58h]
  unsigned int v31; // [rsp+90h] [rbp+8h]
  unsigned int v32; // [rsp+98h] [rbp+10h]
  int v33; // [rsp+A0h] [rbp+18h]
  __int64 v34; // [rsp+A8h] [rbp+20h]

  v3 = 0LL;
  v4 = a2 + 72;
  v30 = 0LL;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    WPP_SF_qq(0x1Au, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1, a2);
    v4 = a2 + 72;
  }
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  v8 = *(_DWORD *)(a2 + 48);
  *a3 = 1;
  if ( v8 < 0x18 )
  {
    *(_DWORD *)(a2 + 56) = 24;
    goto LABEL_11;
  }
  v9 = *(unsigned int **)(a2 + 40);
  v10 = v9[2];
  if ( !(_DWORD)v10 || (v12 = v9[3], v12 < v10 + 24) || (v13 = v12 + v9[4], v13 < (unsigned int)v12) )
  {
    v11 = -1073676267;
    goto LABEL_44;
  }
  if ( v8 < v13 )
  {
    *(_DWORD *)(a2 + 56) = v13;
LABEL_11:
    v11 = -1073676268;
    if ( (unsigned __int8)byte_1C0085312 >= 2u )
      WPP_SF_(0x1Cu, &WPP_fbb1998797815902974a7c4233493709_Traceguids);
    goto LABEL_44;
  }
  for ( i = v4; (*(_DWORD *)(i + 16) & 0x4000) != 0; i = *(_QWORD *)(i + 24) + 72LL )
    ;
  v15 = *(_QWORD *)(i + 32);
  v16 = (__int64 **)(a1 + 960);
  v17 = *(__int64 **)(a1 + 960);
  v11 = -1073676267;
  v34 = v15;
  if ( !v17 )
  {
LABEL_24:
    v23 = v9[1];
    if ( v23 > 0xFFFF && ndisPMPatternIdExist(v16, v23) )
    {
      if ( (unsigned __int8)byte_1C0085315 >= 2u )
        WPP_SF_d(0x1Bu, &WPP_fbb1998797815902974a7c4233493709_Traceguids, v24);
    }
    else
    {
      WakeUpPatternEntry = ndisCreateWakeUpPatternEntry(v9, *(_DWORD *)(a2 + 8));
      v27 = WakeUpPatternEntry;
      if ( WakeUpPatternEntry )
      {
        *((_QWORD *)WakeUpPatternEntry + 3) = v15;
        *(_QWORD *)(a1 + 192) = WakeUpPatternEntry;
        NewPatternEntryId = v9[1];
        if ( NewPatternEntryId <= 0xFFFF )
        {
          if ( v30 )
            NewPatternEntryId = *((_DWORD *)v30 + 10);
          else
            NewPatternEntryId = ndisGetNewPatternEntryId((__int64 **)(a1 + 960));
        }
        v27[10] = NewPatternEntryId;
        v11 = 0;
        *(_DWORD *)(a2 + 152) = NewPatternEntryId;
        v27[13] = v27[10];
        if ( v3 )
        {
          *a3 = 1;
          *((_QWORD *)v27 + 1) = v17 + 1;
        }
        else
        {
          *a3 = 0;
        }
      }
      else
      {
        v11 = -1073741670;
      }
    }
    goto LABEL_44;
  }
  while ( 1 )
  {
    if ( v9[4] != *((_DWORD *)v17 + 16) || v9[2] != *((_DWORD *)v17 + 14) )
      goto LABEL_21;
    v18 = v9[1];
    v9[1] = 0;
    v19 = v9[3];
    v9[3] = 0;
    v32 = v18;
    v20 = *((unsigned int *)v17 + 14) + 24LL;
    v21 = *((_DWORD *)v17 + 15);
    *((_DWORD *)v17 + 15) = 0;
    v31 = v21;
    v22 = *((_DWORD *)v17 + 13);
    *((_DWORD *)v17 + 13) = 0;
    v33 = v22;
    if ( !memcmp(v9, v17 + 6, v20) && !memcmp((char *)v9 + v19, (char *)v17 + v31 + 48, *((unsigned int *)v17 + 16)) )
      break;
    v9[1] = v32;
    v9[3] = v19;
    *((_DWORD *)v17 + 15) = v31;
    *((_DWORD *)v17 + 13) = v33;
LABEL_21:
    v17 = (__int64 *)*v17;
    if ( !v17 )
    {
      v15 = v34;
LABEL_23:
      v16 = (__int64 **)(a1 + 960);
      goto LABEL_24;
    }
  }
  v9[1] = v32;
  v9[3] = v19;
  v15 = v34;
  *((_DWORD *)v17 + 15) = v31;
  *((_DWORD *)v17 + 13) = v33;
  v30 = v17;
  if ( v17[3] != v34 )
  {
    v3 = v17;
    for ( j = v17 + 1; j; j = (_QWORD *)*j )
    {
      v3 = j - 1;
      if ( j[2] == v34 )
        goto LABEL_44;
    }
    goto LABEL_23;
  }
LABEL_44:
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qdD(0x1Du, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1, (unsigned __int8)*a3, v11);
  return v11;
}
