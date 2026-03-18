/*
 * XREFs of KseLookupHardwareId @ 0x14069D464
 * Callers:
 *     AhcCacheQueryHwId @ 0x14071E6BC (AhcCacheQueryHwId.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KsepCacheLookup @ 0x14054B4B0 (KsepCacheLookup.c)
 *     KsepCacheLock @ 0x14054B590 (KsepCacheLock.c)
 *     AslStringPatternMatchW @ 0x1405A9E4C (AslStringPatternMatchW.c)
 */

__int64 __fastcall KseLookupHardwareId(WCHAR *SourceString, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rbx
  unsigned int v6; // ebp
  int v7; // r14d
  PCWSTR v8; // rax
  WCHAR *v9; // r15
  WCHAR v10; // cx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *CurrentThread; // rdx
  __int16 v15; // ax
  bool v16; // zf
  unsigned __int64 *i; // rdi
  WCHAR *v19; // rdx
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  _BYTE v22[40]; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  v4 = (unsigned __int64 *)qword_140353CE0;
  v6 = -1073741275;
  v7 = 0;
  v8 = SourceString;
  v9 = SourceString;
  if ( *SourceString == 42 )
  {
    v8 = SourceString + 1;
    v9 = SourceString + 1;
    v7 = 1;
  }
  while ( 1 )
  {
    v10 = *v8;
    if ( !*v8 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      KsepCacheLock(v4, v11, v12, v13);
      if ( KsepCacheLookup((__int64)v4, (__int64)v22) )
        v6 = 0;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v4);
      KeAbPostRelease((ULONG_PTR)v4);
      CurrentThread = KeGetCurrentThread();
      v15 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v15;
      if ( !v15
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        v16 = CurrentThread->SpecialApcDisable == 0;
LABEL_14:
        if ( v16 )
          KiCheckForKernelApcDelivery();
      }
      return v6;
    }
    if ( v10 == 42 || v10 == 63 )
      break;
    ++v8;
  }
  KsepCacheLock((unsigned __int64 *)qword_140353CE0, (__int64)SourceString, a3, a4);
  for ( i = (unsigned __int64 *)v4[4]; i != v4 + 4; i = (unsigned __int64 *)*i )
  {
    v19 = (WCHAR *)i[3];
    if ( v7 )
    {
      if ( *v19 != 42 )
        continue;
      ++v19;
    }
    if ( (unsigned int)AslStringPatternMatchW(v9, v19) )
    {
      v6 = 0;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  v20 = KeGetCurrentThread();
  v21 = v20->KernelApcDisable + 1;
  v20->KernelApcDisable = v21;
  if ( !v21 && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
  {
    v16 = v20->SpecialApcDisable == 0;
    goto LABEL_14;
  }
  return v6;
}
