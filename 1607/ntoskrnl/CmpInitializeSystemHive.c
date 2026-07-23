/*
 * XREFs of CmpInitializeSystemHive @ 0x1407AD830
 * Callers:
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140074D74 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F54C4 (RtlAnsiStringToUnicodeString.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     CmpLinkHiveToMaster @ 0x1405194C0 (CmpLinkHiveToMaster.c)
 *     CmpSetupLoggingState @ 0x14055D640 (CmpSetupLoggingState.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14055EC7C (CmpHiveRootSecurityDescriptor.c)
 */

char __fastcall CmpInitializeSystemHive(ULONG_PTR BugCheckParameter3)
{
  unsigned __int16 Length; // bx
  __int64 v3; // rbx
  int v4; // r8d
  int v5; // eax
  ULONG_PTR v6; // rsi
  int v7; // ecx
  ACL *v8; // rdi
  int v9; // ebx
  __int64 v11; // [rsp+68h] [rbp-A0h] BYREF
  ULONG_PTR v12; // [rsp+70h] [rbp-98h] BYREF
  _STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter3a[44]; // [rsp+88h] [rbp-80h] BYREF

  LOBYTE(v11) = 0;
  v12 = 0LL;
  memset(BugCheckParameter3a, 0, sizeof(BugCheckParameter3a));
  RtlInitAnsiString(&DestinationString, *(PCSZ *)(BugCheckParameter3 + 216));
  Length = DestinationString.Length;
  CmpLoadOptions.Length = 0;
  CmpLoadOptions.MaximumLength = 2 * (DestinationString.Length + 1);
  CmpLoadOptions.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * (DestinationString.Length + 1), 0x20204D43u);
  if ( !CmpLoadOptions.Buffer )
    KeBugCheckEx(0x74u, 3uLL, 1uLL, BugCheckParameter3, 0LL);
  RtlAnsiStringToUnicodeString(&CmpLoadOptions, &DestinationString, 0);
  CmpLoadOptions.Buffer[Length] = 0;
  CmpLoadOptions.Length += 2;
  v3 = *(_QWORD *)(BugCheckParameter3 + 168);
  memset(BugCheckParameter3a, 0, sizeof(BugCheckParameter3a));
  v4 = 18;
  if ( (dword_1402F2E68 & 0x20000) != 0 )
    v4 = 131090;
  v5 = CmpInitializeHive(
         &v12,
         1u,
         v4,
         2u,
         v3,
         0LL,
         (__int64)&CmpSystemFileName,
         589832,
         0LL,
         0LL,
         (__int64)&v11,
         BugCheckParameter3a);
  if ( v5 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 2uLL, (ULONG_PTR)BugCheckParameter3a, v5);
  v6 = v12;
  CmpSetupLoggingState(v12, (unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2532LL));
  if ( (_BYTE)v11 == 1 )
    CmpInitRmLogOnLoad = 1;
  if ( CmpShareSystemHives )
    *(_DWORD *)(v6 + 144) = *(_DWORD *)(v6 + 144) & 0xFFFD7FFE | 0x8001;
  v7 = *(_DWORD *)(*(_QWORD *)(v6 + 64) + 4088LL);
  CmpBootType = v7;
  if ( !CmSelfHeal )
  {
    CmpSelfHeal = 0;
    if ( (v7 & 4) != 0 )
      KeBugCheckEx(0x74u, 3uLL, 3uLL, v6, 0LL);
  }
  v8 = CmpHiveRootSecurityDescriptor();
  v9 = CmpLinkHiveToMaster(
         (__int64)&CmRegistryMachineSystemName,
         0LL,
         v6,
         0,
         dword_1402F2E70,
         0,
         0LL,
         (__int64)v8,
         0LL,
         0LL,
         1);
  ExFreePoolWithTag(v8, 0);
  if ( v9 < 0 )
    return 0;
  qword_1402F2E60 = v6;
  return 1;
}
