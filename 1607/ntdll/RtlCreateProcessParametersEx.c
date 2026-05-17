/*
 * XREFs of RtlCreateProcessParametersEx @ 0x18005E900
 * Callers:
 *     RtlCreateProcessParameters @ 0x1800D40E0 (RtlCreateProcessParameters.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpCopyProcString @ 0x18005ED68 (RtlpCopyProcString.c)
 *     ValidateOptionalString @ 0x18005EE08 (ValidateOptionalString.c)
 *     ValidateStringParameter @ 0x18005EE1C (ValidateStringParameter.c)
 *     RtlpGetBlockSizeEx @ 0x18005FCA4 (RtlpGetBlockSizeEx.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlDeNormalizeProcessParams @ 0x1800D4150 (RtlDeNormalizeProcessParams.c)
 */

__int64 __fastcall RtlCreateProcessParametersEx(
        _QWORD *a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        void *Src,
        unsigned __int16 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11)
{
  __int64 v14; // r8
  unsigned __int64 v15; // r14
  __int16 v16; // r8
  _WORD *v17; // rcx
  unsigned __int16 *v18; // r8
  __int64 v19; // r9
  unsigned __int16 *v20; // r10
  unsigned __int16 *v21; // r11
  _WORD *v22; // rdx
  unsigned __int16 *v23; // rsi
  unsigned __int16 *v24; // rax
  unsigned __int16 *v25; // rbx
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // r15
  size_t BlockSize; // rsi
  unsigned __int64 v31; // rdi
  __int64 Heap; // rax
  _DWORD *v33; // rbx
  _RTL_USER_PROCESS_PARAMETERS *v34; // rdi
  __int64 v35; // r9
  char v37; // [rsp+20h] [rbp-40h]
  _DWORD *v38; // [rsp+28h] [rbp-38h] BYREF
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // [rsp+30h] [rbp-30h]
  unsigned __int16 *v40; // [rsp+38h] [rbp-28h]
  unsigned __int16 *v41; // [rsp+40h] [rbp-20h]
  unsigned __int16 *v42; // [rsp+48h] [rbp-18h]
  _WORD *v43; // [rsp+50h] [rbp-10h]
  unsigned __int16 *v46; // [rsp+C0h] [rbp+60h]

  if ( (a11 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  if ( (int)ValidateStringParameter(a2) < 0 || (int)ValidateOptionalString(v14) < 0 )
    return 3221225485LL;
  v37 = 0;
  v15 = 0LL;
  if ( a4 )
  {
    v15 = (unsigned __int64)*a4 >> 1;
    if ( (int)ValidateStringParameter(a4) < 0 || !v15 )
      return 3221225485LL;
    if ( *(_WORD *)(*((_QWORD *)a4 + 1) + 2 * v15 - 2) != v16 )
    {
      if ( v15 > 0x103 )
        return 3221225485LL;
      v37 = 1;
    }
  }
  if ( (int)ValidateOptionalString(a5) < 0
    || (int)ValidateOptionalString(a7) < 0
    || (int)ValidateOptionalString(a8) < 0
    || (int)ValidateOptionalString(a9) < 0
    || (int)ValidateOptionalString(a10) < 0 )
  {
    return 3221225485LL;
  }
  v22 = &RtlpNullString;
  v23 = (unsigned __int16 *)&RtlpNullString;
  v24 = (unsigned __int16 *)&RtlpNullString;
  if ( !v18 )
    v18 = a2;
  v46 = v18;
  if ( a7 )
    v23 = a7;
  v25 = (unsigned __int16 *)&RtlpNullString;
  v40 = v23;
  if ( v21 )
    v25 = v21;
  v41 = v25;
  if ( v20 )
    v24 = v20;
  v42 = v24;
  v26 = v25[1];
  if ( v17 )
    v22 = v17;
  v27 = *v18 + 9LL;
  v28 = v24[1] + 7LL;
  v43 = v22;
  v29 = ((*a2 + 9LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v23[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + (v28 & 0xFFFFFFFFFFFFFFF8uLL)
      + (v27 & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v26 + 7) & 0xFFFFFFFFFFFFFFF8uLL)
      + 1560;
  if ( *v22 )
    v29 += ((unsigned __int16)v22[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a3 )
    v29 += (*(unsigned __int16 *)(a3 + 2) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( Src )
    BlockSize = RtlpGetBlockSizeEx(Src, 1LL);
  else
    BlockSize = *(_QWORD *)(v19 + 1008);
  while ( 1 )
  {
    v31 = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v31 < BlockSize || v31 + v29 < v29 )
      return 3221225621LL;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v31 + v29);
    v33 = (_DWORD *)Heap;
    if ( !Heap )
      return 3221225626LL;
    if ( Src )
    {
      memmove((void *)(v29 + Heap), Src, BlockSize);
      goto LABEL_36;
    }
    RtlEnterCriticalSection((__int64)&FastPebLock);
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( BlockSize <= v31 )
      break;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v33);
  }
  memmove((char *)v33 + v29, ProcessParameters->Environment, ProcessParameters->EnvironmentSize);
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  v31 = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_36:
  memset(v33, 0, 0x410uLL);
  *((_QWORD *)v33 + 126) = v31;
  v34 = ProcessParameters;
  *((_QWORD *)v33 + 16) = (char *)v33 + v29;
  *v33 = v29;
  v33[1] = v29;
  v38 = v33 + 260;
  *((_QWORD *)v33 + 1) = 1LL;
  *((_QWORD *)v33 + 9) = 0LL;
  v33[6] = v34->ConsoleFlags;
  if ( a4 )
  {
    RtlpCopyProcString(&v38, v33 + 14, a4, 520LL);
    if ( v37 )
    {
      *(_WORD *)(*((_QWORD *)v33 + 8) + 2 * v15) = 92;
      *((_WORD *)v33 + 28) += 2;
    }
  }
  else
  {
    RtlEnterCriticalSection((__int64)&FastPebLock);
    RtlpCopyProcString(&v38, v33 + 14, &v34->CurrentDirectory, 520LL);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
  }
  if ( a3 )
    RtlpCopyProcString(&v38, v33 + 20, a3, *(unsigned __int16 *)(a3 + 2));
  RtlpCopyProcString(&v38, v33 + 24, a2, (unsigned int)*a2 + 2);
  if ( *v46 == v46[1] )
    v35 = v46[1];
  else
    v35 = (unsigned int)*v46 + 2;
  RtlpCopyProcString(&v38, v33 + 28, v46, v35);
  RtlpCopyProcString(&v38, v33 + 44, v40, v40[1]);
  RtlpCopyProcString(&v38, v33 + 48, v41, v41[1]);
  RtlpCopyProcString(&v38, v33 + 52, v42, v42[1]);
  if ( *v43 )
    RtlpCopyProcString(&v38, v33 + 56, v43, (unsigned __int16)v43[1]);
  if ( (a11 & 1) != 0 )
    *a1 = v33;
  else
    *a1 = RtlDeNormalizeProcessParams(v33);
  return 0LL;
}
