/*
 * XREFs of PfpQueryFileExtentsRequest @ 0x140630EFC
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140475A70 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x140150840 (ZwQueryInformationFile.c)
 *     ZwFsControlFile @ 0x140150D40 (ZwFsControlFile.c)
 *     ZwQueryVolumeInformationFile @ 0x140150F40 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     PfpPrefetchSharedInitialize @ 0x1404BFC40 (PfpPrefetchSharedInitialize.c)
 *     PfpOpenHandleCreate @ 0x1404D944C (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x1404DA474 (PfpOpenHandleClose.c)
 *     PfpPrefetchSharedCleanup @ 0x1404DCEB8 (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedStart @ 0x1404DCF90 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedDeref @ 0x1404DD1A0 (PfpPrefetchSharedDeref.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpQueryFileExtentsRequest(__int64 a1, char a2, _DWORD *a3)
{
  PVOID PoolWithTag; // r14
  _DWORD *v6; // r12
  ULONG_PTR v7; // rsi
  ULONG OutputBufferLength; // r13d
  int inited; // ebx
  __int64 v10; // rax
  __m128i v11; // xmm2
  unsigned int v12; // ebx
  unsigned __int64 v13; // xmm0_8
  __int64 v14; // r15
  PVOID v15; // rax
  unsigned int Information; // r15d
  _DWORD *OutputBuffer; // rax
  NTSTATUS v18; // eax
  __m128i v19; // xmm1
  __int64 v20; // rax
  int v23; // [rsp+54h] [rbp-144h]
  unsigned int v24; // [rsp+74h] [rbp-124h]
  const void *Src_8; // [rsp+80h] [rbp-118h]
  __m128i v26; // [rsp+88h] [rbp-110h]
  volatile void *Address[2]; // [rsp+98h] [rbp-100h]
  SIZE_T NumberOfBytes; // [rsp+A8h] [rbp-F0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-E0h] BYREF
  __int64 FileInformation; // [rsp+C8h] [rbp-D0h] BYREF
  __int64 InputBuffer; // [rsp+D0h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-C0h] BYREF
  HANDLE v34[4]; // [rsp+E8h] [rbp-B0h] BYREF
  _DWORD *v35; // [rsp+108h] [rbp-90h]
  HANDLE FileHandle[4]; // [rsp+110h] [rbp-88h] BYREF
  __m128i v37; // [rsp+130h] [rbp-68h]
  __m128i v38; // [rsp+140h] [rbp-58h]
  char FsInformation[8]; // [rsp+150h] [rbp-48h] BYREF
  int v40; // [rsp+158h] [rbp-40h]

  v35 = a3;
  PoolWithTag = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  OutputBufferLength = 32;
  memset(FileHandle, 0, sizeof(FileHandle));
  FileHandle[3] = (HANDLE)((unsigned __int64)FileHandle[3] | 0x200000000LL);
  memset(v34, 0, sizeof(v34));
  v34[3] = (HANDLE)((unsigned __int64)v34[3] | 0x200000000LL);
  v23 = 1;
  if ( *(_DWORD *)(a1 + 24) < 0x38u )
  {
LABEL_2:
    inited = -1073741306;
    goto LABEL_52;
  }
  if ( a2 )
    ProbeForWrite(*(volatile void **)(a1 + 16), 0x38uLL, 8u);
  v10 = *(_QWORD *)(a1 + 16);
  v38 = *(__m128i *)v10;
  Src_8 = (const void *)v38.m128i_i64[1];
  v11 = *(__m128i *)(v10 + 16);
  v37 = v11;
  v26.m128i_i64[0] = v11.m128i_i64[0];
  *(_OWORD *)Address = *(_OWORD *)(v10 + 32);
  NumberOfBytes = *(_QWORD *)(v10 + 48);
  if ( _mm_cvtsi128_si32(v38) != 2 )
  {
    inited = -1073741735;
    goto LABEL_52;
  }
  v12 = _mm_cvtsi128_si32(v11);
  if ( (v12 & 1) != 0 || v12 - 1 > 0xFFFFF || (v11.m128i_i8[4] & 1) != 0 || !v11.m128i_i32[1] || v11.m128i_i32[1] >= v12 )
    goto LABEL_51;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x70436650u);
  if ( !PoolWithTag )
  {
LABEL_13:
    inited = -1073741670;
    goto LABEL_52;
  }
  if ( a2 )
  {
    if ( (_mm_cvtsi128_si32(_mm_srli_si128(v38, 8)) & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = _mm_srli_si128(v38, 8).m128i_u64[0];
    Src_8 = (const void *)v13;
    if ( v12 + v13 > MmUserProbeAddress || v12 + v13 < v13 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(PoolWithTag, Src_8, v12);
  if ( *((_WORD *)PoolWithTag + (v12 >> 1) - 1)
    || (v14 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v37, 4)) >> 1, *((_WORD *)PoolWithTag + v14) != 92) )
  {
LABEL_51:
    inited = -1073741811;
    goto LABEL_52;
  }
  v15 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x43536650u);
  v7 = (ULONG_PTR)v15;
  if ( !v15 )
    goto LABEL_13;
  PfpPrefetchSharedInitialize((__int64)v15);
  *(_DWORD *)(v7 + 56) = 15;
  *(_DWORD *)(v7 + 60) = 150;
  inited = PfpPrefetchSharedStart(v7);
  if ( inited >= 0 )
  {
    *((_WORD *)PoolWithTag + v14) = 0;
    inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
    if ( inited >= 0 )
    {
      inited = PfpOpenHandleCreate((__int64)FileHandle, v7, (__int64)&DestinationString, 0LL, 1048960, 0x20u, 0, 0LL);
      if ( inited >= 0 )
      {
        *((_WORD *)PoolWithTag + v14) = 92;
        inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
        if ( inited >= 0 )
        {
          inited = PfpOpenHandleCreate(
                     (__int64)v34,
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
              LODWORD(Address[0]) = v40;
              InputBuffer = 0LL;
              Information = NumberOfBytes;
              v24 = NumberOfBytes;
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
                v18 = ZwFsControlFile(
                        v34[0],
                        0LL,
                        0LL,
                        0LL,
                        &IoStatusBlock,
                        0x90073u,
                        &InputBuffer,
                        8u,
                        OutputBuffer,
                        OutputBufferLength);
                inited = v18;
                if ( v18 >= 0 )
                {
                  Information = IoStatusBlock.Information;
                  LODWORD(NumberOfBytes) = IoStatusBlock.Information;
                  if ( *v6 )
                  {
                    inited = 0;
                    v19 = v37;
                  }
                  else
                  {
LABEL_39:
                    inited = ZwQueryInformationFile(
                               v34[0],
                               &IoStatusBlock,
                               &FileInformation,
                               8u,
                               FileInternalInformation);
                    if ( inited < 0 )
                      goto LABEL_52;
                    v26.m128i_i64[1] = FileInformation;
                    inited = -1073741807;
                    v19 = v26;
                  }
                  v20 = *(_QWORD *)(a1 + 16);
                  *(__m128i *)v20 = v38;
                  *(__m128i *)(v20 + 16) = v19;
                  *(_OWORD *)(v20 + 32) = *(_OWORD *)Address;
                  *(_QWORD *)(v20 + 48) = NumberOfBytes;
                  if ( inited == -1073741807 )
                  {
                    v23 = 0;
                  }
                  else if ( v24 >= Information )
                  {
                    if ( a2 )
                      ProbeForWrite(Address[1], Information, 8u);
                    memmove((void *)Address[1], v6, Information);
                  }
                  else
                  {
                    v23 = 0;
                    inited = -1073741789;
                  }
                  *v35 = 56;
                  goto LABEL_52;
                }
                if ( v18 == -1073741807 )
                  goto LABEL_39;
                if ( v18 != -2147483643 )
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
  if ( v23 && (inited == -1073741807 || inited == -1073741789) )
    inited = -1073741823;
  if ( ((unsigned __int64)v34[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v34, v7);
  if ( ((unsigned __int64)FileHandle[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(FileHandle, v7);
  if ( v7 )
  {
    PfpPrefetchSharedCleanup(v7);
    PfpPrefetchSharedDeref((volatile signed __int64 *)v7);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)inited;
}
