/*
 * XREFs of ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z @ 0x18006399C
 * Callers:
 *     ?QueryInterface@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800640F0 (-QueryInterface@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084A70 (-QueryInterface@-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084B00 (-QueryInterface@-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084B20 (-QueryInterface@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180024D54 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x180064038 (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::AtlInternalQueryInterface(
        char *a1,
        const struct ATL::_ATL_INTMAP_ENTRY *a2,
        const struct _GUID *a3,
        char **a4)
{
  const struct ATL::_ATL_INTMAP_ENTRY *v6; // rbx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  char *v11; // rbx
  __int64 (__fastcall *v12)(char *, const struct _GUID *, char **, _QWORD); // r10
  int v13; // ebp

  v6 = a2;
  if ( !a1 || !a2 )
    return 2147942487LL;
  if ( !a4 )
    return 2147500035LL;
  *a4 = 0LL;
  if ( (unsigned int)ATL::InlineIsEqualUnknown(a3) )
  {
    v10 = *(_QWORD *)(v9 + 8);
    goto LABEL_7;
  }
  v12 = *(__int64 (__fastcall **)(char *, const struct _GUID *, char **, _QWORD))(v9 + 16);
  while ( 1 )
  {
    if ( !v12 )
      return 2147500034LL;
    if ( *(_QWORD *)v6 )
    {
      v13 = 0;
      if ( !InlineIsEqualGUID(*(const struct _GUID **)v6, a3) )
        goto LABEL_16;
    }
    else
    {
      v13 = 1;
    }
    if ( v12 == (__int64 (__fastcall *)(char *, const struct _GUID *, char **, _QWORD))1 )
      break;
    result = v12(a1, a3, a4, *((_QWORD *)v6 + 1));
    if ( !(_DWORD)result || !v13 && (int)result < 0 )
      return result;
LABEL_16:
    v12 = (__int64 (__fastcall *)(char *, const struct _GUID *, char **, _QWORD))*((_QWORD *)v6 + 5);
    v6 = (const struct ATL::_ATL_INTMAP_ENTRY *)((char *)v6 + 24);
  }
  v10 = *((_QWORD *)v6 + 1);
LABEL_7:
  v11 = &a1[v10];
  (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 8LL))(v11);
  result = 0LL;
  *a4 = v11;
  return result;
}
