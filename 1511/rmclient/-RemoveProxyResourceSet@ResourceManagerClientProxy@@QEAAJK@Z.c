/*
 * XREFs of ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJK@Z @ 0x180014A1C
 * Callers:
 *     ?ForceReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x180013C20 (-ForceReleaseResources@ResourceSetClientProxy@@UEAAJXZ.c)
 *     ?Release@ResourceSetClientProxy@@UEAAKXZ @ 0x180014780 (-Release@ResourceSetClientProxy@@UEAAKXZ.c)
 *     ?ReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x180014920 (-ReleaseResources@ResourceSetClientProxy@@UEAAJXZ.c)
 * Callees:
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180012274 (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-.c)
 *     ?erase@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@2@0@Z @ 0x18001508C (-erase@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-$equal_to@K@2@.c)
 */

__int64 __fastcall ResourceManagerClientProxy::RemoveProxyResourceSet(ResourceManagerClientProxy *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v4; // esi
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 *v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v9 = a2;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 21184);
  v4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 21184));
  v8 = 0LL;
  v5 = (__int64 *)((char *)this + 21224);
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_EqualRangeImpl<unsigned long>(
    (__int64)v5,
    v6,
    (unsigned __int16 *)&v9,
    &v8,
    &v11,
    &v10);
  if ( v8 == v5 )
    v4 = -2147023728;
  else
    utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::erase(
      v5,
      &v8,
      v8,
      *v8);
  LeaveCriticalSection(v2);
  return v4;
}
