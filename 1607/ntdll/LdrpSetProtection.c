/*
 * XREFs of LdrpSetProtection @ 0x180084D18
 * Callers:
 *     LdrpProtectAndRelocateImage @ 0x180084C30 (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpSetProtection(char *BaseOfImage, char a2)
{
  PIMAGE_NT_HEADERS v4; // rsi
  int v5; // edi
  int *i; // rbx
  ULONG v7; // r9d
  NTSTATUS result; // eax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-30h] BYREF
  ULONG OldProtect; // [rsp+80h] [rbp+18h] BYREF
  PIMAGE_NT_HEADERS v12; // [rsp+88h] [rbp+20h] BYREF

  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v12);
  v4 = v12;
  v5 = 0;
  if ( !v12->FileHeader.NumberOfSections )
    return 0;
  for ( i = (int *)((char *)&v12->OptionalHeader.FileAlignment + v12->FileHeader.SizeOfOptionalHeader); ; i += 10 )
  {
    if ( *i >= 0 && *(i - 5) )
    {
      if ( a2 )
      {
        if ( (*i & 0x20000000) != 0 )
        {
          v7 = 16;
          if ( (*i & 0x40000000) != 0 )
            v7 = 32;
        }
        else
        {
          v7 = 2;
        }
        if ( (*i & 0x4000000) != 0 )
          v7 |= 0x200u;
      }
      else
      {
        v7 = 4;
      }
      BaseAddress = &BaseOfImage[*(i - 6)];
      RegionSize = (unsigned int)*(i - 5);
      if ( RegionSize )
      {
        result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, v7, &OldProtect);
        if ( result < 0 )
          break;
      }
    }
    if ( ++v5 >= (unsigned int)v4->FileHeader.NumberOfSections )
      return 0;
  }
  return result;
}
