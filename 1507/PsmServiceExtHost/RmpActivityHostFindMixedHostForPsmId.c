/*
 * XREFs of RmpActivityHostFindMixedHostForPsmId @ 0x18003BB14
 * Callers:
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x1800355D4 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 * Callees:
 *     RmpPsmAppFamilyNameFromPsmKey @ 0x180008D80 (RmpPsmAppFamilyNameFromPsmKey.c)
 *     RmpPsmAppFamilyTableFind @ 0x180008EC0 (RmpPsmAppFamilyTableFind.c)
 *     RmpPsmAppFamilyIdInitialize @ 0x1800191D8 (RmpPsmAppFamilyIdInitialize.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

LONG __fastcall RmpActivityHostFindMixedHostForPsmId(wchar_t *String2, __int64 a2, int a3, _QWORD *a4)
{
  LONG result; // eax
  __int64 v9; // rax
  _QWORD *i; // rbx
  __int64 v11; // rdi
  char v12[544]; // [rsp+20h] [rbp-418h] BYREF
  char v13[464]; // [rsp+240h] [rbp-1F8h] BYREF

  result = RmpPsmAppFamilyNameFromPsmKey((__int64)String2, v13);
  if ( result >= 0 )
  {
    RmpPsmAppFamilyIdInitialize(v13, a2, a3, (__int64)v12);
    v9 = RmpPsmAppFamilyTableFind(v12);
    if ( v9 )
    {
      for ( i = (_QWORD *)(v9 + 560); i; i = (_QWORD *)*i )
      {
        v11 = *(i - 1);
        if ( *(_DWORD *)(v11 + 584) == 2 && !_wcsicmp((const wchar_t *)(v11 + 48), String2) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 16));
          *a4 = v11;
          return 0;
        }
      }
    }
    return -1073741275;
  }
  return result;
}
