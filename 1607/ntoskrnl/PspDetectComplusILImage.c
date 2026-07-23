/*
 * XREFs of PspDetectComplusILImage @ 0x1404C4B2C
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x14015A8B0 (ZwQuerySystemInformation.c)
 *     RtlQueryImageFileKeyOption @ 0x140472194 (RtlQueryImageFileKeyOption.c)
 */

NTSTATUS __fastcall PspDetectComplusILImage(__int64 a1, _DWORD *a2)
{
  char v2; // al
  NTSTATUS result; // eax
  char v6; // al
  int v7; // ebx
  void *v8; // rcx
  NTSTATUS v9; // eax
  int SystemInformation; // [rsp+40h] [rbp+8h] BYREF
  ULONG v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_BYTE *)(a1 + 99);
  if ( (v2 & 1) == 0 || (v2 & 0x20) != 0 )
    return 0;
  v6 = MEMORY[0xFFFFF780000002E0];
  v7 = 0;
  SystemInformation = MEMORY[0xFFFFF780000002E0];
  if ( MEMORY[0xFFFFF780000002E0] != -1 )
    goto LABEL_6;
  result = ZwQuerySystemInformation(SystemComPlusPackage, &SystemInformation, 4u, 0LL);
  if ( result >= 0 )
  {
    v6 = SystemInformation;
LABEL_6:
    if ( (v6 & 1) != 0 )
    {
      v8 = *(void **)(a1 + 184);
      if ( v8 )
      {
        v11 = 0;
        v9 = RtlQueryImageFileKeyOption(v8, L"Wow64", 4, &v11, 4u, 0LL);
        if ( (v9 < 0 || v11) && v9 != -1073741772 )
        {
          if ( v9 < 0 )
            return v9;
          return v7;
        }
      }
      else if ( (*(_BYTE *)(a1 + 8) & 0x40) == 0 )
      {
        return -1073741823;
      }
      *a2 |= 8u;
    }
    return v7;
  }
  return result;
}
