/*
 * XREFs of SdbpInitializeMatchers @ 0x140495D0C
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x140495C8C (SdbInitDatabaseInMemory.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall SdbpInitializeMatchers(__int64 a1))(int, int, int, int, int, ULONGLONG pullResult)
{
  __int64 v1; // rax
  bool v2; // zf
  __int64 (__fastcall *v3)(int, int, int, int, int); // rax
  __int64 (__fastcall *result)(int, int, int, int, int, ULONGLONG); // rax

  *(_DWORD *)(a1 + 576) = 28680;
  *(_QWORD *)(a1 + 584) = SdbpCheckMatchingFiles;
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_QWORD *)(a1 + 608) = SdbpCheckMatchingRegistry;
  *(_DWORD *)(a1 + 600) = 28722;
  *(_QWORD *)(a1 + 616) = 0LL;
  *(_QWORD *)(a1 + 632) = SdbpCheckMatchingText;
  *(_DWORD *)(a1 + 624) = 28723;
  *(_QWORD *)(a1 + 640) = 0LL;
  *(_QWORD *)(a1 + 656) = SdbpCheckMatchingDevice;
  *(_DWORD *)(a1 + 648) = 28702;
  *(_QWORD *)(a1 + 664) = 0LL;
  *(_QWORD *)(a1 + 680) = SdbpMatchOne;
  *(_DWORD *)(a1 + 672) = 28727;
  *(_QWORD *)(a1 + 688) = 0LL;
  *(_DWORD *)(a1 + 696) = 16417;
  *(_QWORD *)(a1 + 712) = 0LL;
  v1 = *(_QWORD *)(a1 + 8);
  if ( !v1 || (v2 = (*(_DWORD *)(v1 + 1336) & 2) == 0, v3 = SdbpCheckRuntimePlatformV2, v2) )
    v3 = SdbpCheckRuntimePlatform;
  *(_QWORD *)(a1 + 704) = v3;
  result = SdbpCheckPackageAttributes;
  *(_QWORD *)(a1 + 728) = SdbpCheckPackageAttributes;
  *(_DWORD *)(a1 + 720) = 28726;
  *(_QWORD *)(a1 + 736) = 0LL;
  return result;
}
