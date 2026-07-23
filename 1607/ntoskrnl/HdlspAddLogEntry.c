/*
 * XREFs of HdlspAddLogEntry @ 0x140722ADC
 * Callers:
 *     HdlspDispatch @ 0x140722DE0 (HdlspDispatch.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcscmp @ 0x14014F524 (wcscmp.c)
 *     ZwQuerySystemInformation @ 0x14015A8B0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall HdlspAddLogEntry(_WORD *Src)
{
  wchar_t *v2; // r14
  __int64 v3; // rax
  SIZE_T v4; // rdi
  PVOID PoolWithTag; // rax
  PVOID v6; // rsi
  PKSPIN_LOCK v7; // rdi
  KIRQL v8; // al
  KIRQL v9; // bp
  __int16 v10; // ax
  unsigned __int16 v11; // r15
  unsigned __int16 v12; // r12
  const wchar_t *v13; // rbx
  __int64 v14; // rcx
  KSPIN_LOCK v15; // rax
  __int64 v16; // rcx
  KSPIN_LOCK v17; // rax
  _OWORD SystemInformation[3]; // [rsp+20h] [rbp-68h] BYREF

  v2 = 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( Src[v3] );
  v4 = 2 * v3 + 2;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( ZwQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL) < 0 )
      memset(SystemInformation, 0, sizeof(SystemInformation));
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x736C6448u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, Src, v4);
    v7 = HeadlessGlobals;
    if ( (HeadlessGlobals[6] & 2) != 0 )
    {
      v9 = -1;
    }
    else
    {
      v8 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
      v7 = HeadlessGlobals;
      v9 = v8;
    }
    v10 = *((_WORD *)v7 + 48);
    *((_DWORD *)v7 + 12) |= 4u;
    v11 = *((_WORD *)v7 + 49);
    v12 = (unsigned __int16)(v10 + 1) % 256;
    *((_WORD *)v7 + 48) = v12;
    if ( v12 == v11 )
    {
      v13 = *(const wchar_t **)(56LL * v11 + v7[2] + 48);
      if ( wcscmp(v13, L"Entry could not be recorded due to lack of memory.\n") )
        v2 = (wchar_t *)v13;
      *((_WORD *)v7 + 49) = (unsigned __int16)(v11 + 1) % 256;
    }
    else if ( v11 == 0xFFFF )
    {
      *((_WORD *)v7 + 49) = 0;
    }
    v14 = 56LL * v12;
    v15 = v7[2];
    *(_OWORD *)(v14 + v15) = SystemInformation[0];
    *(_OWORD *)(v14 + v15 + 16) = SystemInformation[1];
    *(_OWORD *)(v14 + v15 + 32) = SystemInformation[2];
    v16 = 56LL * *((unsigned __int16 *)v7 + 48);
    v17 = v7[2];
    if ( v6 )
      *(_QWORD *)(v16 + v17 + 48) = v6;
    else
      *(_QWORD *)(v16 + v17 + 48) = L"Entry could not be recorded due to lack of memory.\n";
    if ( v9 != 0xFF )
      KeReleaseSpinLock(v7, v9);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
}
