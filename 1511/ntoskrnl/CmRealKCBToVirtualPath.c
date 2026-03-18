/*
 * XREFs of CmRealKCBToVirtualPath @ 0x1403BCD04
 * Callers:
 *     CmpVEExecuteParseLogic @ 0x1403BC378 (CmpVEExecuteParseLogic.c)
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmpReparseToVirtualPath @ 0x1405E2990 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1405E29D0 (CmpReplicateKeyToVirtual.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1405E3324 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpGetVirtualizationID @ 0x1403BD028 (CmpGetVirtualizationID.c)
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 */

__int64 __fastcall CmRealKCBToVirtualPath(__int64 a1, __m128i *a2, UNICODE_STRING *a3)
{
  __int64 v3; // r12
  UNICODE_STRING *v4; // rsi
  char v7; // r15
  _QWORD *v8; // rdi
  NTSTATUS VirtualizationID; // ebx
  unsigned int v10; // ebx
  __m128i v11; // xmm0
  wchar_t *v12; // xmm0_8
  unsigned __int16 Length; // ax
  wchar_t *v14; // rax
  wchar_t *v15; // rax
  _WORD *v17; // rax
  _QWORD *v18; // r15
  __int64 v19; // rdx
  __int16 v20; // bx
  unsigned __int16 v21; // bx
  _QWORD *PoolWithTag; // rax
  __int16 v23; // bx
  unsigned __int16 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int16 v27; // r9
  unsigned __int16 v28; // r8
  __int64 v29; // rax
  __int64 v30; // r10
  bool v31; // zf
  unsigned __int64 v32; // rax
  __int16 v33; // dx
  UNICODE_STRING v34; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING v35; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING Source; // [rsp+40h] [rbp-10h] BYREF

  v3 = 0LL;
  v4 = a3;
  Source.Length = 0;
  *(_QWORD *)&Source.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Source.Buffer + 2) = 0;
  v7 = 0;
  HIWORD(Source.Buffer) = 0;
  v35.Length = 0;
  *(_QWORD *)&v35.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v35.Buffer + 2) = 0;
  HIWORD(v35.Buffer) = 0;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  v8 = (_QWORD *)CmpConstructName(a1);
  if ( !v8 )
  {
    v17 = (_WORD *)CmpConstructName(*(_QWORD *)(a1 + 72));
    v18 = v17;
    if ( !v17 )
      return 3221225626LL;
    v19 = *(_QWORD *)(a1 + 80);
    v20 = *v17 + 18;
    *(_QWORD *)&v34.Length = 0LL;
    if ( (*(_DWORD *)v19 & 1) != 0 )
    {
      v21 = 2 * *(_WORD *)(v19 + 24) + v20;
      *(_QWORD *)&v34.Length = v19 + 26;
    }
    else
    {
      v21 = *(_WORD *)(v19 + 24) + v20;
      v3 = v19 + 26;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v21, 0x624E4D43u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      v23 = v21 - 16;
      PoolWithTag[1] = PoolWithTag + 2;
      *(_WORD *)PoolWithTag = v23;
      *((_WORD *)PoolWithTag + 1) = v23;
      v24 = 0;
      if ( (*(_WORD *)v18 & 0xFFFE) != 0 )
      {
        do
        {
          v25 = v24++;
          *(_WORD *)(PoolWithTag[1] + 2 * v25) = *(_WORD *)(v18[1] + 2 * v25);
        }
        while ( v24 < (unsigned __int16)(*(_WORD *)v18 >> 1) );
      }
      v26 = v24;
      v27 = 0;
      v28 = v24 + 1;
      *(_WORD *)(PoolWithTag[1] + 2 * v26) = 92;
      v29 = *(_QWORD *)(a1 + 80);
      if ( *(_WORD *)(v29 + 24) )
      {
        v30 = *(_QWORD *)&v34.Length;
        do
        {
          v31 = (*(_DWORD *)v29 & 1) == 0;
          v32 = v27;
          if ( v31 )
          {
            v27 += 2;
            *(_WORD *)(v8[1] + 2LL * v28) = *(_WORD *)(v3 + 2 * (v32 >> 1));
          }
          else
          {
            v33 = *(unsigned __int8 *)(v27++ + v30);
            *(_WORD *)(v8[1] + 2LL * v28) = v33;
          }
          v29 = *(_QWORD *)(a1 + 80);
          ++v28;
        }
        while ( v27 < *(_WORD *)(v29 + 24) );
        v4 = a3;
      }
    }
    ExFreePoolWithTag(v18, 0x624E4D43u);
    if ( !v8 )
      return 3221225626LL;
    v7 = 0;
  }
  VirtualizationID = CmpGetVirtualizationID(&Source);
  if ( VirtualizationID >= 0 )
  {
    v10 = *(unsigned __int16 *)v8 + Source.Length + 38;
    if ( a2 )
    {
      v11 = *a2;
      *(_QWORD *)&v35.Length = a2->m128i_i64[0];
      v12 = (wchar_t *)_mm_srli_si128(v11, 8).m128i_u64[0];
      v35.Buffer = v12;
      if ( v12 )
      {
        Length = v35.Length;
        if ( v35.Length )
        {
          if ( *v12 )
          {
            if ( *v12 == 92 )
            {
              v35.Buffer = v12 + 1;
              Length = v35.Length - 2;
              v35.Length -= 2;
            }
            if ( Length )
            {
              v10 += Length + 2;
              v7 = 1;
            }
          }
        }
      }
    }
    v14 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x624E4D43u);
    v4->Buffer = v14;
    if ( v14 )
    {
      v4->MaximumLength = v10;
      v4->Length = 0;
      VirtualizationID = RtlAppendUnicodeToString(v4, L"\\Registry\\User\\");
      if ( VirtualizationID < 0 )
        goto LABEL_40;
      VirtualizationID = RtlAppendUnicodeStringToString(v4, &Source);
      if ( VirtualizationID < 0 )
        goto LABEL_40;
      VirtualizationID = RtlAppendUnicodeToString(v4, L"\\VirtualStore");
      if ( VirtualizationID < 0
        || (v15 = (wchar_t *)(v8[1] + 18LL),
            *(_QWORD *)&v34.Length = *v8,
            v34.Buffer = v15,
            v34.Length = *(_WORD *)v8 - 18,
            VirtualizationID = RtlAppendUnicodeStringToString(v4, &v34),
            VirtualizationID < 0)
        || v7
        && ((VirtualizationID = RtlAppendUnicodeToString(v4, L"\\"), VirtualizationID < 0)
         || (VirtualizationID = RtlAppendUnicodeStringToString(v4, &v35), VirtualizationID < 0)) )
      {
LABEL_40:
        RtlFreeAnsiString(v4);
      }
    }
    else
    {
      VirtualizationID = -1073741670;
    }
  }
  ExFreePoolWithTag(v8, 0x624E4D43u);
  RtlFreeAnsiString(&Source);
  return (unsigned int)VirtualizationID;
}
