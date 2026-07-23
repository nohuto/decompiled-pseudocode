/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBase @ 0x18000C004
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18000BF48 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 * Callees:
 *     GetResourceDirectoryEntry @ 0x18000BFC0 (GetResourceDirectoryEntry.c)
 *     ValidatePointer @ 0x18000C294 (ValidatePointer.c)
 *     FindDirectoryEntry @ 0x18000C2D0 (FindDirectoryEntry.c)
 *     RtlCompareUnicodeStrings @ 0x1800195A0 (RtlCompareUnicodeStrings.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 */

int __fastcall WerEscalationReadImageVersionInfoForModuleBase(char *BaseOfImage, __int64 a2)
{
  __int64 VirtualAddress; // rax
  PIMAGE_NT_HEADERS v5; // rcx
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
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+20h] BYREF

  *(_QWORD *)&DestinationString.Length = BaseOfImage;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  LODWORD(VirtualAddress) = RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &OutHeaders);
  if ( (int)VirtualAddress < 0 )
    return VirtualAddress;
  v5 = OutHeaders;
  *(_DWORD *)a2 = OutHeaders->FileHeader.TimeDateStamp;
  *(_DWORD *)(a2 + 4) = v5->OptionalHeader.CheckSum;
  v6 = v5->OptionalHeader.NumberOfRvaAndSizes <= 2;
  LODWORD(VirtualAddress) = v5->OptionalHeader.SizeOfImage;
  DestinationString.Buffer = (wchar_t *)(unsigned int)VirtualAddress;
  if ( v6 )
    return VirtualAddress;
  VirtualAddress = v5->OptionalHeader.DataDirectory[2].VirtualAddress;
  if ( !(_DWORD)VirtualAddress )
    return VirtualAddress;
  if ( v5->OptionalHeader.DataDirectory[2].Size < 0x10 )
    return VirtualAddress;
  LODWORD(VirtualAddress) = -(int)ValidatePointer(&DestinationString, &BaseOfImage[VirtualAddress], 16LL);
  v8 = v7 & -(__int64)((_DWORD)VirtualAddress != 0);
  if ( !v8 )
    return VirtualAddress;
  VirtualAddress = GetResourceDirectoryEntry(
                     (__int64)&DestinationString,
                     v7 & -(__int64)((_DWORD)VirtualAddress != 0),
                     *(unsigned __int16 *)((v7 & -(__int64)((_DWORD)VirtualAddress != 0)) + 0xC));
  if ( !VirtualAddress )
    return VirtualAddress;
  VirtualAddress = FindDirectoryEntry(&DestinationString, VirtualAddress, *(unsigned __int16 *)(v8 + 14), 16LL);
  if ( !VirtualAddress )
    return VirtualAddress;
  v9 = *(unsigned int *)(VirtualAddress + 4);
  LODWORD(v9) = v9 & 0x7FFFFFFF;
  LODWORD(VirtualAddress) = ValidatePointer(&DestinationString, v8 + v9, 16LL);
  if ( !(_DWORD)VirtualAddress )
    return VirtualAddress;
  VirtualAddress = GetResourceDirectoryEntry((__int64)&DestinationString, v10, *(unsigned __int16 *)(v11 + 12));
  if ( !VirtualAddress )
    return VirtualAddress;
  VirtualAddress = FindDirectoryEntry(&DestinationString, VirtualAddress, *(unsigned __int16 *)(v12 + 14), 1LL);
  if ( !VirtualAddress )
    return VirtualAddress;
  v13 = *(unsigned int *)(VirtualAddress + 4);
  LODWORD(v13) = v13 & 0x7FFFFFFF;
  LODWORD(VirtualAddress) = ValidatePointer(&DestinationString, v8 + v13, 16LL);
  if ( !(_DWORD)VirtualAddress )
    return VirtualAddress;
  VirtualAddress = GetResourceDirectoryEntry((__int64)&DestinationString, v14, 0);
  if ( !VirtualAddress )
    return VirtualAddress;
  if ( *(int *)(VirtualAddress + 4) < 0 )
    return VirtualAddress;
  LODWORD(VirtualAddress) = ValidatePointer(&DestinationString, v8 + *(unsigned int *)(VirtualAddress + 4), 16LL);
  if ( !(_DWORD)VirtualAddress )
    return VirtualAddress;
  if ( v15[1] < 0x5C )
    return VirtualAddress;
  LODWORD(VirtualAddress) = -(int)ValidatePointer(&DestinationString, &BaseOfImage[*v15], 92LL);
  v18 = v16 & -(__int64)((_DWORD)VirtualAddress != 0);
  if ( !v18 )
    return VirtualAddress;
  LODWORD(VirtualAddress) = ValidatePointer(&DestinationString, v16 & -(__int64)((_DWORD)VirtualAddress != 0), v17);
  if ( !(_DWORD)VirtualAddress )
    return VirtualAddress;
  LODWORD(VirtualAddress) = ValidatePointer(&DestinationString, v18 + 6, 32LL);
  if ( !(_DWORD)VirtualAddress )
    return VirtualAddress;
  RtlInitUnicodeString(&DestinationString, L"VS_VERSION_INFO");
  v19 = 0;
  if ( v18 == -6 )
    goto LABEL_33;
  v20 = 16LL;
  v21 = (_WORD *)(v18 + 6);
  LODWORD(VirtualAddress) = 0;
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
    LODWORD(VirtualAddress) = -2147024809;
    goto LABEL_25;
  }
  v19 = 16 - v20;
LABEL_25:
  if ( (int)VirtualAddress < 0 )
    v22 = 0;
  else
    v22 = 2 * v19;
  if ( (int)VirtualAddress >= 0 )
  {
    LODWORD(VirtualAddress) = RtlCompareUnicodeStrings(
                                DestinationString.Buffer,
                                (unsigned __int64)DestinationString.Length >> 1,
                                (PCWCH)(v18 + 6),
                                (unsigned __int64)v22 >> 1,
                                0);
    if ( !(_DWORD)VirtualAddress )
    {
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(v18 + 48);
      LODWORD(VirtualAddress) = *(_DWORD *)(v18 + 52);
      *(_DWORD *)(a2 + 12) = VirtualAddress;
    }
  }
  return VirtualAddress;
}
