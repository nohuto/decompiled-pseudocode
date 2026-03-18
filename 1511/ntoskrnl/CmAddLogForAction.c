/*
 * XREFs of CmAddLogForAction @ 0x1403D5EAC
 * Callers:
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403E09B8 (CmpSetSecurityDescriptorInfo.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405E0250 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405E0744 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpTransWriteLog @ 0x1403D63A8 (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x1403D6638 (HvBufferCheckSum.c)
 *     CmpCopyCompressedName @ 0x1403D9A5C (CmpCopyCompressedName.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FB310 (CmpFindSecurityCellCacheIndex.c)
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
 *     CmpGetValueData @ 0x140422DD0 (CmpGetValueData.c)
 */

__int64 __fastcall CmAddLogForAction(__int64 a1, ULONG a2)
{
  unsigned int v2; // ebx
  _DWORD *v4; // rdi
  __int64 v5; // r13
  unsigned int v6; // r15d
  __int64 v7; // rcx
  ULONG v8; // r12d
  const void **v9; // r14
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r9
  unsigned int v13; // r12d
  int v14; // ebx
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // ebx
  _DWORD *PoolWithTag; // rax
  int v20; // ecx
  int v21; // eax
  char *v22; // rbx
  size_t v23; // r8
  void *v24; // rdx
  char *v25; // rcx
  BOOLEAN v26; // al
  __int64 v27; // r12
  int v28; // ebx
  CLFS_INFORMATION *v29; // rax
  CLFS_INFORMATION *v30; // r15
  ULONG v32; // ebx
  char *v33; // rcx
  __int64 v34; // rdx
  size_t v35; // r8
  __int64 v36; // r10
  __int64 v37; // r9
  unsigned int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rdx
  char *v41; // rcx
  unsigned int v42; // [rsp+40h] [rbp-38h]
  int v43; // [rsp+44h] [rbp-34h] BYREF
  int v44; // [rsp+48h] [rbp-30h] BYREF
  __int64 v45; // [rsp+50h] [rbp-28h]
  __int64 v46; // [rsp+58h] [rbp-20h]
  int v47[2]; // [rsp+60h] [rbp-18h]
  CLFS_LSN plsnFinish; // [rsp+68h] [rbp-10h] BYREF
  size_t Size; // [rsp+C0h] [rbp+48h] BYREF
  ULONG pcbInfoBuffer; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v51; // [rsp+D0h] [rbp+58h] BYREF
  void *Src; // [rsp+D8h] [rbp+60h] BYREF

  pcbInfoBuffer = a2;
  v2 = 0;
  v51 = -1163005939;
  LODWORD(Src) = 0;
  LODWORD(Size) = 0;
  v43 = -1;
  v4 = 0LL;
  v44 = -1;
  v5 = 0LL;
  v42 = -1;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 48);
  v8 = 0;
  v45 = 0LL;
  pcbInfoBuffer = 0;
  *(_QWORD *)v47 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 5400LL);
  if ( !*(_QWORD *)(*(_QWORD *)v47 + 96LL) || !*(_QWORD *)(*(_QWORD *)(a1 + 56) + 48LL) || *(_DWORD *)(a1 + 68) == 13 )
    return 0LL;
  v9 = (const void **)CmpConstructName(v7);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 48);
    v11 = *(_DWORD *)(a1 + 68);
    v12 = *(_QWORD *)(v10 + 32);
    v46 = v12;
    if ( !v11 || v11 == 2 )
    {
      v13 = 64;
      v32 = *(_DWORD *)(*(_QWORD *)(v10 + 88) + 24LL);
    }
    else
    {
      if ( v11 <= 3 )
        goto LABEL_20;
      if ( v11 <= 6 )
      {
        v13 = 80;
        v14 = 80;
        if ( (unsigned int)(v11 - 4) > 1 )
        {
          v42 = *(_DWORD *)(a1 + 80);
          v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v12 + 8))(v12, v42, &v43);
          if ( v5 )
          {
LABEL_15:
            if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
              v6 = (unsigned __int16)(2 * *(_WORD *)(v5 + 2));
            else
              v6 = *(unsigned __int16 *)(v5 + 2);
            v2 = v6 + v14;
            goto LABEL_18;
          }
        }
        else
        {
          v42 = *(_DWORD *)(a1 + 84);
          v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v12 + 8))(v12, v42, &v43);
          v5 = v15;
          if ( v15 )
          {
            v16 = *(_DWORD *)(v15 + 4);
            LODWORD(Src) = v16;
            if ( v16 >= 0x80000000 )
            {
              v16 += 0x80000000;
              LODWORD(Src) = v16;
            }
            v14 = v16 + 80;
            LODWORD(Size) = v16;
            if ( v16 + 80 < 0x50 )
            {
              v28 = -1073741675;
LABEL_41:
              if ( v5 )
                (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 16LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                  &v43);
              if ( v4 )
                ExFreePoolWithTag(v4, 0);
              goto LABEL_45;
            }
            v13 = v16 + 80;
            goto LABEL_15;
          }
        }
