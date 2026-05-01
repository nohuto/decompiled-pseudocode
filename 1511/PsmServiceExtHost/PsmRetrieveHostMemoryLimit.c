/*
 * XREFs of PsmRetrieveHostMemoryLimit @ 0x180018AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009D60 (-GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z.c)
 *     RmpEnforcementSettingsUpdateLimit @ 0x180019220 (RmpEnforcementSettingsUpdateLimit.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 *     RmpEmptyWorkerCleanup @ 0x18001BC5C (RmpEmptyWorkerCleanup.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18002BC66 (memcmp_0.c)
 *     memcpy_0 @ 0x18002BC72 (memcpy_0.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall PsmRetrieveHostMemoryLimit(void *Src, int a2, const wchar_t *a3, int a4, __int64 a5, _QWORD *a6)
{
  ULONG v10; // eax
  __int64 v11; // rbx
  __int64 v12; // r15
  ULONG v13; // eax
  wchar_t *v14; // rcx
  wchar_t *v15; // rax
  __int64 v16; // rdx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // r12
  WCHAR *v27; // rbx
  __int128 v28; // xmm1
  __int64 v29; // rax
  __int64 v30; // rdi
  WCHAR *v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  int v34; // esi
  unsigned int v35; // r9d
  __int64 v36; // r11
  __int64 v37; // r10
  unsigned int v38; // r9d
  __int64 v39; // rbx
  int v40; // ecx
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  _QWORD *v43; // rbx
  __int64 v44; // rax
  const wchar_t *v45; // rcx
  __int64 v47; // rax
  void *v48; // rcx
  void *v49; // rcx
  __int64 v50; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR v51; // [rsp+38h] [rbp-C8h]
  unsigned int v52; // [rsp+3Ch] [rbp-C4h] BYREF
  int v53; // [rsp+40h] [rbp-C0h]
  int v54; // [rsp+44h] [rbp-BCh]
  int v55; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v56; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v57; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v58; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v60; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v61; // [rsp+88h] [rbp-78h] BYREF
  __int128 v62; // [rsp+90h] [rbp-70h] BYREF
  __int128 v63; // [rsp+A0h] [rbp-60h]
  __int128 v64; // [rsp+B0h] [rbp-50h]
  __int128 v65; // [rsp+C0h] [rbp-40h]
  __int128 v66; // [rsp+D0h] [rbp-30h]
  _BYTE Sid[80]; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t Destination[232]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v69[68]; // [rsp+300h] [rbp+200h] BYREF
  int v70; // [rsp+344h] [rbp+244h]
  int v71; // [rsp+348h] [rbp+248h]
  __int64 v72; // [rsp+350h] [rbp+250h]
  wchar_t String1[232]; // [rsp+360h] [rbp+260h] BYREF
  WCHAR Buf1[48]; // [rsp+530h] [rbp+430h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+590h] [rbp+490h] BYREF
  void *v76; // [rsp+5A0h] [rbp+4A0h]
  int v77; // [rsp+5A8h] [rbp+4A8h]
  int v78; // [rsp+5ACh] [rbp+4ACh]
  unsigned int *v79; // [rsp+5B0h] [rbp+4B0h]
  __int64 v80; // [rsp+5B8h] [rbp+4B8h]
  const wchar_t *v81; // [rsp+5C0h] [rbp+4C0h]
  int v82; // [rsp+5C8h] [rbp+4C8h]
  int v83; // [rsp+5CCh] [rbp+4CCh]
  void *v84; // [rsp+5D0h] [rbp+4D0h]
  int v85; // [rsp+5D8h] [rbp+4D8h]
  int v86; // [rsp+5DCh] [rbp+4DCh]
  int *v87; // [rsp+5E0h] [rbp+4E0h]
  __int64 v88; // [rsp+5E8h] [rbp+4E8h]
  __int64 *v89; // [rsp+5F0h] [rbp+4F0h]
  __int64 v90; // [rsp+5F8h] [rbp+4F8h]
  __int64 *v91; // [rsp+600h] [rbp+500h]
  __int64 v92; // [rsp+608h] [rbp+508h]
  _QWORD *v93; // [rsp+610h] [rbp+510h]
  __int64 v94; // [rsp+618h] [rbp+518h]

  v53 = a2;
  v54 = a4;
  v56 = a6;
  memset_0(Sid, 0, 0x44uLL);
  v10 = RtlLengthSid(Src);
  memcpy_0(Sid, Src, v10);
  v11 = a5;
  v12 = 0LL;
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, a3);
  memset_0(v69, 0, sizeof(v69));
  v13 = RtlLengthSid(Sid);
  memcpy_0(v69, Sid, v13);
  v70 = a2;
  v71 = a4;
  v72 = v11;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v14 = String1;
  v15 = Destination;
  v16 = 4LL;
  do
  {
    v14 += 64;
    v17 = *(_OWORD *)v15;
    v18 = *((_OWORD *)v15 + 1);
    v15 += 64;
    *((_OWORD *)v14 - 8) = v17;
    v19 = *((_OWORD *)v15 - 6);
    *((_OWORD *)v14 - 7) = v18;
    v20 = *((_OWORD *)v15 - 5);
    *((_OWORD *)v14 - 6) = v19;
    v21 = *((_OWORD *)v15 - 4);
    *((_OWORD *)v14 - 5) = v20;
    v22 = *((_OWORD *)v15 - 3);
    *((_OWORD *)v14 - 4) = v21;
    v23 = *((_OWORD *)v15 - 2);
    *((_OWORD *)v14 - 3) = v22;
    v24 = *((_OWORD *)v15 - 1);
    *((_OWORD *)v14 - 2) = v23;
    *((_OWORD *)v14 - 1) = v24;
    --v16;
  }
  while ( v16 );
  v25 = *(_OWORD *)v15;
  v26 = 0LL;
  v27 = String1;
  v28 = *((_OWORD *)v15 + 1);
  v29 = *((_QWORD *)v15 + 4);
  v30 = 314159LL;
  *(_OWORD *)v14 = v25;
  *((_OWORD *)v14 + 1) = v28;
  *((_QWORD *)v14 + 4) = v29;
  do
  {
    v51 = RtlUpcaseUnicodeChar(*v27++);
    v30 = HIBYTE(v51) + 37 * ((unsigned __int8)v51 + 37 * v30);
  }
  while ( v27 < Buf1 );
  v31 = Buf1;
  v32 = 11LL;
  do
  {
    v33 = *(unsigned __int8 *)v31;
    v31 += 4;
    v30 = *((unsigned __int8 *)v31 - 1)
        + 37
        * (*((unsigned __int8 *)v31 - 2)
         + 37
         * (*((unsigned __int8 *)v31 - 3)
          + 37
          * (*((unsigned __int8 *)v31 - 4)
           + 37
           * (*((unsigned __int8 *)v31 - 5)
            + 37 * (*((unsigned __int8 *)v31 - 6) + 37 * (*((unsigned __int8 *)v31 - 7) + 37 * (v33 + 37 * v30)))))));
    --v32;
  }
  while ( v32 );
  v34 = -1073741275;
  RtlAcquireSRWLockShared((char *)RmSvcGlobals + 40);
LABEL_8:
  v35 = *((_DWORD *)RmSvcGlobals + 439);
  v36 = -1LL << (*((_BYTE *)RmSvcGlobals + 1756) & 0x1F);
  v37 = v36 & v30;
  v50 = v36 & v30;
  if ( v26 )
    goto LABEL_11;
  v38 = v35 >> 5;
  if ( v38 )
  {
    v26 = *((_QWORD *)RmSvcGlobals + 220)
        + 8LL
        * ((37
          * (BYTE6(v50)
           + 37
           * (BYTE5(v50)
            + 37
            * (BYTE4(v50)
             + 37 * (BYTE3(v50) + 37 * (BYTE2(v50) + 37 * (BYTE1(v50) + 37 * ((unsigned __int8)v37 + 11623883)))))))
          + HIBYTE(v50)) & (v38 - 1));
LABEL_11:
    while ( 1 )
    {
      v26 = *(_QWORD *)v26;
      if ( (v26 & 1) != 0 )
        break;
      if ( v37 == (v36 & *(_QWORD *)(v26 + 8)) )
      {
        v39 = v26 - 856;
        if ( !*(_DWORD *)(v26 - 856 + 40)
          && !_wcsicmp(String1, (const wchar_t *)(v39 + 48))
          && !memcmp_0(Buf1, (const void *)(v39 + 512), 0x58uLL) )
        {
          v34 = 0;
          _InterlockedIncrement((volatile signed __int32 *)(v39 + 16));
          v12 = v26 - 856;
          break;
        }
        goto LABEL_8;
      }
    }
  }
  RtlReleaseSRWLockShared((char *)RmSvcGlobals + 40);
  if ( v34 < 0 )
  {
    v43 = v56;
    goto LABEL_22;
  }
  v62 = *(_OWORD *)(v12 + 624);
  v63 = *(_OWORD *)(v12 + 640);
  v64 = *(_OWORD *)(v12 + 656);
  v65 = *(_OWORD *)(v12 + 672);
  v66 = *(_OWORD *)(v12 + 688);
  v40 = *(_DWORD *)(v12 + 40);
  if ( v40 )
  {
    if ( v40 != 1 )
      goto LABEL_21;
    v47 = *(_QWORD *)(v12 + 600);
    v41 = *(_QWORD *)(v47 + 1464);
    v42 = *(_QWORD *)(v47 + 1848);
    v58 = v41;
    v57 = v42;
  }
  else
  {
    ExecutionModel::ModernActivationResourceInfo::GetAggregateCommitMemValues(
      *(ExecutionModel::ModernActivationResourceInfo **)(v12 + 600),
      &v57,
      0LL,
      &v58,
      &v60,
      &v61);
    v41 = v58;
    v42 = v57;
  }
  *(_QWORD *)&v64 = v41 + *(_QWORD *)(v12 + 848) - v42;
LABEL_21:
  RmpEnforcementSettingsUpdateLimit(v12, &v62);
  v43 = v56;
  v34 = 0;
  *v56 = v63;
LABEL_22:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v12 && _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 16), 0xFFFFFFFF) == 1 )
  {
    if ( *(_DWORD *)(v12 + 32) == 1 )
    {
      if ( *(_QWORD *)(v12 + 752) )
        TpReleaseWork();
      RmpEmptyWorkerCleanup(v12 + 800);
      if ( *(_DWORD *)(v12 + 40) == 1 )
      {
        v48 = *(void **)(v12 + 704);
        if ( v48 )
          CloseHandle(v48);
        v49 = *(void **)(v12 + 712);
        if ( v49 )
          CloseHandle(v49);
      }
    }
    RmpFreeHeap((PVOID)v12);
  }
  v52 = v34;
  if ( (unsigned int)dword_180071060 <= 4 || (qword_180071070 & 1) == 0 || (qword_180071078 & 1) != qword_180071078 )
    return (unsigned int)v34;
  v80 = 4LL;
  v79 = &v52;
  LODWORD(v44) = 0;
  v45 = (const wchar_t *)&unk_1800574EC;
  if ( a3 )
  {
    v45 = a3;
    v44 = -1LL;
    do
      ++v44;
    while ( a3[v44] );
  }
  v81 = v45;
  v82 = 2 * v44 + 2;
  v83 = 0;
  LOBYTE(v44) = *((_BYTE *)Src + 1);
  if ( (unsigned __int8)v44 > 0xFu )
    LODWORD(v44) = 15;
  else
    LODWORD(v44) = (unsigned __int8)v44;
  v84 = Src;
  v85 = 4 * v44 + 8;
  v55 = v53;
  v87 = &v55;
  LODWORD(v50) = v54;
  v89 = &v50;
  v91 = &a5;
  v86 = 0;
  v88 = 4LL;
  v90 = 4LL;
  v92 = 8LL;
  v93 = v43;
  v94 = 8LL;
  *(_DWORD *)&EventDescriptor.Level = 4;
  UserData.Ptr = (ULONGLONG)off_180071068;
  *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180060D31 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
  EventDescriptor.Keyword = 1LL;
  UserData.Size = *(unsigned __int16 *)off_180071068;
  v76 = &unk_180060D3C;
  UserData.Reserved = 2;
  v77 = 106;
  v78 = 1;
  EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  return v52;
}
