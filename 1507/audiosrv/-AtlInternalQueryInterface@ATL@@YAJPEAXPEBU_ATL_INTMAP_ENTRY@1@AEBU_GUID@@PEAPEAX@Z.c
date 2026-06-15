/*
 * XREFs of ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z @ 0x18002E0F4
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSaProvider@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002E2D0 (-QueryInterface@-$CComObject@VCSaProvider@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081620 (-QueryInterface@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCVADServer@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008BC70 (-QueryInterface@-$CComObject@VCVADServer@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18000AF90 (-AddRef@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002A1C4 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::AtlInternalQueryInterface(
        char *a1,
        const struct ATL::_ATL_INTMAP_ENTRY *a2,
        const struct _GUID *a3,
        char **a4)
{
  const struct ATL::_ATL_INTMAP_ENTRY *v6; // rbx
  __int64 (__fastcall *v8)(char *, const struct _GUID *, char **, _QWORD); // rsi
  int v9; // ebp
  char *v10; // rbx
  __int64 (__fastcall *v11)(__int64); // rdi
  __int64 result; // rax
  char *v13; // rdi

  v6 = a2;
  if ( !a1 || !a2 )
    return 2147942487LL;
  if ( !a4 )
    return 2147500035LL;
  *a4 = 0LL;
  if ( !*(_QWORD *)&a3->Data1 && *(_DWORD *)a3->Data4 == 192 && *(_DWORD *)&a3->Data4[4] == 1174405120 )
  {
    v13 = &a1[*((_QWORD *)a2 + 1)];
    (*(void (__fastcall **)(char *))(*(_QWORD *)v13 + 8LL))(v13);
    *a4 = v13;
    return 0LL;
  }
  v8 = (__int64 (__fastcall *)(char *, const struct _GUID *, char **, _QWORD))*((_QWORD *)a2 + 2);
  while ( 1 )
  {
    if ( !v8 )
      return 2147500034LL;
    if ( *(_QWORD *)v6 )
    {
      v9 = 0;
      if ( !InlineIsEqualGUID(*(const struct _GUID **)v6, a3) )
        goto LABEL_24;
    }
    else
    {
      v9 = 1;
    }
    if ( v8 == (__int64 (__fastcall *)(char *, const struct _GUID *, char **, _QWORD))1 )
      break;
    result = v8(a1, a3, a4, *((_QWORD *)v6 + 1));
    if ( !(_DWORD)result || !v9 && (int)result < 0 )
      return result;
LABEL_24:
    v8 = (__int64 (__fastcall *)(char *, const struct _GUID *, char **, _QWORD))*((_QWORD *)v6 + 5);
    v6 = (const struct ATL::_ATL_INTMAP_ENTRY *)((char *)v6 + 24);
  }
  v10 = &a1[*((_QWORD *)v6 + 1)];
  v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL);
  if ( v11 == ATL::CComObject<CAudioSessionManagerProvider>::AddRef )
    ATL::CComObject<CAudioSessionManagerProvider>::AddRef((__int64)v10);
  else
    v11((__int64)v10);
  *a4 = v10;
  return 0LL;
}
