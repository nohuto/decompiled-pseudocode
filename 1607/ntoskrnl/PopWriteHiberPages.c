/*
 * XREFs of PopWriteHiberPages @ 0x1403CBF00
 * Callers:
 *     PopWriteSecurePages @ 0x140205A20 (PopWriteSecurePages.c)
 *     PopWriteSecurePagesCallback @ 0x140205AC0 (PopWriteSecurePagesCallback.c)
 *     PopWriteHeaderPages @ 0x1403CBC90 (PopWriteHeaderPages.c)
 *     PopWriteChecksumPages @ 0x1403DF160 (PopWriteChecksumPages.c)
 *     PopWriteImageHeader @ 0x1403DF1F4 (PopWriteImageHeader.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     _PopInternalError @ 0x1401FF28C (_PopInternalError.c)
 *     PopGetIoLocation @ 0x1403CE9D4 (PopGetIoLocation.c)
 *     PopCheckpointSystemSleep @ 0x1403CEBA4 (PopCheckpointSystemSleep.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x1403DF0DC (PopGetRemainingHibernateRangeDataSize.c)
 *     MmGetNumberOfPhysicalPages @ 0x140413488 (MmGetNumberOfPhysicalPages.c)
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
  __int64 v17; // rbx
  unsigned int i; // esi
  unsigned __int64 v19; // rbx
  int v20; // ecx
  unsigned __int64 v21; // rax
  int v22; // eax
  unsigned __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 NumberOfPhysicalPages; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  __int16 v30; // [rsp+78h] [rbp-88h]
  __int16 v31; // [rsp+7Ah] [rbp-86h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  unsigned __int64 v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  _QWORD v36[34]; // [rsp+A0h] [rbp-60h]

  v4 = PopWatchdogTimerCount;
  BugCheckParameter4 = 0LL;
  v25 = a1;
  v9 = a1;
  if ( (PopWatchdogTimerCount & 0x1F) == 0 )
  {
    off_1402F25D0();
    v4 = PopWatchdogTimerCount;
  }
  result = (unsigned int)(v4 + 1);
  PopWatchdogTimerCount = result;
  if ( *(int *)(v9 + 188) >= 0 )
  {
    if ( (a4 + a3) << 12 > qword_1403034D0 )
    {
      PopCheckpointSystemSleep(22LL);
      if ( (unsigned int)(*(_DWORD *)(v9 + 184) - 4) <= 1 )
        BugCheckParameter4 = PopGetRemainingHibernateRangeDataSize(v9);
      NumberOfPhysicalPages = MmGetNumberOfPhysicalPages();
      IoAddTriageDumpDataBlock((int)&NumberOfPhysicalPages, 8);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_1403034D0, *(unsigned int *)(v9 + 184), BugCheckParameter4);
    }
    if ( a3 > 0xFFFFFFFFFFFFFLL )
      PopInternalError(0xA1EB0uLL);
    result = *(_QWORD *)(v9 + 160);
    v11 = a4 << 12;
    v28 = result;
    v12 = a3 << 12;
    while ( v12 )
    {
      IoLocation = PopGetIoLocation(result, v11, &v23);
      v14 = (unsigned int)v12;
      v26 = IoLocation;
      if ( v12 > v23 )
        v14 = (unsigned int)v23;
      v15 = a2 & 0xFFF;
      v16 = ((unsigned __int64)(unsigned int)v14 + v15 + 4095) >> 12;
      if ( v16 > 0x10 )
      {
        v22 = v16 - 16;
        v16 = 16LL;
        v14 = (unsigned int)(v14 - (v22 << 12));
      }
      v27 = v14;
      v29 = 0LL;
      v34 = v14;
      v30 = 8 * (((unsigned __int64)(v15 + v14 + 4095) >> 12) + 6);
      v32 = a2;
      v33 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v31 = 1;
      v35 = a2 & 0xFFF;
      if ( v16 )
      {
        v17 = 0LL;
        for ( i = 0; i < v16; v17 = i )
        {
          ++i;
          v36[v17] = (unsigned __int64)MmGetPhysicalAddress((PVOID)(a2 + (v17 << 12))).QuadPart >> 12;
        }
        v9 = v25;
      }
      v19 = __rdtsc();
      v20 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*(_QWORD *)(v9 + 168) + 64LL))(&v26, &v29);
      v21 = __rdtsc();
      dword_1403039C0 += v16;
      qword_1403037F8 += (((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) - v19;
      result = v27;
      v12 -= v27;
      v11 += v27;
      a2 += v27;
      if ( v20 < 0 )
      {
        *(_DWORD *)(v9 + 188) = v20;
        return result;
      }
      result = v28;
    }
  }
  return result;
}
