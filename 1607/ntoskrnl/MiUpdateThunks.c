/*
 * XREFs of MiUpdateThunks @ 0x1407A5F40
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 */

unsigned __int64 __fastcall MiUpdateThunks(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r14
  __int64 *v6; // rdi
  __int64 *v7; // rbx
  __int64 v8; // rbp
  unsigned __int64 *v10; // rdx
  __int64 v11; // r8
  ULONG Size; // [rsp+58h] [rbp+20h] BYREF

  result = a4;
  v5 = a4 + a2 - 1;
  v6 = (__int64 *)(a1 + 16);
  v7 = *(__int64 **)(a1 + 16);
  v8 = a3 - a2;
  while ( v7 != v6 )
  {
    result = (unsigned __int64)RtlImageDirectoryEntryToData((PVOID)v7[6], 1u, 0xCu, &Size);
    v10 = (unsigned __int64 *)result;
    if ( result )
    {
      Size >>= 3;
      v11 = Size;
      if ( Size )
      {
        do
        {
          result = *v10;
          if ( *v10 >= a2 && result <= v5 )
          {
            result += v8;
            *v10 = result;
          }
          ++v10;
          --v11;
        }
        while ( v11 );
      }
    }
    v7 = (__int64 *)*v7;
  }
  return result;
}
