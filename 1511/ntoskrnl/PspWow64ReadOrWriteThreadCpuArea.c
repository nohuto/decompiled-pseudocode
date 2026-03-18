/*
 * XREFs of PspWow64ReadOrWriteThreadCpuArea @ 0x1404A53C8
 * Callers:
 *     PspWow64SetContextThread @ 0x1404A4990 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1404A4C94 (PspWow64GetContextThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     PspUnlockThreadSecurityShared @ 0x1400D1980 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x1400D19C0 (PspLockThreadSecurityShared.c)
 *     PsGetThreadTeb @ 0x1400E1364 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1404A56CC (RtlWow64GetCpuAreaInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  _OWORD *v15; // rcx
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  __int64 v18; // rcx
  _OWORD *v19; // rdi
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  int CpuAreaInfo; // [rsp+20h] [rbp-B8h]
  volatile void *Address; // [rsp+38h] [rbp-A0h] BYREF
  ULONG64 v25; // [rsp+50h] [rbp-88h]
  __int64 v26; // [rsp+60h] [rbp-78h]
  $D4FCF91253F76F57393CBFE908971F67 v27; // [rsp+68h] [rbp-70h] BYREF

  PspLockThreadSecurityShared(a2, (__int64)KeGetCurrentThread());
  ThreadTeb = PsGetThreadTeb(a2);
  if ( ThreadTeb )
  {
    KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)&v27);
    v14 = *(_QWORD *)(ThreadTeb + 5256);
    if ( v14 )
    {
      CpuAreaInfo = RtlWow64GetCpuAreaInfo(v14, v13, &Address);
      if ( CpuAreaInfo >= 0 )
      {
        if ( a3 )
        {
          v15 = Address;
          if ( ((unsigned __int8)Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)Address + 716 > MmUserProbeAddress || (char *)Address + 716 < Address )
            *(_BYTE *)MmUserProbeAddress = 0;
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
            v17 = (_DWORD *)v25;
            if ( v25 >= MmUserProbeAddress )
              v17 = (_DWORD *)MmUserProbeAddress;
            *a7 = *v17;
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
            v21 = (_DWORD *)v25;
            if ( v25 >= MmUserProbeAddress )
              v21 = (_DWORD *)MmUserProbeAddress;
            *v21 = *a7;
          }
        }
        if ( a8 )
        {
          v18 = *(_QWORD *)(ThreadTeb + 5328);
          v26 = v18;
          if ( v18 )
          {
            if ( (v18 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v18 + 8 > MmUserProbeAddress || v18 + 8 < (unsigned __int64)(v18 + 4) )
              *(_BYTE *)MmUserProbeAddress = 0;
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
    KiUnstackDetachProcess(&v27, 0LL);
    PspUnlockThreadSecurityShared(a2, (__int64)KeGetCurrentThread());
    return (unsigned int)CpuAreaInfo;
  }
  else
  {
    PspUnlockThreadSecurityShared(a2, (__int64)KeGetCurrentThread());
    return 3221225547LL;
  }
}
