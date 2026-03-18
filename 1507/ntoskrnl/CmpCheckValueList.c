/*
 * XREFs of CmpCheckValueList @ 0x1404C48A0
 * Callers:
 *     CmpCheckKey @ 0x1404C2C40 (CmpCheckKey.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     SetFailureLocation @ 0x1401DE608 (SetFailureLocation.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvIsCellAllocated @ 0x1404C29A0 (HvIsCellAllocated.c)
 *     CmpCompareCompressedName @ 0x1404CB210 (CmpCompareCompressedName.c)
 *     CmpCompareUnicodeString @ 0x140547818 (CmpCompareUnicodeString.c)
 */

__int64 __fastcall CmpCheckValueList(
        ULONG_PTR BugCheckParameter2,
        char a2,
        __int64 a3,
        unsigned int a4,
        ULONG_PTR BugCheckParameter3,
        __int64 a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  __int64 v11; // rdi
  unsigned int v12; // esi
  unsigned int *v13; // rax
  unsigned int v14; // r13d
  void *v15; // r12
  _WORD *v16; // rax
  _DWORD *v17; // r12
  unsigned int v18; // ecx
  unsigned int v19; // esi
  __int16 v20; // r14
  char v21; // dl
  int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // esi
  unsigned int v25; // r14d
  __int64 v26; // r15
  unsigned int v27; // edx
  __int64 v28; // rax
  __int64 v29; // r12
  unsigned __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // r13d
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v38; // [rsp+20h] [rbp-58h]
  int v39; // [rsp+20h] [rbp-58h]
  unsigned int v40; // [rsp+30h] [rbp-48h]
  int v41; // [rsp+34h] [rbp-44h] BYREF
  int v42; // [rsp+38h] [rbp-40h] BYREF
  void *v43; // [rsp+40h] [rbp-38h]
  int v44; // [rsp+48h] [rbp-30h] BYREF
  int v45; // [rsp+4Ch] [rbp-2Ch] BYREF
  unsigned int v46; // [rsp+50h] [rbp-28h]
  _DWORD *v47; // [rsp+58h] [rbp-20h]
  _WORD v48[4]; // [rsp+60h] [rbp-18h] BYREF
  _WORD *v49; // [rsp+68h] [rbp-10h]
  int v50; // [rsp+C0h] [rbp+48h] BYREF
  char v51; // [rsp+C8h] [rbp+50h]
  __int64 v52; // [rsp+D0h] [rbp+58h]
  unsigned int v53; // [rsp+D8h] [rbp+60h]

  v53 = a4;
  v52 = a3;
  v51 = a2;
  v50 = -1;
  v41 = -1;
  v9 = a4;
  v44 = -1;
  v10 = 0;
  v11 = *(_QWORD *)(BugCheckParameter2 + 56);
  v12 = 0;
  v45 = -1;
  v42 = -1;
  *a7 = 0;
  v13 = a8;
  v40 = 0;
  v46 = 0;
  *(_QWORD *)(v11 + 272) = a3;
  *v13 = 0;
  *(_DWORD *)(v11 + 280) = -1;
  *(_DWORD *)(v11 + 284) = 0;
  *(_QWORD *)(v11 + 288) = 0LL;
  if ( !a4 )
    return v12;
  while ( 1 )
  {
    v14 = *(_DWORD *)(a3 + 4LL * v10);
    v15 = (void *)(a3 + 4LL * v10);
    v43 = v15;
    if ( a2 && v9 != 1 )
    {
      v12 = 5005;
      SetFailureLocation(v11, 0, 15, 5005, 64);
      *(_DWORD *)(v11 + 280) = v10;
      *(_DWORD *)(v11 + 284) = v14;
      return v12;
    }
    if ( v14 == -1 )
    {
      v12 = 5010;
      SetFailureLocation(v11, 1, 15, 5010, 80);
      *(_DWORD *)(v11 + 284) = -1;
      goto LABEL_86;
    }
    if ( HvIsCellAllocated(BugCheckParameter2, v14, a6) )
      break;
    v12 = 5020;
    SetFailureLocation(v11, 1, 15, 5020, 96);
    *(_DWORD *)(v11 + 284) = v14;
LABEL_86:
    *(_DWORD *)(v11 + 280) = v10;
LABEL_87:
    if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v11, 1, 15, v12, 48);
      return v12;
    }
    v34 = BugCheckParameter3;
    v35 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            (unsigned int)BugCheckParameter3,
            &v44);
    SetFailureLocation(v11, 1, 15, v12, 0);
    if ( !v35 )
    {
      v39 = 16;
      goto LABEL_108;
    }
    if ( !HvpMarkCellDirty(BugCheckParameter2, v34, 0, 0LL)
      || !HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v35 + 40), 0, 0LL) )
    {
      SetFailureLocation(v11, 1, 15, v12, 32);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v44);
      return v12;
    }
    --*(_DWORD *)(v35 + 36);
    v9 = --v53;
    memmove(v15, (const void *)(v52 + 4LL * (v10 + 1)), 4LL * (v53 - v10));
    v36 = *(_QWORD *)(BugCheckParameter2 + 64);
    v12 = 0;
    v46 = 0;
    *(_DWORD *)(v36 + 4088) |= 4u;
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v44);
LABEL_93:
    if ( v10 >= v9 )
      return v12;
    a2 = v51;
    a3 = v52;
  }
  v16 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                   BugCheckParameter2,
                   v14,
                   &v50);
  v47 = v16;
  v17 = v16;
  if ( !v16 )
  {
    *(_DWORD *)(v11 + 280) = v10;
    v12 = 5099;
    *(_DWORD *)(v11 + 284) = v14;
    v39 = 112;
LABEL_108:
    SetFailureLocation(v11, 0, 15, v12, v39);
    return v12;
  }
  v18 = -4 - *((_DWORD *)v16 - 1);
  if ( v18 < 0x14 || *v16 != 27510 )
  {
    v12 = 5030;
    SetFailureLocation(v11, 1, 15, 5030, 128);
    goto LABEL_82;
  }
  v19 = (unsigned __int16)v16[1];
  if ( v19 + 20 > v18 )
  {
    v12 = 5040;
    SetFailureLocation(v11, 1, 15, 5040, 144);
    goto LABEL_82;
  }
  v20 = v16[8] & 1;
  if ( v20 )
  {
    if ( (unsigned __int16)v19 > 0x3FFFu )
    {
      v12 = 5041;
      SetFailureLocation(v11, 1, 15, 5041, 146);
LABEL_82:
      *(_DWORD *)(v11 + 280) = v10;
      *(_DWORD *)(v11 + 284) = v14;
      *(_QWORD *)(v11 + 288) = v17;
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v50);
      v15 = v43;
      goto LABEL_87;
    }
  }
  else
  {
    if ( (v19 & 1) != 0 )
    {
      v12 = 5043;
      SetFailureLocation(v11, 1, 15, 5043, 148);
      goto LABEL_82;
    }
    if ( (unsigned __int16)v19 > 0x7FFFu )
    {
      v12 = 5044;
      SetFailureLocation(v11, 1, 15, 5044, 150);
      goto LABEL_82;
    }
  }
  v21 = v51;
  if ( v51 )
  {
    if ( v20 )
    {
      v22 = CmpCompareCompressedName(&CmSymbolicLinkValueName, v16 + 10, (unsigned __int16)v16[1], 0LL, v38);
    }
    else
    {
      v48[0] = v16[1];
      v49 = v16 + 10;
      v48[1] = v19;
      v22 = CmpCompareUnicodeString(&CmSymbolicLinkValueName, v48, 0LL);
    }
    if ( v22 )
    {
      v12 = 5045;
      SetFailureLocation(v11, 0, 15, 5045, 160);
      goto LABEL_98;
    }
    if ( v17[3] != 6 )
    {
      v12 = 5046;
      SetFailureLocation(v11, 0, 15, 5046, 176);
LABEL_98:
      *(_DWORD *)(v11 + 280) = v10;
      *(_DWORD *)(v11 + 284) = v14;
      *(_QWORD *)(v11 + 288) = v17;
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v50);
      return v12;
    }
    v21 = v51;
  }
  if ( v20 )
    v23 = (unsigned __int16)(2 * v19);
  else
    v23 = v19;
  if ( *a7 < v23 )
  {
    if ( v20 )
      v19 = (unsigned __int16)(2 * v19);
    *a7 = v19;
  }
  v24 = v17[1];
  if ( v21 )
  {
    if ( (v24 & 1) != 0 )
    {
      v12 = 5047;
      SetFailureLocation(v11, 0, 15, 5047, 192);
      goto LABEL_98;
    }
    if ( v24 > 0xFFFF )
    {
      v12 = 5048;
      SetFailureLocation(v11, 0, 15, 5048, 208);
      goto LABEL_98;
    }
  }
  if ( v24 >= 0x80000000 )
  {
    if ( v24 + 0x80000000 <= 4 )
      goto LABEL_60;
    v12 = 5051;
    SetFailureLocation(v11, 1, 15, 5051, 416);
    goto LABEL_82;
  }
  v25 = v17[2];
  v26 = 0LL;
  if ( !v24 )
  {
    if ( v25 == -1 )
      goto LABEL_40;
    v12 = 5050;
    SetFailureLocation(v11, 1, 15, 5050, 224);
    goto LABEL_37;
  }
  if ( !HvIsCellAllocated(BugCheckParameter2, v25, a6) )
  {
    v12 = 5060;
    SetFailureLocation(v11, 1, 15, 5060, 240);
LABEL_37:
    v10 = v40;
    goto LABEL_82;
  }
  v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v25, &v41);
  if ( !v26 )
  {
    v12 = 5098;
    *(_DWORD *)(v11 + 280) = v40;
    *(_DWORD *)(v11 + 284) = v25;
    SetFailureLocation(v11, 0, 15, 5098, 256);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v50);
    return v12;
  }
