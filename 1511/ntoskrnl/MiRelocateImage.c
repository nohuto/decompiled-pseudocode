/*
 * XREFs of MiRelocateImage @ 0x1403C5E30
 * Callers:
 *     MiCreateNewSection @ 0x1403C8128 (MiCreateNewSection.c)
 *     MiGetSystemAddressForImage @ 0x1403CC454 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiLegacyImageArchitecture @ 0x140006E10 (MiLegacyImageArchitecture.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x140006E30 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x140006E80 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     PsRevertToUserPagePriorityThread @ 0x140007300 (PsRevertToUserPagePriorityThread.c)
 *     PsSetSystemPagePriorityThread @ 0x140007330 (PsSetSystemPagePriorityThread.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiOffsetToProtos @ 0x1400A36A0 (MiOffsetToProtos.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiSetDeleteOnClose @ 0x1401D18A4 (MiSetDeleteOnClose.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiCompressRelocations @ 0x1403C5A60 (MiCompressRelocations.c)
 *     MiScanRelocationPage @ 0x1403C6560 (MiScanRelocationPage.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x1403C66C8 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x1403C6738 (MiSelectImageBase.c)
 *     MiLogRelocationFaults @ 0x1403C6C00 (MiLogRelocationFaults.c)
 *     MiParseImageCfgBits @ 0x1403C6C80 (MiParseImageCfgBits.c)
 *     MiUnmapImageInSystemSpace @ 0x1403C72A0 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x1403C72D4 (MiMapImageInSystemSpace.c)
 *     MiFreeRelocations @ 0x1404E9FCC (MiFreeRelocations.c)
 *     SeSetImageBaseAddress @ 0x14064D394 (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiRelocateImage(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r11
  unsigned int v12; // esi
  __int64 v13; // rdx
  size_t v14; // r13
  int v15; // r8d
  size_t v16; // rsi
  __int16 v17; // ax
  unsigned int v18; // eax
  unsigned int v19; // r9d
  __int64 v20; // r15
  SIZE_T v21; // rdi
  unsigned int v22; // ebx
  char *PoolWithTag; // rax
  char *v24; // rcx
  int v25; // edi
  int updated; // edi
  int v27; // ecx
  PVOID v28; // r14
  char *v29; // r14
  char *v30; // r12
  __int64 v31; // rdi
  __int64 v32; // r15
  unsigned int v33; // r13d
  unsigned int v34; // r14d
  unsigned int v35; // r12d
  __int64 v36; // rsi
  unsigned __int64 v37; // rdi
  __int64 v38; // rcx
  int v39; // r9d
  int v40; // eax
  int v41; // edi
  int v42; // r15d
  __int64 *v43; // r9
  __int64 v44; // rsi
  __int64 v45; // r13
  char **v46; // r12
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // r15
  unsigned int SessionId; // eax
  int v51; // r12d
  unsigned int v53; // r8d
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rcx
  unsigned int v56; // edx
  unsigned __int16 v57; // r8
  _WORD *v58; // rcx
  unsigned int v59; // edx
  int v60; // [rsp+30h] [rbp-128h]
  unsigned int v61; // [rsp+34h] [rbp-124h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-120h]
  char *P; // [rsp+40h] [rbp-118h]
  __int64 v64; // [rsp+48h] [rbp-110h]
  unsigned int v66; // [rsp+58h] [rbp-100h] BYREF
  unsigned int v67; // [rsp+5Ch] [rbp-FCh]
  int v68; // [rsp+60h] [rbp-F8h]
  PVOID v69; // [rsp+68h] [rbp-F0h]
  __int64 v70; // [rsp+70h] [rbp-E8h] BYREF
  unsigned int v71; // [rsp+78h] [rbp-E0h]
  __int64 v72; // [rsp+80h] [rbp-D8h]
  __int64 v73; // [rsp+88h] [rbp-D0h]
  char **v74; // [rsp+90h] [rbp-C8h]
  __int64 v75; // [rsp+98h] [rbp-C0h]
  __int64 v76; // [rsp+A0h] [rbp-B8h]
  _QWORD *v77; // [rsp+A8h] [rbp-B0h]
  unsigned __int64 v78; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v79; // [rsp+C0h] [rbp-98h] BYREF
  int v80; // [rsp+C8h] [rbp-90h]

  v73 = a1;
  v9 = 2;
  v75 = *(_QWORD *)(a1 + 56);
  if ( !MiLegacyImageArchitecture(*(_WORD *)(v75 + 48)) )
    goto LABEL_77;
  v9 = 34;
  if ( (*(_BYTE *)(v11 + 44) & 1) != 0 )
    return 0LL;
  v12 = 0;
  v61 = 0;
  if ( (*(_WORD *)(v11 + 46) & 0x1000) != 0 )
  {
LABEL_77:
    v12 = -1073741701;
    v61 = -1073741701;
  }
  v13 = *(unsigned int *)(v10 + 88);
  v66 = v13;
  v14 = *(unsigned int *)(a2 + 92);
  v68 = v14;
  v67 = v14;
  if ( (_DWORD)v13 )
  {
    if ( (_DWORD)v14 )
      goto LABEL_6;
    return v12;
  }
  if ( (_DWORD)v14 )
    return v12;
  v9 &= ~2u;
LABEL_6:
  if ( (*(_BYTE *)(a1 + 15) & 1) != 0 )
    return 0LL;
  v64 = *(_QWORD *)a1;
  v76 = v64;
  v74 = *(char ***)(v64 + 96);
  v15 = 8;
  if ( (*(_BYTE *)(a1 + 14) & 0x40) != 0 )
    v15 = 4;
  if ( (a3 & 0xFFF) > 4096 - v15 || ((v15 - 1) & a3) != 0 )
    return v12;
  if ( v15 == 4 )
    a3 |= 1u;
  v16 = *(_QWORD *)(a1 + 32);
  if ( (v9 & 0x20) != 0 && !a4 )
  {
    v17 = *(_WORD *)(v11 + 46);
    if ( (v17 & 0x40) == 0 && MmRegistryState != -1 && (v17 & 0x1000) == 0 )
      return 0LL;
  }
  v18 = *(_DWORD *)(a1 + 8);
  v19 = v18;
  if ( ((v9 >> 1) & 1) == 0 )
    v19 = (a3 >> 12) + 1;
  v71 = v18 << 12;
  if ( (int)v13 + (int)v14 > v18 << 12
    || ((v9 >> 1) & 1) != 0 && ((int)v13 + (int)v14 <= (unsigned int)v13 || v16 + v13 <= v16 || v13 + v16 + v14 <= v16) )
  {
    return v61;
  }
  v20 = v19;
  v21 = v14 + 72 + 8LL * v19;
  v70 = 0LL;
  v22 = v9 & 0xFFFFFFF6;
  v72 = 0LL;
  v69 = 0LL;
  v80 = 0;
  v60 = 0;
  CurrentThread = KeGetCurrentThread();
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v21, 0x65526D4Du);
  P = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v24 = PoolWithTag;
  do
    v24 += 4096;
  while ( v24 < &PoolWithTag[v21] );
  *((_QWORD *)PoolWithTag + 5) = 0LL;
  PoolWithTag[60] = 0;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  *((_QWORD *)PoolWithTag + 6) = v20;
  *((_QWORD *)PoolWithTag + 8) = 0LL;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  *((_QWORD *)PoolWithTag + 3) = 0LL;
  if ( (v22 & 2) == 0 )
  {
    v28 = v69;
    v27 = (int)PoolWithTag;
    goto LABEL_30;
  }
  if ( (int)MiMapImageInSystemSpace(v64, 3LL, &v79) < 0 )
  {
    ExFreePoolWithTag(P, 0);
    MiSetDeleteOnClose(v64, 0);
    return 0LL;
  }
  v25 = v79;
  v72 = v79;
  v60 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
  v22 |= 1u;
  updated = MiParseImageCfgBits(v64, v25, v80 << 12, a2);
  v27 = (int)P;
  if ( updated < 0 )
  {
    ExFreePoolWithTag(P, 0);
    goto LABEL_122;
  }
  v28 = v69;
  *((_QWORD *)P + 8) = v69;
LABEL_30:
  updated = MiSelectImageBase(v27, v73, a4, a5, (__int64)&v70);
  if ( updated < 0 )
  {
    if ( v28 )
      ExFreePoolWithTag(v28, 0);
    ExFreePoolWithTag(P, 0);
    if ( !a4 )
      updated = v61;
  }
  else
  {
    updated = MiUpdateCfgSystemWideBitmap(v64, v70, v28);
    if ( updated >= 0 )
    {
      v29 = P;
      *((_DWORD *)P + 14) = a3;
      *((_QWORD *)P + 5) = v70 - v16;
      if ( v70 == v16 && !a5 )
      {
LABEL_121:
        v44 = v64;
        v45 = (__int64)CurrentThread;
LABEL_65:
        v42 = v60;
        goto LABEL_66;
      }
      v30 = P + 72;
      v77 = P + 72;
      *(_QWORD *)P = P + 72;
      v31 = 8 * v20;
      memset(P + 72, 0, 8 * v20);
      v32 = (__int64)&P[8 * v20 + 72];
      *((_QWORD *)P + 4) = &P[v31 + 72];
      v22 |= 4u;
      LODWORD(v69) = v22;
      if ( (v22 & 2) == 0 )
      {
        v44 = v64;
LABEL_55:
        *(_QWORD *)&v30[8 * ((unsigned __int64)*((unsigned int *)v29 + 14) >> 12)] |= 1uLL;
        LOBYTE(v22) = v22 | 8;
        v45 = (__int64)CurrentThread;
        MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, (__int64)v29);
        v46 = v74;
        *v74 = v29;
        v47 = v73;
        v48 = v70;
        *(_QWORD *)(v73 + 32) = v70;
        v49 = v75;
        *(_QWORD *)v75 += *((_QWORD *)v29 + 5);
        *(_DWORD *)(v44 + 92) |= 0x80000000;
        if ( (*(_BYTE *)(v47 + 14) & 1) != 0 )
          MiSetDeleteOnClose(v44, 0);
        if ( (MiFlags & 0x100000) != 0
          && (*(_DWORD *)(v44 + 92) & 0xC000000) != 0
          && (updated = SeSetImageBaseAddress((unsigned __int64)v46[1] & 0xFFFFFFFFFFFFFFF8uLL, v48), updated < 0) )
        {
          v51 = a5;
        }
        else
        {
          if ( a4 )
            SessionId = -1;
          else
            SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          v51 = a5;
          if ( a5 )
            updated = 0;
          else
            updated = MiValidateImagePages((__int64 *)v44, 0, 2, SessionId);
        }
        MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, (__int64)v29);
        if ( updated >= 0 && !v51 )
          *(_BYTE *)(v49 + 51) |= 4u;
        goto LABEL_65;
      }
      memmove(&v30[v31], (const void *)(v72 + v66), v14);
      v33 = 0;
      v34 = v67;
      v22 &= ~0x10u;
      v35 = 0;
      if ( v67 )
      {
        while ( v34 >= 0xA )
        {
          v36 = *(unsigned int *)(v32 + 4);
          if ( (unsigned int)v36 > v34 || (v36 & 1) != 0 || (unsigned int)v36 < 8 )
            goto LABEL_91;
          v37 = *(unsigned int *)v32;
          if ( (v37 & 0xFFF) != 0 )
            v22 &= ~4u;
          if ( (int)v37 + 4096 < (unsigned int)v37 || (int)v37 + 4096 > v71 || (unsigned int)v37 < v35 )
            goto LABEL_91;
          if ( (_DWORD)v36 == 8 )
          {
            v34 -= 8;
            v32 += 8LL;
            v22 &= ~4u;
          }
          else
          {
            v38 = v64;
            if ( (MiFlags & 0x40000) != 0 && (*(_DWORD *)(v64 + 92) & 0xC000000) != 0 )
            {
              if ( (*(_BYTE *)(MiOffsetToProtos((_DWORD *)v64, *(unsigned int *)v32, &v78) + 32) & 4) != 0 )
              {
                updated = -1073741701;
                goto LABEL_120;
              }
              v38 = v64;
            }
            if ( (unsigned int)v37 >> 12 > v33 )
              v33 = (unsigned int)v37 >> 12;
            v77[v37 >> 12] |= v32;
            v35 = (v37 & 0xFFFFF000) + 4096;
            v39 = v32 + 8;
            v32 += v36;
            v34 -= v36;
            v40 = MiScanRelocationPage(v72, v37, (unsigned int)(v36 - 8) >> 1, v39, v38, (__int64)P);
            updated = v40;
            if ( v40 < 0 )
            {
              v29 = P;
              v44 = v64;
              v45 = (__int64)CurrentThread;
              v42 = v60;
              if ( v40 == -1073741207 )
              {
                updated = 0;
              }
              else if ( v40 == -1073741701 )
              {
                updated = v61;
              }
              goto LABEL_66;
            }
            v22 |= 0x10u;
          }
          if ( !v34 )
            goto LABEL_51;
        }
        if ( v34 == 8 )
        {
          v41 = v67 - 8;
          goto LABEL_52;
        }
LABEL_91:
        updated = v61;
LABEL_120:
        v29 = P;
        goto LABEL_121;
      }
LABEL_51:
      v41 = v68;
LABEL_52:
      MiUnmapImageInSystemSpace(&v79);
      v42 = v60;
      PsRevertToUserPagePriorityThread((__int64)CurrentThread, v60);
      LOBYTE(v22) = v22 & 0xFE;
      v29 = P;
      v43 = (__int64 *)*((_QWORD *)P + 2);
      v30 = P + 72;
      if ( !v43 )
      {
LABEL_53:
        v44 = v64;
        MiLogRelocationFaults(v64, &v66, P);
        *((_QWORD *)P + 6) = v33 + 1;
        if ( (v22 & 0x14) == 0x14 )
        {
          v29 = MiCompressRelocations(P, v41);
          v30 = v29 + 72;
        }
        goto LABEL_55;
      }
      while ( 1 )
      {
        v53 = *((_DWORD *)v43 + 3);
        v54 = *(_QWORD *)&v30[8 * ((unsigned __int64)v53 >> 12)];
        if ( v53 >> 12 > v33 )
          v33 = *((_DWORD *)v43 + 3) >> 12;
        if ( v54 > 1 )
        {
          v55 = v54 & 0xFFFFFFFFFFFFFFFEuLL;
          v56 = *(_DWORD *)(v55 + 4) - 8;
          v57 = v53 & 0xFFF;
          v58 = (_WORD *)(v55 + 8);
          v59 = v56 >> 1;
          if ( v59 )
            break;
        }
LABEL_85:
        v43 = (__int64 *)*v43;
        if ( !v43 )
          goto LABEL_53;
      }
      while ( (*v58 & 0xF000) == 0 || (unsigned __int16)(*v58 & 0xFFF) >= v57 )
      {
        ++v58;
        if ( !--v59 )
          goto LABEL_85;
      }
      updated = v61;
      v44 = v64;
      v45 = (__int64)CurrentThread;
LABEL_66:
      if ( (v22 & 8) == 0 )
        MiFreeRelocations(v44, v29);
      goto LABEL_68;
    }
    MiFreeRelocations(v64, P);
  }
LABEL_122:
  v42 = v60;
  v45 = (__int64)CurrentThread;
LABEL_68:
  if ( (v22 & 1) != 0 )
  {
    MiUnmapImageInSystemSpace(&v79);
    PsRevertToUserPagePriorityThread(v45, v42);
  }
  return (unsigned int)updated;
}
