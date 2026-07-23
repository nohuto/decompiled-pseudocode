/*
 * XREFs of EtwpTiQueryVad @ 0x1406A6514
 * Callers:
 *     EtwpTiVadQueryEventWriteCallback @ 0x1406A6654 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     KeStackAttachProcess @ 0x1400CAFB0 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1400CB05C (KeUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x14015A650 (ZwQueryVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpTiQueryVad(__int64 a1, struct _KPROCESS *a2, PVOID *a3, unsigned int a4, char a5)
{
  int v8; // ebp
  unsigned int v9; // esi
  unsigned int v10; // edi
  PVOID *v11; // rbx
  char *v12; // r15
  NTSTATUS VirtualMemory; // eax
  PVOID PoolWithTag; // rax
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-78h] BYREF

  if ( a2 == KeGetCurrentThread()->ApcState.Process )
  {
    v8 = 0;
  }
  else
  {
    KeStackAttachProcess(a2, &ApcState);
    v8 = 1;
  }
  v9 = 0;
  v10 = 0;
  if ( a4 )
  {
    v11 = (PVOID *)(a1 + 40);
    v12 = (char *)(a1 + 8);
    do
    {
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        *a3,
                        MemoryRegionInformation,
                        v12,
                        0x20uLL,
                        0LL);
      *((_DWORD *)v11 - 10) = VirtualMemory;
      if ( VirtualMemory >= 0 )
      {
        v9 |= 1 << v10;
        if ( a5 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E734954u);
          *v11 = PoolWithTag;
          if ( !PoolWithTag
            || ZwQueryVirtualMemory(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 *a3,
                 MemoryMappedFilenameInformation,
                 PoolWithTag,
                 0x200uLL,
                 0LL) >= 0 )
          {
            goto LABEL_12;
          }
          ExFreePoolWithTag(*v11, 0);
        }
        *v11 = 0LL;
      }
LABEL_12:
      ++v10;
      v12 += 48;
      ++a3;
      v11 += 6;
    }
    while ( v10 < a4 );
  }
  if ( v8 )
    KeUnstackDetachProcess(&ApcState);
  return v9;
}
