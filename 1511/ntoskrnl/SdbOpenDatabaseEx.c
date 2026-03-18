/*
 * XREFs of SdbOpenDatabaseEx @ 0x14067CED8
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x14067F280 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     SdbGetDatabaseID @ 0x1403B61F8 (SdbGetDatabaseID.c)
 *     AslFileMappingCreate @ 0x1403B6E64 (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x1403B7DE0 (AslFileMappingDelete.c)
 *     AslFree @ 0x1403B7E1C (AslFree.c)
 *     AslAlloc @ 0x1403B8554 (AslAlloc.c)
 *     SdbpReadMappedData @ 0x14043EFA8 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     AslFileMappingEnsureMappedAs @ 0x14068081C (AslFileMappingEnsureMappedAs.c)
 *     AslFileMappingGetViewBase @ 0x140680D24 (AslFileMappingGetViewBase.c)
 */

__int64 __fastcall SdbOpenDatabaseEx(const WCHAR *a1)
{
  PVOID v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // rcx
  _DWORD v7[6]; // [rsp+30h] [rbp-18h] BYREF

  v2 = AslAlloc((__int64)a1, 0x570uLL);
  v3 = (__int64)v2;
  if ( !v2 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  memset(v2, 0, 0x570uLL);
  if ( (int)AslFileMappingCreate((wchar_t **)v3, a1, 0LL, 0LL, 0LL) < 0
    || (unsigned __int64)(*(_QWORD *)(*(_QWORD *)v3 + 536LL) - 42LL) > 0x7FFFFFD5
    || (int)AslFileMappingEnsureMappedAs() < 0
    || (v4 = *(_QWORD *)v3,
        *(_DWORD *)(v3 + 16) = 0,
        *(_DWORD *)(v3 + 20) = *(_DWORD *)(v4 + 536),
        *(_QWORD *)(v3 + 8) = AslFileMappingGetViewBase(),
        !(unsigned int)SdbpReadMappedData(v3, 0, v7, 0xCu))
    || v7[2] != 1717724275 )
  {
LABEL_18:
    AslLogCallPrintf(1LL);
    AslFileMappingDelete(*(_QWORD *)v3);
    AslFree(v6, (void *)v3);
    return 0LL;
  }
  if ( v7[0] == 1 )
  {
    *(_DWORD *)(v3 + 1336) |= 1u;
    goto LABEL_14;
  }
  if ( v7[0] == 2 )
  {
LABEL_14:
    *(_DWORD *)(v3 + 1336) |= 2u;
    goto LABEL_15;
  }
  if ( v7[0] != 3 )
    goto LABEL_18;
LABEL_15:
  if ( !(unsigned int)SdbGetDatabaseID(v3, (void *)(v3 + 28)) )
    AslLogCallPrintf(1LL);
  return v3;
}
