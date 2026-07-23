/*
 * XREFs of ExpCovQueryHypervisorInformation @ 0x1406B7084
 * Callers:
 *     ExpCovQueryInformation @ 0x1406B72F0 (ExpCovQueryInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlGetCoverageData @ 0x1401BA780 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1401BA8BC (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x1401BAB24 (HvlResetCoverageVector.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x1404E27E0 (RtlCompareUnicodeString.c)
 */

void __fastcall ExpCovQueryHypervisorInformation(__int64 *a1)
{
  void *v1; // rsi
  WCHAR *PoolWithTag; // rax
  WCHAR *v4; // rbp
  __int64 v5; // rdx
  char v6; // r15
  unsigned int v7; // edx
  int v8; // eax
  __int64 v9; // r12
  size_t v10; // rbx
  unsigned __int16 Length; // r13
  unsigned int v12; // r14d
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  PVOID v17; // rax
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // rdx
  void *v20; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+20h]

  v1 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  if ( HvlHypervisorConnected )
  {
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x72766F43u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x40uLL);
      if ( HvlGetCoverageInfo(v4, v5, &NumberOfBytes, &v23) )
      {
        RtlInitUnicodeString(&DestinationString, v4);
        v6 = *((_BYTE *)a1 + 12);
        v7 = *((_DWORD *)a1 + 2);
        v8 = *((_DWORD *)a1 + 12);
        v9 = *a1;
        v24 = v7;
        if ( v6 )
        {
          if ( v6 == 1 && v8 == 2 )
          {
            v10 = v23;
            if ( !RtlCompareUnicodeString((PCUNICODE_STRING)a1 + 1, &DestinationString, 1u) )
            {
              v7 = v24;
              goto LABEL_11;
            }
          }
        }
        else if ( !v8 )
        {
          v10 = (unsigned int)NumberOfBytes;
LABEL_11:
          Length = DestinationString.Length;
          v12 = -1;
          if ( (unsigned int)v10 < 0xFFFFFFE0 )
          {
            v13 = DestinationString.Length + v10 + 32;
            if ( v13 < 0x20 )
              v13 = -1;
            v12 = v13;
          }
          v14 = *((_DWORD *)a1 + 14);
          v15 = v14 + v12;
          if ( v14 + v12 >= v14 )
          {
            *((_DWORD *)a1 + 14) = v15;
            if ( v7 >= v15 )
            {
              v16 = 4096;
              if ( (unsigned int)v10 > 0x1000 )
                v16 = v10;
              v17 = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x72766F43u);
              v1 = v17;
              if ( v17 )
              {
                if ( HvlGetCoverageData(v6, v10, v17) )
                {
                  *(_DWORD *)(v9 + 4) = 1;
                  *(_DWORD *)v9 = v12;
                  *(_DWORD *)(v9 + 24) = v10;
                  memmove((void *)(v9 + 28), v1, v10);
                  MaximumLength = DestinationString.MaximumLength;
                  Buffer = DestinationString.Buffer;
                  v20 = (void *)(v10 + v9 + 32);
                  *(_QWORD *)(v9 + 16) = v20;
                  *(_WORD *)(v9 + 8) = Length;
                  *(_WORD *)(v9 + 10) = MaximumLength;
                  memmove(v20, Buffer, Length);
                  ++*((_DWORD *)a1 + 13);
                  *a1 += v12;
                  if ( v6 )
                    HvlResetCoverageVector();
                }
              }
            }
            else
            {
              ++*((_DWORD *)a1 + 13);
            }
          }
        }
      }
      ExFreePoolWithTag(v4, 0);
      if ( v1 )
        ExFreePoolWithTag(v1, 0);
    }
  }
}
