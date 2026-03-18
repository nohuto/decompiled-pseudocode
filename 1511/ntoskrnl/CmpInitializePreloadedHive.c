/*
 * XREFs of CmpInitializePreloadedHive @ 0x140745898
 * Callers:
 *     CmpInitializePreloadedHives @ 0x1407457BC (CmpInitializePreloadedHives.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     CmpSetupLoggingState @ 0x14051E4F8 (CmpSetupLoggingState.c)
 */

char __fastcall CmpInitializePreloadedHive(__int64 a1, __int64 a2)
{
  int v4; // edi
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // rbx
  int v7; // eax
  unsigned int Length; // r12d
  unsigned __int64 v9; // r15
  wchar_t *v10; // rax
  wchar_t *v11; // r14
  int v12; // r8d
  bool v13; // zf
  int v14; // eax
  ULONG_PTR v15; // rbx
  int v16; // ecx
  int v17; // eax
  __int64 **v18; // rax
  __int64 *v19; // rbx
  char result; // al
  int v21; // eax
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
    v21 = *(_DWORD *)(a1 + 24);
    if ( (v21 & 2) == 0 )
      v4 = (v21 & 4) != 0 ? 0x2000 : 1;
  }
  else
  {
    RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\System32\\Config\\");
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v4 = 0x4000;
  }
  Length = Destination.Length;
  v9 = Destination.Length;
  v10 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.Length + 2LL, 0x20204D43u);
  v11 = v10;
  if ( !v10 )
    KeBugCheckEx(0x74u, 3uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  memmove(v10, Destination.Buffer, Length);
  ExFreePoolWithTag(v6, 0);
  Destination.Buffer = v11;
  v11[v9 >> 1] = 0;
  v12 = 18;
  v13 = (*(_BYTE *)(a1 + 24) & 8) == 0;
  Destination.MaximumLength = Length + 2;
  if ( !v13 )
    v12 = 274;
  v14 = CmpInitializeHive(
          &v25,
          1u,
          v12,
          2u,
          *(_QWORD *)(a1 + 32),
          0LL,
          (__int64)&Destination,
          65544,
          0LL,
          0LL,
          (__int64)v22,
          BugCheckParameter3);
  if ( v14 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 5uLL, (ULONG_PTR)BugCheckParameter3, v14);
  v15 = v25;
  CmpSetupLoggingState(v25, (unsigned int *)(a1 + 64));
  RtlInitUnicodeString((PUNICODE_STRING)(v15 + 2992), v11);
  *(_DWORD *)(v15 + 144) |= v4 | 0x400;
  if ( v22[0] == 1 )
    *(_DWORD *)(v15 + 144) |= 0x800u;
  if ( CmpShareSystemHives )
    *(_DWORD *)(v15 + 144) = *(_DWORD *)(v15 + 144) & 0xFFFDFFFE | 1;
  v16 = *(_DWORD *)(*(_QWORD *)(v15 + 64) + 4088LL);
  CmpBootType = v16;
  if ( !CmSelfHeal )
  {
    CmpSelfHeal = 0;
    if ( (v16 & 4) != 0 )
      KeBugCheckEx(0x74u, 3uLL, 6uLL, v15, 0LL);
  }
  *(_DWORD *)&v24.Length = 0x800000;
  v24.Buffer = (wchar_t *)&v27;
  RtlAppendUnicodeToString(&v24, L"\\REGISTRY\\");
  RtlAppendUnicodeToString(&v24, *(PCWSTR *)(a1 + 56));
  RtlAppendUnicodeToString(&v24, L"\\");
  RtlAppendUnicodeToString(&v24, *(PCWSTR *)(a1 + 48));
  v17 = CmpLinkHiveToMaster(&v24, 0LL, v15, 0, 0x200u, 0, 0LL, a2, 1);
  if ( v17 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 7uLL, v15, v17);
  v18 = (__int64 **)qword_1402FD858;
  v19 = (__int64 *)(v15 + 2744);
  *v19 = (__int64)&CmpPreloadedHivesList;
  v19[1] = (__int64)v18;
  if ( *v18 != &CmpPreloadedHivesList )
    __fastfail(3u);
  *v18 = v19;
  result = 1;
  qword_1402FD858 = (__int64)v19;
  return result;
}
