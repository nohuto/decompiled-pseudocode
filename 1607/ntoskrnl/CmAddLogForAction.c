/*
 * XREFs of CmAddLogForAction @ 0x14051985C
 * Callers:
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FBC58 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405FE410 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE8A8 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FCE20 (CmpFindSecurityCellCacheIndex.c)
 *     CmpCopyCompressedName @ 0x14043EFB0 (CmpCopyCompressedName.c)
 *     CmpGetValueData @ 0x140441E30 (CmpGetValueData.c)
 *     CmpTransWriteLog @ 0x140519ED8 (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x14051A168 (HvBufferCheckSum.c)
 *     CmpConstructName @ 0x14051A1D8 (CmpConstructName.c)
 */

__int64 __fastcall CmAddLogForAction(__int64 a1, ULONG a2)
{
  unsigned int v2; // ebx
  _DWORD *v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rdx
  unsigned int v7; // r12d
  ULONG v8; // r13d
  int v9; // eax
  __int64 v11; // rcx
  const void **v12; // r14
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // r9
  unsigned int v16; // r13d
  __int64 v17; // rax
  int v18; // ebx
  ULONG v19; // ebx
  int v20; // ebx
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // ebx
  _DWORD *PoolWithTag; // rax
  int v26; // ecx
  __int64 v27; // rdx
  _WORD *v28; // rcx
  char v29; // al
  __int64 v30; // r10
  __int64 v31; // r9
  unsigned int v32; // edx
  size_t v33; // r8
  char *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  BOOLEAN v37; // al
  __int64 v38; // r13
  CLFS_INFORMATION *v39; // rax
  CLFS_INFORMATION *v40; // r12
  int v41; // eax
  _WORD *v42; // rbx
  size_t v43; // r8
  void *v44; // rdx
  char *v45; // rcx
  bool v46; // zf
  unsigned int v47; // [rsp+40h] [rbp-29h]
  _DWORD v48[2]; // [rsp+48h] [rbp-21h] BYREF
  _DWORD v49[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v50; // [rsp+58h] [rbp-11h]
  __int64 v51; // [rsp+60h] [rbp-9h]
  int v52[2]; // [rsp+68h] [rbp-1h]
  CLFS_LSN plsnFinish; // [rsp+70h] [rbp+7h] BYREF
  size_t Size; // [rsp+D0h] [rbp+67h] BYREF
  ULONG pcbInfoBuffer; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v56; // [rsp+E0h] [rbp+77h] BYREF
  int v57; // [rsp+E4h] [rbp+7Bh]
  void *Src; // [rsp+E8h] [rbp+7Fh] BYREF

  pcbInfoBuffer = a2;
  v2 = 0;
  v56 = -1163005939;
  v48[1] = 0;
  v49[1] = 0;
  v48[0] = -1;
  v4 = 0LL;
  v49[0] = -1;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  v47 = -1;
  v8 = 0;
  LODWORD(Src) = 0;
  LODWORD(Size) = 0;
  v9 = *(_DWORD *)(v6 + 48);
  v50 = 0LL;
  pcbInfoBuffer = 0;
  if ( (v9 & 0x80u) != 0 )
    return 0LL;
  v11 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)v52 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 5400LL);
  if ( !*(_QWORD *)(*(_QWORD *)v52 + 96LL) || !*(_QWORD *)(v6 + 56) || *(_DWORD *)(a1 + 68) == 13 )
    return 0LL;
  v12 = (const void **)CmpConstructName(v11, v6);
  if ( !v12 )
    return 3221225626LL;
  v13 = *(_QWORD *)(a1 + 48);
  v14 = *(_DWORD *)(a1 + 68);
  v15 = *(_QWORD *)(v13 + 24);
  v51 = v15;
  if ( (v14 & 0xFFFFFFFD) == 0 )
  {
    v16 = 64;
    v19 = *(_DWORD *)(*(_QWORD *)(v13 + 80) + 24LL);
LABEL_38:
    v2 = v19 + 64;
LABEL_39:
    if ( v2 < v16 )
    {
      v18 = -1073741675;
      goto LABEL_65;
    }
    v8 = pcbInfoBuffer;
LABEL_42:
    v23 = *(unsigned __int16 *)v12;
    v24 = v23 + v2;
    if ( v24 < v23 )
    {
      v18 = -1073741562;
      goto LABEL_65;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v24, 0x20204D43u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_45:
      v18 = -1073741670;
LABEL_65:
      if ( v50 )
        (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 16LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL),
          v49);
      goto LABEL_67;
    }
    memset(PoolWithTag, 0, v24);
    v4[1] = v24;
    v4[2] = 1;
    *((_OWORD *)v4 + 1) = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 88LL);
    *((_WORD *)v4 + 16) = *(_WORD *)v12;
    *((_WORD *)v4 + 17) = *((_WORD *)v12 + 1);
    v26 = *(_DWORD *)(a1 + 68);
    if ( (v26 & 0xFFFFFFFD) != 0 )
    {
      if ( v26 <= 3 )
        goto LABEL_60;
      if ( v26 <= 6 )
      {
        v56 = -1;
        v57 = 0;
        if ( v26 == 4 )
          v4[3] = 3;
        else
          v4[3] = (v26 != 5) + 4;
        v41 = *(_DWORD *)(v5 + 12);
        *((_QWORD *)v4 + 5) = v4 + 20;
        v4[16] = v41;
        memmove(v4 + 20, v12[1], *(unsigned __int16 *)v12);
        v42 = (_WORD *)((char *)v4 + *(unsigned __int16 *)v12 + 80);
        *((_QWORD *)v4 + 7) = v42;
        if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
          CmpCopyCompressedName(v42, v7, (unsigned __int8 *)(v5 + 20), *(unsigned __int16 *)(v5 + 2));
        else
          memmove(v42, (const void *)(v5 + 20), v7);
        *((_WORD *)v4 + 25) = v7;
        *((_QWORD *)v4 + 7) = 0LL;
        *((_WORD *)v4 + 24) = v7;
        if ( *(_DWORD *)(a1 + 68) == 6 )
        {
          v4[17] = 0;
          *((_QWORD *)v4 + 9) = 0LL;
        }
        else
        {
          v4[17] = (_DWORD)Src;
          if ( !CmpGetValueData(
                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
                  v47,
                  v5,
                  (unsigned int *)&Size,
                  (__int64)&Src,
                  (__int64)&pcbInfoBuffer,
                  (__int64)&v56) )
            goto LABEL_45;
          v43 = (unsigned int)Size;
          v44 = Src;
          v45 = (char *)v42 + v7;
          *((_QWORD *)v4 + 9) = v45;
          memmove(v45, v44, v43);
          v46 = (_BYTE)pcbInfoBuffer == 1;
          *((_QWORD *)v4 + 9) = 0LL;
          if ( v46 )
            ExFreePoolWithTag(Src, 0);
          else
            (*(void (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 16LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
              &v56);
        }
      }
      else if ( v26 == 7 )
      {
        v4[3] = 6;
        *((_QWORD *)v4 + 5) = v4 + 14;
        memmove(v4 + 14, v12[1], *(unsigned __int16 *)v12);
        v4[12] = *(_DWORD *)(a1 + 88);
      }
      else
      {
        if ( v26 != 8 )
        {
          if ( v26 != 9 )
          {
            if ( v26 == 11 )
            {
              v4[3] = 9;
              *((_QWORD *)v4 + 5) = v4 + 16;
              memmove(v4 + 16, v12[1], *(unsigned __int16 *)v12);
              v27 = v50;
              v28 = (_WORD *)((char *)v4 + *(unsigned __int16 *)v12 + 64);
              *((_QWORD *)v4 + 7) = v28;
              if ( (*(_BYTE *)(v27 + 2) & 0x20) != 0 )
                CmpCopyCompressedName(v28, v8, (unsigned __int8 *)(v27 + 76), *(unsigned __int16 *)(v27 + 72));
              else
                memmove(v28, (const void *)(v27 + 76), v8);
              *((_WORD *)v4 + 25) = v8;
              *((_QWORD *)v4 + 7) = 0LL;
              *((_WORD *)v4 + 24) = v8;
            }
            goto LABEL_60;
          }
          v29 = *(_BYTE *)(a1 + 92);
          *((_QWORD *)v4 + 5) = v4 + 16;
          v4[3] = v29 != 0 ? 10 : 8;
          memmove(v4 + 16, v12[1], *(unsigned __int16 *)v12);
          v30 = v51;
          v31 = 2LL * v56;
          v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 3056) + 16LL * v56 + 8) + 24LL);
          v4[12] = v32;
          v33 = v32;
          v34 = (char *)v4 + *(unsigned __int16 *)v12 + 64;
          *((_QWORD *)v4 + 7) = v34;
          v35 = *(_QWORD *)(*(_QWORD *)(v30 + 3056) + 8 * v31 + 8);
          goto LABEL_58;
        }
        v4[3] = 7;
        *((_QWORD *)v4 + 5) = v4 + 14;
        memmove(v4 + 14, v12[1], *(unsigned __int16 *)v12);
        *((_QWORD *)v4 + 6) = *(_QWORD *)(a1 + 88);
      }