LABEL_69:
        v28 = -1073741670;
LABEL_45:
        ExFreePoolWithTag(v9, 0x624E4D43u);
        return (unsigned int)v28;
      }
      switch ( v11 )
      {
        case 9:
          v13 = 64;
          if ( !(unsigned __int8)CmpFindSecurityCellCacheIndex(v12, *(unsigned int *)(a1 + 80), &v51) )
            goto LABEL_69;
          v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 3056) + 16LL * v51 + 8) + 24LL);
          break;
        case 7:
        case 8:
          v2 = 56;
          goto LABEL_20;
        case 11:
          v13 = 64;
          v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + 8LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL),
                  *(unsigned int *)(*(_QWORD *)(a1 + 80) + 40LL),
                  &v44);
          v45 = v39;
          if ( !v39 )
            goto LABEL_69;
          if ( (*(_BYTE *)(v39 + 2) & 0x20) != 0 )
            v32 = (unsigned __int16)(2 * *(_WORD *)(v39 + 72));
          else
            v32 = *(unsigned __int16 *)(v39 + 72);
          pcbInfoBuffer = v32;
          break;
        default:
          goto LABEL_20;
      }
    }
    v2 = v32 + 64;
LABEL_18:
    if ( v2 < v13 )
    {
      v28 = -1073741675;
      goto LABEL_39;
    }
    v8 = pcbInfoBuffer;
