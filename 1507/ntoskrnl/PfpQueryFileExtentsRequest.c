/*
 * XREFs of PfpQueryFileExtentsRequest @ 0x1406AF41C
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140431980 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x14017F210 (ZwQueryInformationFile.c)
 *     ZwFsControlFile @ 0x14017F710 (ZwFsControlFile.c)
 *     ZwQueryVolumeInformationFile @ 0x14017F910 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PfpOpenHandleClose @ 0x14042D5B8 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x14042D8E8 (PfpOpenHandleCreate.c)
 *     PfpPrefetchSharedStart @ 0x140458AC8 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x140458F0C (PfpPrefetchSharedCleanup.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpQueryFileExtentsRequest(__int64 a1, char a2, _DWORD *a3)
{
  PVOID PoolWithTag; // rsi
  _DWORD *v6; // r14
  ULONG OutputBufferLength; // r12d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int inited; // ebx
  __int64 v12; // rax
  __m128i v13; // xmm2
  unsigned int v14; // ebx
  unsigned __int64 v15; // xmm0_8
  __int64 v16; // r15
  unsigned int Information; // r15d
  _DWORD *OutputBuffer; // rax
  NTSTATUS v19; // eax
  __m128i v20; // xmm1
  __int64 v21; // rax
  int v24; // [rsp+54h] [rbp-1C4h]
  unsigned int v25; // [rsp+6Ch] [rbp-1ACh]
  const void *Src_8; // [rsp+78h] [rbp-1A0h]
  __m128i v27; // [rsp+80h] [rbp-198h]
  volatile void *Address[2]; // [rsp+90h] [rbp-188h]
  SIZE_T NumberOfBytes; // [rsp+A0h] [rbp-178h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-168h] BYREF
  __int64 FileInformation; // [rsp+C0h] [rbp-158h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-150h]
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-148h] BYREF
  HANDLE v35[4]; // [rsp+E0h] [rbp-138h] BYREF
  __int64 InputBuffer; // [rsp+100h] [rbp-118h] BYREF
  HANDLE FileHandle[4]; // [rsp+108h] [rbp-110h] BYREF
  __m128i v38; // [rsp+128h] [rbp-F0h]
  __m128i v39; // [rsp+138h] [rbp-E0h]
  __int64 v40[16]; // [rsp+150h] [rbp-C8h] BYREF
  char FsInformation[8]; // [rsp+1D0h] [rbp-48h] BYREF
  int v42; // [rsp+1D8h] [rbp-40h]

  v33 = a1;
  PoolWithTag = 0LL;
  v6 = 0LL;
  memset(v40, 0, 0x78uLL);
  v40[6] = (__int64)v40;
  v40[5] = (__int64)PfpPrefetchSharedConflictNotify;
  KeInitializeEvent((PRKEVENT)&v40[11], NotificationEvent, 0);
  OutputBufferLength = 32;
  memset(FileHandle, 0, sizeof(FileHandle));
  FileHandle[3] = (HANDLE)((unsigned __int64)FileHandle[3] | 0x200000000LL);
  memset(v35, 0, sizeof(v35));
  v35[3] = (HANDLE)((unsigned __int64)v35[3] | 0x200000000LL);
  v24 = 1;
  if ( *(_DWORD *)(a1 + 24) < 0x38u )
  {
LABEL_2:
    inited = -1073741306;
    goto LABEL_51;
  }
  if ( a2 )
    ProbeForWrite(*(volatile void **)(a1 + 16), 0x38uLL, 8u);
  v12 = *(_QWORD *)(a1 + 16);
  v38 = *(__m128i *)v12;
  Src_8 = (const void *)v38.m128i_i64[1];
  v13 = *(__m128i *)(v12 + 16);
  v39 = v13;
  v27.m128i_i64[0] = v13.m128i_i64[0];
  *(_OWORD *)Address = *(_OWORD *)(v12 + 32);
  NumberOfBytes = *(_QWORD *)(v12 + 48);
  if ( _mm_cvtsi128_si32(v38) != 2 )
  {
    inited = -1073741735;
    goto LABEL_51;
  }
  v14 = _mm_cvtsi128_si32(v13);
  if ( (v14 & 1) != 0 || v14 - 1 > 0xFFFFF || (v13.m128i_i8[4] & 1) != 0 || !v13.m128i_i32[1] || v13.m128i_i32[1] >= v14 )
    goto LABEL_50;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, 0x70436650u);
  if ( !PoolWithTag )
  {
LABEL_13:
    inited = -1073741670;
    goto LABEL_51;
  }
  if ( a2 )
  {
    if ( (_mm_cvtsi128_si32(_mm_srli_si128(v38, 8)) & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = _mm_srli_si128(v38, 8).m128i_u64[0];
    Src_8 = (const void *)v15;
    if ( v14 + v15 > MmUserProbeAddress || v14 + v15 < v15 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(PoolWithTag, Src_8, v14);
  if ( *((_WORD *)PoolWithTag + (v14 >> 1) - 1)
    || (v16 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v39, 4)) >> 1, *((_WORD *)PoolWithTag + v16) != 92) )
  {
LABEL_50:
    inited = -1073741811;
    goto LABEL_51;
  }
  v40[7] = 0x960000000FLL;
  inited = PfpPrefetchSharedStart((__int64)v40);
  if ( inited >= 0 )
  {
    *((_WORD *)PoolWithTag + v16) = 0;
    inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
    if ( inited >= 0 )
    {
      inited = PfpOpenHandleCreate(
                 (__int64)FileHandle,
                 (__int64)v40,
                 (__int64)&DestinationString,
                 0LL,
                 1048960,
                 0x20u,
                 0,
                 0LL);
      if ( inited >= 0 )
      {
        *((_WORD *)PoolWithTag + v16) = 92;
        inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
        if ( inited >= 0 )
        {
          inited = PfpOpenHandleCreate(
                     (__int64)v35,
                     (__int64)v40,
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
              LODWORD(Address[0]) = v42;
              InputBuffer = 0LL;
              Information = NumberOfBytes;
              v25 = NumberOfBytes;
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
                v19 = ZwFsControlFile(
                        v35[0],
                        0LL,
                        0LL,
                        0LL,
                        &IoStatusBlock,
                        0x90073u,
                        &InputBuffer,
                        8u,
                        OutputBuffer,
                        OutputBufferLength);
                inited = v19;
                if ( v19 >= 0 )
                {
                  Information = IoStatusBlock.Information;
                  LODWORD(NumberOfBytes) = IoStatusBlock.Information;
                  if ( *v6 )
                  {
                    inited = 0;
                    v20 = v39;
                  }
                  else
                  {
LABEL_38:
                    inited = ZwQueryInformationFile(
                               v35[0],
                               &IoStatusBlock,
                               &FileInformation,
                               8u,
                               FileInternalInformation);
                    if ( inited < 0 )
                      goto LABEL_51;
                    v27.m128i_i64[1] = FileInformation;
                    inited = -1073741807;
                    v20 = v27;
                  }
                  v21 = *(_QWORD *)(v33 + 16);
                  *(__m128i *)v21 = v38;
                  *(__m128i *)(v21 + 16) = v20;
                  *(_OWORD *)(v21 + 32) = *(_OWORD *)Address;
                  *(_QWORD *)(v21 + 48) = NumberOfBytes;
                  if ( inited == -1073741807 )
                  {
                    v24 = 0;
                  }
                  else if ( v25 >= Information )
                  {
                    if ( a2 )
                      ProbeForWrite(Address[1], Information, 8u);
                    memmove((void *)Address[1], v6, Information);
                  }
                  else
                  {
                    v24 = 0;
                    inited = -1073741789;
                  }
                  *a3 = 56;
                  goto LABEL_51;
                }
                if ( v19 == -1073741807 )
                  goto LABEL_38;
                if ( v19 != -2147483643 )
                  goto LABEL_51;
                OutputBufferLength *= 2;
              }
              goto LABEL_2;
            }
          }
        }
      }
    }
  }
LABEL_51:
  if ( v24 && (inited == -1073741807 || inited == -1073741789) )
    inited = -1073741823;
  if ( ((unsigned __int64)v35[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v35, (__int64)v40);
  if ( ((unsigned __int64)FileHandle[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(FileHandle, (__int64)v40);
  PfpPrefetchSharedCleanup(v40, v8, v9, v10);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)inited;
}
