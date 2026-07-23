/*
 * XREFs of BiUpdateBcdObject @ 0x140710D60
 * Callers:
 *     BiBindEfiEntries @ 0x14070EBA4 (BiBindEfiEntries.c)
 * Callees:
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     BcdDeleteElement @ 0x14056F1C8 (BcdDeleteElement.c)
 *     BcdOpenObject @ 0x14056F6CC (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14056F7E4 (BcdCloseObject.c)
 *     BiGetRegistryValue @ 0x14056F9C4 (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x14056FB78 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14056FEE4 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140570278 (BiSetRegistryValue.c)
 *     BiGetDeviceFromEfiPath @ 0x1407101F8 (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x140710388 (BiGetFilePathFromEfiPath.c)
 */

__int64 __fastcall BiUpdateBcdObject(void *a1, const GUID *a2)
{
  ULONG *v2; // rsi
  PVOID v4; // r15
  PVOID PoolWithTag; // r14
  NTSTATUS v6; // eax
  HANDLE v7; // rdi
  int v8; // ebx
  ULONG v9; // eax
  BCD_FLAGS v10; // r8d
  __int64 v11; // rax
  _WORD *v12; // r12
  ULONG v13; // r13d
  NTSTATUS ElementDataWithFlags; // eax
  BCD_FLAGS v15; // r8d
  BCD_FLAGS v16; // r8d
  __int64 v17; // rax
  char *v18; // rbx
  PVOID v19; // rsi
  BCD_FLAGS v20; // r8d
  BCD_FLAGS v21; // r8d
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  void *Source2; // [rsp+38h] [rbp-18h] BYREF
  HANDLE BcdObjectHandle; // [rsp+40h] [rbp-10h] BYREF
  ULONG BufferSize; // [rsp+98h] [rbp+48h] BYREF
  int v27; // [rsp+A0h] [rbp+50h] BYREF
  PVOID Buffer; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(ULONG **)a2[2].Data4;
  Buffer = 0LL;
  v4 = 0LL;
  P = 0LL;
  Source2 = 0LL;
  PoolWithTag = 0LL;
  v27 = 0;
  BcdObjectHandle = 0LL;
  BufferSize = 0;
  v6 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  v7 = BcdObjectHandle;
  v8 = v6;
  if ( v6 < 0 )
    goto LABEL_32;
  if ( (a2[3].Data1 & 2) != 0
    && (int)BiGetRegistryValue(BcdObjectHandle, L"FirmwareVariable", (__int64)L"Description", 3, &Source2, &v27) >= 0 )
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
      ElementDataWithFlags = BcdGetElementDataWithFlags(v7, 0x12000004u, v10, 0LL, &BufferSize);
      if ( ElementDataWithFlags == -1073741789 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferSize, 0x4B444342u);
        if ( !PoolWithTag )
        {
LABEL_17:
          BcdDeleteElement(v7, 0x12000004u);
          BcdSetElementDataWithFlags(v7, 0x12000004u, v16, v12, v13);
LABEL_18:
          v17 = v2[5];
          if ( *(ULONG *)((char *)v2 + v17 + 8) == 4 )
          {
            v18 = (char *)v2 + v17;
            if ( (int)BiGetDeviceFromEfiPath((unsigned __int64)v2 + v17 + 12, &Buffer, &BufferSize) < 0 )
            {
              v19 = Buffer;
            }
            else
            {
              BcdDeleteElement(v7, 0x11000001u);
              v19 = Buffer;
              BcdSetElementDataWithFlags(v7, 0x11000001u, v20, Buffer, BufferSize);
            }
            if ( (int)BiGetFilePathFromEfiPath((unsigned __int64)(v18 + 12), &P, &BufferSize) < 0 )
            {
              v4 = P;
            }
            else
            {
              BcdDeleteElement(v7, 0x12000002u);
              v4 = P;
              BcdSetElementDataWithFlags(v7, 0x12000002u, v21, P, BufferSize);
            }
          }
          else
          {
            v19 = Buffer;
          }
          v8 = 0;
          if ( v19 )
            ExFreePoolWithTag(v19, 0);
          if ( v4 )
            ExFreePoolWithTag(v4, 0);
          goto LABEL_30;
        }
        ElementDataWithFlags = BcdGetElementDataWithFlags(v7, 0x12000004u, v15, PoolWithTag, &BufferSize);
      }
      if ( ElementDataWithFlags >= 0
        && PoolWithTag
        && BufferSize == v13
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
    a2[3].Data1 |= 2u;
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
