/*
 * XREFs of CmAddLogForAction @ 0x1404F1E20
 * Callers:
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14044B704 (CmpSetSecurityDescriptorInfo.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140655BB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140656248 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpGetValueData @ 0x140428050 (CmpGetValueData.c)
 *     CmpCopyCompressedName @ 0x14042B374 (CmpCopyCompressedName.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404CC7A0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpTransWriteLog @ 0x1404F2470 (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x1404F2724 (HvBufferCheckSum.c)
 */

__int64 __fastcall CmAddLogForAction(__int64 a1, ULONG a2)
{
  unsigned int v2; // ebx
  _DWORD *v4; // rdi
  __int64 v5; // r15
  unsigned int v6; // r12d
  __int64 v7; // rcx
  ULONG v8; // r13d
  _QWORD *v10; // r14
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // r13d
  __int64 v15; // rax
  int v16; // ebx
  ULONG v17; // ebx
  int v18; // ebx
  __int64 v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // ebx
  _DWORD *PoolWithTag; // rax
  int v24; // ecx
  __int64 v25; // rdx
  _WORD *v26; // rcx
  char v27; // al
  __int64 v28; // r10
  __int64 v29; // r9
  unsigned int v30; // edx
  size_t v31; // r8
  char *v32; // rcx
  __int64 v33; // rdx
  int v34; // eax
  _WORD *v35; // rbx
  size_t v36; // r8
  void *v37; // rdx
  char *v38; // rcx
  __int64 v39; // rdx
  BOOLEAN v40; // al
  __int64 v41; // r13
  CLFS_INFORMATION *v42; // rax
  CLFS_INFORMATION *v43; // r12
  unsigned int v44; // [rsp+40h] [rbp-38h]
  int v45; // [rsp+44h] [rbp-34h] BYREF
  int v46; // [rsp+48h] [rbp-30h] BYREF
  __int64 v47; // [rsp+50h] [rbp-28h]
  __int64 v48; // [rsp+58h] [rbp-20h]
  int v49[2]; // [rsp+60h] [rbp-18h]
  CLFS_LSN plsnFinish; // [rsp+68h] [rbp-10h] BYREF
  size_t Size; // [rsp+C0h] [rbp+48h] BYREF
  ULONG pcbInfoBuffer; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v53; // [rsp+D0h] [rbp+58h] BYREF
  void *Src; // [rsp+D8h] [rbp+60h] BYREF

  pcbInfoBuffer = a2;
  v2 = 0;
  v53 = -1163005939;
  LODWORD(Src) = 0;
  LODWORD(Size) = 0;
  v45 = -1;
  v4 = 0LL;
  v46 = -1;
  v5 = 0LL;
  v44 = -1;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 48);
  v8 = 0;
  v47 = 0LL;
  pcbInfoBuffer = 0;
  *(_QWORD *)v49 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 5400LL);
  if ( !*(_QWORD *)(*(_QWORD *)v49 + 96LL) || !*(_QWORD *)(*(_QWORD *)(a1 + 56) + 48LL) || *(_DWORD *)(a1 + 68) == 13 )
    return 0LL;
  v10 = CmpConstructName(v7);
  if ( !v10 )
    return 3221225626LL;
  v11 = *(_QWORD *)(a1 + 48);
  v12 = *(_DWORD *)(a1 + 68);
  v13 = *(_QWORD *)(v11 + 32);
  v48 = v13;
  if ( (v12 & 0xFFFFFFFD) == 0 )
  {
    v14 = 64;
    v17 = *(_DWORD *)(*(_QWORD *)(v11 + 88) + 24LL);
LABEL_37:
    v2 = v17 + 64;
LABEL_38:
    if ( v2 < v14 )
    {
      v16 = -1073741675;
      goto LABEL_79;
    }
    v8 = pcbInfoBuffer;
LABEL_41:
    v21 = *(unsigned __int16 *)v10;
    v22 = v21 + v2;
    if ( v22 < v21 )
    {
      v16 = -1073741562;
      goto LABEL_79;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, 0x20204D43u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_44:
      v16 = -1073741670;
LABEL_79:
      if ( v47 )
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + 16LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL),
          &v46);
      goto LABEL_81;
    }
    memset(PoolWithTag, 0, v22);
    v4[1] = v22;
    v4[2] = 1;
    *((_OWORD *)v4 + 1) = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 80LL);
    *((_WORD *)v4 + 16) = *(_WORD *)v10;
    *((_WORD *)v4 + 17) = *((_WORD *)v10 + 1);
    v24 = *(_DWORD *)(a1 + 68);
    if ( (v24 & 0xFFFFFFFD) != 0 )
    {
      if ( v24 <= 3 )
        goto LABEL_74;
      if ( v24 <= 6 )
      {
        v53 = -1;
        if ( v24 == 4 )
          v4[3] = 3;
        else
          v4[3] = (v24 != 5) + 4;
        v34 = *(_DWORD *)(v5 + 12);
        *((_QWORD *)v4 + 5) = v4 + 20;
        v4[16] = v34;
        memmove(v4 + 20, (const void *)v10[1], *(unsigned __int16 *)v10);
        v35 = (_WORD *)((char *)v4 + *(unsigned __int16 *)v10 + 80);
        *((_QWORD *)v4 + 7) = v35;
        if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
          CmpCopyCompressedName(v35, v6, (unsigned __int8 *)(v5 + 20), *(unsigned __int16 *)(v5 + 2));
        else
          memmove(v35, (const void *)(v5 + 20), v6);
        *((_QWORD *)v4 + 7) = 0LL;
        *((_WORD *)v4 + 25) = v6;
        *((_WORD *)v4 + 24) = v6;
        if ( *(_DWORD *)(a1 + 68) == 6 )
        {
          v4[17] = 0;
          *((_QWORD *)v4 + 9) = 0LL;
        }
        else
        {
          v4[17] = (_DWORD)Src;
          if ( !CmpGetValueData(
                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                  v44,
                  v5,
                  (unsigned int *)&Size,
                  (__int64 *)&Src,
                  &pcbInfoBuffer,
                  (__int64)&v53) )
            goto LABEL_44;
          v36 = (unsigned int)Size;
          v37 = Src;
          v38 = (char *)v35 + v6;
          *((_QWORD *)v4 + 9) = v38;
          memmove(v38, v37, v36);
          *((_QWORD *)v4 + 9) = 0LL;
          if ( (_BYTE)pcbInfoBuffer == 1 )
            ExFreePoolWithTag(Src, 0);
          else
            (*(void (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 16LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
              &v53);
        }
LABEL_74:
        v39 = (unsigned int)v4[1];
        *((_QWORD *)v4 + 5) = 0LL;
        *v4 = HvBufferCheckSum(v4, v39);
        v40 = ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 96LL));
        v41 = *(_QWORD *)v49;
        v16 = CmpTransWriteLog(v49[0], (int)v4, v4[1], v40 != 0 ? 2 : 0, &plsnFinish);
        if ( v16 >= 0 && ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 96LL)) )
          *(CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 96LL) = plsnFinish;
        pcbInfoBuffer = 120;
        v42 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
        v43 = v42;
        if ( v42 )
        {
          ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(v41 + 88), v42, &pcbInfoBuffer);
          ExFreePoolWithTag(v43, 0);
        }
        goto LABEL_79;
      }
      if ( v24 == 7 )
      {
        v4[3] = 6;
        *((_QWORD *)v4 + 5) = v4 + 14;
        memmove(v4 + 14, (const void *)v10[1], *(unsigned __int16 *)v10);
        v4[12] = *(_DWORD *)(a1 + 80);
        goto LABEL_74;
      }
      if ( v24 == 8 )
      {
        v4[3] = 7;
        *((_QWORD *)v4 + 5) = v4 + 14;
        memmove(v4 + 14, (const void *)v10[1], *(unsigned __int16 *)v10);
        *((_QWORD *)v4 + 6) = *(_QWORD *)(a1 + 80);
        goto LABEL_74;
      }
      if ( v24 != 9 )
      {
        if ( v24 != 11 )
          goto LABEL_74;
        v4[3] = 9;
        *((_QWORD *)v4 + 5) = v4 + 16;
        memmove(v4 + 16, (const void *)v10[1], *(unsigned __int16 *)v10);
        v25 = v47;
        v26 = (_WORD *)((char *)v4 + *(unsigned __int16 *)v10 + 64);
        *((_QWORD *)v4 + 7) = v26;
        if ( (*(_BYTE *)(v25 + 2) & 0x20) != 0 )
          CmpCopyCompressedName(v26, v8, (unsigned __int8 *)(v25 + 76), *(unsigned __int16 *)(v25 + 72));
        else
          memmove(v26, (const void *)(v25 + 76), v8);
        *((_WORD *)v4 + 25) = v8;
        *((_WORD *)v4 + 24) = v8;
        goto LABEL_73;
      }
      v27 = *(_BYTE *)(a1 + 84);
      *((_QWORD *)v4 + 5) = v4 + 16;
      v4[3] = v27 != 0 ? 10 : 8;
      memmove(v4 + 16, (const void *)v10[1], *(unsigned __int16 *)v10);
      v28 = v48;
      v29 = 2LL * v53;
      v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v48 + 3056) + 16LL * v53 + 8) + 24LL);
      v4[12] = v30;
      v31 = v30;
      v32 = (char *)v4 + *(unsigned __int16 *)v10 + 64;
      *((_QWORD *)v4 + 7) = v32;
      v33 = *(_QWORD *)(*(_QWORD *)(v28 + 3056) + 8 * v29 + 8);
    }
    else
    {
      v4[3] = (v24 != 0) + 1;
      v4[12] = *(_DWORD *)(a1 + 72);
      *((_QWORD *)v4 + 5) = v4 + 16;
      memmove(v4 + 16, (const void *)v10[1], *(unsigned __int16 *)v10);
      v32 = (char *)v4 + *(unsigned __int16 *)v10 + 64;
      *((_QWORD *)v4 + 7) = v32;
      v33 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL);
      v31 = *(unsigned int *)(v33 + 24);
    }
    memmove(v32, (const void *)(v33 + 32), v31);
