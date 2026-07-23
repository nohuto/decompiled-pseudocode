/*
 * XREFs of RtlpTpIoDllProcessUnloads @ 0x1800F6084
 * Callers:
 *     RtlpTpIoDllUnloaded @ 0x18007EDEC (RtlpTpIoDllUnloaded.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x18003DB58 (TpAdjustBindingCount.c)
 *     RtlDuplicateUnicodeString @ 0x18006BC20 (RtlDuplicateUnicodeString.c)
 */

void __fastcall RtlpTpIoDllProcessUnloads(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  int v5; // r8d
  __int64 v6; // rax
  int v7; // r8d
  __int64 v8; // rcx
  unsigned int v9; // edx

  for ( i = a2; ; i = *(_QWORD *)(i + 96) - 96LL )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(i + 120);
      if ( (v5 & 2) != 0 )
        break;
      v6 = *(_QWORD *)(i + 104);
      v7 = v5 | 2;
LABEL_6:
      *(_DWORD *)(i + 120) = v7;
      if ( v6 )
        i = v6 - 96;
    }
    if ( (v5 & 4) == 0 )
    {
      v6 = *(_QWORD *)(i + 112);
      v7 = v5 | 4;
      goto LABEL_6;
    }
    if ( *(_QWORD *)(a1 + 24) <= *(_QWORD *)i
      && *(_QWORD *)i < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      v8 = *(_QWORD *)(i + 80);
      v9 = -*(_DWORD *)(i + 88);
      *(_DWORD *)(i + 120) = v5 | 1;
      TpAdjustBindingCount(v8, v9);
      *(_QWORD *)(i + 64) = 0LL;
      *(_QWORD *)(i + 144) = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(i + 152) = *(_DWORD *)(a1 + 32);
      RtlDuplicateUnicodeString(1u, *(PUNICODE_STRING *)(a1 + 8), (PUNICODE_STRING)(i + 128));
    }
    *(_DWORD *)(i + 120) &= 0xFFFFFFF9;
    if ( i == a2 )
      break;
  }
}
