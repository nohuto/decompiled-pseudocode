/*
 * XREFs of EtwpCreateNtFileName @ 0x1404AC9D0
 * Callers:
 *     EtwpDelayCreate @ 0x1404AC7C0 (EtwpDelayCreate.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall EtwpCreateNtFileName(_WORD *a1, wchar_t **a2, _DWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  SIZE_T v10; // rsi
  wchar_t *PoolWithTag; // rdi
  NTSTATUS result; // eax

  v5 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( a1[v6] );
  v7 = 2 * v6;
  if ( !v7 )
    return -1073741773;
  v8 = v7 + 2;
  if ( v8 > 0xA && *a1 == 92 && a1[1] == 92 && a1[2] == 63 && a1[3] == 92 )
  {
    v8 -= 8;
    a1 += 4;
  }
  if ( *a1 == 92 && a1[1] == 92 )
  {
    do
      ++v5;
    while ( aUnc[v5] );
  }
  else
  {
    do
      ++v5;
    while ( aDosdevices[v5] );
  }
  v9 = 2 * v5;
  *a3 = v9;
  v10 = v9 + v8;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x50777445u);
  if ( PoolWithTag )
  {
    if ( *a1 == 92 && a1[1] == 92 )
      result = RtlStringCbPrintfW(PoolWithTag, v10, L"%ws%ws", L"\\??\\UNC", a1 + 1);
    else
      result = RtlStringCbPrintfW(PoolWithTag, v10, L"%ws%ws", L"\\DosDevices\\", a1);
    if ( !result )
    {
      *a2 = PoolWithTag;
      return result;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    result = -1073741811;
  }
  else
  {
    result = -1073741801;
  }
  *a2 = 0LL;
  return result;
}
