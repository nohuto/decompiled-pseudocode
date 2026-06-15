/*
 * XREFs of ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z @ 0x18007C258
 * Callers:
 *     ?QueryInterface@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007C9D0 (-QueryInterface@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCVADServer@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800888A0 (-QueryInterface@-$CComObject@VCVADServer@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000E1C0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::AtlInternalQueryInterface(
        char *a1,
        const struct ATL::_ATL_INTMAP_ENTRY *a2,
        const struct _GUID *a3,
        char **a4)
{
  const struct ATL::_ATL_INTMAP_ENTRY *v6; // rbx
  __int64 result; // rax
  char *v9; // rdi
  __int64 (__fastcall *v10)(char *, const struct _GUID *, char **, _QWORD); // rsi
  int v11; // ebp

  v6 = a2;
  if ( !a1 || !a2 )
    return 2147942487LL;
  if ( !a4 )
    return 2147500035LL;
  *a4 = 0LL;
  if ( !*(_QWORD *)&a3->Data1 && *(_DWORD *)a3->Data4 == 192 && *(_DWORD *)&a3->Data4[4] == 1174405120 )
  {
    v9 = &a1[*((_QWORD *)a2 + 1)];
    goto LABEL_9;
  }
  v10 = (__int64 (__fastcall *)(char *, const struct _GUID *, char **, _QWORD))*((_QWORD *)a2 + 2);
  while ( 1 )
  {
    if ( !v10 )
      return 2147500034LL;
    if ( *(_QWORD *)v6 )
    {
      v11 = 0;
      if ( !InlineIsEqualGUID(*(const struct _GUID **)v6, a3) )
        goto LABEL_18;
    }
    else
    {
      v11 = 1;
    }
    if ( v10 == (__int64 (__fastcall *)(char *, const struct _GUID *, char **, _QWORD))1 )
      break;
    result = v10(a1, a3, a4, *((_QWORD *)v6 + 1));
    if ( !(_DWORD)result || !v11 && (int)result < 0 )
      return result;
LABEL_18:
    v10 = (__int64 (__fastcall *)(char *, const struct _GUID *, char **, _QWORD))*((_QWORD *)v6 + 5);
    v6 = (const struct ATL::_ATL_INTMAP_ENTRY *)((char *)v6 + 24);
  }
  v9 = &a1[*((_QWORD *)v6 + 1)];
LABEL_9:
  (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 8LL))(v9);
  result = 0LL;
  *a4 = v9;
  return result;
}
