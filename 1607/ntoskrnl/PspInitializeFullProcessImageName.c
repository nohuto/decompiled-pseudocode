/*
 * XREFs of PspInitializeFullProcessImageName @ 0x1404B5B34
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 *     PspSetProcessShortName @ 0x1404B5CF8 (PspSetProcessShortName.c)
 */

__int64 __fastcall PspInitializeFullProcessImageName(__int64 a1, __int64 a2)
{
  char *v4; // rcx
  int v5; // eax
  int v6; // edi
  char *v7; // rax
  void *v8; // rbx
  PVOID PoolWithTag; // rax
  PVOID v11; // rax
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+38h] [rbp-C8h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-B0h] BYREF

  if ( (*(_DWORD *)(a2 + 1740) & 1) == 0 )
  {
    v13 = *(_OWORD *)(*(_QWORD *)(a1 + 168) + 88LL);
    PspSetProcessShortName(a2, &v13);
    v4 = *(char **)(a1 + 168);
    Src[0] = 0LL;
    Src[1] = 0LL;
    LODWORD(NumberOfBytes) = 272;
    v5 = ObQueryNameStringMode(v4, (__int64)Src, 0x110u, &NumberOfBytes, 0);
    v6 = v5;
    if ( v5 == -2147483643 || v5 == -1073741789 || v5 == -1073741820 )
    {
      if ( (unsigned int)NumberOfBytes > 0x110 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6E497350u);
        v8 = PoolWithTag;
        if ( PoolWithTag )
        {
          v6 = ObQueryNameStringMode(*(char **)(a1 + 168), (__int64)PoolWithTag, NumberOfBytes, &NumberOfBytes, 0);
          if ( v6 >= 0 )
            goto LABEL_10;
          ExFreePoolWithTag(v8, 0);
LABEL_9:
          if ( v6 >= 0 )
            goto LABEL_10;
        }
      }
    }
    else if ( v5 >= 0 && (unsigned int)(NumberOfBytes - 17) <= 0xFF )
    {
      v7 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6E497350u);
      v8 = v7;
      if ( v7 )
      {
        *(_OWORD *)v7 = *(_OWORD *)Src;
        *((_QWORD *)v7 + 1) = v7 + 16;
        memmove(v7 + 16, Src[1], WORD1(Src[0]));
        goto LABEL_9;
      }
    }
  }
  LODWORD(NumberOfBytes) = 16;
  v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6E497350u);
  v8 = v11;
  if ( v11 )
  {
    memset(v11, 0, (unsigned int)NumberOfBytes);
    v6 = 0;
  }
  else
  {
    v6 = -1073741801;
  }
LABEL_10:
  *(_QWORD *)(a2 + 1128) = v8;
  return (unsigned int)v6;
}
