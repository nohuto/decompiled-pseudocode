/*
 * XREFs of ComputeHTCell @ 0x14017EDFC
 * Callers:
 *     HT_CreateDeviceHalftoneInfo @ 0x14017F0FC (HT_CreateDeviceHalftoneInfo.c)
 * Callees:
 *     ComputeChecksum @ 0x140180144 (ComputeChecksum.c)
 *     GenerateWORDPat @ 0x1401E808C (GenerateWORDPat.c)
 */

__int64 __fastcall ComputeHTCell(unsigned __int16 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned int v6; // r12d
  unsigned int v8; // r10d
  __int64 v9; // rax
  int v10; // r13d
  ULONG v11; // r13d
  __int128 v12; // xmm0
  __int64 result; // rax
  __int64 v14; // xmm1_8
  char *v15; // rcx
  unsigned int v16; // edx
  int v17; // r8d
  char v18; // al
  char *v19; // rcx
  char v20; // al
  int v21; // eax
  __int64 v22; // r10
  unsigned int v23; // r14d
  unsigned int v24; // r11d
  unsigned int v25; // eax
  __int64 v26; // r10
  unsigned int v27; // eax
  int v28; // r11d
  unsigned int v29; // eax
  PVOID v30; // rax
  void *v31; // r14
  unsigned __int16 v32; // [rsp+40h] [rbp-30h]
  _OWORD v33[2]; // [rsp+48h] [rbp-28h] BYREF
  int v34; // [rsp+B0h] [rbp+40h] BYREF
  int v35; // [rsp+C8h] [rbp+58h]

  LOWORD(v34) = a1;
  LODWORD(v3) = 0;
  LODWORD(v4) = 0;
  LODWORD(v5) = 0;
  v6 = 0;
  memset(v33, 0, sizeof(v33));
  if ( a1 > 0x12u )
    return 4294967282LL;
  BYTE9(v33[0]) = a1;
  if ( a3 )
    v6 = *(_DWORD *)(a3 + 184) & 0xFFFFFF8F;
  if ( a1 != 18 )
  {
    BYTE1(v35) = BYTE1(v34);
    LOBYTE(v35) = a1;
    BYTE8(v33[0]) = 1;
    v8 = (unsigned __int16)(v35 + 21315) | ((unsigned __int16)(v35 - 25705) << 16);
    v9 = a1 >> 1;
    LOWORD(v10) = *((unsigned __int8 *)&DefStdHTPat + 16 * v9);
    v35 = *((unsigned __int8 *)&DefStdHTPat + 16 * v9 + 1);
    WORD1(v33[1]) = v35;
    v32 = v10;
    WORD6(v33[0]) = v10;
    goto LABEL_6;
  }
  if ( !a2 || *(_WORD *)a2 != 32 )
    return 4294967281LL;
  v21 = *(unsigned __int16 *)(a2 + 6);
  v10 = *(unsigned __int16 *)(a2 + 4);
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  v22 = v3;
  v5 = *(_QWORD *)(a2 + 24);
  v23 = v10 * v21;
  v32 = *(_WORD *)(a2 + 4);
  WORD6(v33[0]) = v32;
  v35 = v21;
  WORD1(v33[1]) = v21;
  if ( !v3 )
  {
    if ( v4 || v5 )
    {
      v22 = v5;
      if ( v4 )
        v22 = v4;
      goto LABEL_21;
    }
    return 4294967281LL;
  }
  if ( v4 && v5 )
  {
    if ( v3 == v4 && v3 == v5 )
      v24 = 1433629234;
    else
      v24 = 1433629235;
    goto LABEL_22;
  }
LABEL_21:
  v5 = v22;
  v4 = v22;
  LODWORD(v3) = v22;
  v24 = 1433629233;
LABEL_22:
  v25 = ComputeChecksum(&v34, v24, 2LL);
  v27 = ComputeChecksum(v26, v25, v23);
  v8 = v27;
  if ( v28 == 1433629235 )
  {
    v29 = ComputeChecksum(v4, v27, v23);
    v8 = ComputeChecksum(v5, v29, v23);
  }
LABEL_6:
  HIWORD(v33[0]) = v10 * (7u / (unsigned __int16)v10 + 1);
  v34 = (unsigned __int16)(HIWORD(v33[0]) + 7);
  LOWORD(v33[1]) = HIWORD(v33[0]) + 7;
  v11 = 6 * (unsigned __int16)v35 * v34;
  DWORD1(v33[1]) = v11;
  if ( a3 )
  {
    if ( (BYTE8(v33[0]) & 1) != 0 )
    {
      *((_QWORD *)&v33[1] + 1) = 0LL;
LABEL_9:
      v12 = *(_OWORD *)((char *)v33 + 8);
      result = v11;
      *(_DWORD *)(a3 + 184) = v6;
      v14 = *((_QWORD *)&v33[1] + 1);
      *(_OWORD *)(a3 + 160) = v12;
      *(_QWORD *)(a3 + 176) = v14;
      return result;
    }
    v30 = EngAllocMem(0, v11, 0x33345448u);
    *((_QWORD *)&v33[1] + 1) = v30;
    v31 = v30;
    if ( v30 )
    {
      if ( (unsigned int)GenerateWORDPat(v3, v4, v5, (_DWORD)v30, v32, v34, (unsigned __int16)v35) )
        goto LABEL_9;
      EngFreeMem(v31);
    }
    return 4294967294LL;
  }
  else
  {
    v15 = (char *)v33;
    v16 = HIWORD(v8);
    v17 = 16;
    do
    {
      v18 = *v15;
      v19 = v15 + 1;
      LOBYTE(v34) = v18;
      v20 = *v19;
      v15 = v19 + 1;
      BYTE1(v34) = v20;
      LOWORD(v8) = v34 + v8;
      LOWORD(v16) = v8 + v16;
      --v17;
    }
    while ( v17 );
    return (unsigned __int16)v8 | ((unsigned __int16)v16 << 16);
  }
}
