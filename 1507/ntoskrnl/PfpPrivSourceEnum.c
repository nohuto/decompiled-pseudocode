/*
 * XREFs of PfpPrivSourceEnum @ 0x14050CF74
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140431980 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     SmStoreExistsForProcess @ 0x1400F0054 (SmStoreExistsForProcess.c)
 *     RtlStringCbCopyA @ 0x1400F0684 (RtlStringCbCopyA.c)
 *     MmGetNextSession @ 0x1400FD460 (MmGetNextSession.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x14012C4A4 (MmQueryProcessWorkingSetSwapPages.c)
 *     MiFillSessionWorkingSetEntry @ 0x14012ED68 (MiFillSessionWorkingSetEntry.c)
 *     MmQuerySystemMemoryInformation @ 0x14012FF18 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017F6B0 (ZwQuerySystemInformation.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MmGetSessionGlobalVA @ 0x140444BBC (MmGetSessionGlobalVA.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404E9DC4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PsGetProcessDeepFreezeStats @ 0x14050CE38 (PsGetProcessDeepFreezeStats.c)
 *     ExGetNextProcess @ 0x14050D53C (ExGetNextProcess.c)
 *     PfpPrivSourceAdd @ 0x14050D6CC (PfpPrivSourceAdd.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     SeSecurityAttributePresent @ 0x14050D910 (SeSecurityAttributePresent.c)
 *     SmProcessQueryStoreStats @ 0x1406D9B70 (SmProcessQueryStoreStats.c)
 */

__int64 __fastcall PfpPrivSourceEnum(__int64 a1, KPROCESSOR_MODE a2, _DWORD *a3)
{
  struct _KPROCESS *v4; // r15
  __int64 v5; // r14
  unsigned __int64 v6; // r12
  _DWORD *v7; // rbx
  unsigned int v8; // eax
  char v9; // di
  void *i; // rcx
  __int64 NextSession; // rax
  void *j; // rcx
  __int64 NextProcess; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // ebx
  unsigned __int64 v17; // rax
  struct _KPROCESS *k; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  PACCESS_TOKEN v22; // rbx
  char v23; // di
  int v24; // ebx
  __int64 v25; // r8
  __int64 v26; // r9
  _DWORD *v27; // rdi
  int IsAppContainerOrIdentifyLevelContext; // eax
  unsigned __int64 v30; // rax
  char v31[8]; // [rsp+20h] [rbp-218h] BYREF
  _DWORD *v32; // [rsp+28h] [rbp-210h]
  int v33; // [rsp+30h] [rbp-208h]
  unsigned __int64 v34; // [rsp+38h] [rbp-200h] BYREF
  unsigned __int64 v35; // [rsp+40h] [rbp-1F8h]
  int v36; // [rsp+48h] [rbp-1F0h]
  unsigned int v37; // [rsp+4Ch] [rbp-1ECh]
  unsigned __int64 v38; // [rsp+50h] [rbp-1E8h] BYREF
  _QWORD v39[15]; // [rsp+60h] [rbp-1D8h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-160h]
  char v41[8]; // [rsp+E0h] [rbp-158h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-150h]
  __int64 v43; // [rsp+F0h] [rbp-148h]
  __int64 v44; // [rsp+F8h] [rbp-140h]
  __int64 v45; // [rsp+100h] [rbp-138h]
  __int64 v46[3]; // [rsp+108h] [rbp-130h] BYREF
  unsigned __int64 v47; // [rsp+120h] [rbp-118h]
  __int128 v48; // [rsp+128h] [rbp-110h] BYREF
  __int128 v49; // [rsp+150h] [rbp-E8h]
  unsigned __int64 SystemInformation[8]; // [rsp+1C0h] [rbp-78h] BYREF

  v32 = a3;
  v40 = a1;
  v39[12] = a3;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0;
  v37 = 0;
  v4 = 0LL;
  v39[13] = 0LL;
  v5 = 0LL;
  LODWORD(v6) = 0;
  v7 = *(_DWORD **)(a1 + 16);
  v38 = (unsigned __int64)v7;
  v8 = *(_DWORD *)(a1 + 24);
  if ( v8 >= 0x10 )
  {
    if ( a2 )
      ProbeForWrite(v7, v8, 8u);
    v49 = *(_OWORD *)v7;
    v7[2] = 0;
    if ( (_DWORD)v49 != 8 || (v33 = DWORD1(v49), (DWORD1(v49) & 0xFFFFFFFC) != 0) || (BYTE4(v49) & 3) == 3 )
    {
      v16 = -1073741811;
      goto LABEL_44;
    }
    if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
    {
      v9 = 0;
      v31[0] = 0;
    }
    else
    {
      IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL, v31);
      v16 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext == -1073741659 )
      {
        v9 = 1;
        v31[0] = 1;
        goto LABEL_13;
      }
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_44;
      v9 = v31[0];
    }
    if ( !v9 )
    {
      v35 = 1LL;
      for ( i = 0LL; ; i = (void *)NextSession )
      {
        NextSession = MmGetNextSession(i);
        v4 = (struct _KPROCESS *)NextSession;
        if ( !NextSession )
          break;
        ++v35;
      }
    }
