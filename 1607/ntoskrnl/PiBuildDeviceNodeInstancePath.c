/*
 * XREFs of PiBuildDeviceNodeInstancePath @ 0x14050D31C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140483B88 (PnpCleanupDeviceRegistryValues.c)
 *     PnpFreeDeviceInstancePath @ 0x14050D434 (PnpFreeDeviceInstancePath.c)
 */

__int64 __fastcall PiBuildDeviceNodeInstancePath(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  WCHAR *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // ecx
  SIZE_T v13; // r15
  wchar_t *PoolWithTag; // rax
  NTSTATUS v15; // esi
  const wchar_t *v16; // rcx

  v8 = 0LL;
  if ( a2 && a3 && a4 )
  {
    if ( *(_QWORD *)(a1 + 48) && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 42) )
      PnpCleanupDeviceRegistryValues(a1 + 40);
    v9 = -1LL;
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(a2 + 2 * v10) );
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)(a3 + 2 * v11) );
    v12 = v11 + v10;
    do
      ++v9;
    while ( *(_WORD *)(a4 + 2 * v9) );
    v13 = (unsigned int)(2 * (v9 + v12) + 6);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x49706E50u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v15 = RtlStringCbPrintfW(PoolWithTag, (unsigned int)v13, L"%s\\%s\\%s", a2, a3, a4);
    if ( v15 >= 0 )
    {
      v16 = *(const wchar_t **)(a1 + 48);
      if ( !v16 || wcsicmp(v16, v8) )
      {
        PnpFreeDeviceInstancePath(a1);
        RtlInitUnicodeString((PUNICODE_STRING)(a1 + 40), v8);
        return (unsigned int)v15;
      }
    }
  }
  else
  {
    v15 = -1073741823;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x49706E50u);
  return (unsigned int)v15;
}
