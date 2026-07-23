/*
 * XREFs of PfpQueryFileExtentsRequest @ 0x1406691FC
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140417410 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x14015A410 (ZwQueryInformationFile.c)
 *     ZwFsControlFile @ 0x14015A910 (ZwFsControlFile.c)
 *     ZwQueryVolumeInformationFile @ 0x14015AB10 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PfpPrefetchSharedDeref @ 0x1403EF270 (PfpPrefetchSharedDeref.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     PfpPrefetchSharedInitialize @ 0x1404D7840 (PfpPrefetchSharedInitialize.c)
 *     PfpPrefetchSharedStart @ 0x1404D7884 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x1404D79B4 (PfpPrefetchSharedCleanup.c)
 *     PfpOpenHandleClose @ 0x1404ED298 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x1404ED318 (PfpOpenHandleCreate.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpQueryFileExtentsRequest(__int64 a1, char a2, _DWORD *a3)
{
  PVOID PoolWithTag; // r14
  _DWORD *v6; // r12
  ULONG_PTR v7; // rsi
  ULONG OutputBufferLength; // r13d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int inited; // ebx
  __int64 v13; // rax
  __m128i v14; // xmm2
  unsigned int v15; // ebx
  unsigned __int64 v16; // xmm0_8
  __int64 v17; // r15
  PVOID v18; // rax
  unsigned int Information; // r15d
  _DWORD *OutputBuffer; // rax
  NTSTATUS v21; // eax
  __m128i v22; // xmm1
  __int64 v23; // rax
  int v26; // [rsp+54h] [rbp-144h]
  unsigned int v27; // [rsp+70h] [rbp-128h]
  const void *Src_8; // [rsp+80h] [rbp-118h]
  __m128i v29; // [rsp+88h] [rbp-110h]
  volatile void *Address[2]; // [rsp+98h] [rbp-100h]
  SIZE_T NumberOfBytes; // [rsp+A8h] [rbp-F0h]
  __int64 InputBuffer; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 FileInformation; // [rsp+B8h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-D8h]
  _DWORD *v35; // [rsp+C8h] [rbp-D0h]
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-C8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E0h] [rbp-B8h] BYREF
  HANDLE v38[4]; // [rsp+F0h] [rbp-A8h] BYREF
  HANDLE FileHandle[4]; // [rsp+110h] [rbp-88h] BYREF
  __m128i v40; // [rsp+130h] [rbp-68h]
  __m128i v41; // [rsp+140h] [rbp-58h]
  char FsInformation[8]; // [rsp+150h] [rbp-48h] BYREF
  int v43; // [rsp+158h] [rbp-40h]

  v35 = a3;
  v34 = a1;
  PoolWithTag = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  OutputBufferLength = 32;
  memset(FileHandle, 0, sizeof(FileHandle));
  FileHandle[3] = (HANDLE)((unsigned __int64)FileHandle[3] | 0x200000000LL);
  memset(v38, 0, sizeof(v38));
  v38[3] = (HANDLE)((unsigned __int64)v38[3] | 0x200000000LL);
  v26 = 1;
  if ( *(_DWORD *)(a1 + 24) < 0x38u )
  {
LABEL_2:
    inited = -1073741306;
    goto LABEL_52;
  }
  if ( a2 )
    ProbeForWrite(*(volatile void **)(a1 + 16), 0x38uLL, 8u);
  v13 = *(_QWORD *)(a1 + 16);
  v41 = *(__m128i *)v13;
  Src_8 = (const void *)v41.m128i_i64[1];
  v14 = *(__m128i *)(v13 + 16);
  v40 = v14;
  v29.m128i_i64[0] = v14.m128i_i64[0];
  *(_OWORD *)Address = *(_OWORD *)(v13 + 32);
  NumberOfBytes = *(_QWORD *)(v13 + 48);
  if ( _mm_cvtsi128_si32(v41) != 2 )
  {
    inited = -1073741735;
    goto LABEL_52;
  }
  v15 = _mm_cvtsi128_si32(v14);
  if ( (v15 & 1) != 0 || v15 - 1 > 0xFFFFF || (v14.m128i_i8[4] & 1) != 0 || !v14.m128i_i32[1] || v14.m128i_i32[1] >= v15 )
    goto LABEL_51;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x70436650u);
  if ( !PoolWithTag )
  {
LABEL_13:
    inited = -1073741670;
    goto LABEL_52;
  }
  if ( a2 )
  {
    if ( (_mm_cvtsi128_si32(_mm_srli_si128(v41, 8)) & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = _mm_srli_si128(v41, 8).m128i_u64[0];
    Src_8 = (const void *)v16;
    if ( v15 + v16 > 0x7FFFFFFF0000LL || v15 + v16 < v16 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(PoolWithTag, Src_8, v15);
  if ( *((_WORD *)PoolWithTag + (v15 >> 1) - 1)
    || (v17 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v40, 4)) >> 1, *((_WORD *)PoolWithTag + v17) != 92) )
  {
LABEL_51:
    inited = -1073741811;
    goto LABEL_52;
  }
  v18 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x43536650u);
  v7 = (ULONG_PTR)v18;
  if ( !v18 )
    goto LABEL_13;
  PfpPrefetchSharedInitialize((__int64)v18);
  *(_DWORD *)(v7 + 56) = 15;
  *(_DWORD *)(v7 + 60) = 150;
  inited = PfpPrefetchSharedStart(v7);
  if ( inited >= 0 )
  {
    *((_WORD *)PoolWithTag + v17) = 0;
    inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
    if ( inited >= 0 )
    {
      inited = PfpOpenHandleCreate((__int64)FileHandle, v7, (__int64)&DestinationString, 0LL, 1048960, 0x20u, 0, 0LL);
      if ( inited >= 0 )
      {
        *((_WORD *)PoolWithTag + v17) = 92;
        inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
        if ( inited >= 0 )
        {
          inited = PfpOpenHandleCreate(
                     (__int64)v38,
                     v7,
                     (__int64)&DestinationString,
                     0LL,
                     1048704,
                     0x20u,
                     0x80u,
                     (__int64)FileHandle);
          if ( inited >= 0 )
          {
            inited = ZwQueryVolumeInformationFile(
                       FileHandle[0],
                       &IoStatusBlock,
                       FsInformation,
                       0x18u,
                       FileFsVolumeInformation);
            if ( (inited & 0xC0000000) != 0xC0000000 )
            {
              LODWORD(Address[0]) = v43;
              InputBuffer = 0LL;
              Information = NumberOfBytes;
              v27 = NumberOfBytes;
              if ( (unsigned int)NumberOfBytes > 0x20 )
                OutputBufferLength = NumberOfBytes;
              while ( OutputBufferLength <= 0xA00000 )
              {
                if ( v6 )
                  ExFreePoolWithTag(v6, 0);
                OutputBuffer = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x65466650u);
                v6 = OutputBuffer;
                if ( !OutputBuffer )
                  goto LABEL_13;
                v21 = ZwFsControlFile(
                        v38[0],
                        0LL,
                        0LL,
                        0LL,
                        &IoStatusBlock,
                        0x90073u,
                        &InputBuffer,
                        8u,
                        OutputBuffer,
                        OutputBufferLength);
                inited = v21;
                if ( v21 >= 0 )
                {
                  Information = IoStatusBlock.Information;
                  LODWORD(NumberOfBytes) = IoStatusBlock.Information;
                  if ( *v6 )
                  {
                    inited = 0;
                    v22 = v40;
                  }
                  else
                  {
LABEL_39:
                    inited = ZwQueryInformationFile(
                               v38[0],
                               &IoStatusBlock,
                               &FileInformation,
                               8u,
                               FileInternalInformation);
                    if ( inited < 0 )
                      goto LABEL_52;
                    v29.m128i_i64[1] = FileInformation;
                    inited = -1073741807;
                    v22 = v29;
                  }
                  v23 = *(_QWORD *)(v34 + 16);
                  *(__m128i *)v23 = v41;
                  *(__m128i *)(v23 + 16) = v22;
                  *(_OWORD *)(v23 + 32) = *(_OWORD *)Address;
                  *(_QWORD *)(v23 + 48) = NumberOfBytes;
                  if ( inited == -1073741807 )
                  {
                    v26 = 0;
                  }
                  else if ( v27 >= Information )
                  {
                    if ( a2 )
                      ProbeForWrite(Address[1], Information, 8u);
                    memmove((void *)Address[1], v6, Information);
                  }
                  else
                  {
                    v26 = 0;
                    inited = -1073741789;
                  }
                  *v35 = 56;
                  goto LABEL_52;
                }
                if ( v21 == -1073741807 )
                  goto LABEL_39;
                if ( v21 != -2147483643 )
                  goto LABEL_52;
                OutputBufferLength *= 2;
              }
              goto LABEL_2;
            }
          }
        }
      }
    }
  }
LABEL_52:
  if ( v26 && (inited == -1073741807 || inited == -1073741789) )
    inited = -1073741823;
  if ( ((unsigned __int64)v38[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v38, v7);
  if ( ((unsigned __int64)FileHandle[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(FileHandle, v7);
  if ( v7 )
  {
    PfpPrefetchSharedCleanup(v7, v9, v10, v11);
    PfpPrefetchSharedDeref((volatile signed __int64 *)v7);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)inited;
}
