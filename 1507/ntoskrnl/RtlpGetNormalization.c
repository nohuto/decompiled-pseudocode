/*
 * XREFs of RtlpGetNormalization @ 0x1406D0328
 * Callers:
 *     RtlIsNormalizedString @ 0x1406CF6D0 (RtlIsNormalizedString.c)
 *     RtlNormalizeString @ 0x1406CF754 (RtlNormalizeString.c)
 * Callees:
 *     ZwGetNlsSectionPtr @ 0x140180D30 (ZwGetNlsSectionPtr.c)
 *     NormalizationListEntry_Alloc @ 0x14024EDDC (NormalizationListEntry_Alloc.c)
 *     NormalizationList__InsertTail @ 0x14024EDF4 (NormalizationList__InsertTail.c)
 *     NormalizationList__Lock @ 0x14024EE20 (NormalizationList__Lock.c)
 *     NormalizationList__Lookup @ 0x14024EE80 (NormalizationList__Lookup.c)
 *     NormalizationList__Unlock @ 0x14024EEAC (NormalizationList__Unlock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     Normalization__LoadTables @ 0x1406CEB74 (Normalization__LoadTables.c)
 */

__int64 __fastcall RtlpGetNormalization(__int64 a1, char **a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 result; // rax
  int v7; // ecx
  char *v8; // rsi
  char *v9; // rax
  NTSTATUS NlsSectionPtr; // ebx
  char *v11; // rax
  _DWORD *v12; // rbx
  int Tables; // ebp
  unsigned __int64 SectionSize; // [rsp+58h] [rbp+10h] BYREF
  PVOID SectionPointer; // [rsp+60h] [rbp+18h] BYREF

  v5 = a1;
  if ( !a2 )
    return 3221225712LL;
  NormalizationList__Lock(a1, (__int64)a2, a3, a4);
  v8 = NormalizationList__Lookup(v5);
  if ( !v8 )
  {
    v9 = NormalizationList__Lookup(v7 ^ 0x100u);
    if ( v9 )
    {
      SectionPointer = (PVOID)*((_QWORD *)v9 + 1);
      SectionSize = *((_QWORD *)v9 + 2);
    }
    else
    {
      NlsSectionPtr = ZwGetNlsSectionPtr(0xCu, v5 & 0xFFFFFEFF, 0LL, &SectionPointer, (PULONG)&SectionSize);
      if ( NlsSectionPtr < 0 )
        goto LABEL_12;
    }
    v11 = (char *)NormalizationListEntry_Alloc();
    v12 = v11;
    if ( !v11 )
    {
      NlsSectionPtr = -1073741801;
LABEL_12:
      NormalizationList__Unlock();
      return (unsigned int)NlsSectionPtr;
    }
    v8 = v11 + 24;
    Tables = Normalization__LoadTables(v5, (unsigned __int16 *)SectionPointer, SectionSize, (_DWORD *)v11 + 6);
    if ( Tables < 0 )
    {
      ExFreePoolWithTag(v12, 0);
      NlsSectionPtr = Tables;
      goto LABEL_12;
    }
    v12[4] = v5;
    NormalizationList__InsertTail((__int64)v12);
  }
  NormalizationList__Unlock();
  result = 0LL;
  *a2 = v8;
  return result;
}
