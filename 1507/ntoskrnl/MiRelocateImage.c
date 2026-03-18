/*
 * XREFs of MiRelocateImage @ 0x14046E680
 * Callers:
 *     MiCreateNewSection @ 0x1404702B8 (MiCreateNewSection.c)
 *     MiGetSystemAddressForImage @ 0x140576AF0 (MiGetSystemAddressForImage.c)
 * Callees:
 *     PsSetSystemPagePriorityThread @ 0x14002D2DC (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x14002D354 (PsRevertToUserPagePriorityThread.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14002D3A4 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14002D414 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiOffsetToProtos @ 0x140053430 (MiOffsetToProtos.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiSetDeleteOnClose @ 0x1402122AC (MiSetDeleteOnClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiLogRelocationFaults @ 0x140442C40 (MiLogRelocationFaults.c)
 *     MiParseImageCfgBits @ 0x140442CC0 (MiParseImageCfgBits.c)
 *     MiCompressRelocations @ 0x14046B180 (MiCompressRelocations.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x14046B6E4 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x14046B754 (MiSelectImageBase.c)
 *     MiScanRelocationPage @ 0x14046EDB0 (MiScanRelocationPage.c)
 *     MiMapImageInSystemSpace @ 0x14051BD60 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14051BE94 (MiUnmapImageInSystemSpace.c)
 *     MiFreeRelocations @ 0x1405804F8 (MiFreeRelocations.c)
 *     SeSetImageBaseAddress @ 0x1406D07CC (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiRelocateImage(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v7; // ebx
  __int64 v8; // r10
  __int16 v9; // ax
  unsigned int v10; // esi
  __int64 v11; // rdx
  size_t v12; // r13
  int v13; // r8d
  char *v14; // rsi
  __int16 v15; // ax
  unsigned int v16; // eax
  unsigned int v17; // r9d
  __int64 v18; // r15
  SIZE_T v19; // rdi
  unsigned int v20; // ebx
  char *PoolWithTag; // rax
  char *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  int updated; // edi
  __int64 v26; // rcx
  PVOID v27; // r14
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 *v30; // r9
  char *v31; // r14
  char *v32; // r12
  __int64 v33; // rdi
  __int64 v34; // r15
  unsigned int v35; // r13d
  unsigned int v36; // r14d
  unsigned int v37; // r12d
  __int64 v38; // rsi
  __int64 v39; // rsi
  unsigned __int64 v40; // rdi
  int v41; // r9d
  unsigned int v42; // r8d
  int v43; // eax
  int v44; // edi
  unsigned int v45; // r15d
  __int64 v46; // r8
  __int64 v47; // r13
  char **v48; // rdx
  __int64 *v49; // rcx
  char *v50; // rdi
  _QWORD *v51; // r15
  unsigned int SessionId; // eax
  unsigned int v53; // r12d
  unsigned int v55; // r8d
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  unsigned int v58; // edx
  _WORD *v59; // rcx
  __int64 v60; // r8
  int v61; // [rsp+20h] [rbp-138h]
  unsigned int v62; // [rsp+30h] [rbp-128h]
  unsigned int v63; // [rsp+34h] [rbp-124h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-120h]
  char *P; // [rsp+40h] [rbp-118h]
  __int64 v66; // [rsp+48h] [rbp-110h]
  unsigned int v68; // [rsp+58h] [rbp-100h] BYREF
  unsigned int v69; // [rsp+5Ch] [rbp-FCh]
  PVOID v70; // [rsp+60h] [rbp-F8h] BYREF
  int v71; // [rsp+68h] [rbp-F0h]
  char *v72; // [rsp+70h] [rbp-E8h] BYREF
  char **v73; // [rsp+78h] [rbp-E0h]
  unsigned int v74; // [rsp+80h] [rbp-D8h]
  __int64 v75; // [rsp+88h] [rbp-D0h]
  __int64 *v76; // [rsp+90h] [rbp-C8h]
  _QWORD *v77; // [rsp+98h] [rbp-C0h]
  _QWORD *v78; // [rsp+A0h] [rbp-B8h]
  __int64 v79; // [rsp+A8h] [rbp-B0h]
  unsigned __int64 v80; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v81; // [rsp+C0h] [rbp-98h] BYREF
  int v82; // [rsp+C8h] [rbp-90h]

  v76 = (__int64 *)a1;
  v7 = 2;
  v8 = *(_QWORD *)(a1 + 56);
  v78 = (_QWORD *)v8;
  v9 = *(_WORD *)(v8 + 48);
  if ( v9 != -31132 && v9 != 332 )
    goto LABEL_80;
  v7 = 34;
  if ( (*(_BYTE *)(v8 + 44) & 1) != 0 )
    return 0LL;
  v10 = 0;
  v63 = 0;
  if ( (*(_WORD *)(v8 + 46) & 0x1000) != 0 )
  {
LABEL_80:
    v10 = -1073741701;
    v63 = -1073741701;
  }
  v11 = *(unsigned int *)(a2 + 88);
  v68 = v11;
  v12 = *(unsigned int *)(a2 + 92);
  v71 = v12;
  v69 = v12;
  if ( (_DWORD)v11 )
  {
    if ( (_DWORD)v12 )
      goto LABEL_6;
    return v10;
  }
  if ( (_DWORD)v12 )
    return v10;
  v7 &= ~2u;
LABEL_6:
  if ( (*(_BYTE *)(a1 + 15) & 1) != 0 )
    return 0LL;
  v66 = *(_QWORD *)a1;
  v79 = v66;
  v73 = *(char ***)(v66 + 96);
  v13 = 8;
  if ( (*(_BYTE *)(a1 + 14) & 0x40) != 0 )
    v13 = 4;
  if ( (a3 & 0xFFF) > 4096 - v13 || ((v13 - 1) & a3) != 0 )
    return v10;
  if ( v13 == 4 )
    a3 |= 1u;
  v14 = *(char **)(a1 + 32);
  if ( (v7 & 0x20) != 0 && !a4 )
  {
    v15 = *(_WORD *)(v8 + 46);
    if ( (v15 & 0x40) == 0 && MmRegistryState != -1 && (v15 & 0x1000) == 0 )
      return 0LL;
  }
  v16 = *(_DWORD *)(a1 + 8);
  v17 = v16;
  if ( ((v7 >> 1) & 1) == 0 )
    v17 = (a3 >> 12) + 1;
  v74 = v16 << 12;
  if ( (int)v11 + (int)v12 > v16 << 12
    || ((v7 >> 1) & 1) != 0 && ((int)v11 + (int)v12 <= (unsigned int)v11 || &v14[v11] <= v14 || &v14[v12 + v11] <= v14) )
  {
    return v63;
  }
  v18 = v17;
  v19 = v12 + 72 + 8LL * v17;
  v72 = 0LL;
  v20 = v7 & 0xFFFFFFF6;
  v75 = 0LL;
  v70 = 0LL;
  v82 = 0;
  v62 = 0;
  CurrentThread = KeGetCurrentThread();
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v19, 0x65526D4Du);
  P = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v22 = PoolWithTag;
  do
    v22 += 4096;
  while ( v22 < &PoolWithTag[v19] );
  *((_QWORD *)PoolWithTag + 5) = 0LL;
  PoolWithTag[60] = 0;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  *((_QWORD *)PoolWithTag + 6) = v18;
  *((_QWORD *)PoolWithTag + 8) = 0LL;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  *((_QWORD *)PoolWithTag + 3) = 0LL;
  if ( (v20 & 2) == 0 )
  {
    v27 = v70;
    v26 = (__int64)PoolWithTag;
    goto LABEL_30;
  }
  if ( (int)MiMapImageInSystemSpace(v66, 3LL, &v81) < 0 )
  {
    ExFreePoolWithTag(P, 0);
    MiSetDeleteOnClose(v66, 0);
    return 0LL;
  }
  v24 = v81;
  v75 = v81;
  v62 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1, v23);
  v20 |= 1u;
  updated = MiParseImageCfgBits(v66, v24, v82 << 12, (__int64 *)a2, v61, &v70);
  v26 = (__int64)P;
  if ( updated < 0 )
  {
    ExFreePoolWithTag(P, 0);
    goto LABEL_125;
  }
  v27 = v70;
  *((_QWORD *)P + 8) = v70;
LABEL_30:
  updated = MiSelectImageBase(v26, v76, a4, a5, &v72);
  if ( updated < 0 )
  {
    if ( v27 )
      ExFreePoolWithTag(v27, 0);
    ExFreePoolWithTag(P, 0);
    if ( !a4 )
      updated = v63;
  }
  else
  {
    updated = MiUpdateCfgSystemWideBitmap(v66);
    if ( updated >= 0 )
    {
      v31 = P;
      *((_DWORD *)P + 14) = a3;
      *((_QWORD *)P + 5) = v72 - v14;
      if ( v72 != v14 || a5 )
      {
        v32 = P + 72;
        v77 = P + 72;
        *(_QWORD *)P = P + 72;
        v33 = 8 * v18;
        memset(P + 72, 0, 8 * v18);
        v34 = (__int64)&P[8 * v18 + 72];
        *((_QWORD *)P + 4) = &P[v33 + 72];
        v20 |= 4u;
        LODWORD(v70) = v20;
        if ( (v20 & 2) != 0 )
        {
          memmove(&v32[v33], (const void *)(v75 + v68), v12);
          v35 = 0;
          v36 = v69;
          v20 &= ~0x10u;
          v37 = 0;
          if ( v69 )
          {
            v38 = v66;
            while ( v36 >= 0xA )
            {
              v39 = *(unsigned int *)(v34 + 4);
              if ( (unsigned int)v39 > v36 || (v39 & 1) != 0 || (unsigned int)v39 < 8 )
                goto LABEL_113;
              v40 = *(unsigned int *)v34;
              if ( (v40 & 0xFFF) != 0 )
                v20 &= ~4u;
              if ( (int)v40 + 4096 < (unsigned int)v40 || (int)v40 + 4096 > v74 || (unsigned int)v40 < v37 )
              {
LABEL_113:
                updated = v63;
                goto LABEL_122;
              }
              if ( (_DWORD)v39 == 8 )
              {
                v36 -= 8;
                v34 += 8LL;
                v20 &= ~4u;
                v38 = v66;
              }
              else
              {
                if ( (BYTE2(MiFlags) & 3) == 3
                  && ((unsigned __int64)v73[1] & 0xFFFFFFFFFFFFFFF8uLL) > 8
                  && (*(_BYTE *)(MiOffsetToProtos((_DWORD *)v66, *(unsigned int *)v34, &v80) + 32) & 4) != 0 )
                {
                  updated = -1073741701;
LABEL_122:
                  v31 = P;
                  goto LABEL_123;
                }
                if ( (unsigned int)v40 >> 12 > v35 )
                  v35 = (unsigned int)v40 >> 12;
                v77[v40 >> 12] |= v34;
                v37 = (v40 & 0xFFFFF000) + 4096;
                v41 = v34 + 8;
                v34 += v39;
                v36 -= v39;
                v42 = (unsigned int)(v39 - 8) >> 1;
                v38 = v66;
                v43 = MiScanRelocationPage(v75, v40, v42, v41, v66, (__int64)P);
                updated = v43;
                if ( v43 < 0 )
                {
                  v31 = P;
                  v47 = (__int64)CurrentThread;
                  v45 = v62;
                  if ( v43 == -1073741207 )
                  {
                    updated = 0;
                  }
                  else if ( v43 == -1073741701 )
                  {
                    updated = v63;
                  }
                  goto LABEL_67;
                }
                v20 |= 0x10u;
              }
              if ( !v36 )
                goto LABEL_52;
            }
            if ( v36 == 8 )
            {
              v44 = v69 - 8;
              goto LABEL_53;
            }
            updated = v63;
            v31 = P;
            goto LABEL_124;
          }
LABEL_52:
          v44 = v71;
LABEL_53:
          MiUnmapImageInSystemSpace(&v81, v28, v29, v30);
          v45 = v62;
          PsRevertToUserPagePriorityThread((__int64)CurrentThread, v62, v46);
          LOBYTE(v20) = v20 & 0xFE;
          v31 = P;
          v30 = (__int64 *)*((_QWORD *)P + 2);
          v32 = P + 72;
          if ( v30 )
          {
            while ( 1 )
            {
              v55 = *((_DWORD *)v30 + 3);
              v56 = *(_QWORD *)&v32[8 * ((unsigned __int64)v55 >> 12)];
              if ( v55 >> 12 > v35 )
                v35 = *((_DWORD *)v30 + 3) >> 12;
              if ( v56 > 1 )
              {
                v57 = v56 & 0xFFFFFFFFFFFFFFFEuLL;
                v58 = *(_DWORD *)(v57 + 4) - 8;
                v29 = v55 & 0xFFF;
                v59 = (_WORD *)(v57 + 8);
                v28 = v58 >> 1;
                if ( (_DWORD)v28 )
                  break;
              }
LABEL_88:
              v30 = (__int64 *)*v30;
              if ( !v30 )
                goto LABEL_54;
            }
            while ( (*v59 & 0xF000) == 0 || (unsigned __int16)(*v59 & 0xFFF) >= (unsigned __int16)v29 )
            {
              ++v59;
              v28 = (unsigned int)(v28 - 1);
              if ( !(_DWORD)v28 )
                goto LABEL_88;
            }
            updated = v63;
            v38 = v66;
            v47 = (__int64)CurrentThread;
            goto LABEL_67;
          }
LABEL_54:
          v38 = v66;
          MiLogRelocationFaults(v66, &v68, (__int64)P);
          *((_QWORD *)P + 6) = v35 + 1;
          if ( (v20 & 0x14) == 0x14 )
          {
            v31 = MiCompressRelocations(P, v44);
            v32 = v31 + 72;
          }
        }
        else
        {
          v38 = v66;
        }
        *(_QWORD *)&v32[8 * ((unsigned __int64)*((unsigned int *)v31 + 14) >> 12)] |= 1uLL;
        LOBYTE(v20) = v20 | 8;
        v47 = (__int64)CurrentThread;
        MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, (__int64)v31);
        v48 = v73;
        *v73 = v31;
        v49 = v76;
        v50 = v72;
        v76[4] = (__int64)v72;
        v51 = v78;
        *v78 += *((_QWORD *)v31 + 5);
        *(_DWORD *)(v38 + 92) |= 0x80000000;
        if ( (*((_BYTE *)v49 + 14) & 1) != 0 )
        {
          MiSetDeleteOnClose(v38, 0);
          v48 = v73;
        }
        if ( (MiFlags & 0x100000) != 0
          && (*(_DWORD *)(v38 + 92) & 0xC000000) != 0
          && (updated = SeSetImageBaseAddress((unsigned __int64)v48[1] & 0xFFFFFFFFFFFFFFF8uLL, v50), updated < 0) )
        {
          v53 = a5;
        }
        else
        {
          if ( a4 )
            SessionId = -1;
          else
            SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          v53 = a5;
          if ( a5 )
            updated = 0;
          else
            updated = MiValidateImagePages((__int64 *)v38, 0, 2, SessionId);
        }
        MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, (__int64)v31);
        if ( updated >= 0 && !v53 )
          *((_BYTE *)v51 + 51) |= 4u;
        goto LABEL_66;
      }
LABEL_123:
      v38 = v66;
LABEL_124:
      v47 = (__int64)CurrentThread;
LABEL_66:
      v45 = v62;
LABEL_67:
      if ( (v20 & 8) == 0 )
        MiFreeRelocations(v38, v31);
      goto LABEL_69;
    }
    MiFreeRelocations(v66, P);
  }
LABEL_125:
  v45 = v62;
  v47 = (__int64)CurrentThread;
LABEL_69:
  if ( (v20 & 1) != 0 )
  {
    MiUnmapImageInSystemSpace(&v81, v28, v29, v30);
    PsRevertToUserPagePriorityThread(v47, v45, v60);
  }
  return (unsigned int)updated;
}
