/*
 * XREFs of ndisQuerySupportedGuidToOidList @ 0x1C00AAEB4
 * Callers:
 *     ndisWmiRegister @ 0x1C00A8710 (ndisWmiRegister.c)
 * Callees:
 *     ndisQuerySetMiniportEx2 @ 0x1C001B644 (ndisQuerySetMiniportEx2.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisWmiMapOids @ 0x1C00AB2D0 (ndisWmiMapOids.c)
 *     ndisQueryCustomGuids @ 0x1C00AB38C (ndisQueryCustomGuids.c)
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
  int v11; // r8d
  int v12; // r9d
  unsigned __int16 v13; // ax
  int v14; // r8d
  int v15; // r9d
  __int16 v16; // bx
  unsigned __int16 v17; // bx
  int *v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  char *PoolWithTag; // rax
  void *v22; // r14
  _DWORD *v23; // rcx
  unsigned __int16 v24; // r10
  __int64 v25; // r8
  int v26; // edx
  unsigned __int16 v27; // ax
  int v28; // r8d
  int v29; // r9d
  unsigned __int16 v30; // ax
  int v31; // r8d
  int v32; // r9d
  unsigned __int16 v33; // r8
  _OWORD *v34; // rax
  char *v35; // rcx
  __int128 v36; // xmm1
  unsigned __int16 v37; // r8
  __int64 v39; // rdx
  unsigned __int16 v40; // r15
  char *v41; // rbx
  int v42; // [rsp+20h] [rbp-E0h]
  int v43; // [rsp+28h] [rbp-D8h]
  unsigned __int16 v44[2]; // [rsp+50h] [rbp-B0h] BYREF
  UINT v45; // [rsp+54h] [rbp-ACh] BYREF
  UINT v46; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  void *Src; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v49[248]; // [rsp+70h] [rbp-90h] BYREF

  v46 = 0;
  P = 0LL;
  v44[0] = 0;
  Src = 0LL;
  v2 = 0LL;
  memset(v49, 0, sizeof(v49));
  if ( (unsigned __int8)byte_1C0085319 >= 4u )
    WPP_SF_q(0x12u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a1);
  memset(v49, 0, sizeof(v49));
  *(_QWORD *)v49 = 15466902LL;
  *(_QWORD *)&v49[104] = &ndisIntReqWmi;
  *(_DWORD *)&v49[32] = 65793;
  v3 = 8LL;
  *(_DWORD *)&v49[88] |= 8u;
  *(_DWORD *)&v49[8] = 0;
  *(_QWORD *)&v49[40] = 0LL;
  *(_DWORD *)&v49[48] = 0;
  v6 = ndisQuerySetMiniportEx2(
         (_DWORD *)a1,
         v4,
         (struct _NDIS_OID_REQUEST *)v49,
         v5,
         v42,
         v43,
         0x3277444Eu,
         &P,
         &v46,
         &v45);
  v7 = P;
  v8 = v6;
  if ( v6 )
  {
    if ( (unsigned __int8)byte_1C0085319 >= 4u )
      WPP_SF_q(0x13u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a1);
  }
  else
  {
    v9 = (unsigned __int16)(v45 >> 2);
    v45 >>= 2;
    v10 = ndisWmiMapOids(0, 0, (_DWORD)P, v9, (__int64)&ndisSupportedGuids, 82);
    v13 = ndisWmiMapOids(0, v10, v11, v12, (__int64)&ndisCoSupportedGuids, 16);
    v16 = ndisWmiMapOids(0, v13, v14, v15, (__int64)&ndisMediaSupportedGuids, 49);
    if ( !(unsigned int)ndisQueryCustomGuids(a1, v49, &Src, v44) )
      v16 += v44[0];
    v17 = v16 + 38;
    v18 = (int *)&unk_1C0100358;
    v19 = 82LL;
    do
    {
      v20 = *v18;
      if ( (*v18 & 0x20000000) != 0
        && ((v20 & 0x1000000) == 0 || *(_QWORD *)(a1 + 4160))
        && ((v20 & 0x10000000) == 0 || (*(_DWORD *)(a1 + 120) & 0x20000) != 0) )
      {
        ++v17;
      }
      v18 += 7;
      --v19;
    }
    while ( v19 );
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 28LL * v17, 0x3177444Eu);
    v22 = Src;
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 28LL * v17);
      v23 = &ndisSupportedGuids;
      v24 = 0;
      v25 = 82LL;
      do
      {
        v26 = v23[6];
        if ( (v26 & 0x20000000) != 0
          && ((v26 & 0x1000000) == 0 || *(_QWORD *)(a1 + 4160))
          && ((*(_DWORD *)(a1 + 120) & 0x20000) != 0 || (v26 & 0x10000000) == 0) )
        {
          v39 = 28LL * v24;
          *(_OWORD *)&v2[v39] = *(_OWORD *)v23;
          *(_QWORD *)&v2[v39 + 16] = *((_QWORD *)v23 + 2);
          *(_DWORD *)&v2[v39 + 24] = v23[6];
          if ( (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
            *(_DWORD *)&v2[v39 + 24] |= 0x10000000u;
          ++v24;
        }
        v23 += 7;
        --v25;
      }
      while ( v25 );
      v27 = ndisWmiMapOids((_DWORD)v2, v24, (_DWORD)v7, (unsigned __int16)v45, (__int64)&ndisSupportedGuids, 82);
      v30 = ndisWmiMapOids((_DWORD)v2, v27, v28, v29, (__int64)&ndisCoSupportedGuids, 16);
      v33 = ndisWmiMapOids((_DWORD)v2, v30, v31, v32, (__int64)&ndisMediaSupportedGuids, 49);
      v34 = &ndisStatusSupportedGuids;
      v35 = &v2[28 * v33];
      do
      {
        *(_OWORD *)v35 = *v34;
        *((_OWORD *)v35 + 1) = v34[1];
        *((_OWORD *)v35 + 2) = v34[2];
        *((_OWORD *)v35 + 3) = v34[3];
        *((_OWORD *)v35 + 4) = v34[4];
        *((_OWORD *)v35 + 5) = v34[5];
        *((_OWORD *)v35 + 6) = v34[6];
        v35 += 128;
        v36 = v34[7];
        v34 += 8;
        *((_OWORD *)v35 - 1) = v36;
        --v3;
      }
      while ( v3 );
      v37 = v33 + 38;
      *(_OWORD *)v35 = *v34;
      *((_OWORD *)v35 + 1) = v34[1];
      *((_QWORD *)v35 + 4) = *((_QWORD *)v34 + 4);
      *(_QWORD *)(a1 + 1368) = v2;
      *(_WORD *)(a1 + 1386) = v17;
      if ( v22 )
      {
        v40 = v44[0];
        v41 = &v2[28 * v37];
        memmove(v41, v22, 28LL * v44[0]);
        *(_WORD *)(a1 + 1388) = v40;
        *(_QWORD *)(a1 + 1376) = v41;
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
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 && v2 )
    ExFreePoolWithTag(v2, 0);
  if ( (unsigned __int8)byte_1C0085319 >= 4u )
    WPP_SF_qD(0x14u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a1, v8);
  return v8;
}