LABEL_40:
  if ( *(_DWORD *)(BugCheckParameter2 + 196) < 4u || v24 <= 0x3FD8 )
  {
    if ( !v24 || v24 <= -4 - *(_DWORD *)(v26 - 4) )
      goto LABEL_57;
    v12 = 5052;
    SetFailureLocation(v11, 1, 15, 5052, 400);
    v10 = v40;
    *(_DWORD *)(v11 + 280) = v40;
    *(_DWORD *)(v11 + 284) = v14;
    *(_QWORD *)(v11 + 288) = v17;
    goto LABEL_71;
  }
  if ( (unsigned int)(-4 - *(_DWORD *)(v26 - 4)) < 8
    || *(_WORD *)v26 != 25188
    || !*(_WORD *)(v26 + 2)
    || (v27 = *(_DWORD *)(v26 + 4), v27 == -1) )
  {
    v10 = v40;
    v12 = 5097;
    *(_DWORD *)(v11 + 280) = v40;
    *(_DWORD *)(v11 + 284) = v25;
    SetFailureLocation(v11, 1, 15, 5097, 272);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v41);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v50);
    v15 = v43;
    goto LABEL_87;
  }
  if ( !HvIsCellAllocated(BugCheckParameter2, v27, a6) )
  {
    v12 = 5096;
    SetFailureLocation(v11, 1, 15, 5096, 288);
    *(_DWORD *)(v11 + 280) = v40;
    *(_DWORD *)(v11 + 284) = *(_DWORD *)(v26 + 4);
    *(_QWORD *)(v11 + 288) = v26;
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v41);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v50);
    v10 = v40;
    v15 = v43;
    goto LABEL_87;
  }
  v28 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(v26 + 4),
          &v42);
  v29 = v28;
  if ( !v28 )
  {
    *(_DWORD *)(v11 + 280) = v40;
    v12 = 5095;
    *(_DWORD *)(v11 + 284) = *(_DWORD *)(v26 + 4);
    SetFailureLocation(v11, 0, 15, 5095, 304);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v41);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v50);
    return v12;
  }
  v30 = 4LL * *(unsigned __int16 *)(v26 + 2);
  if ( v30 < 4 || v30 > (unsigned int)(-4 - *(_DWORD *)(v28 - 4)) )
  {
    v12 = 5100;
    SetFailureLocation(v11, 1, 15, 5100, 320);
    goto LABEL_70;
  }
  if ( *(unsigned __int16 *)(v26 + 2) != (v24 + 16343) / 0x3FD8 )
  {
    v12 = 5101;
    SetFailureLocation(v11, 1, 15, 5101, 336);
LABEL_70:
    v10 = v40;
    *(_QWORD *)(v11 + 288) = v47;
    *(_DWORD *)(v11 + 280) = v40;
    *(_DWORD *)(v11 + 284) = v14;
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v42);
LABEL_71:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v41);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v50);
    v15 = v43;
    goto LABEL_87;
  }
  v31 = 0LL;
  if ( !*(_WORD *)(v26 + 2) )
  {
LABEL_56:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v42);
    v17 = v47;
