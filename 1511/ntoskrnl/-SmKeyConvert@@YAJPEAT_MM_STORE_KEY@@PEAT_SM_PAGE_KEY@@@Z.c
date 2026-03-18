/*
 * XREFs of ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x14010E9D0
 * Callers:
 *     MiStoreEvictPageFile @ 0x1400ECEEC (MiStoreEvictPageFile.c)
 *     SmPageRead @ 0x140109CEC (SmPageRead.c)
 *     MiStoreWriteIssue @ 0x14010B6E8 (MiStoreWriteIssue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmKeyConvert(union _MM_STORE_KEY *a1, union _SM_PAGE_KEY *a2)
{
  unsigned __int64 v2; // r8

  v2 = a1->EntireKey >> 60;
  if ( v2 == 15 || (a1->EntireKey & 0xFFFFFFFFFFFFFFFLL) > 0xFFFFFFF )
    return 3221226011LL;
  *(_DWORD *)a2 = ((_DWORD)v2 << 28) ^ *(_DWORD *)&a1->0 & 0xFFFFFFF;
  return 0LL;
}
