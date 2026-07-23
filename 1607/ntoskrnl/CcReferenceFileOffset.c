/*
 * XREFs of CcReferenceFileOffset @ 0x1401B26F4
 * Callers:
 *     CcPinFileData @ 0x140031960 (CcPinFileData.c)
 * Callees:
 *     SetVacb @ 0x14001817C (SetVacb.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x140018490 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140018534 (CcAcquireBcbLockAndVacbLock.c)
 *     CcFreeUnusedVacbLevels @ 0x14006CEC4 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevels @ 0x14006D490 (CcAllocateVacbLevels.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 */

void __fastcall CcReferenceFileOffset(__int64 a1, unsigned int a2)
{
  int v3; // edx
  _QWORD v4[3]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-10h]

  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    v3 = *(_DWORD *)(a1 + 152);
    v4[2] = 0LL;
    v4[1] = v4;
    v4[0] = v4;
    v5 = 0;
    if ( !CcAllocateVacbLevels(CcMaxVacbLevelsSeen - 1, (v3 & 0x200) != 0, (__int64)v4) )
      RtlRaiseStatus(-1073741670);
    CcAcquireBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
    SetVacb(a1, a2, 0xFFFFFFFFFFFFFFFFuLL);
    CcReleaseBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
    CcFreeUnusedVacbLevels((__int64)v4);
  }
}
