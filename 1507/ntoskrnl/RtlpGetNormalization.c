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
  __int64 v10; // rdx
  int NlsSectionPtr; // ebx
  char *v12; // rax
  _DWORD *v13; // rbx
  int Tables; // ebp
  unsigned __int64 v15; // [rsp+58h] [rbp+10h]
  unsigned __int16 *v16; // [rsp+60h] [rbp+18h]

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
      v16 = (unsigned __int16 *)*((_QWORD *)v9 + 1);
      v15 = *((_QWORD *)v9 + 2);
    }
    else
    {
      v10 = v5;
      LODWORD(v10) = v5 & 0xFFFFFEFF;
      NlsSectionPtr = ZwGetNlsSectionPtr(12LL, v10, 0LL);
      if ( NlsSectionPtr < 0 )
        goto LABEL_12;
    }
    v12 = (char *)NormalizationListEntry_Alloc();
    v13 = v12;
    if ( !v12 )
    {
      NlsSectionPtr = -1073741801;
LABEL_12:
      NormalizationList__Unlock();
      return (unsigned int)NlsSectionPtr;
    }
    v8 = v12 + 24;
    Tables = Normalization__LoadTables(v5, v16, v15, (_DWORD *)v12 + 6);
    if ( Tables < 0 )
    {
      ExFreePoolWithTag(v13, 0);
      NlsSectionPtr = Tables;
      goto LABEL_12;
    }
    v13[4] = v5;
    NormalizationList__InsertTail((__int64)v13);
  }
  NormalizationList__Unlock();
  result = 0LL;
  *a2 = v8;
  return result;
}
