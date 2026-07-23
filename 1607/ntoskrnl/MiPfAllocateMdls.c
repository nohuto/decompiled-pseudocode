/*
 * XREFs of MiPfAllocateMdls @ 0x140499FF0
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x14042F1C0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140444BC0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiEndingOffsetWithLock @ 0x1400230E0 (MiEndingOffsetWithLock.c)
 *     MiGetSubsectionDriverProtos @ 0x140026854 (MiGetSubsectionDriverProtos.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MiSetInPagePriority @ 0x1400882C8 (MiSetInPagePriority.c)
 *     MmCreateMdl @ 0x140088304 (MmCreateMdl.c)
 *     MiFreeInPageSupportBlock @ 0x1400C4240 (MiFreeInPageSupportBlock.c)
 *     MiGetInPageSupportBlock @ 0x1400E53C0 (MiGetInPageSupportBlock.c)
 *     MiGetSharedProtos @ 0x1401F4EB4 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiPfAllocateMdls(__int64 a1, unsigned int a2, __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  unsigned int v6; // r9d
  _QWORD *v7; // r14
  _QWORD *v8; // r10
  int v9; // r8d
  _QWORD *v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r13
  char *v15; // rax
  char *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r9
  unsigned __int64 v19; // r13
  __int64 v20; // r15
  __int64 *v21; // rsi
  unsigned int v22; // edi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  char **v25; // rcx
  __int64 SubsectionDriverProtos; // rax
  ULONG v27; // eax
  __int64 v28; // rax
  __int64 SharedProtos; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-A8h]
  _QWORD *v33; // [rsp+28h] [rbp-A0h]
  _QWORD *v34; // [rsp+30h] [rbp-98h]
  unsigned int v35; // [rsp+38h] [rbp-90h]
  unsigned int v36; // [rsp+3Ch] [rbp-8Ch]
  __int64 *v37; // [rsp+40h] [rbp-88h]
  _QWORD *v38; // [rsp+48h] [rbp-80h]
  __int64 v39; // [rsp+50h] [rbp-78h]
  PMDL Mdl; // [rsp+58h] [rbp-70h]
  char *v41; // [rsp+60h] [rbp-68h]
  unsigned __int64 v42; // [rsp+68h] [rbp-60h]
  unsigned __int64 v43; // [rsp+70h] [rbp-58h]
  unsigned int v47; // [rsp+E8h] [rbp+20h]

  v3 = *(_QWORD **)(a1 + 64);
  v35 = *(_DWORD *)(a1 + 48);
  v36 = *(_DWORD *)(a1 + 52);
  v33 = v3;
  v39 = *(_QWORD *)(a1 + 8);
  v32 = *(_QWORD *)(a1 + 16);
  if ( !v32 )
    v32 = *(_QWORD *)(a1 + 8) + 128LL;
  v4 = 0LL;
  v5 = a1 + 8 * (*(unsigned int *)(a1 + 60) + 13LL);
  v6 = 0;
  v43 = v5;
  v7 = 0LL;
  v47 = 0;
  v8 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  if ( (unsigned __int64)v3 >= v5 )
    return v6;
  v9 = dword_14032767C;
  v10 = v3 + 1;
  v34 = v3 + 1;
  while ( 1 )
  {
    v11 = *v3;
    if ( (*v3 & 2) != 0 )
      break;
LABEL_6:
    if ( (v11 & 1) != 0 )
    {
      if ( (v11 & 0xFFFFFFFC) != 0 )
      {
        if ( v7 )
        {
          if ( (__int64)((v11 & 0xFFFFFFFFFFFFFFFCuLL) - v4) >> 3 > v9 )
            goto LABEL_17;
        }
        else
        {
          v8 = v3;
          v38 = v3;
        }
        v7 = v3;
        v4 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( v7 )
        goto LABEL_18;
    }
    else
    {
      if ( v7 )
      {
        if ( (__int64)((v11 & 0xFFFFFFFFFFFFFFFCuLL) - v4) >> 3 > v9 )
          goto LABEL_17;
      }
      else
      {
        v8 = v3;
        v38 = v3;
      }
      v7 = v3;
      v4 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v10 == (_QWORD *)v5 )
        goto LABEL_18;
    }
LABEL_10:
    ++v3;
    ++v10;
    v33 = v3;
    v34 = v10;
    if ( (unsigned __int64)v3 >= v5 )
      return v6;
  }
  if ( !v7 )
  {
    if ( (v11 & 0xFFFFFFFC) == 0 )
      goto LABEL_10;
    goto LABEL_6;
  }
  if ( (v11 & 0xFFFFFFFC) == 0 )
    goto LABEL_18;
LABEL_17:
  v33 = v3 - 1;
  v34 = v10 - 1;
LABEL_18:
  v42 = *v7 & 0xFFFFFFFFFFFFFFFCuLL;
  v13 = *v8 & 0xFFFFFFFFFFFFFFFCuLL;
  v14 = ((__int64)(v42 - v13) >> 3) + 1;
  v15 = (char *)MiGetInPageSupportBlock(0);
  v41 = v15;
  v16 = v15;
  if ( !v15 )
    return (unsigned int)-1073741670;
  *((_QWORD *)v15 + 30) = 0LL;
  MiSetInPagePriority((__int64)v15, v36, v35);
  if ( v14 <= 0x10 )
  {
    v19 = v14 << 12;
    Mdl = (PMDL)(v17 + 256);
    *(_QWORD *)(v17 + 256) = v18;
    *(_WORD *)(v17 + 266) = v18;
    *(_QWORD *)(v17 + 288) = v18;
    *(_DWORD *)(v17 + 300) = v18;
    *(_WORD *)(v17 + 264) = 8 * (((v19 + 4095) >> 12) + 6);
    *(_DWORD *)(v17 + 296) = v19;
    goto LABEL_21;
  }
  Mdl = MmCreateMdl(0LL, 0LL, v14 << 12);
  if ( Mdl )
  {
LABEL_21:
    v20 = v32;
    v21 = v37;
    v22 = v47;
    while ( 1 )
    {
      v23 = *(_QWORD *)(v20 + 8);
      if ( v13 >= v23 && v13 < v23 + 8LL * *(unsigned int *)(v20 + 44) )
        break;
      if ( (*(_BYTE *)(v20 + 34) & 2) != 0 && (*(_DWORD *)(v39 + 56) & 0x4000000) != 0 )
      {
        if ( *(_QWORD *)(v20 + 24) )
        {
          SharedProtos = MiGetSharedProtos(v39, a2, v20);
          if ( SharedProtos )
          {
            v30 = *(_QWORD *)(SharedProtos + 32);
            if ( v13 >= v30 && v13 < v30 + 8LL * *(unsigned int *)(v20 + 44) )
              break;
          }
        }
      }
      if ( (*(_DWORD *)(v39 + 56) & 0x20) != 0 )
      {
        SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v20);
        if ( SubsectionDriverProtos )
        {
          v31 = *(_QWORD *)(SubsectionDriverProtos + 32);
          if ( v13 >= v31 && v13 < v31 + 8LL * *(unsigned int *)(v20 + 44) )
            break;
        }
      }
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( v21 )
        {
          if ( v22 >= *((_DWORD *)v21 + 4) )
          {
            v21 = (__int64 *)*v21;
            v22 = 1;
            v20 = v21[3];
          }
          else
          {
            v28 = v22++;
            v20 = v21[v28 + 3];
          }
        }
        else
        {
          v21 = *(__int64 **)(a1 + 24);
          v22 = 1;
          v20 = v21[3];
        }
      }
      else
      {
        v20 = *(_QWORD *)(v20 + 16);
      }
    }
    v47 = v22;
    v37 = v21;
    v32 = v20;
    v24 = MiStartingOffset((__int64 *)v20, v13, a2);
    v3 = v33;
    v4 = v42;
    v10 = v34;
    v5 = v43;
    *((_QWORD *)v41 + 12) = v24;
    if ( (*(_BYTE *)v7 & 1) != 0 && (*(_DWORD *)(v39 + 56) & 0x20) != 0 )
    {
      v27 = MiEndingOffsetWithLock((_QWORD *)v20) - v24;
      if ( v27 <= Mdl->ByteCount )
        Mdl->ByteCount = (v27 + 511) & 0xFFFFFE00;
    }
    v8 = v38;
    *((_QWORD *)v41 + 29) = v38;
    *((_QWORD *)v41 + 24) = v7;
    *((_QWORD *)v41 + 25) = v39;
    *((_QWORD *)v41 + 27) = a3;
    if ( a3 )
      v41[190] |= 0x80u;
    *((_QWORD *)v41 + 31) = Mdl;
    v25 = *(char ***)(a1 + 96);
    if ( *v25 != (char *)(a1 + 88) )
      __fastfail(3u);
    *(_QWORD *)v41 = a1 + 88;
    *((_QWORD *)v41 + 1) = v25;
    *v25 = v41;
    *(_QWORD *)(a1 + 96) = v41;
    ++*(_DWORD *)(a1 + 76);
    v9 = dword_14032767C;
    v6 = 0;
    v7 = 0LL;
    goto LABEL_10;
  }
  MiFreeInPageSupportBlock(v16);
  return (unsigned int)-1073741670;
}