LABEL_13:
    for ( j = 0LL; ; j = (void *)NextProcess )
    {
      NextProcess = ExGetNextProcess(j);
      v5 = NextProcess;
      if ( !NextProcess )
        break;
      ++v35;
    }
    if ( v35 > 0xFFFFFFFF || (v14 = 96 * v35 + 16, v14 > 0xFFFFFFFF) )
    {
      v16 = -1073741670;
    }
    else
    {
      LODWORD(v6) = 96 * v35 + 16;
      v15 = *(_DWORD *)(v40 + 24);
      if ( (unsigned int)v14 > v15 )
      {
        v16 = -1073741789;
      }
      else
      {
        v37 = (v15 - 16) / 0x60;
        v34 = v38;
        if ( v9 )
        {
LABEL_29:
          v5 = ExGetNextProcess(0LL);
          if ( v5 )
          {
            v33 &= 1u;
            while ( 1 )
            {
              memset(v39, 0, 0x60uLL);
              LODWORD(v39[0]) = 2;
              HIDWORD(v39[0]) = *(_DWORD *)(v5 + 744);
              LODWORD(v39[1]) = *(_DWORD *)(v5 + 1172);
              v39[2] = (*(_QWORD *)(v5 + 744) ^ *(_QWORD *)(v5 + 776)) & 0x1FFFFFFFFFFFFFFFLL;
              v39[3] = v5;
              v19 = *(_QWORD *)(v5 + 1400);
              v39[4] = v19;
              v20 = *(_QWORD *)(v5 + 1392);
              if ( v19 > v20 )
                v20 = v19;
              v39[10] = v20;
              v21 = *(_QWORD *)(v5 + 920);
              v39[5] = v21;
              if ( v21 <= v39[4] )
                v21 = v39[4];
              v39[5] = v21;
              LODWORD(v39[6]) = MmGetSessionIdEx((struct _KPROCESS *)v5);
              v22 = PsReferencePrimaryToken((PEPROCESS)v5);
              v23 = SeSecurityAttributePresent(v22, &PspSysAppIdClaim);
              ObFastDereferenceObject((signed __int64 *)(v5 + 856), (unsigned __int64)v22);
              v24 = HIDWORD(v39[11]) & 0xFFFFFFF6 | v23 & 1 | (8 * SmStoreExistsForProcess());
              HIDWORD(v39[11]) = v24;
              PsGetProcessDeepFreezeStats((unsigned __int64 *)v5, v46, v25, v26);
              if ( v47 )
              {
                v24 |= 2u;
                HIDWORD(v39[11]) = v24;
                LODWORD(v39[11]) = v47 / 0x2710;
              }
              if ( *(_BYTE *)(v5 + 1490) == 2 )
                HIDWORD(v39[11]) = v24 | 4;
              RtlStringCbCopyA((NTSTRSAFE_PSTR)&v39[6] + 4, 0x10uLL, (NTSTRSAFE_PCSTR)(v5 + 1096));
              if ( v33 )
              {
                MmQueryProcessWorkingSetSwapPages(v5, &v39[9]);
              }
              else if ( (BYTE4(v49) & 2) != 0 && (int)SmProcessQueryStoreStats(v5, &v38, 0LL) >= 0 )
              {
                v39[9] = v38 >> 12;
              }
              v16 = PfpPrivSourceAdd(&v34, v39);
              if ( v16 < 0 )
                break;
              v5 = ExGetNextProcess((PVOID)v5);
              if ( !v5 )
                goto LABEL_43;
            }
          }
          else
          {
LABEL_43:
            LODWORD(v6) = 96 * v36 + 16;
            v16 = 0;
          }
          goto LABEL_44;
        }
        memset(v39, 0, 0x60uLL);
        LODWORD(v39[0]) = 0;
        RtlStringCbCopyA((NTSTRSAFE_PSTR)&v39[6] + 4, 0x10uLL, "KernelSpace");
        v16 = ZwQuerySystemInformation(SystemPagedPoolInformationEx, SystemInformation, 0x40u, 0LL);
        if ( v16 >= 0 )
        {
          v16 = MmQuerySystemMemoryInformation(&v48);
          if ( v16 >= 0 )
          {
            v39[4] = SystemInformation[0] >> 12;
            v17 = v48;
            if ( (unsigned __int64)v48 <= SystemInformation[0] >> 12 )
              v17 = SystemInformation[0] >> 12;
            v39[5] = v17;
            v16 = PfpPrivSourceAdd(&v34, v39);
            if ( v16 >= 0 )
            {
              for ( k = 0LL; ; k = v4 )
              {
                v4 = (struct _KPROCESS *)MmGetNextSession(k);
                if ( !v4 )
                  break;
                memset(v39, 0, 0x60uLL);
                LODWORD(v39[0]) = 1;
                HIDWORD(v39[0]) = MmGetSessionIdEx(v4);
                v39[3] = MmGetSessionGlobalVA(v4);
                MiFillSessionWorkingSetEntry((__int64)v41, v4[1].ActiveProcessors.Bitmap[2]);
                v39[4] = v45;
                v39[10] = v42;
                v39[5] = v43;
                v39[9] = v44;
                RtlStringCbCopyA((NTSTRSAFE_PSTR)&v39[6] + 4, 0x10uLL, "Session");
                v16 = PfpPrivSourceAdd(&v34, v39);
                if ( v16 < 0 )
                  goto LABEL_44;
              }
              goto LABEL_29;
            }
          }
        }
      }
    }
LABEL_44:
    v27 = v32;
    goto LABEL_45;
  }
  v16 = -1073741789;
  v27 = a3;
LABEL_45:
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( v5 )
    ObfDereferenceObjectWithTag((PVOID)v5, 0x6E457350u);
  if ( v16 == -1073741789 )
  {
    v30 = v35;
    if ( (unsigned int)(v36 + 1) > v35 )
      v30 = (unsigned int)(v36 + 1);
    v6 = 96 * v30 + 16;
    if ( v6 > 0xFFFFFFFF )
    {
      LODWORD(v6) = 0;
      v16 = -1073741670;
    }
  }
  *v27 = v6;
  return (unsigned int)v16;
}