LABEL_20:
    v17 = *(unsigned __int16 *)v9;
    v18 = v17 + v2;
    if ( v18 < v17 )
    {
      v28 = -1073741562;
      goto LABEL_39;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v18, 0x20204D43u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_76:
      v28 = -1073741670;
LABEL_39:
      if ( v45 )
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + 16LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL),
          &v44);
      goto LABEL_41;
    }
    PoolWithTag[1] = v18;
    PoolWithTag[2] = 1;
    *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 80LL);
    *((_WORD *)PoolWithTag + 16) = *(_WORD *)v9;
    *((_WORD *)PoolWithTag + 17) = *((_WORD *)v9 + 1);
    v20 = *(_DWORD *)(a1 + 68);
    if ( !v20 || v20 == 2 )
    {
      PoolWithTag[3] = (v20 != 0) + 1;
      PoolWithTag[12] = *(_DWORD *)(a1 + 72);
      *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 16;
      memmove(PoolWithTag + 16, v9[1], *(unsigned __int16 *)v9);
      v33 = (char *)v4 + *(unsigned __int16 *)v9 + 64;
      *((_QWORD *)v4 + 7) = v33;
      v34 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL);
      v35 = *(unsigned int *)(v34 + 24);
    }
    else
    {
      if ( v20 <= 3 )
        goto LABEL_34;
      if ( v20 <= 6 )
      {
        v51 = -1;
        if ( v20 == 4 )
          PoolWithTag[3] = 3;
        else
          PoolWithTag[3] = (v20 != 5) + 4;
        v21 = *(_DWORD *)(v5 + 12);
        *((_QWORD *)v4 + 5) = v4 + 20;
        v4[16] = v21;
        memmove(v4 + 20, v9[1], *(unsigned __int16 *)v9);
        v22 = (char *)v4 + *(unsigned __int16 *)v9 + 80;
        *((_QWORD *)v4 + 7) = v22;
        if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
          CmpCopyCompressedName(v22, v6, v5 + 20, *(unsigned __int16 *)(v5 + 2));
        else
          memmove(v22, (const void *)(v5 + 20), v6);
        *((_WORD *)v4 + 25) = v6;
        *((_WORD *)v4 + 24) = v6;
        if ( *(_DWORD *)(a1 + 68) != 6 )
        {
          v4[17] = (_DWORD)Src;
          if ( (unsigned __int8)CmpGetValueData(
                                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                                  v42,
                                  v5,
                                  (unsigned int)&Size,
                                  (__int64)&Src,
                                  (__int64)&pcbInfoBuffer,
                                  (__int64)&v51) )
          {
            v23 = (unsigned int)Size;
            v24 = Src;
            v25 = &v22[v6];
            *((_QWORD *)v4 + 9) = v25;
            memmove(v25, v24, v23);
            if ( (_BYTE)pcbInfoBuffer == 1 )
              ExFreePoolWithTag(Src, 0);
            else
              (*(void (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 16LL))(
                *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                &v51);
            goto LABEL_34;
          }
          goto LABEL_76;
        }
        v4[17] = 0;
        *((_QWORD *)v4 + 9) = 0LL;
LABEL_34:
        *v4 = HvBufferCheckSum(v4, (unsigned int)v4[1]);
        v26 = ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 96LL));
        v27 = *(_QWORD *)v47;
        v28 = CmpTransWriteLog(v47[0], (int)v4, v4[1], v26 != 0 ? 2 : 0, &plsnFinish);
        if ( v28 >= 0 && ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 96LL)) )
          *(CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 96LL) = plsnFinish;
        pcbInfoBuffer = 120;
        v29 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
        v30 = v29;
        if ( v29 )
        {
          ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(v27 + 88), v29, &pcbInfoBuffer);
          ExFreePoolWithTag(v30, 0);
        }
        goto LABEL_39;
      }
      if ( v20 != 9 )
      {
        switch ( v20 )
        {
          case 7:
            PoolWithTag[3] = 6;
            *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 14;
            memmove(PoolWithTag + 14, v9[1], *(unsigned __int16 *)v9);
            v4[12] = *(_DWORD *)(a1 + 80);
            break;
          case 8:
            PoolWithTag[3] = 7;
            *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 14;
            memmove(PoolWithTag + 14, v9[1], *(unsigned __int16 *)v9);
            *((_QWORD *)v4 + 6) = *(_QWORD *)(a1 + 80);
            break;
          case 11:
            PoolWithTag[3] = 9;
            *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 16;
            memmove(PoolWithTag + 16, v9[1], *(unsigned __int16 *)v9);
            v40 = v45;
            v41 = (char *)v4 + *(unsigned __int16 *)v9 + 64;
            *((_QWORD *)v4 + 7) = v41;
            if ( (*(_BYTE *)(v40 + 2) & 0x20) != 0 )
              CmpCopyCompressedName(v41, v8, v40 + 76, *(unsigned __int16 *)(v40 + 72));
            else
              memmove(v41, (const void *)(v40 + 76), v8);
            *((_WORD *)v4 + 25) = v8;
            *((_WORD *)v4 + 24) = v8;
            break;
        }
        goto LABEL_34;
      }
      PoolWithTag[3] = 8;
      *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 16;
      memmove(PoolWithTag + 16, v9[1], *(unsigned __int16 *)v9);
      v36 = v46;
      v37 = 2LL * v51;
      v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 3056) + 16LL * v51 + 8) + 24LL);
      v4[12] = v38;
      v35 = v38;
      v33 = (char *)v4 + *(unsigned __int16 *)v9 + 64;
      *((_QWORD *)v4 + 7) = v33;
      v34 = *(_QWORD *)(*(_QWORD *)(v36 + 3056) + 8 * v37 + 8);
    }
    memmove(v33, (const void *)(v34 + 32), v35);
    goto LABEL_34;
  }
  return 3221225626LL;
}
