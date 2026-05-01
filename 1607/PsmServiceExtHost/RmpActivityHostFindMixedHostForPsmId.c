/*
 * XREFs of RmpActivityHostFindMixedHostForPsmId @ 0x18002F058
 * Callers:
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18002C298 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 * Callees:
 *     RmpPsmAppFamilyTableFind @ 0x180005920 (RmpPsmAppFamilyTableFind.c)
 *     RmpPsmAppFamilyIdInitialize @ 0x180005CF8 (RmpPsmAppFamilyIdInitialize.c)
 *     RmpPsmAppFamilyNameFromPsmKey @ 0x180005DC0 (RmpPsmAppFamilyNameFromPsmKey.c)
 *     RmpObjectAddRef @ 0x180006058 (RmpObjectAddRef.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

LONG __fastcall RmpActivityHostFindMixedHostForPsmId(__int64 a1, const wchar_t *a2, __int64 a3, int a4, __int64 *a5)
{
  LONG result; // eax
  __int64 v10; // rax
  _QWORD *i; // rbx
  __int64 v12; // rdi
  WCHAR v13[272]; // [rsp+20h] [rbp-418h] BYREF
  _OWORD v14[29]; // [rsp+240h] [rbp-1F8h] BYREF

  result = RmpPsmAppFamilyNameFromPsmKey((__int64)a2, v14);
  if ( result >= 0 )
  {
    RmpPsmAppFamilyIdInitialize((__int64)v14, a3, a4, (__int64)v13);
    v10 = RmpPsmAppFamilyTableFind(a1, v13);
    if ( v10 )
    {
      for ( i = (_QWORD *)(v10 + 560); i; i = (_QWORD *)*i )
      {
        v12 = *(i - 1);
        if ( *(_DWORD *)(v12 + 592) == 2 && !_wcsicmp((const wchar_t *)(v12 + 56), a2) )
        {
          RmpObjectAddRef(v12);
          result = 0;
          *a5 = v12;
          return result;
        }
      }
    }
    return -1073741275;
  }
  return result;
}
