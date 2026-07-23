/*
 * XREFs of EtwpCreateNtFileName @ 0x14049574C
 * Callers:
 *     EtwpDelayCreate @ 0x14049553C (EtwpDelayCreate.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall EtwpCreateNtFileName(_WORD *a1, wchar_t **a2, _DWORD *a3)
{
  __int64 v3; // rax
  _WORD *v5; // rbx
  int v6; // eax
  unsigned int v7; // eax
  SIZE_T v8; // rsi
  wchar_t *PoolWithTag; // rdi
  NTSTATUS result; // eax

  v3 = -1LL;
  v5 = a1;
  do
    ++v3;
  while ( a1[v3] );
  v6 = 2 * v3;
  if ( !v6 )
    return -1073741773;
  v7 = v6 + 2;
  if ( v7 > 0xA && *a1 == 92 && a1[1] == 92 && a1[2] == 63 && a1[3] == 92 )
  {
    v7 -= 8;
    v5 = a1 + 4;
  }
  if ( *v5 == 92 && v5[1] == 92 )
    *a3 = 14;
  else
    *a3 = 24;
  v8 = *a3 + v7;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v8, 0x50777445u);
  if ( PoolWithTag )
  {
    if ( *v5 == 92 && v5[1] == 92 )
      result = RtlStringCbPrintfW(PoolWithTag, v8, L"%ws%ws", L"\\??\\UNC", v5 + 1);
    else
      result = RtlStringCbPrintfW(PoolWithTag, v8, L"%ws%ws", L"\\DosDevices\\", v5);
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
