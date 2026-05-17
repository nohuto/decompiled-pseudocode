/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBase @ 0x180005924
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800058A8 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 * Callees:
 *     ValidatePointer @ 0x180005BB4 (ValidatePointer.c)
 *     GetResourceDirectoryEntry @ 0x180005BF0 (GetResourceDirectoryEntry.c)
 *     FindDirectoryEntry @ 0x180005C34 (FindDirectoryEntry.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x18002F010 (RtlCompareUnicodeStrings.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall WerEscalationReadImageVersionInfoForModuleBase(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int *v5; // rcx
  bool v6; // cc
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int16 v19; // cx
  __int64 v20; // rdx
  _WORD *v21; // rcx
  unsigned __int16 v22; // cx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int *v24; // [rsp+60h] [rbp+20h] BYREF

  *(_QWORD *)&DestinationString.Length = a1;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  result = RtlImageNtHeaderEx(3LL, a1, 0LL, &v24);
  if ( (int)result < 0 )
    return result;
  v5 = v24;
  *(_DWORD *)a2 = v24[2];
  *(_DWORD *)(a2 + 4) = v5[22];
  v6 = v5[33] <= 2;
  result = v5[20];
  DestinationString.Buffer = (unsigned __int16 *)result;
  if ( v6 )
    return result;
  result = v5[38];
  if ( !(_DWORD)result )
    return result;
  if ( v5[39] < 0x10 )
    return result;
  result = (unsigned int)-ValidatePointer(&DestinationString, a1 + result, 16LL);
  v8 = v7 & -(__int64)((_DWORD)result != 0);
  if ( !v8 )
    return result;
  result = GetResourceDirectoryEntry(
             &DestinationString,
             v7 & -(__int64)((_DWORD)result != 0),
             *(unsigned __int16 *)((v7 & -(__int64)((_DWORD)result != 0)) + 0xC));
  if ( !result )
    return result;
  result = FindDirectoryEntry(&DestinationString, result, *(unsigned __int16 *)(v8 + 14), 16LL);
  if ( !result )
    return result;
  v9 = *(unsigned int *)(result + 4);
  LODWORD(v9) = v9 & 0x7FFFFFFF;
  result = ValidatePointer(&DestinationString, v8 + v9, 16LL);
  if ( !(_DWORD)result )
    return result;
  result = GetResourceDirectoryEntry(&DestinationString, v10, *(unsigned __int16 *)(v11 + 12));
  if ( !result )
    return result;
  result = FindDirectoryEntry(&DestinationString, result, *(unsigned __int16 *)(v12 + 14), 1LL);
  if ( !result )
    return result;
  v13 = *(unsigned int *)(result + 4);
  LODWORD(v13) = v13 & 0x7FFFFFFF;
  result = ValidatePointer(&DestinationString, v8 + v13, 16LL);
  if ( !(_DWORD)result )
    return result;
  result = GetResourceDirectoryEntry(&DestinationString, v14, 0LL);
  if ( !result )
    return result;
  if ( *(int *)(result + 4) < 0 )
    return result;
  result = ValidatePointer(&DestinationString, v8 + *(unsigned int *)(result + 4), 16LL);
  if ( !(_DWORD)result )
    return result;
  if ( v15[1] < 0x5C )
    return result;
  result = (unsigned int)-ValidatePointer(&DestinationString, a1 + *v15, 92LL);
  v18 = v16 & -(__int64)((_DWORD)result != 0);
  if ( !v18 )
    return result;
  result = ValidatePointer(&DestinationString, v16 & -(__int64)((_DWORD)result != 0), v17);
  if ( !(_DWORD)result )
    return result;
  result = ValidatePointer(&DestinationString, v18 + 6, 32LL);
  if ( !(_DWORD)result )
    return result;
  RtlInitUnicodeString(&DestinationString, L"VS_VERSION_INFO");
  v19 = 0;
  if ( v18 == -6 )
    goto LABEL_33;
  v20 = 16LL;
  v21 = (_WORD *)(v18 + 6);
  result = 0LL;
  do
  {
    if ( !*v21 )
      break;
    ++v21;
    --v20;
  }
  while ( v20 );
  if ( !v20 )
  {
    v19 = 0;
LABEL_33:
    result = 2147942487LL;
    goto LABEL_25;
  }
  v19 = 16 - v20;
LABEL_25:
  if ( (int)result < 0 )
    v22 = 0;
  else
    v22 = 2 * v19;
  if ( (int)result >= 0 )
  {
    result = RtlCompareUnicodeStrings(
               DestinationString.Buffer,
               (unsigned __int64)DestinationString.Length >> 1,
               (int)v18 + 6,
               (unsigned __int64)v22 >> 1,
               0);
    if ( !(_DWORD)result )
    {
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(v18 + 48);
      result = *(unsigned int *)(v18 + 52);
      *(_DWORD *)(a2 + 12) = result;
    }
  }
  return result;
}
