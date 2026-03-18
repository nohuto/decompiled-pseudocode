/*
 * XREFs of PopCaptureReasonContext @ 0x1400D156C
 * Callers:
 *     PoCaptureReasonContext @ 0x1400D1330 (PoCaptureReasonContext.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     PopSafeCopyUnicodeString @ 0x1400D1828 (PopSafeCopyUnicodeString.c)
 *     memset @ 0x140195A80 (memset.c)
 *     EvaluateCurrentState @ 0x140233034 (EvaluateCurrentState.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopCaptureReasonContext(__int64 a1, char a2, bool *a3, _QWORD *a4)
{
  SIZE_T v7; // rdi
  unsigned int v8; // r15d
  ULONG64 v9; // r12
  int v10; // ebp
  unsigned __int64 v12; // rax
  ULONG64 v13; // rcx
  unsigned int v14; // edx
  unsigned __int16 *v15; // rcx
  SIZE_T v16; // r8
  _QWORD *PoolWithQuotaTag; // rax
  _QWORD *v18; // r14
  unsigned __int64 v19; // rbx
  int v20; // eax
  int v21; // edi
  unsigned int v22; // ebx
  UNICODE_STRING *p_SourceString; // rcx
  wchar_t *Buffer; // rax
  UNICODE_STRING v25; // [rsp+30h] [rbp-58h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-48h] BYREF

  v7 = 56LL;
  *a4 = 0LL;
  if ( a3 )
    *a3 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( !a1 )
  {
    v10 = 0x80000000;
    goto LABEL_25;
  }
  if ( *(_DWORD *)a1 )
    return 3221225485LL;
  v10 = *(_DWORD *)(a1 + 4);
  if ( (v10 & 1) != 0 )
  {
    if ( (((unsigned __int8)*(_WORD *)(a1 + 8) + 2) & 1) != 0 )
      return 3221225485LL;
    v7 = *(unsigned __int16 *)(a1 + 8) + 90LL;
  }
  else if ( (v10 & 2) != 0 )
  {
    if ( ((*(_BYTE *)(a1 + 8) + 2) & 1) != 0 )
      return 3221225485LL;
    v8 = *(_DWORD *)(a1 + 28);
    v7 = *(unsigned __int16 *)(a1 + 8) + 90LL;
    v12 = 16LL * v8;
    if ( v12 > 0xFFFFFFFF )
      return 3221225485LL;
    v9 = *(_QWORD *)(a1 + 32);
    if ( a2 && (_DWORD)v12 )
    {
      if ( (v9 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = v9 + (unsigned int)v12;
      if ( v13 > MmUserProbeAddress || v13 < v9 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v14 = 0;
    if ( v8 )
    {
      v15 = (unsigned __int16 *)v9;
      do
      {
        v16 = v7 + *v15 + 2LL;
        if ( v16 < v7 )
          return 3221225485LL;
        ++v14;
        v15 += 8;
        v7 = v16;
      }
      while ( v14 < v8 );
    }
  }
  else if ( (v10 & 0x80000000) == 0 )
  {
    return 3221225485LL;
  }
LABEL_25:
  if ( a2 )
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7, 0x78435250u);
  else
    PoolWithQuotaTag = ExAllocatePoolWithTag(PagedPool, v7, 0x78435250u);
  v18 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  if ( (unsigned int)EvaluateCurrentState(&g_Feature_4274317627_57077665_FeatureDescriptorDetails) )
    memset(v18, 0, v7);
  *a4 = v18;
  if ( v10 < 0 )
  {
    v18[6] = 0LL;
    return 0;
  }
  v19 = ((unsigned __int64)v18 + 63) & 0xFFFFFFFFFFFFFFF8uLL;
  v18[6] = (char *)v18 + v7 - v19;
  *(_DWORD *)v19 = v10;
  *(_QWORD *)(v19 + 8) = 32LL;
  v20 = PopSafeCopyUnicodeString((PCUNICODE_STRING)(a1 + 8));
  v21 = v20;
  if ( (v10 & 1) == 0 )
  {
    if ( v20 < 0 )
      goto LABEL_36;
    *(_WORD *)(v19 + 16) = *(_WORD *)(a1 + 24);
    *(_DWORD *)(v19 + 20) = v8;
    *(_QWORD *)(v19 + 24) = 32LL;
    v22 = 0;
    if ( v8 )
    {
      do
      {
        p_SourceString = (UNICODE_STRING *)(v9 + 16LL * v22);
        if ( a2 )
        {
          if ( (unsigned __int64)p_SourceString >= MmUserProbeAddress )
            p_SourceString = (UNICODE_STRING *)MmUserProbeAddress;
          *(_DWORD *)&v25.Length = *(_DWORD *)&p_SourceString->Length;
          Buffer = p_SourceString->Buffer;
          p_SourceString = &SourceString;
          v25.Buffer = Buffer;
          SourceString = v25;
        }
        v21 = PopSafeCopyUnicodeString(p_SourceString);
        if ( v21 < 0 )
          goto LABEL_36;
      }
      while ( ++v22 < v8 );
    }
LABEL_46:
    if ( a3 )
      *a3 = (*(_BYTE *)(a1 + 4) & 4) != 0;
    return 0;
  }
  if ( v20 >= 0 )
    goto LABEL_46;
LABEL_36:
  ExFreePoolWithTag(v18, 0x78435250u);
  *a4 = 0LL;
  return (unsigned int)v21;
}
