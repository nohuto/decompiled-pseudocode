/*
 * XREFs of PiDqPnPGetObjectPropertyLocales @ 0x140632278
 * Callers:
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14063104C (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpGetObjectPropertyLocales @ 0x1406DB600 (_PnpGetObjectPropertyLocales.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1406DC644 (_PnpGetGenericStorePropertyLocales.c)
 */

__int64 __fastcall PiDqPnPGetObjectPropertyLocales(int a1, int a2, __int64 a3, __int64 a4, PVOID *a5)
{
  PVOID PoolWithTag; // rax
  int ObjectPropertyLocales; // eax
  int v11; // ebx
  _DWORD v13[4]; // [rsp+50h] [rbp-28h] BYREF

  v13[0] = 40;
  *a5 = 0LL;
  while ( 1 )
  {
    if ( *a5 )
      ExFreePoolWithTag(*a5, 0x58706E50u);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v13[0], 0x58706E50u);
    *a5 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    if ( a2 )
      ObjectPropertyLocales = PnpGetObjectPropertyLocales(
                                v13[0],
                                a1,
                                a2,
                                a3,
                                a4,
                                (__int64)PoolWithTag,
                                v13[0],
                                (__int64)v13);
    else
      ObjectPropertyLocales = PnpGetGenericStorePropertyLocales(
                                *(_QWORD *)&PiPnpRtlCtx,
                                a3,
                                a4,
                                PoolWithTag,
                                v13[0],
                                v13);
    v11 = ObjectPropertyLocales;
    if ( ObjectPropertyLocales != -1073741789 )
      goto LABEL_11;
  }
  v11 = -1073741670;
LABEL_11:
  if ( v11 < 0 && *a5 )
  {
    ExFreePoolWithTag(*a5, 0x58706E50u);
    *a5 = 0LL;
  }
  return (unsigned int)v11;
}
