/*
 * XREFs of CmQueryValueKey @ 0x14043E2F0
 * Callers:
 *     NtQueryValueKey @ 0x14043A750 (NtQueryValueKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     PsBoostThreadIo @ 0x14002CFB0 (PsBoostThreadIo.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1400B0B88 (CmpAllocateTransientPoolWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpLockTableAdd @ 0x1401B50E8 (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401B5218 (CmpLockTableRemove.c)
 *     CmpLockKcbStackExclusive @ 0x1403FAE14 (CmpLockKcbStackExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1403FBA4C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmEqualTrans @ 0x1403FC890 (CmEqualTrans.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x140401954 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpFindNameInListWithStatus @ 0x1404019DC (CmpFindNameInListWithStatus.c)
 *     CmListGetNextElement @ 0x140401CEC (CmListGetNextElement.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpLockKcbStackShared @ 0x140431E30 (CmpLockKcbStackShared.c)
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
 *     CmpFreeKeyControlBlock @ 0x140436470 (CmpFreeKeyControlBlock.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpQueryKeyValueData @ 0x14043F230 (CmpQueryKeyValueData.c)
 *     CmpSetKcbAtLayerHeight @ 0x1404B0A9C (CmpSetKcbAtLayerHeight.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 *     RtlCompareUnicodeStrings @ 0x140511FA0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall CmQueryValueKey(__int64 a1, unsigned __int16 *a2, int a3, void *a4, int a5, __int64 a6)
{
  struct _PRIVILEGE_SET *v6; // r14
  __int64 v8; // r12
  __int64 v9; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rcx
  struct _PRIVILEGE_SET *v12; // rbx
  __int16 v13; // si
  SIZE_T v14; // rdi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  int KeyValueData; // ebx
  __int16 v17; // di
  struct _PRIVILEGE_SET *v18; // rsi
  __int64 v19; // r10
  __int64 v20; // r10
  __int16 v21; // r15
  __int16 v22; // r14
  __int64 *v23; // r15
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // r14
  char v27; // r8
  int v28; // eax
  __int64 v29; // r10
  __int64 v30; // r11
  char *NextElement; // rax
  __int64 v32; // r10
  int v33; // ecx
  __int16 v34; // di
  int v35; // edx
  unsigned __int8 v36; // al
  int v37; // ecx
  int NameInListWithStatus; // eax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdi
  unsigned int v43; // ebx
  __int64 v44; // rdx
  unsigned int *v45; // r8
  unsigned int v46; // r14d
  unsigned int *v47; // r12
  __int64 v48; // rax
  unsigned __int16 v49; // si
  const WCHAR *v50; // r15
  bool v51; // zf
  unsigned __int16 v52; // r14
  WCHAR *v53; // r12
  WCHAR v54; // di
  unsigned int v55; // ebx
  LONG v56; // ebx
  int v57; // ebx
  __int64 v58; // rdx
  int v59; // ebx
  int v60; // edx
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rdi
  unsigned __int64 *v66; // r12
  unsigned __int64 v67; // rdi
  bool v68; // r14
  signed __int64 v69; // rax
  signed __int64 v70; // rcx
  __int64 v71; // rtt
  __int64 v72; // rdx
  char v74; // [rsp+40h] [rbp-99h]
  int v75; // [rsp+44h] [rbp-95h]
  unsigned int v76; // [rsp+44h] [rbp-95h]
  int v77; // [rsp+48h] [rbp-91h] BYREF
  __int16 v78; // [rsp+4Ch] [rbp-8Dh]
  __int16 v79; // [rsp+4Eh] [rbp-8Bh]
  struct _PRIVILEGE_SET *v80; // [rsp+50h] [rbp-89h]
  __int64 v81; // [rsp+58h] [rbp-81h] BYREF
  _QWORD v82[2]; // [rsp+60h] [rbp-79h] BYREF
  struct _PRIVILEGE_SET *v83; // [rsp+70h] [rbp-69h]
  __int64 v84; // [rsp+78h] [rbp-61h]
  __int64 v85; // [rsp+80h] [rbp-59h] BYREF
  __int64 v86; // [rsp+88h] [rbp-51h]
  unsigned int *v87; // [rsp+90h] [rbp-49h]
  __int64 v88; // [rsp+98h] [rbp-41h]
  __int64 v89; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v90; // [rsp+A8h] [rbp-31h]
  char v91[8]; // [rsp+B0h] [rbp-29h] BYREF
  char v92[8]; // [rsp+B8h] [rbp-21h] BYREF
  char v93[8]; // [rsp+C0h] [rbp-19h] BYREF
  char v94[8]; // [rsp+C8h] [rbp-11h] BYREF
  unsigned __int16 v95; // [rsp+D0h] [rbp-9h]
  __int64 v96; // [rsp+D8h] [rbp-1h]

  v6 = 0LL;
  v77 = -1;
  v81 = 4294901760LL;
  v85 = 0LL;
  v82[0] = 0LL;
  v8 = (__int64)a2;
  v82[1] = 0LL;
  LODWORD(v9) = 0;
  v83 = 0LL;
  v86 = 0LL;
  HvpGetCellContextReinitialize((__int64)v94);
  HvpGetCellContextReinitialize((__int64)v91);
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&CmpRegistryLock, 1u);
    v6 = v83;
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  v90 = v11;
  v13 = *(_WORD *)(v11 + 58);
  if ( v13 >= 2 && v13 != 1 )
  {
    v14 = 8LL * (unsigned int)(v13 - 1);
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v11, v14, 0x35364D43u);
    v12 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      KeyValueData = -1073741670;
      goto LABEL_140;
    }
    memset(TransientPoolWithTag, 0, v14);
    v11 = v90;
  }
  v17 = *(_WORD *)(v11 + 58);
  LOWORD(v81) = v13;
  v18 = v12;
  v80 = v12;
  v83 = v12;
  v79 = v17;
  WORD1(v81) = v17;
  if ( v17 )
  {
    v19 = *(_QWORD *)(v11 + 184);
    if ( v19 )
    {
      do
      {
        CmpSetKcbAtLayerHeight(&v81, (unsigned __int16)v17, *(_QWORD *)(v19 + 16));
        v19 = *(_QWORD *)(v20 + 24);
        --v17;
      }
      while ( v19 );
      v18 = v83;
      v17 = WORD1(v81);
      v80 = v83;
      v79 = WORD1(v81);
    }
  }
  else
  {
    v82[0] = v11;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    CmpLockKcbStackShared((__int64)&v81);
    if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      KeyValueData = -1073741444;
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
        KeyValueData = -1073740763;
      v21 = 0;
LABEL_118:
      v75 = KeyValueData;
      goto LABEL_119;
    }
    CmpUnlockKcbStack((__int64)&v81);
    KeyValueData = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v85);
    if ( KeyValueData < 0 )
    {
      v6 = v80;
      goto LABEL_140;
    }
  }
  v21 = 0;
  v22 = 0;
  if ( v17 >= 0 )
  {
    v23 = v82;
    do
    {
      if ( v22 < 2 )
        v24 = *v23;
      else
        v24 = *((_QWORD *)v18 + v22 - 2);
      if ( (*(_DWORD *)(v24 + 4) & 0x100000) != 0 )
        *(_DWORD *)(v24 + 60) = CmpLockTableAdd(v24, 0);
      v25 = KeAbPreAcquire(v24 + 40, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 40), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v24 + 40), v25, v24 + 40);
      if ( v25 )
        *(_BYTE *)(v25 + 26) |= 1u;
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 48));
      ++v22;
      v18 = v83;
      ++v23;
      v79 = WORD1(v81);
    }
    while ( v22 <= SWORD1(v81) );
    v8 = (__int64)a2;
    v21 = 0;
    v80 = v83;
  }
  v26 = a1;
  v27 = 0;
LABEL_34:
  v74 = v27;
  v28 = *(_DWORD *)(v26 + 48);
  v29 = *(_QWORD *)(v26 + 8);
  v89 = 0LL;
  if ( (v28 & 9) != 0 )
    goto LABEL_116;
  v30 = v85;
  if ( v85 )
  {
    NextElement = CmListGetNextElement((_QWORD *)(v29 + 200), &v89, 32);
    if ( !NextElement )
    {
LABEL_43:
      v27 = v74;
      goto LABEL_44;
    }
    while ( 1 )
    {
      v33 = *((_DWORD *)NextElement + 17);
      if ( v33 == 2 || v33 == 11 )
        break;
      NextElement = CmListGetNextElement((_QWORD *)(v32 + 200), &v89, 32);
      if ( !NextElement )
        goto LABEL_43;
    }
    if ( !CmEqualTrans(*((_QWORD *)NextElement + 7), v30) )
    {
      v30 = v85;
      goto LABEL_43;
    }
LABEL_116:
    KeyValueData = -1073741444;
    if ( (*(_BYTE *)(v26 + 48) & 1) != 0 )
      KeyValueData = -1073740763;
    goto LABEL_118;
  }
LABEL_44:
  v34 = *(_WORD *)(v90 + 58);
  while ( 1 )
  {
    v78 = v34;
    if ( v34 < 0 )
      break;
    if ( v34 < 2 )
      v9 = v82[v34];
    else
      v9 = *((_QWORD *)v18 + v34 - 2);
    v35 = *(__int16 *)(v9 + 58);
    if ( v35 == *(unsigned __int16 *)(v26 + 4) )
    {
      v36 = *(_BYTE *)(v9 + 57);
      if ( v36 )
      {
        v37 = v36;
        goto LABEL_54;
      }
    }
    else if ( (_WORD)v35 )
    {
      v37 = *(unsigned __int8 *)(v9 + 57);
LABEL_54:
      if ( v37 == 1 )
        break;
    }
    if ( *(_DWORD *)(v9 + 32) == -1 )
    {
      --v34;
    }
    else
    {
      if ( v30 && *(_QWORD *)(v9 + 280) == v30 )
      {
        NameInListWithStatus = CmpFindNameInListWithStatus(
                                 *(_QWORD *)(v9 + 24),
                                 (unsigned int *)(v9 + 272),
                                 v8,
                                 0,
                                 0LL,
                                 (__int64)&v77);
        v75 = NameInListWithStatus;
        KeyValueData = NameInListWithStatus;
        if ( NameInListWithStatus >= 0 )
          goto LABEL_105;
        if ( NameInListWithStatus != -1073741772 )
          goto LABEL_119;
      }
      else
      {
        if ( (*(_DWORD *)(v9 + 4) & 8) != 0 )
        {
          if ( !v27 && !CmpTryConvertKcbLockSharedToExclusive(v9) )
          {
            CmpUnlockKcbStack((__int64)&v81);
            CmpLockKcbStackExclusive((__int64)&v81);
            v27 = 1;
            goto LABEL_34;
          }
          CmpCleanUpKcbValueCache(v9);
          v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v9 + 24) + 8LL))(
                  *(_QWORD *)(v9 + 24),
                  *(unsigned int *)(v9 + 32),
                  v91);
          v40 = *(unsigned int *)(v39 + 40);
          *(_DWORD *)(v9 + 88) = *(_DWORD *)(v39 + 36);
          v41 = *(_QWORD *)(v9 + 24);
          *(_QWORD *)(v9 + 96) = v40;
          (*(void (__fastcall **)(__int64, char *))(v41 + 16))(v41, v91);
        }
        v42 = *(_QWORD *)(v9 + 24);
        v43 = *(_DWORD *)(v9 + 88);
        v88 = v42;
        v76 = v43;
        v84 = 0LL;
        HvpGetCellContextReinitialize((__int64)v93);
        if ( v43 )
          v84 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(v42 + 8))(v42, v44, v93);
        HvpGetCellContextReinitialize((__int64)v92);
        if ( v43 )
        {
          v46 = 0;
          v77 = 0;
          v47 = v45;
          v87 = v45;
          while ( 1 )
          {
            v48 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(v42 + 8))(v42, *v47, v92);
            v49 = *(_WORD *)(v48 + 2);
            v50 = (const WCHAR *)(v48 + 20);
            v51 = (*(_BYTE *)(v48 + 16) & 1) == 0;
            v96 = v48 + 20;
            v95 = v49;
            if ( v51 )
            {
              v56 = RtlCompareUnicodeStrings(
                      *((PCWCH *)a2 + 1),
                      (unsigned __int64)*a2 >> 1,
                      v50,
                      (unsigned __int64)v49 >> 1,
                      1u);
            }
            else
            {
              v52 = *a2 >> 1;
              v53 = (WCHAR *)*((_QWORD *)a2 + 1);
              if ( v52 )
              {
                while ( 1 )
                {
                  if ( !v49 )
                  {
LABEL_84:
                    v42 = v88;
                    goto LABEL_85;
                  }
                  v54 = *v53++;
                  v55 = *(unsigned __int8 *)v50;
                  v50 = (const WCHAR *)((char *)v50 + 1);
                  if ( v54 != (_WORD)v55 )
                  {
                    if ( v54 >= 0x61u )
                    {
                      if ( v54 <= 0x7Au )
                        v54 -= 32;
                      else
                        v54 = RtlUpcaseUnicodeChar(v54);
                    }
                    if ( v55 >= 0x61 )
                    {
                      if ( v55 <= 0x7A )
                        LOWORD(v55) = v55 - 32;
                      else
                        LOWORD(v55) = RtlUpcaseUnicodeChar(v55);
                    }
                    v56 = v54 - (unsigned __int16)v55;
                    if ( v56 )
                      break;
                  }
                  --v49;
                  if ( !--v52 )
                    goto LABEL_84;
                }
                v42 = v88;
                v46 = v77;
                v47 = v87;
              }
              else
              {
LABEL_85:
                v47 = v87;
                v57 = v52;
                v46 = v77;
                v56 = v57 - v49;
              }
            }
            (*(void (__fastcall **)(__int64, char *))(v42 + 16))(v42, v92);
            if ( !v56 )
              break;
            ++v46;
            ++v47;
            v77 = v46;
            v87 = v47;
            if ( v46 >= v76 )
            {
              v8 = (__int64)a2;
              v21 = 0;
              v26 = a1;
              goto LABEL_91;
            }
          }
          v58 = v84;
          v21 = 0;
          v8 = (__int64)a2;
          v59 = 0;
          v62 = v46;
          v26 = a1;
          v77 = *(_DWORD *)(v84 + 4 * v62);
        }
        else
        {
LABEL_91:
          v58 = v84;
          v59 = -1073741772;
          v77 = -1;
        }
        if ( v58 )
          (*(void (__fastcall **)(__int64, char *))(v42 + 16))(v42, v93);
        if ( v59 >= 0 )
        {
LABEL_105:
          v63 = *(_QWORD *)(v9 + 24);
          goto LABEL_107;
        }
        v34 = v78;
        v18 = v80;
      }
      v60 = *(__int16 *)(v9 + 58);
      if ( v60 == *(unsigned __int16 *)(v26 + 4) )
      {
        LOBYTE(v61) = *(_BYTE *)(v9 + 57);
        if ( !(_BYTE)v61 )
          break;
        v61 = (unsigned __int8)v61;
      }
      else
      {
        if ( !(_WORD)v60 )
          goto LABEL_103;
        v61 = *(unsigned __int8 *)(v9 + 57);
      }
      if ( v61 )
        break;
LABEL_103:
      v30 = v85;
      --v34;
      v27 = v74;
    }
  }
  v63 = v86;
LABEL_107:
  if ( v77 == -1 )
  {
    KeyValueData = -1073741772;
    goto LABEL_118;
  }
  v64 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(v63 + 8))(v63, (unsigned int)v77, v94);
  v65 = v64;
  if ( (*(_DWORD *)(v63 + 144) & 0x80000) != 0 && (*(_BYTE *)(v64 + 16) & 2) != 0 )
  {
    KeyValueData = -1073741772;
  }
  else
  {
    KeyValueData = CmpQueryKeyValueData(v9, v77, v64, a3, a4, a5, a6);
    if ( KeyValueData >= 0 )
      KeyValueData = 0;
  }
  v75 = KeyValueData;
  if ( v65 )
    (*(void (__fastcall **)(__int64, char *))(v63 + 16))(v63, v94);
LABEL_119:
  v6 = v80;
  if ( v79 >= 0 )
  {
    v66 = v82;
    do
    {
      if ( v21 < 2 )
        v67 = *v66;
      else
        v67 = *((_QWORD *)v6 + v21 - 2);
      v68 = (*(_DWORD *)(v67 + 4) & 0x80000) != 0;
      if ( *(struct _KTHREAD **)(v67 + 48) == KeGetCurrentThread() )
        *(_QWORD *)(v67 + 48) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v67 + 48));
      _m_prefetchw((const void *)(v67 + 40));
      v69 = *(_QWORD *)(v67 + 40);
      v70 = v69 - 16;
      if ( (v69 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v70 = 0LL;
      if ( (v69 & 2) != 0
        || (v71 = *(_QWORD *)(v67 + 40),
            v71 != _InterlockedCompareExchange64((volatile signed __int64 *)(v67 + 40), v70, v69)) )
      {
        ExfReleasePushLock((_QWORD *)(v67 + 40));
      }
      KeAbPostRelease(v67 + 40);
      if ( (*(_DWORD *)(v67 + 4) & 0x100000) != 0 )
        CmpLockTableRemove(v67, *(_DWORD *)(v67 + 60));
      if ( v68 && (*(_DWORD *)(v67 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v67);
      v6 = v83;
      ++v21;
      ++v66;
    }
    while ( v21 <= SWORD1(v81) );
    KeyValueData = v75;
  }
LABEL_140:
  if ( !CmpPuntBoot )
  {
    ExReleaseResourceLite(&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v72) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v72);
    v6 = v83;
  }
  if ( v6 )
    MiDeleteSubsection(v6);
  return (unsigned int)KeyValueData;
}
