/*
 * XREFs of PopWriteHiberPages @ 0x1403F2D9C
 * Callers:
 *     PopWriteSecurePages @ 0x14023B064 (PopWriteSecurePages.c)
 *     PopWriteSecurePagesCallback @ 0x14023B104 (PopWriteSecurePagesCallback.c)
 *     PopWriteHeaderPages @ 0x1403F2B2C (PopWriteHeaderPages.c)
 *     PopWriteChecksumPages @ 0x1404036B8 (PopWriteChecksumPages.c)
 *     PopWriteImageHeader @ 0x14040374C (PopWriteImageHeader.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x1400757B0 (MmGetNumberOfPhysicalPages.c)
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     _PopInternalError @ 0x140233CCC (_PopInternalError.c)
 *     PopGetIoLocation @ 0x1403F5FA8 (PopGetIoLocation.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140403634 (PopGetRemainingHibernateRangeDataSize.c)
 */

__int64 __fastcall PopWriteHiberPages(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // eax
  ULONG_PTR BugCheckParameter4; // rdi
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // r12
  unsigned __int64 v12; // r14
  __int64 IoLocation; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r15
  unsigned int v17; // ebx
  __int64 v18; // rsi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned __int64 v20; // rbx
  int v21; // ecx
  unsigned __int64 v22; // rax
  int v23; // ecx
  int v24; // eax
  unsigned __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h]
  __int64 v28; // [rsp+48h] [rbp-B8h]
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 NumberOfPhysicalPages; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v32; // [rsp+68h] [rbp-98h]
  __int16 v33; // [rsp+6Ah] [rbp-96h]
  __int64 v34; // [rsp+78h] [rbp-88h]
  unsigned __int64 v35; // [rsp+80h] [rbp-80h]
  int v36; // [rsp+88h] [rbp-78h]
  int v37; // [rsp+8Ch] [rbp-74h]
  _QWORD v38[34]; // [rsp+90h] [rbp-70h]

  v4 = PopWatchdogTimerCount;
  BugCheckParameter4 = 0LL;
  v28 = a1;
  v9 = a1;
  if ( (PopWatchdogTimerCount & 0x1F) == 0 )
  {
    off_140321A80();
    v4 = PopWatchdogTimerCount;
  }
  result = (unsigned int)(v4 + 1);
  PopWatchdogTimerCount = result;
  if ( *(int *)(v9 + 188) >= 0 )
  {
    if ( (a4 + a3) << 12 > qword_14032E8B0 )
    {
      if ( (unsigned int)(*(_DWORD *)(v9 + 184) - 4) <= 1 )
        BugCheckParameter4 = PopGetRemainingHibernateRangeDataSize(v9);
      NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0);
      IoAddTriageDumpDataBlock((int)&NumberOfPhysicalPages, v23 + 8);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_14032E8B0, *(unsigned int *)(v9 + 184), BugCheckParameter4);
    }
    if ( a3 > 0xFFFFFFFFFFFFFLL )
      PopInternalError(0xA1EA5uLL);
    result = *(_QWORD *)(v9 + 160);
    v11 = a4 << 12;
    v29 = result;
    v12 = a3 << 12;
    while ( v12 )
    {
      IoLocation = PopGetIoLocation(result, v11, &v25);
      v14 = (unsigned int)v12;
      v26 = IoLocation;
      if ( v12 > v25 )
        v14 = (unsigned int)v25;
      v15 = a2 & 0xFFF;
      v16 = ((unsigned __int64)(unsigned int)v14 + v15 + 4095) >> 12;
      if ( v16 > 0x10 )
      {
        v24 = v16 - 16;
        v16 = 16LL;
        v14 = (unsigned int)(v14 - (v24 << 12));
      }
      v33 = 1;
      v27 = v14;
      v17 = 0;
      v31 = 0LL;
      v32 = 8 * (((unsigned __int64)(v15 + v14 + 4095) >> 12) + 6);
      v36 = v14;
      v35 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v34 = a2;
      v37 = a2 & 0xFFF;
      if ( v16 )
      {
        v18 = 0LL;
        do
        {
          PhysicalAddress = MmGetPhysicalAddress((PVOID)(a2 + (v17++ << 12)));
          v38[v18] = PhysicalAddress.QuadPart >> 12;
          v18 = v17;
        }
        while ( v17 < v16 );
        v9 = v28;
      }
      v20 = __rdtsc();
      v21 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*(_QWORD *)(v9 + 168) + 64LL))(&v26, &v31);
      v22 = __rdtsc();
      dword_14032EDA0 += v16;
      qword_14032EBE0 += (((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) - v20;
      result = v27;
      v12 -= v27;
      v11 += v27;
      a2 += v27;
      if ( v21 < 0 )
      {
        *(_DWORD *)(v9 + 188) = v21;
        return result;
      }
      result = v29;
    }
  }
  return result;
}
