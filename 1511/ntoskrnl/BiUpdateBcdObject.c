/*
 * XREFs of BiUpdateBcdObject @ 0x140691248
 * Callers:
 *     BiBindEfiEntries @ 0x14068F08C (BiBindEfiEntries.c)
 * Callees:
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BcdDeleteElement @ 0x1404FC728 (BcdDeleteElement.c)
 *     BcdOpenObject @ 0x1404FCC2C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1404FCD44 (BcdCloseObject.c)
 *     BiGetRegistryValue @ 0x1404FCF24 (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x1404FD0D8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1404FD444 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x1404FD7D8 (BiSetRegistryValue.c)
 *     BiGetDeviceFromEfiPath @ 0x1406906E0 (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x140690870 (BiGetFilePathFromEfiPath.c)
 */

__int64 __fastcall BiUpdateBcdObject(__int64 a1, __int64 a2)
{
  ULONG *v2; // rsi
  PVOID v4; // r15
  PVOID PoolWithTag; // r14
  int v6; // eax
  HANDLE v7; // rdi
  int v8; // ebx
  ULONG v9; // eax
  __int64 v10; // r8
  __int64 v11; // rax
  _WORD *v12; // r12
  unsigned int v13; // r13d
  int ElementDataWithFlags; // eax
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rax
  char *v18; // rbx
  PVOID v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r8
  PVOID v23; // [rsp+30h] [rbp-20h] BYREF
  void *Source2; // [rsp+38h] [rbp-18h] BYREF
  HANDLE Handle[2]; // [rsp+40h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+48h] BYREF
  int v27; // [rsp+A0h] [rbp+50h] BYREF
  PVOID P; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(ULONG **)(a2 + 40);
  P = 0LL;
  v4 = 0LL;
  v23 = 0LL;
  Source2 = 0LL;
  PoolWithTag = 0LL;
  v27 = 0;
  Handle[0] = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v6 = BcdOpenObject(a1, (__int128 *)(a2 + 16), Handle);
  v7 = Handle[0];
  v8 = v6;
  if ( v6 < 0 )
    goto LABEL_32;
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0
    && (int)BiGetRegistryValue(Handle[0], L"FirmwareVariable", (__int64)L"Description", 3, &Source2, &v27) >= 0 )
  {
    v9 = v2[1];
    if ( v9 == v27 && RtlCompareMemory(v2, Source2, v9) == v2[1] )
    {
LABEL_8:
      v11 = -1LL;
      v12 = (_WORD *)((char *)v2 + v2[4]);
      do
        ++v11;
      while ( v12[v11] );
      v13 = 2 * v11 + 2;
      ElementDataWithFlags = BcdGetElementDataWithFlags((__int64)v7, 0x12000004u, v10, 0LL, &NumberOfBytes);
      if ( ElementDataWithFlags == -1073741789 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
        if ( !PoolWithTag )
        {
LABEL_17:
          BcdDeleteElement((__int64)v7, 0x12000004u);
          BcdSetElementDataWithFlags((__int64)v7, 0x12000004u, v16, (__int64)v12, v13);
LABEL_18:
          v17 = v2[5];
          if ( *(ULONG *)((char *)v2 + v17 + 8) == 4 )
          {
            v18 = (char *)v2 + v17;
            if ( (int)BiGetDeviceFromEfiPath((unsigned __int64)v2 + v17 + 12, &P, (unsigned int *)&NumberOfBytes) < 0 )
            {
              v19 = P;
            }
            else
            {
              BcdDeleteElement((__int64)v7, 0x11000001u);
              v19 = P;
              BcdSetElementDataWithFlags((__int64)v7, 0x11000001u, v20, (__int64)P, NumberOfBytes);
            }
            if ( (int)BiGetFilePathFromEfiPath((unsigned __int64)(v18 + 12), &v23, (unsigned int *)&NumberOfBytes) < 0 )
            {
              v4 = v23;
            }
            else
            {
              BcdDeleteElement((__int64)v7, 0x12000002u);
              v4 = v23;
              BcdSetElementDataWithFlags((__int64)v7, 0x12000002u, v21, (__int64)v23, NumberOfBytes);
            }
          }
          else
          {
            v19 = P;
          }
          v8 = 0;
          if ( v19 )
            ExFreePoolWithTag(v19, 0);
          if ( v4 )
            ExFreePoolWithTag(v4, 0);
          goto LABEL_30;
        }
        ElementDataWithFlags = BcdGetElementDataWithFlags(
                                 (__int64)v7,
                                 0x12000004u,
                                 v15,
                                 (__int64)PoolWithTag,
                                 &NumberOfBytes);
      }
      if ( ElementDataWithFlags >= 0
        && PoolWithTag
        && (_DWORD)NumberOfBytes == v13
        && RtlCompareMemory(v12, PoolWithTag, v13) == v13 )
      {
        goto LABEL_18;
      }
      goto LABEL_17;
    }
  }
  v8 = BiSetRegistryValue(v7, L"FirmwareVariable", L"Description", 3u, v2, v2[1]);
  if ( v8 >= 0 )
  {
    *(_DWORD *)(a2 + 48) |= 2u;
    goto LABEL_8;
  }
LABEL_30:
  if ( Source2 )
    ExFreePoolWithTag(Source2, 0);
LABEL_32:
  if ( v7 )
    BcdCloseObject(v7);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v8;
}
