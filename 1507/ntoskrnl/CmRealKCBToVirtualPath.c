/*
 * XREFs of CmRealKCBToVirtualPath @ 0x140407BD4
 * Callers:
 *     CmpVEExecuteParseLogic @ 0x1404071F8 (CmpVEExecuteParseLogic.c)
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmpReparseToVirtualPath @ 0x140658F0C (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x140658F4C (CmpReplicateKeyToVirtual.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406599C0 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     UShortAdd @ 0x1401DFDF0 (UShortAdd.c)
 *     UShortMult @ 0x1401DFE10 (UShortMult.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpGetVirtualizationID @ 0x140407F88 (CmpGetVirtualizationID.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 */

__int64 __fastcall CmRealKCBToVirtualPath(__int64 a1, __m128i *a2, UNICODE_STRING *a3)
{
  __int64 v3; // r13
  UNICODE_STRING *v4; // rsi
  char v7; // r14
  _QWORD *v9; // rdi
  USHORT *v10; // rax
  USHORT *v11; // r15
  USHORT v12; // cx
  USHORT v13; // dx
  __int64 v14; // r9
  HRESULT v15; // eax
  __int64 v16; // r9
  __int64 v17; // r9
  USHORT v18; // r14
  _QWORD *PoolWithTag; // rax
  __int16 v20; // r14
  unsigned __int16 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int16 v24; // r9
  unsigned __int16 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r10
  bool v28; // zf
  unsigned __int64 v29; // rax
  __int16 v30; // dx
  NTSTATUS VirtualizationID; // ebx
  unsigned int v32; // ebx
  __m128i v33; // xmm0
  wchar_t *v34; // xmm0_8
  unsigned __int16 Length; // ax
  wchar_t *v36; // rax
  wchar_t *v37; // rax
  USHORT pusResult[2]; // [rsp+20h] [rbp-40h] BYREF
  USHORT v39; // [rsp+24h] [rbp-3Ch] BYREF
  UNICODE_STRING v40; // [rsp+28h] [rbp-38h] BYREF
  UNICODE_STRING v41; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING Source; // [rsp+48h] [rbp-18h] BYREF

  v3 = 0LL;
  v4 = a3;
  Source.Length = 0;
  *(_QWORD *)&Source.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Source.Buffer + 2) = 0;
  v7 = 0;
  HIWORD(Source.Buffer) = 0;
  v41.Length = 0;
  *(_QWORD *)&v41.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v41.Buffer + 2) = 0;
  HIWORD(v41.Buffer) = 0;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  v9 = (_QWORD *)((__int64 (*)(void))CmpConstructName)();
  if ( v9 )
    goto LABEL_25;
  v10 = (USHORT *)CmpConstructName(*(_QWORD *)(a1 + 72));
  v11 = v10;
  if ( !v10 )
    return 3221225626LL;
  v12 = *v10;
  pusResult[0] = 0;
  *(_QWORD *)&v40.Length = 0LL;
  v39 = 0;
  if ( UShortAdd(v12, 0x10u, pusResult) || UShortAdd(pusResult[0], 2u, pusResult) )
    return 3221225626LL;
  v14 = *(_QWORD *)(a1 + 80);
  if ( (*(_DWORD *)v14 & 1) == 0 )
  {
    v15 = UShortAdd(pusResult[0], *(_WORD *)(v14 + 24), pusResult);
    *(_QWORD *)&v40.Length = v17 + 26;
    goto LABEL_12;
  }
  if ( UShortMult(*(_WORD *)(v14 + 24), v13, &v39) )
    return 3221225626LL;
  v15 = UShortAdd(pusResult[0], v39, pusResult);
  v3 = v16 + 26;
