/*
 * XREFs of ndisQuerySupportedGuidToOidList @ 0x1C00A87C4
 * Callers:
 *     ndisWmiRegister @ 0x1C009F778 (ndisWmiRegister.c)
 * Callees:
 *     ndisQuerySetMiniportEx2 @ 0x1C001F4F4 (ndisQuerySetMiniportEx2.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisWmiMapOids @ 0x1C00A8BEC (ndisWmiMapOids.c)
 *     ndisQueryCustomGuids @ 0x1C00A8CA4 (ndisQueryCustomGuids.c)
 */

__int64 __fastcall ndisQuerySupportedGuidToOidList(__int64 a1)
{
  char *v2; // rsi
  __int64 v3; // r13
  __int64 v4; // rdx
  __int64 v5; // r9
  unsigned int v6; // eax
  PVOID v7; // r12
  unsigned int v8; // ebx
  int v9; // r9d
  unsigned __int16 v10; // ax
  int v11; // r9d
  unsigned __int16 v12; // ax
  int v13; // r9d
  __int16 v14; // bx
  unsigned __int16 v15; // bx
  int *v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  char *PoolWithTag; // rax
  void *v20; // r14
  _DWORD *v21; // rcx
  unsigned __int16 v22; // r10
  __int64 v23; // r8
  int v24; // edx
  unsigned __int16 v25; // ax
  int v26; // r9d
  unsigned __int16 v27; // ax
  int v28; // r9d
  unsigned __int16 v29; // r9
  _OWORD *v30; // rax
  char *v31; // rcx
  __int128 v32; // xmm1
  unsigned __int16 v33; // r9
  __int64 v35; // rdx
  unsigned __int16 v36; // r15
  char *v37; // rbx
  int v38; // [rsp+20h] [rbp-E0h]
  int v39; // [rsp+28h] [rbp-D8h]
  unsigned __int16 v40[2]; // [rsp+50h] [rbp-B0h] BYREF
  UINT v41; // [rsp+54h] [rbp-ACh] BYREF
  UINT v42; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  void *Src; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v45[248]; // [rsp+70h] [rbp-90h] BYREF

  v42 = 0;
  P = 0LL;
  v40[0] = 0;
  Src = 0LL;
  v2 = 0LL;
  memset(v45, 0, sizeof(v45));
  if ( (unsigned __int8)byte_1C0083719 >= 4u )
    WPP_SF_q(0x12u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a1);
  memset(v45, 0, sizeof(v45));
  *(_QWORD *)v45 = 15466902LL;
  *(_QWORD *)&v45[104] = &ndisIntReqWmi;
  *(_DWORD *)&v45[32] = 65793;
  v3 = 8LL;
  *(_DWORD *)&v45[88] |= 8u;
  *(_DWORD *)&v45[8] = 0;
  *(_QWORD *)&v45[40] = 0LL;
  *(_DWORD *)&v45[48] = 0;
  v6 = ndisQuerySetMiniportEx2(
         (_DWORD *)a1,
         v4,
         (struct _NDIS_OID_REQUEST *)v45,
         v5,
         v38,
         v39,
         0x3277444Eu,
         &P,
         &v42,
         &v41);
  v7 = P;
  v8 = v6;
  if ( v6 )
  {
    if ( (unsigned __int8)byte_1C0083719 >= 4u )
      WPP_SF_q(0x13u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a1);
  }
  else
  {
    v9 = (unsigned __int16)(v41 >> 2);
    v41 >>= 2;
    v10 = ndisWmiMapOids(0, 0, (_DWORD)P, v9, (__int64)&ndisSupportedGuids, 82);
    v12 = ndisWmiMapOids(0, v10, (_DWORD)v7, v11, (__int64)&ndisCoSupportedGuids, 16);
    v14 = ndisWmiMapOids(0, v12, (_DWORD)v7, v13, (__int64)&ndisMediaSupportedGuids, 49);
    if ( !(unsigned int)ndisQueryCustomGuids(a1, v45, &Src, v40) )
      v14 += v40[0];
    v15 = v14 + 38;
    v16 = (int *)&unk_1C00FA348;
    v17 = 82LL;
    do
    {
      v18 = *v16;
      if ( (*v16 & 0x20000000) != 0
        && ((v18 & 0x1000000) == 0 || *(_QWORD *)(a1 + 4160))
        && ((v18 & 0x10000000) == 0 || (*(_DWORD *)(a1 + 120) & 0x20000) != 0) )
      {
        ++v15;
      }
      v16 += 7;
      --v17;
    }
    while ( v17 );
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 28LL * v15, 0x3177444Eu);
    v20 = Src;
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 28LL * v15);
      v21 = &ndisSupportedGuids;
      v22 = 0;
      v23 = 82LL;
      do
      {
        v24 = v21[6];
        if ( (v24 & 0x20000000) != 0
          && ((v24 & 0x1000000) == 0 || *(_QWORD *)(a1 + 4160))
          && ((*(_DWORD *)(a1 + 120) & 0x20000) != 0 || (v24 & 0x10000000) == 0) )
        {
          v35 = 28LL * v22;
          *(_OWORD *)&v2[v35] = *(_OWORD *)v21;
          *(_QWORD *)&v2[v35 + 16] = *((_QWORD *)v21 + 2);
          *(_DWORD *)&v2[v35 + 24] = v21[6];
          if ( (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
            *(_DWORD *)&v2[v35 + 24] |= 0x10000000u;
          ++v22;
        }
        v21 += 7;
        --v23;
      }
      while ( v23 );
      v25 = ndisWmiMapOids((_DWORD)v2, v22, (_DWORD)v7, (unsigned __int16)v41, (__int64)&ndisSupportedGuids, 82);
      v27 = ndisWmiMapOids((_DWORD)v2, v25, (_DWORD)v7, v26, (__int64)&ndisCoSupportedGuids, 16);
      v29 = ndisWmiMapOids((_DWORD)v2, v27, (_DWORD)v7, v28, (__int64)&ndisMediaSupportedGuids, 49);
      v30 = &ndisStatusSupportedGuids;
      v31 = &v2[28 * v29];
      do
      {
        *(_OWORD *)v31 = *v30;
        *((_OWORD *)v31 + 1) = v30[1];
        *((_OWORD *)v31 + 2) = v30[2];
        *((_OWORD *)v31 + 3) = v30[3];
        *((_OWORD *)v31 + 4) = v30[4];
        *((_OWORD *)v31 + 5) = v30[5];
        *((_OWORD *)v31 + 6) = v30[6];
        v31 += 128;
        v32 = v30[7];
        v30 += 8;
        *((_OWORD *)v31 - 1) = v32;
        --v3;
      }
      while ( v3 );
      v33 = v29 + 38;
      *(_OWORD *)v31 = *v30;
      *((_OWORD *)v31 + 1) = v30[1];
      *((_QWORD *)v31 + 4) = *((_QWORD *)v30 + 4);
      *(_QWORD *)(a1 + 1368) = v2;
      *(_WORD *)(a1 + 1386) = v15;
      if ( v20 )
      {
        v36 = v40[0];
        v37 = &v2[28 * v33];
        memmove(v37, v20, 28LL * v40[0]);
        *(_WORD *)(a1 + 1388) = v36;
        *(_QWORD *)(a1 + 1376) = v37;
      }
      else
      {
        *(_QWORD *)(a1 + 1376) = 0LL;
        *(_WORD *)(a1 + 1388) = 0;
      }
      v8 = 0;
    }
    else
    {
      v8 = -1073741670;
    }
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 && v2 )
    ExFreePoolWithTag(v2, 0);
  if ( (unsigned __int8)byte_1C0083719 >= 4u )
    WPP_SF_qD(0x14u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a1, v8);
  return v8;
}
