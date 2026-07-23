/*
 * XREFs of HeadlessTerminalAddResources @ 0x14055592C
 * Callers:
 *     IoReportHalResourceUsage @ 0x1407AB540 (IoReportHalResourceUsage.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HeadlessTerminalAddResources(void *Src, size_t Size, char a3, _QWORD *a4, _DWORD *a5)
{
  size_t v5; // rsi
  __int64 result; // rax
  PVOID PoolWithTag; // rax
  PHYSICAL_ADDRESS v11; // rax
  _DWORD *v12; // rcx
  ULONG AddressSpace; // [rsp+30h] [rbp-28h] BYREF
  LARGE_INTEGER TranslatedAddress; // [rsp+38h] [rbp-20h] BYREF

  v5 = (unsigned int)Size;
  if ( !HeadlessGlobals )
  {
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  if ( (HeadlessGlobals[6] & 0x1000) != 0 )
  {
    *a4 = 0LL;
    result = 0LL;
  }
  else
  {
    *a5 = Size + 36;
    if ( (int)Size + 36 >= (unsigned int)Size )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(Size + 36), 0x736C6448u);
      *a4 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Src, v5);
        v11.QuadPart = HeadlessGlobals[8];
        if ( a3 )
        {
          AddressSpace = 1;
          HalTranslateBusAddress(Internal, 0, v11, &AddressSpace, &TranslatedAddress);
        }
        else
        {
          TranslatedAddress.QuadPart = HeadlessGlobals[8];
        }
        v12 = (_DWORD *)*a4;
        ++*v12;
        *(_QWORD *)((char *)v12 + v5) = 1LL;
        *(_DWORD *)((char *)v12 + v5 + 12) = 1;
        *(_DWORD *)((char *)v12 + v5 + 8) = 0;
        *(_DWORD *)((char *)v12 + v5 + 16) = 66049;
        *(LARGE_INTEGER *)((char *)v12 + v5 + 20) = TranslatedAddress;
        *(_DWORD *)((char *)v12 + v5 + 28) = 8;
        return 0LL;
      }
    }
    result = 3221225626LL;
  }
  *a5 = 0;
  return result;
}