LABEL_12:
  if ( v15 )
    return 3221225626LL;
  v18 = pusResult[0];
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, pusResult[0], 0x624E4D43u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    v20 = v18 - 16;
    PoolWithTag[1] = PoolWithTag + 2;
    *(_WORD *)PoolWithTag = v20;
    *((_WORD *)PoolWithTag + 1) = v20;
    v21 = 0;
    if ( (*v11 & 0xFFFE) != 0 )
    {
      do
      {
        v22 = v21++;
        *(_WORD *)(PoolWithTag[1] + 2 * v22) = *(_WORD *)(*((_QWORD *)v11 + 1) + 2 * v22);
      }
      while ( v21 < (unsigned __int16)(*v11 >> 1) );
    }
    v23 = v21;
    v24 = 0;
    v25 = v21 + 1;
    *(_WORD *)(PoolWithTag[1] + 2 * v23) = 92;
    v26 = *(_QWORD *)(a1 + 80);
    if ( *(_WORD *)(v26 + 24) )
    {
      v27 = *(_QWORD *)&v40.Length;
      do
      {
        v28 = (*(_DWORD *)v26 & 1) == 0;
        v29 = v24;
        if ( v28 )
        {
          v24 += 2;
          *(_WORD *)(v9[1] + 2LL * v25) = *(_WORD *)(v27 + 2 * (v29 >> 1));
        }
        else
        {
          v30 = *(unsigned __int8 *)(v24++ + v3);
          *(_WORD *)(v9[1] + 2LL * v25) = v30;
        }
        v26 = *(_QWORD *)(a1 + 80);
        ++v25;
      }
      while ( v24 < *(_WORD *)(v26 + 24) );
      v4 = a3;
    }
  }
  ExFreePoolWithTag(v11, 0x624E4D43u);
  if ( !v9 )
    return 3221225626LL;
  v7 = 0;
LABEL_25:
  VirtualizationID = CmpGetVirtualizationID(&Source);
  if ( VirtualizationID >= 0 )
  {
    v32 = *(unsigned __int16 *)v9 + Source.Length + 38;
    if ( a2 )
    {
      v33 = *a2;
      *(_QWORD *)&v41.Length = a2->m128i_i64[0];
      v34 = (wchar_t *)_mm_srli_si128(v33, 8).m128i_u64[0];
      v41.Buffer = v34;
      if ( v34 )
      {
        Length = v41.Length;
        if ( v41.Length )
        {
          if ( *v34 )
          {
            if ( *v34 == 92 )
            {
              v41.Buffer = v34 + 1;
              Length = v41.Length - 2;
              v41.Length -= 2;
            }
            if ( Length )
            {
              v32 += Length + 2;
              v7 = 1;
            }
          }
        }
      }
    }
    v36 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v32, 0x624E4D43u);
    v4->Buffer = v36;
    if ( v36 )
    {
      v4->MaximumLength = v32;
      v4->Length = 0;
      VirtualizationID = RtlAppendUnicodeToString(v4, L"\\Registry\\User\\");
      if ( VirtualizationID < 0 )
        goto LABEL_43;
      VirtualizationID = RtlAppendUnicodeStringToString(v4, &Source);
      if ( VirtualizationID < 0 )
        goto LABEL_43;
      VirtualizationID = RtlAppendUnicodeToString(v4, L"\\VirtualStore");
      if ( VirtualizationID < 0
        || (v37 = (wchar_t *)(v9[1] + 18LL),
            *(_QWORD *)&v40.Length = *v9,
            v40.Buffer = v37,
            v40.Length = *(_WORD *)v9 - 18,
            VirtualizationID = RtlAppendUnicodeStringToString(v4, &v40),
            VirtualizationID < 0)
        || v7
        && ((VirtualizationID = RtlAppendUnicodeToString(v4, L"\\"), VirtualizationID < 0)
         || (VirtualizationID = RtlAppendUnicodeStringToString(v4, &v41), VirtualizationID < 0)) )
      {
LABEL_43:
        RtlFreeAnsiString(v4);
      }
    }
    else
    {
      VirtualizationID = -1073741670;
    }
  }
  ExFreePoolWithTag(v9, 0x624E4D43u);
  RtlFreeAnsiString(&Source);
  return (unsigned int)VirtualizationID;
}
