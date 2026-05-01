/*
 * XREFs of ??$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z @ 0x18000B9FC
 * Callers:
 *     DllGetClassObject @ 0x18000BD50 (DllGetClassObject.c)
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x180003340 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetClassObject<1>(
        Microsoft::WRL::Details *this,
        __int64 a2,
        _QWORD *a3,
        const struct _GUID *a4,
        struct Microsoft::WRL::Details::CreatorMap *a5)
{
  const struct Microsoft::WRL::Details::CreatorMap *v5; // r15
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  const struct _GUID *v14; // r9
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  v5 = a5;
  *(_QWORD *)a5 = 0LL;
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
  LODWORD(v15) = 1;
  return Microsoft::WRL::Details::GetCacheEntry(this, (struct Microsoft::WRL::Details::ModuleBase *)&v15, a4, v14, v5);
}
