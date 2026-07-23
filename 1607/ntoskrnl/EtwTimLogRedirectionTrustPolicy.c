/*
 * XREFs of EtwTimLogRedirectionTrustPolicy @ 0x1406A089C
 * Callers:
 *     IoCheckRedirectionTrustLevel @ 0x1401CA070 (IoCheckRedirectionTrustLevel.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlWalkFrameChain @ 0x14004EE20 (RtlWalkFrameChain.c)
 *     RtlStringCbCopyW @ 0x1400C265C (RtlStringCbCopyW.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x14015A650 (ZwQueryVirtualMemory.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EtwpTiFillProcessIdentity @ 0x140171E6C (EtwpTiFillProcessIdentity.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpQueryProcessCommandLine @ 0x14045CB04 (EtwpQueryProcessCommandLine.c)
 */

void __fastcall EtwTimLogRedirectionTrustPolicy(int a1, __int64 a2, int a3, UNICODE_STRING *a4, unsigned __int8 a5)
{
  __int64 v5; // r15
  signed __int64 v6; // r13
  _QWORD *v7; // rdi
  signed __int32 v8; // r14d
  unsigned int v9; // ebx
  char v10; // r12
  ULONG v11; // eax
  unsigned __int16 v12; // si
  unsigned __int16 i; // cx
  int v14; // edx
  PVOID PoolWithTag; // r15
  _DWORD *v16; // rcx
  __int64 v17; // r15
  _QWORD *v18; // r12
  PVOID *v19; // rbx
  wchar_t *v20; // r14
  unsigned __int16 v21; // cx
  __int64 v22; // r13
  const EVENT_DESCRIPTOR *v23; // rax
  unsigned __int16 *v24; // rbx
  unsigned __int16 *v25; // rax
  unsigned __int16 Length; // r14
  UNICODE_STRING *v27; // r15
  const wchar_t *v28; // rax
  unsigned int v29; // r9d
  __int64 v30; // rax
  unsigned int v31; // r9d
  unsigned __int16 v32; // dx
  __int64 v33; // rax
  unsigned int v34; // r9d
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  wchar_t *v38; // r14
  unsigned __int16 v39; // r15
  PVOID *v40; // rbx
  unsigned int v41; // r9d
  unsigned __int16 v42; // r10
  __int64 v43; // rax
  ULONG v44; // r9d
  ULONGLONG *v45; // r8
  unsigned __int16 v46; // cx
  int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rax
  ULONG v50; // r9d
  __int64 v51; // rax
  int v52; // r9d
  UNICODE_STRING *p_DestinationString; // rbx
  UNICODE_STRING *v54; // r11
  UNICODE_STRING *v55; // r10
  UNICODE_STRING *v56; // r8
  UNICODE_STRING *v57; // rdx
  UNICODE_STRING *v58; // rcx
  char v59; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v60; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int8 v61; // [rsp+32h] [rbp-CEh] BYREF
  _WORD v62[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v63[2]; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v64[2]; // [rsp+3Ch] [rbp-C4h] BYREF
  int v65; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING v66; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v67; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v69; // [rsp+70h] [rbp-90h]
  int v70; // [rsp+74h] [rbp-8Ch] BYREF
  int v71; // [rsp+78h] [rbp-88h] BYREF
  int v72; // [rsp+7Ch] [rbp-84h] BYREF
  int v73; // [rsp+80h] [rbp-80h] BYREF
  int v74; // [rsp+84h] [rbp-7Ch] BYREF
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h]
  __int64 v76; // [rsp+90h] [rbp-70h] BYREF
  PVOID v77; // [rsp+98h] [rbp-68h] BYREF
  PVOID v78; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v79; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v80; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v81; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v82; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v83; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING *v84; // [rsp+D8h] [rbp-28h]
  __int64 v85; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v86; // [rsp+E8h] [rbp-18h] BYREF
  char MemoryInformation[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v88; // [rsp+100h] [rbp+0h]
  EVENT_DATA_DESCRIPTOR v89; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v90; // [rsp+150h] [rbp+50h]
  __int64 v91; // [rsp+158h] [rbp+58h]
  int *v92; // [rsp+160h] [rbp+60h]
  __int64 v93; // [rsp+168h] [rbp+68h]
  int *v94; // [rsp+170h] [rbp+70h]
  __int64 v95; // [rsp+178h] [rbp+78h]
  unsigned __int8 *v96; // [rsp+180h] [rbp+80h]
  __int64 v97; // [rsp+188h] [rbp+88h]
  _DWORD *v98; // [rsp+190h] [rbp+90h]
  __int64 v99; // [rsp+198h] [rbp+98h]
  wchar_t *v100; // [rsp+1A0h] [rbp+A0h]
  _DWORD v101[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  PVOID *v102; // [rsp+1B0h] [rbp+B0h]
  __int64 v103; // [rsp+1B8h] [rbp+B8h]
  _DWORD *v104; // [rsp+1C0h] [rbp+C0h]
  __int64 v105; // [rsp+1C8h] [rbp+C8h]
  wchar_t *v106; // [rsp+1D0h] [rbp+D0h]
  _DWORD v107[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  PVOID *v108; // [rsp+1E0h] [rbp+E0h]
  __int64 v109; // [rsp+1E8h] [rbp+E8h]
  _DWORD *v110; // [rsp+1F0h] [rbp+F0h]
  __int64 v111; // [rsp+1F8h] [rbp+F8h]
  wchar_t *v112; // [rsp+200h] [rbp+100h]
  _DWORD v113[2]; // [rsp+208h] [rbp+108h] BYREF
  PVOID *v114; // [rsp+210h] [rbp+110h]
  __int64 v115; // [rsp+218h] [rbp+118h]
  _DWORD *v116; // [rsp+220h] [rbp+120h]
  __int64 v117; // [rsp+228h] [rbp+128h]
  wchar_t *v118; // [rsp+230h] [rbp+130h]
  _DWORD v119[2]; // [rsp+238h] [rbp+138h] BYREF
  PVOID *v120; // [rsp+240h] [rbp+140h]
  __int64 v121; // [rsp+248h] [rbp+148h]
  _DWORD *v122; // [rsp+250h] [rbp+150h]
  __int64 v123; // [rsp+258h] [rbp+158h]
  wchar_t *v124; // [rsp+260h] [rbp+160h]
  _DWORD v125[2]; // [rsp+268h] [rbp+168h] BYREF
  PVOID *v126; // [rsp+270h] [rbp+170h]
  __int64 v127; // [rsp+278h] [rbp+178h]
  _DWORD *v128; // [rsp+280h] [rbp+180h]
  __int64 v129; // [rsp+288h] [rbp+188h]
  wchar_t *v130; // [rsp+290h] [rbp+190h]
  _DWORD v131[2]; // [rsp+298h] [rbp+198h] BYREF
  PVOID *v132; // [rsp+2A0h] [rbp+1A0h]
  __int64 v133; // [rsp+2A8h] [rbp+1A8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 *v135; // [rsp+2D0h] [rbp+1D0h]
  __int64 v136; // [rsp+2D8h] [rbp+1D8h]
  int *v137; // [rsp+2E0h] [rbp+1E0h]
  __int64 v138; // [rsp+2E8h] [rbp+1E8h]
  int *v139; // [rsp+2F0h] [rbp+1F0h]
  __int64 v140; // [rsp+2F8h] [rbp+1F8h]
  unsigned __int8 *v141; // [rsp+300h] [rbp+200h]
  __int64 v142; // [rsp+308h] [rbp+208h]
  _DWORD *v143; // [rsp+310h] [rbp+210h]
  __int64 v144; // [rsp+318h] [rbp+218h]
  wchar_t *v145; // [rsp+320h] [rbp+220h]
  _DWORD v146[2]; // [rsp+328h] [rbp+228h] BYREF
  PVOID Callers[16]; // [rsp+330h] [rbp+230h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+3B0h] [rbp+2B0h] BYREF
  const wchar_t *v149; // [rsp+3C0h] [rbp+2C0h]
  __int64 v150; // [rsp+3C8h] [rbp+2C8h]
  _WORD *v151; // [rsp+3D0h] [rbp+2D0h]
  __int64 v152; // [rsp+3D8h] [rbp+2D8h]
  wchar_t *Buffer; // [rsp+3E0h] [rbp+2E0h]
  __int64 v154; // [rsp+3E8h] [rbp+2E8h]
  char v155[672]; // [rsp+3F0h] [rbp+2F0h] BYREF
  int v156; // [rsp+6F0h] [rbp+5F0h] BYREF

  v156 = a3;
  v5 = a2;
  v67 = a2;
  v65 = a1;
  v84 = a4;
  memset(Callers, 0, sizeof(Callers));
  v6 = *(_QWORD *)(v5 + 1992);
  v7 = 0LL;
  v70 = a5;
  v8 = 0;
  v59 = 0;
  v9 = 0;
  *(_DWORD *)&v66.Length = 0;
  v66.Buffer = 0LL;
  v10 = 1;
  v11 = RtlWalkFrameChain(Callers, 0x10u, 1u);
  v12 = v11;
  v69 = v11;
  for ( i = 1; ; ++i )
  {
    v14 = 7;
    if ( (unsigned __int16)v11 <= 7u )
      v14 = (unsigned __int16)v11;
    if ( i >= v14 )
      break;
    v8 += LODWORD(Callers[i]);
  }
  if ( !v8 )
    v8 = 1;
  while ( 1 )
  {
    if ( v6 )
      goto LABEL_14;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x6E734954u);
    memset(PoolWithTag, 0, 0x28uLL);
    if ( !PoolWithTag )
      break;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v67 + 1992), (signed __int64)PoolWithTag, 0LL);
    if ( v6 )
      ExFreePoolWithTag(PoolWithTag, 0);
    else
      v6 = (signed __int64)PoolWithTag;
    v5 = v67;
LABEL_14:
    if ( v9 >= 0xA )
      goto LABEL_22;
    v16 = (_DWORD *)(v6 + 4LL * v9);
    while ( *v16 )
    {
      if ( *v16 == v8 )
      {
        v10 = 0;
        break;
      }
      ++v9;
      ++v16;
      if ( v9 >= 0xA )
        break;
    }
    if ( v9 >= 0xA )
LABEL_22:
      v10 = 0;
    if ( !v10 )
      return;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v5 + 1992) + 4LL * v9), v8, 0) )
      goto LABEL_25;
  }
  v10 = 0;