LABEL_57:
    if ( v26 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v41);
    v10 = v40;
LABEL_60:
    v33 = v17[1];
    if ( v33 >= 0x80000000 )
      v33 += 0x80000000;
    if ( *a8 < v33 )
      *a8 = v33;
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v50);
    v12 = v46;
    ++v10;
    v9 = v53;
    v40 = v10;
    goto LABEL_93;
  }
  while ( 1 )
  {
    if ( !HvIsCellAllocated(BugCheckParameter2, *(_DWORD *)(v29 + 4 * v31), a6) )
    {
      v12 = 5094;
      SetFailureLocation(v11, 1, 15, 5094, 352);
      *(_DWORD *)(v11 + 280) = v31;
      *(_DWORD *)(v11 + 284) = *(_DWORD *)(v29 + 4 * v31);
      *(_QWORD *)(v11 + 288) = v26;
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v42);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v41);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v50);
      v10 = v40;
      v15 = v43;
      goto LABEL_87;
    }
    v32 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *(unsigned int *)(v29 + 4 * v31),
            &v45);
    if ( !v32 )
      break;
    if ( (unsigned int)(-4 - *(_DWORD *)(v32 - 4)) < 0x3FD8 )
    {
      v12 = 5036;
      SetFailureLocation(v11, 1, 15, 5036, 384);
      *(_DWORD *)(v11 + 280) = v31;
      *(_DWORD *)(v11 + 284) = *(_DWORD *)(v29 + 4 * v31);
      *(_QWORD *)(v11 + 288) = v26;
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v45);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v42);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v41);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v50);
      v10 = v40;
      v15 = v43;
      goto LABEL_87;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v45);
    v31 = (unsigned int)(v31 + 1);
    if ( (unsigned int)v31 >= *(unsigned __int16 *)(v26 + 2) )
      goto LABEL_56;
  }
  v12 = 5034;
  SetFailureLocation(v11, 0, 15, 5034, 368);
  *(_DWORD *)(v11 + 280) = v31;
  *(_DWORD *)(v11 + 284) = *(_DWORD *)(v29 + 4 * v31);
  *(_QWORD *)(v11 + 288) = v26;
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v42);
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v41);
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v50);
  return v12;
}
