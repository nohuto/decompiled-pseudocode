/*
 * XREFs of PiDqPnPGetObjectPropertyKeys @ 0x140632150
 * Callers:
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14063104C (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1406312D0 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpGetObjectPropertyKeys @ 0x1406DB330 (_PnpGetObjectPropertyKeys.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC340 (_PnpGetGenericStorePropertyKeys.c)
 */

__int64 __fastcall PiDqPnPGetObjectPropertyKeys(int a1, int a2, __int64 a3, __int64 a4, PVOID *a5, _DWORD *a6)
{
  SIZE_T v9; // rbx
  PVOID PoolWithTag; // rax
  __int64 v11; // r9
  int ObjectPropertyKeys; // eax
  int v13; // ebx
  int v15; // [rsp+20h] [rbp-48h]

  v9 = 6000LL;
  *a5 = 0LL;
  while ( 1 )
  {
    if ( *a5 )
      ExFreePoolWithTag(*a5, 0x58706E50u);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x58706E50u);
    *a5 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    *a6 = 0;
    if ( a2 )
    {
      ObjectPropertyKeys = PnpGetObjectPropertyKeys(
                             PiPnpRtlCtx,
                             a1,
                             a2,
                             a3,
                             v15,
                             1,
                             (__int64)PoolWithTag,
                             v9 / 0x14,
                             (__int64)a6);
    }
    else
    {
      LOBYTE(v11) = 1;
      v15 = (int)PoolWithTag;
      ObjectPropertyKeys = PnpGetGenericStorePropertyKeys(*(_QWORD *)&PiPnpRtlCtx, a3, 0LL, v11);
    }
    v13 = ObjectPropertyKeys;
    if ( ObjectPropertyKeys != -1073741789 )
      goto LABEL_11;
    v9 = (unsigned int)(20 * *a6);
  }
  v13 = -1073741670;
LABEL_11:
  if ( v13 < 0 )
    *a6 = 0;
  if ( !*a6 && *a5 )
  {
    ExFreePoolWithTag(*a5, 0x58706E50u);
    *a5 = 0LL;
  }
  return (unsigned int)v13;
}
