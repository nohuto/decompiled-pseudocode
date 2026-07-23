/*
 * XREFs of EtwpInitializeCompression @ 0x14022AA50
 * Callers:
 *     EtwpInitLoggerContext @ 0x140493C40 (EtwpInitLoggerContext.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x1400064BC (RtlGetCompressionWorkSpaceSize.c)
 *     EtwpFreePlaceholderList @ 0x1400876B8 (EtwpFreePlaceholderList.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall EtwpInitializeCompression(__int64 a1)
{
  NTSTATUS result; // eax
  int v3; // edi
  PVOID v4; // rax
  unsigned int v5; // esi
  _DWORD *PoolWithTag; // rax
  ULONG CompressBufferWorkSpaceSize; // [rsp+40h] [rbp+8h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 980) = 5;
  *(_DWORD *)(a1 + 984) = 3;
  *(_QWORD *)(a1 + 928) = EtwpCompressionProc;
  *(_QWORD *)(a1 + 936) = a1;
  *(_QWORD *)(a1 + 912) = 0LL;
  result = RtlGetCompressionWorkSpaceSize(3u, &CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize);
  v3 = result;
  if ( result >= 0 )
  {
    if ( !CompressBufferWorkSpaceSize
      || (v4 = ExAllocatePoolWithTag(NonPagedPoolNx, CompressBufferWorkSpaceSize, 0x5A777445u),
          (*(_QWORD *)(a1 + 968) = v4) != 0LL) )
    {
      *(_QWORD *)(a1 + 952) = 0LL;
      *(_QWORD *)(a1 + 1024) = EtwpCompressionDpc;
      v5 = 0;
      *(_DWORD *)(a1 + 1000) = 275;
      *(_QWORD *)(a1 + 1032) = a1;
      *(_QWORD *)(a1 + 1056) = 0LL;
      *(_QWORD *)(a1 + 1016) = 0LL;
      *(_QWORD *)(a1 + 992) = 0LL;
      if ( *(_DWORD *)(a1 + 980) )
      {
        while ( 1 )
        {
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a1 + 300), 0x48uLL, 0x42777445u);
          if ( !PoolWithTag )
            break;
          PoolWithTag[11] = 6;
          ++v5;
          *((_QWORD *)PoolWithTag + 4) = *(_QWORD *)(a1 + 992);
          *(_QWORD *)(a1 + 992) = PoolWithTag + 8;
          if ( v5 >= *(_DWORD *)(a1 + 980) )
            goto LABEL_8;
        }
        v3 = -1073741801;
        EtwpFreePlaceholderList(a1);
      }
      else
      {
LABEL_8:
        *(_DWORD *)(a1 + 976) = 1;
      }
      return v3;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
