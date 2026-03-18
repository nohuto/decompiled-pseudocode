/*
 * XREFs of CmpInitializePreloadedHive @ 0x1407D74A8
 * Callers:
 *     CmpInitializePreloadedHives @ 0x1407D73CC (CmpInitializePreloadedHives.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     CmpSetupLoggingState @ 0x14064FD68 (CmpSetupLoggingState.c)
 */

char __fastcall CmpInitializePreloadedHive(__int64 a1, __int64 a2)
{
  int v4; // edi
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // rbx
  int v7; // eax
  int v8; // eax
  unsigned int Length; // r12d
  unsigned __int64 v10; // r15
  wchar_t *v11; // rax
  wchar_t *v12; // r14
  int v13; // r8d
  bool v14; // zf
  int v15; // eax
  ULONG_PTR v16; // rbx
  int v17; // ecx
  int v18; // eax
  __int64 **v19; // rax
  __int64 *v20; // rbx
  char result; // al
  _BYTE v22[8]; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v24; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR v25; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter3[44]; // [rsp+90h] [rbp-70h] BYREF
  char v27; // [rsp+1F0h] [rbp+F0h] BYREF

  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  v4 = 4096;
  v25 = 0LL;
  v22[0] = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x20204D43u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x74u, 3uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  Destination.Buffer = PoolWithTag;
  v7 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)&Destination.Length = 0x10000000;
  if ( (v7 & 0x16) != 0 )
  {
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v8 = *(_DWORD *)(a1 + 24);
    if ( (v8 & 2) == 0 )
      v4 = (v8 & 4) != 0 ? 0x2000 : 1;
  }
  else
  {
    RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\System32\\Config\\");
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v4 = 0x4000;
  }
  Length = Destination.Length;
  v10 = Destination.Length;
  v11 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.Length + 2LL, 0x20204D43u);
  v12 = v11;
  if ( !v11 )
    KeBugCheckEx(0x74u, 3uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  memmove(v11, Destination.Buffer, Length);
  ExFreePoolWithTag(v6, 0);
  Destination.Buffer = v12;
  v12[v10 >> 1] = 0;
  v13 = 18;
  v14 = (*(_BYTE *)(a1 + 24) & 8) == 0;
  Destination.MaximumLength = Length + 2;
  if ( !v14 )
    v13 = 274;
  v15 = CmpInitializeHive(
          &v25,
          1u,
          v13,
          2u,
          *(_QWORD *)(a1 + 32),
          0LL,
          (__int64)&Destination,
          589832,
          0LL,
          0LL,
          (__int64)v22,
          BugCheckParameter3);
  if ( v15 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 5uLL, (ULONG_PTR)BugCheckParameter3, v15);
  v16 = v25;
  CmpSetupLoggingState(v25, (unsigned int *)(a1 + 56));
  RtlInitUnicodeString((PUNICODE_STRING)(v16 + 2992), v12);
  *(_DWORD *)(v16 + 144) |= v4 | 0x400;
  if ( v22[0] == 1 )
    *(_DWORD *)(v16 + 144) |= 0x800u;
  if ( CmpShareSystemHives )
    *(_DWORD *)(v16 + 144) = *(_DWORD *)(v16 + 144) & 0xFFFDFFFE | 1;
  v17 = *(_DWORD *)(*(_QWORD *)(v16 + 64) + 4088LL);
  CmpBootType = v17;
  if ( !CmSelfHeal )
  {
    CmpSelfHeal = 0;
    if ( (v17 & 4) != 0 )
      KeBugCheckEx(0x74u, 3uLL, 6uLL, v16, 0LL);
  }
  *(_DWORD *)&v24.Length = 0x800000;
  v24.Buffer = (wchar_t *)&v27;
  RtlAppendUnicodeToString(&v24, L"\\REGISTRY\\");
  RtlAppendUnicodeToString(&v24, *(PCWSTR *)(a1 + 80));
  RtlAppendUnicodeToString(&v24, L"\\");
  RtlAppendUnicodeToString(&v24, *(PCWSTR *)(a1 + 48));
  v18 = CmpLinkHiveToMaster(&v24, 0LL, v16, 0, 0x200u, 0, 0LL, a2, 1);
  if ( v18 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 7uLL, v16, v18);
  v19 = (__int64 **)qword_14034DCD8;
  v20 = (__int64 *)(v16 + 2744);
  *v20 = (__int64)&CmpPreloadedHivesList;
  v20[1] = (__int64)v19;
  if ( *v19 != &CmpPreloadedHivesList )
    __fastfail(3u);
  *v19 = v20;
  result = 1;
  qword_14034DCD8 = (__int64)v20;
  return result;
}
