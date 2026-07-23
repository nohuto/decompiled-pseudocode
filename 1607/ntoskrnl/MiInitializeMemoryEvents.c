/*
 * XREFs of MiInitializeMemoryEvents @ 0x1407A4498
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     MiUpdateAvailableEvents @ 0x14013CD68 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14013CE24 (MiSignalNonPagedPoolWatchers.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiCreateMemoryEvent @ 0x1407A45F0 (MiCreateMemoryEvent.c)
 *     MiInitializePagedPoolEvents @ 0x1407A51FC (MiInitializePagedPoolEvents.c)
 */

__int64 __fastcall MiInitializeMemoryEvents(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD v8[2]; // [rsp+20h] [rbp-69h] BYREF
  const wchar_t *v9; // [rsp+28h] [rbp-61h]
  int v10; // [rsp+30h] [rbp-59h]
  const wchar_t *v11; // [rsp+38h] [rbp-51h]
  int v12; // [rsp+40h] [rbp-49h]
  const wchar_t *v13; // [rsp+48h] [rbp-41h]
  int v14; // [rsp+50h] [rbp-39h]
  const wchar_t *v15; // [rsp+58h] [rbp-31h]
  int v16; // [rsp+60h] [rbp-29h]
  const wchar_t *v17; // [rsp+68h] [rbp-21h]
  int v18; // [rsp+70h] [rbp-19h]
  const wchar_t *v19; // [rsp+78h] [rbp-11h]
  int v20; // [rsp+80h] [rbp-9h]
  const wchar_t *v21; // [rsp+88h] [rbp-1h]
  int v22; // [rsp+90h] [rbp+7h]
  const wchar_t *v23; // [rsp+98h] [rbp+Fh]
  int v24; // [rsp+A0h] [rbp+17h]
  const wchar_t *v25; // [rsp+A8h] [rbp+1Fh]
  int v26; // [rsp+B0h] [rbp+27h]
  const wchar_t *v27; // [rsp+B8h] [rbp+2Fh]
  int v28; // [rsp+C0h] [rbp+37h]
  const wchar_t *v29; // [rsp+C8h] [rbp+3Fh]

  v8[0] = 4456514;
  v9 = L"\\KernelObjects\\LowMemoryCondition";
  v10 = 4587588;
  v11 = L"\\KernelObjects\\HighMemoryCondition";
  v2 = 0LL;
  v12 = 4849736;
  v13 = L"\\KernelObjects\\LowPagedPoolCondition";
  v15 = L"\\KernelObjects\\HighPagedPoolCondition";
  v17 = L"\\KernelObjects\\LowNonPagedPoolCondition";
  v19 = L"\\KernelObjects\\HighNonPagedPoolCondition";
  v21 = L"\\KernelObjects\\LowCommitCondition";
  v23 = L"\\KernelObjects\\HighCommitCondition";
  v25 = L"\\KernelObjects\\MaximumCommitCondition";
  v27 = L"\\KernelObjects\\MemoryErrors";
  v29 = L"\\KernelObjects\\PhysicalMemoryChange";
  v14 = 4980810;
  v16 = 5242958;
  v18 = 5374032;
  v20 = 4456514;
  v22 = 4587588;
  v24 = 4980810;
  v26 = 3670070;
  v28 = 4718662;
  while ( (int)MiCreateMemoryEvent(&v8[4 * (unsigned int)v2], &a1[v2 + 33]) >= 0 )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= 0xB )
    {
      MiInitializePagedPoolEvents(
        v4,
        v3,
        v5,
        v6,
        v8[0],
        v9,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      MiSignalNonPagedPoolWatchers();
      MiUpdateAvailableEvents(a1);
      return 1LL;
    }
  }
  return 0LL;
}