LABEL_25:
  if ( !v10 )
    return;
  RtlInitUnicodeString(&DestinationString, L"Unknown");
  if ( !v12 )
  {
    v18 = 0LL;
    goto LABEL_44;
  }
  v17 = v12;
  v7 = ExAllocatePoolWithTag(PagedPool, 80LL * v12, 0x6E734954u);
  memset(v7, 0, 80LL * v12);
  v18 = ExAllocatePoolWithTag(PagedPool, 0x21AuLL, 0x6E734954u);
  memset(v18, 0, 0x21AuLL);
  if ( !v7 || !v18 )
  {
LABEL_44:
    if ( v12 )
      memset(Callers, 0, 8LL * v12);
    goto LABEL_46;
  }
  v19 = Callers;
  v20 = (wchar_t *)(v7 + 2);
  do
  {
    if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v19, MemoryMappedFilenameInformation, v18, 0x218uLL, 0LL) < 0
      || *(_WORD *)v18 <= 1u )
    {
      goto LABEL_40;
    }
    v21 = (*(_WORD *)v18 >> 1) - 1;
    if ( *(_WORD *)v18 >> 1 != 1 )
    {
      while ( *(_WORD *)(v18[1] + 2LL * v21) != 92 )
      {
        if ( !--v21 )
          goto LABEL_38;
      }
      ++v21;
    }
