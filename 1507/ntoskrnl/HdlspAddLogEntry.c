/*
 * XREFs of HdlspAddLogEntry @ 0x140759ADC
 * Callers:
 *     HdlspDispatch @ 0x140759E40 (HdlspDispatch.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     wcscmp @ 0x140173BB8 (wcscmp.c)
 *     ZwQuerySystemInformation @ 0x14017F6B0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __fastcall HdlspAddLogEntry(_WORD *Src)
{
  wchar_t *v2; // r14
  __int64 v3; // rax
  SIZE_T v4; // rdi
  PVOID PoolWithTag; // rax
  PVOID v6; // rsi
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int16 v9; // ax
  unsigned __int16 v10; // r15
  unsigned __int16 v11; // r12
  const wchar_t *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  _OWORD SystemInformation[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]

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
    if ( (*(_DWORD *)(HeadlessGlobals + 48) & 2) != 0 )
    {
      CurrentIrql = -1;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)v7);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v7);
      }
      v7 = HeadlessGlobals;
    }
    v9 = *(_WORD *)(v7 + 96);
    *(_DWORD *)(v7 + 48) |= 4u;
    v10 = *(_WORD *)(v7 + 98);
    v11 = (unsigned __int16)(v9 + 1) % 256;
    *(_WORD *)(v7 + 96) = v11;
    if ( v11 == v10 )
    {
      v12 = *(const wchar_t **)(56LL * v10 + *(_QWORD *)(v7 + 16) + 48);
      if ( wcscmp(v12, L"Entry could not be recorded due to lack of memory.\n") )
        v2 = (wchar_t *)v12;
      *(_WORD *)(v7 + 98) = (unsigned __int16)(v10 + 1) % 256;
    }
    else if ( v10 == 0xFFFF )
    {
      *(_WORD *)(v7 + 98) = 0;
    }
    v13 = 56LL * v11;
    v14 = *(_QWORD *)(v7 + 16);
    *(_OWORD *)(v13 + v14) = SystemInformation[0];
    *(_OWORD *)(v13 + v14 + 16) = SystemInformation[1];
    *(_OWORD *)(v13 + v14 + 32) = SystemInformation[2];
    if ( v6 )
      *(_QWORD *)(56LL * *(unsigned __int16 *)(HeadlessGlobals + 96) + *(_QWORD *)(HeadlessGlobals + 16) + 48) = v6;
    else
      *(_QWORD *)(56LL * *(unsigned __int16 *)(HeadlessGlobals + 96) + *(_QWORD *)(HeadlessGlobals + 16) + 48) = L"Entry could not be recorded due to lack of memory.\n";
    if ( CurrentIrql != 0xFF )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)HeadlessGlobals, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)HeadlessGlobals, 0LL);
      __writecr8(CurrentIrql);
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
}
