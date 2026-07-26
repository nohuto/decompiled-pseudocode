/*
 * XREFs of ndisIovCreateVPort @ 0x1C00D8DB8
 * Callers:
 *     ndisOidPreIovCreateVPort @ 0x1C00D9AF0 (ndisOidPreIovCreateVPort.c)
 * Callees:
 *     ndisIovFindSwitchBySwitchId @ 0x1C00134F4 (ndisIovFindSwitchBySwitchId.c)
 *     ndisGetOidSourceHandle @ 0x1C0022244 (ndisGetOidSourceHandle.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisIovDeleteVPort @ 0x1C00683C8 (ndisIovDeleteVPort.c)
 *     ndisIovFindVFByVFId @ 0x1C00D914C (ndisIovFindVFByVFId.c)
 */

char __fastcall ndisIovCreateVPort(__int64 a1)
{
  __int64 v1; // rdi
  char *v2; // rsi
  __int64 v3; // r13
  __int64 v4; // rbp
  int v5; // r12d
  char v7; // r14
  _BYTE *OidSourceHandle; // rax
  __int64 v9; // rdi
  __int64 *SwitchBySwitchId; // r15
  _DWORD *v11; // r10
  __int64 VFByVFId; // rax
  char *PoolWithTag; // rax
  __int64 v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  _BYTE *v17; // r15
  size_t v18; // r13
  __int64 v19; // rax
  _BYTE *v20; // rcx
  _BYTE *v21; // rax
  _BYTE *v22; // rdi
  __int64 v23; // r8
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  __int64 v28; // [rsp+70h] [rbp+8h]
  _BYTE *v29; // [rsp+78h] [rbp+10h]
  int *v30; // [rsp+80h] [rbp+18h]
  __int64 v31; // [rsp+88h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0LL;
  v28 = 0LL;
  v3 = 0LL;
  v4 = *(_QWORD *)a1;
  v5 = 0;
  v31 = v1;
  v7 = 1;
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_q(0x2Du, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, v4);
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = 572;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = 0;
  OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1);
  v29 = OidSourceHandle;
  if ( !OidSourceHandle || *OidSourceHandle != 18 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_45;
  }
  v9 = *(_QWORD *)(v1 + 40);
  v30 = (int *)(v9 + 12);
  if ( *(_DWORD *)(v9 + 12) )
    goto LABEL_6;
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v4, *(_DWORD *)(v9 + 8));
  if ( !SwitchBySwitchId )
    goto LABEL_6;
  v11 = *(_DWORD **)(v4 + 3616);
  if ( *((_DWORD *)SwitchBySwitchId + 12) == v11[10] || *(_WORD *)(v9 + 16) > 0x200u )
    goto LABEL_6;
  if ( *(_WORD *)(v9 + 532) == 0xFFFF )
  {
    v28 = *(_QWORD *)(v4 + 4744);
    if ( !v28 || *(_DWORD *)(v9 + 544) != 2 )
      goto LABEL_6;
  }
  else
  {
    VFByVFId = ndisIovFindVFByVFId(v4);
    v3 = VFByVFId;
    if ( !VFByVFId || *(_DWORD *)(VFByVFId + 76) || *(_DWORD *)(v9 + 544) != 1 )
      goto LABEL_6;
  }
  if ( (v11[8] & 4) == 0 )
  {
    if ( *(_DWORD *)(v9 + 536) != v11[17] )
      goto LABEL_6;
LABEL_21:
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x378uLL, 0x6F69444Eu);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_22:
      *(_DWORD *)(a1 + 40) = -1073741670;
      goto LABEL_45;
    }
    memset(PoolWithTag, 0, 0x378uLL);
    *((_QWORD *)v2 + 10) = v29;
    *((_DWORD *)v2 + 26) = 1;
    *((_QWORD *)v2 + 9) = v4;
    *((_QWORD *)v2 + 11) = SwitchBySwitchId;
    if ( v3 )
    {
      *((_DWORD *)v2 + 16) |= 2u;
      *((_QWORD *)v2 + 12) = v3;
    }
    else
    {
      *((_QWORD *)v2 + 12) = v28;
    }
    v14 = 5LL;
    v15 = v2 + 112;
    do
    {
      *v15 = *(_OWORD *)v9;
      v15[1] = *(_OWORD *)(v9 + 16);
      v15[2] = *(_OWORD *)(v9 + 32);
      v15[3] = *(_OWORD *)(v9 + 48);
      v15[4] = *(_OWORD *)(v9 + 64);
      v15[5] = *(_OWORD *)(v9 + 80);
      v15[6] = *(_OWORD *)(v9 + 96);
      v15 += 8;
      v16 = *(_OWORD *)(v9 + 112);
      v9 += 128LL;
      *(v15 - 1) = v16;
      --v14;
    }
    while ( v14 );
    *v15 = *(_OWORD *)v9;
    v15[1] = *(_OWORD *)(v9 + 16);
    v15[2] = *(_OWORD *)(v9 + 32);
    v15[3] = *(_OWORD *)(v9 + 48);
    v15[4] = *(_OWORD *)(v9 + 64);
    v15[5] = *(_OWORD *)(v9 + 80);
    v15[6] = *(_OWORD *)(v9 + 96);
    *((_QWORD *)v2 + 110) = v2 + 872;
    *((_QWORD *)v2 + 109) = v2 + 872;
    v17 = *(_BYTE **)(v4 + 4824);
    v18 = *(unsigned int *)(v4 + 4832);
    if ( v17 && (v19 = 0LL, (_DWORD)v18) )
    {
      v20 = *(_BYTE **)(v4 + 4824);
      while ( *v20 == 0xFF )
      {
        v5 += 8;
        v19 = (unsigned int)(v19 + 1);
        ++v20;
        if ( (unsigned int)v19 >= (unsigned int)v18 )
          goto LABEL_33;
      }
      v23 = (unsigned int)v19;
      v24 = 1;
      v25 = (unsigned __int8)v17[v19];
      v26 = 0;
      while ( (v25 & v24) != 0 )
      {
        v24 *= 2;
        if ( (unsigned int)++v26 >= 8 )
          goto LABEL_33;
      }
      v17[v23] = v24 | v25;
      v5 += v26;
    }
    else
    {
LABEL_33:
      v21 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v18 + 64), 0x6F69444Eu);
      v22 = v21;
      if ( !v21 )
        goto LABEL_22;
      memset(&v21[v18], 0, 0x40uLL);
      if ( v17 )
      {
        memmove(v22, v17, v18);
        v22[v18] = 1;
        ExFreePoolWithTag(v17, 0);
      }
      else
      {
        *v22 = 3;
        v5 = 1;
      }
      *(_QWORD *)(v4 + 4824) = v22;
      *(_DWORD *)(v4 + 4832) = v18 + 64;
    }
    *((_DWORD *)v2 + 31) = v5;
    *v30 = v5;
    *(_QWORD *)(v31 + 152) = v2;
    *(_DWORD *)(a1 + 40) = 0;
    v7 = 0;
    goto LABEL_45;
  }
  if ( *(_DWORD *)(v9 + 536) <= (unsigned int)(v11[13]
                                             - *((_DWORD *)SwitchBySwitchId + 162)
                                             - *((_DWORD *)SwitchBySwitchId + 24)) )
    goto LABEL_21;
LABEL_6:
  *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_45:
  if ( *(_DWORD *)(a1 + 40) && v2 )
    ndisIovDeleteVPort(v2);
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_qD(0x2Eu, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, v4, *(_DWORD *)(a1 + 40));
  return v7;
}
