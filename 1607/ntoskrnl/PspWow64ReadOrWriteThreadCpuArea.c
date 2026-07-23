/*
 * XREFs of PspWow64ReadOrWriteThreadCpuArea @ 0x1404FBC9C
 * Callers:
 *     PspWow64GetContextThread @ 0x1404FBFA8 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1404FC310 (PspWow64SetContextThread.c)
 * Callees:
 *     PspUnlockThreadSecurityShared @ 0x1400920C8 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x140092110 (PspLockThreadSecurityShared.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     PsGetThreadTeb @ 0x1400F4678 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1404FBBF0 (RtlWow64GetCpuAreaInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspWow64ReadOrWriteThreadCpuArea(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        _BYTE *a8)
{
  __int64 ThreadTeb; // r13
  __int16 v13; // dx
  __int64 v14; // rcx
  _OWORD *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  _OWORD *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rax
  int CpuAreaInfo; // [rsp+20h] [rbp-B8h]
  volatile void *Address; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-80h]
  _BYTE v26[48]; // [rsp+68h] [rbp-70h] BYREF

  PspLockThreadSecurityShared(a2, (__int64)KeGetCurrentThread());
  ThreadTeb = PsGetThreadTeb(a2);
  if ( ThreadTeb )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v26);
    v14 = *(_QWORD *)(ThreadTeb + 5256);
    if ( v14 )
    {
      CpuAreaInfo = RtlWow64GetCpuAreaInfo(v14, v13, (__int64)&Address);
      if ( CpuAreaInfo >= 0 )
      {
        if ( a3 )
        {
          v15 = Address;
          if ( ((unsigned __int8)Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)Address + 716 > 0x7FFFFFFF0000LL || (char *)Address + 716 < Address )
            MEMORY[0x7FFFFFFF0000] = 0;
          v16 = 5LL;
          do
          {
            *(_OWORD *)a4 = *v15;
            *(_OWORD *)(a4 + 16) = v15[1];
            *(_OWORD *)(a4 + 32) = v15[2];
            *(_OWORD *)(a4 + 48) = v15[3];
            *(_OWORD *)(a4 + 64) = v15[4];
            *(_OWORD *)(a4 + 80) = v15[5];
            *(_OWORD *)(a4 + 96) = v15[6];
            a4 += 128LL;
            *(_OWORD *)(a4 - 16) = v15[7];
            v15 += 8;
            --v16;
          }
          while ( v16 );
          *(_OWORD *)a4 = *v15;
          *(_OWORD *)(a4 + 16) = v15[1];
          *(_OWORD *)(a4 + 32) = v15[2];
          *(_OWORD *)(a4 + 48) = v15[3];
          *(_QWORD *)(a4 + 64) = *((_QWORD *)v15 + 8);
          *(_DWORD *)(a4 + 72) = *((_DWORD *)v15 + 18);
          if ( a7 )
          {
            v17 = v25;
            if ( v25 >= 0x7FFFFFFF0000LL )
              v17 = 0x7FFFFFFF0000LL;
            *a7 = *(_DWORD *)v17;
          }
        }
        else
        {
          v19 = Address;
          ProbeForWrite(Address, 0x2CCuLL, 4u);
          v20 = 5LL;
          do
          {
            *v19 = *(_OWORD *)a4;
            v19[1] = *(_OWORD *)(a4 + 16);
            v19[2] = *(_OWORD *)(a4 + 32);
            v19[3] = *(_OWORD *)(a4 + 48);
            v19[4] = *(_OWORD *)(a4 + 64);
            v19[5] = *(_OWORD *)(a4 + 80);
            v19[6] = *(_OWORD *)(a4 + 96);
            v19 += 8;
            *(v19 - 1) = *(_OWORD *)(a4 + 112);
            a4 += 128LL;
            --v20;
          }
          while ( v20 );
          *v19 = *(_OWORD *)a4;
          v19[1] = *(_OWORD *)(a4 + 16);
          v19[2] = *(_OWORD *)(a4 + 32);
          v19[3] = *(_OWORD *)(a4 + 48);
          *((_QWORD *)v19 + 8) = *(_QWORD *)(a4 + 64);
          *((_DWORD *)v19 + 18) = *(_DWORD *)(a4 + 72);
          if ( a7 )
          {
            v21 = v25;
            if ( v25 >= 0x7FFFFFFF0000LL )
              v21 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v21 = *a7;
          }
        }
        if ( a8 )
        {
          v18 = *(_QWORD *)(ThreadTeb + 5328);
          if ( v18 )
          {
            if ( (v18 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)(v18 + 8) > 0x7FFFFFFF0000LL || v18 + 8 < (unsigned __int64)(v18 + 4) )
              MEMORY[0x7FFFFFFF0000] = 0;
            *a8 = *(_BYTE *)(v18 + 4) & 2;
          }
          else
          {
            *a8 = 0;
          }
        }
      }
    }
    else
    {
      CpuAreaInfo = -1073741811;
    }
    KiUnstackDetachProcess((struct _KTHREAD *)v26, 0);
    PspUnlockThreadSecurityShared(a2, (__int64)KeGetCurrentThread());
    return (unsigned int)CpuAreaInfo;
  }
  else
  {
    PspUnlockThreadSecurityShared(a2, (__int64)KeGetCurrentThread());
    return 3221225547LL;
  }
}