LABEL_60:
      v36 = (unsigned int)v4[1];
      *((_QWORD *)v4 + 5) = 0LL;
      *v4 = HvBufferCheckSum(v4, v36);
      v37 = ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL));
      v38 = *(_QWORD *)v52;
      v18 = CmpTransWriteLog(v52[0], (int)v4, v4[1], v37 != 0 ? 2 : 0, &plsnFinish);
      if ( v18 >= 0 && ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL)) )
        *(CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL) = plsnFinish;
      pcbInfoBuffer = 120;
      v39 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
      v40 = v39;
      if ( v39 )
      {
        ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(v38 + 88), v39, &pcbInfoBuffer);
        ExFreePoolWithTag(v40, 0);
      }
      goto LABEL_65;
    }
    v4[3] = (v26 != 0) + 1;
    v4[12] = *(_DWORD *)(a1 + 72);
    *((_QWORD *)v4 + 5) = v4 + 16;
    memmove(v4 + 16, v12[1], *(unsigned __int16 *)v12);
    v34 = (char *)v4 + *(unsigned __int16 *)v12 + 64;
    *((_QWORD *)v4 + 7) = v34;
    v35 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 80LL);
    v33 = *(unsigned int *)(v35 + 24);
LABEL_58:
    memmove(v34, (const void *)(v35 + 32), v33);
    *((_QWORD *)v4 + 7) = 0LL;
    goto LABEL_60;
  }
  if ( v14 <= 3 )
    goto LABEL_42;
  if ( v14 <= 6 )
  {
    v16 = 80;
    v20 = 80;
    if ( (unsigned int)(v14 - 4) <= 1 )
    {
      v47 = *(_DWORD *)(a1 + 92);
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v15 + 8))(v15, v47, v48);
      v5 = v21;
      if ( !v21 )
        goto LABEL_16;
      v22 = *(_DWORD *)(v21 + 4);
      LODWORD(Src) = v22;
      if ( v22 >= 0x80000000 )
      {
        v22 += 0x80000000;
        LODWORD(Src) = v22;
      }
      v20 = v22 + 80;
      LODWORD(Size) = v22;
      if ( v22 + 80 < 0x50 )
      {
        v18 = -1073741675;
LABEL_67:
        if ( v5 )
          (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 16LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
            v48);
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
        goto LABEL_71;
      }
      v16 = v22 + 80;
    }
    else
    {
      v47 = *(_DWORD *)(a1 + 88);
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v15 + 8))(v15, v47, v48);
      if ( !v5 )
        goto LABEL_16;
    }
    if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
      v7 = (unsigned __int16)(2 * *(_WORD *)(v5 + 2));
    else
      v7 = *(unsigned __int16 *)(v5 + 2);
    v2 = v7 + v20;
    goto LABEL_39;
  }
  if ( v14 == 7 || v14 == 8 )
  {
    v2 = 56;
    goto LABEL_42;
  }
  if ( v14 == 9 )
  {
    v16 = 64;
    if ( !CmpFindSecurityCellCacheIndex(v15, *(_DWORD *)(a1 + 88), &v56) )
      goto LABEL_16;
    v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 3056) + 16LL * v56 + 8) + 24LL);
    goto LABEL_38;
  }
  if ( v14 != 11 )
    goto LABEL_42;
  v16 = 64;
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 8LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL),
          *(unsigned int *)(*(_QWORD *)(a1 + 88) + 32LL),
          v49);
  v50 = v17;
  if ( v17 )
  {
    if ( (*(_BYTE *)(v17 + 2) & 0x20) != 0 )
      v19 = (unsigned __int16)(2 * *(_WORD *)(v17 + 72));
    else
      v19 = *(unsigned __int16 *)(v17 + 72);
    pcbInfoBuffer = v19;
    goto LABEL_38;
  }
LABEL_16:
  v18 = -1073741670;
LABEL_71:
  CmpFreeTransientPoolWithTag(v12, 0x624E4D43u);
  return (unsigned int)v18;
}
