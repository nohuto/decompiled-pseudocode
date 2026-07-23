/*
 * XREFs of CmRealKCBToVirtualPath @ 0x1403E1950
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x1403E1228 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteCreateLogic @ 0x1404BC7F8 (CmpVEExecuteCreateLogic.c)
 *     CmpReparseToVirtualPath @ 0x14060180C (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x14060184C (CmpReplicateKeyToVirtual.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140602934 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpGetVirtualizationID @ 0x1403E1B4C (CmpGetVirtualizationID.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     CmpConstructName @ 0x14051A1D8 (CmpConstructName.c)
 */

__int64 __fastcall CmRealKCBToVirtualPath(__int64 a1, __m128i *a2, UNICODE_STRING *a3)
{
  char v5; // r15
  _QWORD *v7; // rsi
  NTSTATUS VirtualizationID; // ebx
  unsigned int v9; // ebx
  __m128i v10; // xmm0
  wchar_t *v11; // xmm0_8
  unsigned __int16 Length; // ax
  wchar_t *PoolWithTag; // rax
  wchar_t *v14; // rax
  UNICODE_STRING v15; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v17; // [rsp+40h] [rbp-10h] BYREF

  Source.Length = 0;
  *(_QWORD *)&Source.MaximumLength = 0LL;
  v5 = 0;
  *(_DWORD *)((char *)&Source.Buffer + 2) = 0;
  HIWORD(Source.Buffer) = 0;
  v15.Length = 0;
  *(_QWORD *)&v15.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v15.Buffer + 2) = 0;
  HIWORD(v15.Buffer) = 0;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  v7 = (_QWORD *)CmpConstructName(a1, a2);
  if ( !v7 )
    return 3221225626LL;
  VirtualizationID = CmpGetVirtualizationID(&Source);
  if ( VirtualizationID >= 0 )
  {
    v9 = *(unsigned __int16 *)v7 + Source.Length + 38;
    if ( a2 )
    {
      v10 = *a2;
      *(_QWORD *)&v15.Length = a2->m128i_i64[0];
      v11 = (wchar_t *)_mm_srli_si128(v10, 8).m128i_u64[0];
      v15.Buffer = v11;
      if ( v11 )
      {
        Length = v15.Length;
        if ( v15.Length )
        {
          if ( *v11 )
          {
            if ( *v11 == 92 )
            {
              Length = v15.Length - 2;
              v15.Buffer = v11 + 1;
              v15.Length -= 2;
            }
            if ( Length )
            {
              v9 += Length + 2;
              v5 = 1;
            }
          }
        }
      }
    }
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x624E4D43u);
    a3->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      a3->MaximumLength = v9;
      a3->Length = 0;
      VirtualizationID = RtlAppendUnicodeToString(a3, L"\\Registry\\User\\");
      if ( VirtualizationID < 0 )
        goto LABEL_23;
      VirtualizationID = RtlAppendUnicodeStringToString(a3, &Source);
      if ( VirtualizationID < 0 )
        goto LABEL_23;
      VirtualizationID = RtlAppendUnicodeToString(a3, L"\\VirtualStore");
      if ( VirtualizationID < 0
        || (v14 = (wchar_t *)(v7[1] + 18LL),
            *(_QWORD *)&v17.Length = *v7,
            v17.Buffer = v14,
            v17.Length = *(_WORD *)v7 - 18,
            VirtualizationID = RtlAppendUnicodeStringToString(a3, &v17),
            VirtualizationID < 0)
        || v5
        && ((VirtualizationID = RtlAppendUnicodeToString(a3, L"\\"), VirtualizationID < 0)
         || (VirtualizationID = RtlAppendUnicodeStringToString(a3, &v15), VirtualizationID < 0)) )
      {
LABEL_23:
        RtlFreeAnsiString(a3);
      }
    }
    else
    {
      VirtualizationID = -1073741670;
    }
  }
  CmpFreeTransientPoolWithTag(v7, 0x624E4D43u);
  RtlFreeAnsiString(&Source);
  return (unsigned int)VirtualizationID;
}
