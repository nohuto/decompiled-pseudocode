/*
 * XREFs of LdrpSetProtection @ 0x1800804B8
 * Callers:
 *     LdrpProtectAndRelocateImage @ 0x1800803C0 (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     ZwProtectVirtualMemory @ 0x1800A5AC0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpSetProtection(unsigned __int64 a1, char a2)
{
  __int64 v4; // rsi
  int v5; // edi
  int *i; // rbx
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v10[6]; // [rsp+38h] [rbp-30h] BYREF
  char v11; // [rsp+80h] [rbp+18h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  RtlImageNtHeaderEx(3, a1, 0LL, &v12);
  v4 = v12;
  v5 = 0;
  if ( !*(_WORD *)(v12 + 6) )
    return 0LL;
  for ( i = (int *)(*(unsigned __int16 *)(v12 + 20) + v12 + 60); ; i += 10 )
  {
    if ( *i >= 0 && *(i - 5) )
    {
      if ( a2 )
      {
        if ( (*i & 0x20000000) != 0 )
        {
          v7 = 16LL;
          if ( (*i & 0x40000000) != 0 )
            v7 = 32LL;
        }
        else
        {
          v7 = 2LL;
        }
        if ( (*i & 0x4000000) != 0 )
          LODWORD(v7) = v7 | 0x200;
      }
      else
      {
        v7 = 4LL;
      }
      v10[0] = a1 + (unsigned int)*(i - 6);
      v9 = (unsigned int)*(i - 5);
      if ( v9 )
      {
        result = ZwProtectVirtualMemory(-1LL, v10, &v9, v7, &v11);
        if ( (int)result < 0 )
          break;
      }
    }
    if ( ++v5 >= (unsigned int)*(unsigned __int16 *)(v4 + 6) )
      return 0LL;
  }
  return result;
}