LABEL_38:
    RtlStringCbCopyW(v20, 0x40uLL, (NTSTRSAFE_PCWSTR)(v18[1] + 2LL * v21));
    RtlInitUnicodeString((PUNICODE_STRING)v20 - 1, v20);
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           *v19,
           MemoryBasicInformation,
           MemoryInformation,
           0x30uLL,
           0LL) < 0 )
LABEL_40:
      *v19 = 0LL;
    else
      *v19 = (char *)*v19 - v88;
    v20 += 40;
    ++v19;
    --v17;
  }
  while ( v17 );
  v12 = v69;
LABEL_46:
  v22 = v67;
  v23 = (const EVENT_DESCRIPTOR *)&MITIGATION_AUDIT_REDIRECTION_TRUST_POLICY;
  v24 = (unsigned __int16 *)&EmptyUnicodeString;
  if ( v65 != 1 )
    v23 = (const EVENT_DESCRIPTOR *)&MITIGATION_ENFORCE_REDIRECTION_TRUST_POLICY;
  EventDescriptor = v23;
  v25 = *(unsigned __int16 **)(v67 + 1128);
  *(_DWORD *)&v66.Length = 0;
  v66.Buffer = 0LL;
  if ( v25 )
    v24 = v25;
  EtwpQueryProcessCommandLine(v67, (__int64)&v66);
  Length = v66.Length;
  if ( v66.Length )
  {
    v59 = 1;
  }
  else
  {
    RtlInitUnicodeString(&v66, L"Unknown");
    Length = v66.Length;
  }
  v27 = v84;
  if ( !v84 )
  {
    RtlInitUnicodeString(&v86, L"Unknown");
    v27 = &v86;
  }
  if ( v24 && *v24 )
  {
    v62[0] = *v24 >> 1;
    UserData.Ptr = (ULONGLONG)v62;
    *(_QWORD *)&UserData.Size = 2LL;
    v28 = (const wchar_t *)*((_QWORD *)v24 + 1);
    v150 = *v24;
    v149 = v28;
  }
  else
  {
    v62[0] = 6;
    UserData.Ptr = (ULONGLONG)v62;
    *(_QWORD *)&UserData.Size = 2LL;
    v149 = L"(null)";
    v150 = 12LL;
  }
  v152 = 2LL;
  if ( Length )
  {
    v63[0] = Length >> 1;
    v151 = v63;
    Buffer = v66.Buffer;
    v154 = Length;
  }
  else
  {
    v63[0] = 6;
    v151 = v63;
    Buffer = L"(null)";
    v154 = 12LL;
  }
  v29 = EtwpTiFillProcessIdentity((__int64)v155, v22, &v85) + 4;
  v30 = 2LL * v29;
  v31 = v29 + 1;
  *(&UserData.Ptr + v30) = (ULONGLONG)&v156;
  *((_QWORD *)&UserData.Size + v30) = 4LL;
  if ( v27 && (v32 = v27->Length) != 0 )
  {
    v64[0] = v32 >> 1;
    v33 = v31;
    v34 = v31 + 1;
    v33 *= 2LL;
    *(&UserData.Ptr + v33) = (ULONGLONG)v64;
    *((_QWORD *)&UserData.Size + v33) = 2LL;
    v35 = 2LL * v34;
    *(&UserData.Ptr + v35) = (ULONGLONG)v27->Buffer;
    *(&UserData.Size + 2 * v35) = v32;
    *(&UserData.Reserved + 2 * v35) = 0;
  }
  else
  {
    v64[0] = 6;
    v36 = v31;
    v34 = v31 + 1;
    v36 *= 2LL;
    *(&UserData.Ptr + v36) = (ULONGLONG)v64;
    *((_QWORD *)&UserData.Size + v36) = 2LL;
    v37 = 2LL * v34;
    *(&UserData.Ptr + v37) = (ULONGLONG)L"(null)";
    *((_QWORD *)&UserData.Size + v37) = 12LL;
  }
  v38 = DestinationString.Buffer;
  v39 = DestinationString.Length;
  v40 = Callers;
  v41 = v34 + 1;
  v42 = 0;
  v43 = 2LL * v41;
  v44 = v41 + 1;
  *((_QWORD *)&UserData.Size + v43) = 4LL;
  v45 = v7 + 1;
  *(&UserData.Ptr + v43) = (ULONGLONG)&v70;
  while ( 2 )
  {
    if ( v42 < v12 && v7 )
    {
      if ( v45 != (ULONGLONG *)8 )
      {
        if ( *v45 )
        {
          v46 = *((_WORD *)v45 - 4);
          if ( v46 )
          {
            v47 = v46;
            if ( *((unsigned __int16 *)v45 - 3) > v46 + 1 )
              v47 = v46 + 2;
            v48 = 2LL * v44;
            *(&UserData.Ptr + 2 * v44) = *v45;
            goto LABEL_75;
          }
        }
      }
LABEL_76:
      v49 = 2LL * v44;
      *((_QWORD *)&UserData.Size + v49) = 14LL;
      *(&UserData.Ptr + v49) = (ULONGLONG)L"(null)";
    }
    else
    {
      if ( !v38 || !v39 )
        goto LABEL_76;
      v47 = v39;
      if ( DestinationString.MaximumLength > v39 + 1 )
        v47 = v39 + 2;
      v48 = 2LL * v44;
      *(&UserData.Ptr + 2 * v44) = (ULONGLONG)v38;
LABEL_75:
      *(&UserData.Reserved + 2 * v48) = 0;
      *(&UserData.Size + 2 * v48) = v47;
    }
    v50 = v44 + 1;
    ++v42;
    v45 += 10;
    v51 = 2LL * v50;
    v44 = v50 + 1;
    *(&UserData.Ptr + v51) = (ULONGLONG)v40++;
    *((_QWORD *)&UserData.Size + v51) = 8LL;
    if ( v42 < 0x10u )
      continue;
    break;
  }
  EtwWrite(EtwSecurityMitigationsRegHandle, EventDescriptor, 0LL, v44, &UserData);
  if ( v7 )
  {
    if ( stru_1402F3680.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F3680, 0x400000000000uLL) )
    {
      v71 = v156;
      v72 = v65;
      v60 = a5;
      v76 = 0x2000000LL;
      if ( v12 <= (unsigned __int16)(v52 - 4) || (p_DestinationString = (UNICODE_STRING *)(v7 + 10), !v7[11]) )
        p_DestinationString = &DestinationString;
      v77 = Callers[1];
      if ( v12 <= 2u || (v54 = (UNICODE_STRING *)(v7 + 20), !v7[21]) )
        v54 = &DestinationString;
      v78 = Callers[2];
      if ( v12 <= 3u || (v55 = (UNICODE_STRING *)(v7 + 30), !v7[31]) )
        v55 = &DestinationString;
      v79 = Callers[3];
      if ( v12 <= 4u || (v56 = (UNICODE_STRING *)(v7 + 40), !v7[41]) )
        v56 = &DestinationString;
      v80 = Callers[4];
      if ( v12 <= (unsigned __int16)v52 || (v57 = (UNICODE_STRING *)(v7 + 50), !v7[51]) )
        v57 = &DestinationString;
      v81 = Callers[5];
      if ( v12 <= 6u || (v58 = (UNICODE_STRING *)(v7 + 60), !v7[61]) )
        v58 = &DestinationString;
      v82 = Callers[6];
      v90 = &v76;
      v92 = &v71;
      v94 = &v72;
      v96 = &v60;
      v98 = v101;
      v100 = p_DestinationString->Buffer;
      v101[0] = p_DestinationString->Length;
      v102 = &v77;
      v104 = v107;
      v106 = v54->Buffer;
      v107[0] = v54->Length;
      v108 = &v78;
      v110 = v113;
      v112 = v55->Buffer;
      v113[0] = v55->Length;
      v114 = &v79;
      v116 = v119;
      v118 = v56->Buffer;
      v119[0] = v56->Length;
      v120 = &v80;
      v122 = v125;
      v124 = v57->Buffer;
      v125[0] = v57->Length;
      v126 = &v81;
      v128 = v131;
      v130 = v58->Buffer;
      v131[0] = v58->Length;
      v132 = &v82;
      v91 = 8LL;
      v93 = 4LL;
      v95 = 4LL;
      v97 = (unsigned int)(v52 - 4);
      v99 = 2LL;
      v101[1] = 0;
      v103 = 8LL;
      v105 = 2LL;
      v107[1] = 0;
      v109 = 8LL;
      v111 = 2LL;
      v113[1] = 0;
      v115 = 8LL;
      v117 = 2LL;
      v119[1] = 0;
      v121 = 8LL;
      v123 = 2LL;
      v125[1] = 0;
      v127 = 8LL;
      v129 = 2LL;
      v131[1] = 0;
      v133 = 8LL;
      TlgWrite(&stru_1402F3680, &unk_14027E569, 0LL, 0LL, 0x18u, &v89);
    }
  }
  else if ( stru_1402F3680.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F3680, 0x400000000000uLL) )
  {
    v73 = v156;
    v74 = v65;
    v61 = a5;
    v135 = &v83;
    v137 = &v73;
    v139 = &v74;
    v141 = &v61;
    v143 = v146;
    v146[0] = v39;
    v83 = 0x2000000LL;
    v136 = 8LL;
    v138 = 4LL;
    v140 = 4LL;
    v142 = 1LL;
    v144 = 2LL;
    v145 = v38;
    v146[1] = 0;
    TlgWrite(&stru_1402F3680, &unk_14027E634, 0LL, 0LL, 8u, &pData);
  }
  if ( v59 )
    ExFreePoolWithTag(v66.Buffer, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
