/*
 * XREFs of ??$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z @ 0x18000C428
 * Callers:
 *     DllGetClassObject @ 0x18000C860 (DllGetClassObject.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x18000C588 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetClassObject<1>(
        Microsoft::WRL::Details *this,
        __int64 a2,
        _QWORD *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  PVOID Ptr; // r15
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  const struct _GUID *v14; // r9
  struct IUnknown **v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  Ptr = a5;
  *a5 = 0LL;
  v9 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 32LL))(this) + 8;
  v10 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 40LL))(this);
  while ( 1 )
  {
    if ( v9 >= v10 )
      return 2147746065LL;
    if ( *(_QWORD *)v9 )
    {
      v11 = *(_QWORD **)(*(_QWORD *)v9 + 8LL);
      v12 = *v11 - *a3;
      if ( *v11 == *a3 )
        v12 = v11[1] - a3[1];
      if ( !v12 )
        break;
    }
    v9 += 8LL;
  }
  v14 = *(const struct _GUID **)v9;
  LODWORD(v16) = 1;
  return Microsoft::WRL::Details::GetCacheEntry(
           this,
           (struct Microsoft::WRL::Details::ModuleBase *)&v16,
           a4,
           v14,
           Ptr,
           v15);
}
