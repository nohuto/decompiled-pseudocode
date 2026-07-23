/*
 * XREFs of PopHiberReadChecksums @ 0x1403CD0C4
 * Callers:
 *     PopRestoreHiberContext @ 0x1403CDA38 (PopRestoreHiberContext.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PopInternalAddToDumpFile @ 0x1401FEEA4 (PopInternalAddToDumpFile.c)
 *     PopGetIoLocation @ 0x1403CE9D4 (PopGetIoLocation.c)
 */

void __fastcall PopHiberReadChecksums(ULONG_PTR BugCheckParameter3)
{
  char *v1; // rsi
  __int64 v2; // r12
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 i; // rdi
  __int64 IoLocation; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  size_t v12; // r14
  int v13; // eax
  unsigned int v14; // r15d
  unsigned __int64 v15; // r14
  int v16; // eax
  ULONG_PTR BugCheckParameter4; // r12
  unsigned __int64 v18; // rax
  size_t v19; // [rsp+30h] [rbp-68h]
  __int64 v20; // [rsp+38h] [rbp-60h]
  __int64 v21; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-50h]
  char *v23; // [rsp+A8h] [rbp+10h]
  size_t v24; // [rsp+B0h] [rbp+18h] BYREF

  v1 = *(char **)(BugCheckParameter3 + 440);
  v2 = 0LL;
  v23 = v1;
  if ( v1 )
  {
    v4 = *(_QWORD *)(BugCheckParameter3 + 200);
    v5 = *(_QWORD *)(BugCheckParameter3 + 328);
    v20 = v4;
    v6 = *(_QWORD *)(v4 + 128);
    v7 = *(_QWORD *)(v4 + 120) << 12;
    v22 = __rdtsc();
    for ( i = (2 * v6 + 4095) & 0xFFFFFFFFFFFFF000uLL; i; i -= v12 )
    {
      IoLocation = PopGetIoLocation(*(_QWORD *)(BugCheckParameter3 + 160), v7, &v24);
      v10 = *(_QWORD *)(BugCheckParameter3 + 144);
      v11 = 4095LL;
      v12 = v24;
      v21 = IoLocation;
      if ( i < v24 )
        v12 = i;
      if ( v12 >= (unsigned __int64)*(unsigned int *)(BugCheckParameter3 + 152) << 12 )
        v12 = (unsigned __int64)*(unsigned int *)(BugCheckParameter3 + 152) << 12;
      if ( v12 >= (unsigned __int64)*(unsigned int *)(BugCheckParameter3 + 416) << 12 )
        v12 = (unsigned __int64)*(unsigned int *)(BugCheckParameter3 + 416) << 12;
      v13 = *(_DWORD *)(BugCheckParameter3 + 144);
      *(_WORD *)(v5 + 10) = 0;
      *(_QWORD *)v5 = 0LL;
      *(_DWORD *)(v5 + 40) = v12;
      v19 = v12;
      *(_WORD *)(v5 + 8) = 8 * (((v12 + (v10 & 0xFFF) + 4095) >> 12) + 6);
      *(_QWORD *)(v5 + 32) = v10 & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(v5 + 44) = v10 & 0xFFF;
      *(_QWORD *)(v5 + 24) = *(_QWORD *)(BugCheckParameter3 + 144);
      *(_WORD *)(v5 + 10) = 1;
      if ( (v12 + (v13 & 0xFFF) + 4095LL) >> 12 )
      {
        v14 = 0;
        v15 = (v12 + (v13 & 0xFFF) + 4095LL) >> 12;
        do
        {
          ++v14;
          *(_QWORD *)(v5 + 8 * v2 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(*(_QWORD *)(BugCheckParameter3 + 144)
                                                                                       + (v2 << 12))).QuadPart >> 12;
          v2 = v14;
        }
        while ( v14 < v15 );
        v1 = v23;
        v12 = v19;
        v4 = v20;
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64, __int64))(*(_QWORD *)(BugCheckParameter3 + 168)
                                                                           + 160LL))(
              0LL,
              &v21,
              v5,
              v11);
      BugCheckParameter4 = v16;
      if ( v16 < 0 )
      {
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, BugCheckParameter4);
      }
      memmove(v1, *(const void **)(BugCheckParameter3 + 144), v12);
      v1 += v12;
      v7 += v12;
      v2 = 0LL;
      v23 = v1;
    }
    *(_QWORD *)(BugCheckParameter3 + 424) = *(_QWORD *)(v4 + 128);
    v18 = __rdtsc();
    qword_140303960 += (((unsigned __int64)HIDWORD(v18) << 32) | (unsigned int)v18) - v22;
  }
}