LABEL_73:
    *((_QWORD *)v4 + 7) = 0LL;
    goto LABEL_74;
  }
  if ( v12 <= 3 )
    goto LABEL_41;
  if ( v12 <= 6 )
  {
    v14 = 80;
    v18 = 80;
    if ( (unsigned int)(v12 - 4) <= 1 )
    {
      v44 = *(_DWORD *)(a1 + 84);
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v13 + 8))(v13, v44, &v45);
      v5 = v19;
      if ( !v19 )
        goto LABEL_15;
      v20 = *(_DWORD *)(v19 + 4);
      LODWORD(Src) = v20;
      if ( v20 >= 0x80000000 )
      {
        v20 += 0x80000000;
        LODWORD(Src) = v20;
      }
      v18 = v20 + 80;
      LODWORD(Size) = v20;
      if ( v20 + 80 < 0x50 )
      {
        v16 = -1073741675;
LABEL_81:
        if ( v5 )
          (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 16LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
            &v45);
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
        goto LABEL_85;
      }
      v14 = v20 + 80;
    }
    else
    {
      v44 = *(_DWORD *)(a1 + 80);
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v13 + 8))(v13, v44, &v45);
      if ( !v5 )
        goto LABEL_15;
    }
    if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
      v6 = (unsigned __int16)(2 * *(_WORD *)(v5 + 2));
    else
      v6 = *(unsigned __int16 *)(v5 + 2);
    v2 = v6 + v18;
    goto LABEL_38;
  }
  if ( v12 == 7 || v12 == 8 )
  {
    v2 = 56;
    goto LABEL_41;
  }
  if ( v12 == 9 )
  {
    v14 = 64;
    if ( !CmpFindSecurityCellCacheIndex(v13, *(_DWORD *)(a1 + 80), &v53) )
      goto LABEL_15;
    v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v48 + 3056) + 16LL * v53 + 8) + 24LL);
    goto LABEL_37;
  }
  if ( v12 != 11 )
    goto LABEL_41;
  v14 = 64;
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + 8LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL),
          *(unsigned int *)(*(_QWORD *)(a1 + 80) + 40LL),
          &v46);
  v47 = v15;
  if ( v15 )
  {
    if ( (*(_BYTE *)(v15 + 2) & 0x20) != 0 )
      v17 = (unsigned __int16)(2 * *(_WORD *)(v15 + 72));
    else
      v17 = *(unsigned __int16 *)(v15 + 72);
    pcbInfoBuffer = v17;
    goto LABEL_37;
  }
LABEL_15:
  v16 = -1073741670;
LABEL_85:
  ExFreePoolWithTag(v10, 0x624E4D43u);
  return (unsigned int)v16;
}
