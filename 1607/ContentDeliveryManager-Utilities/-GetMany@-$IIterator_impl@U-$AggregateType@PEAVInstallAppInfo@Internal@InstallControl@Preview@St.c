/*
 * XREFs of ?GetMany@?$IIterator_impl@U?$AggregateType@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAUIInstallAppInfo@234567@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@4@PEAI@Z @ 0x18000C280
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Cleanup@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@3@I@Z @ 0x180013374 (--$_Cleanup@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@I@D.c)
 *     memset_0 @ 0x180058F42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<Windows::Foundation::Internal::AggregateType<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo *>,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v8 = 0LL;
  memset_0(a3, 0, 8LL * a2);
  *a4 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v11);
  if ( v9 < 0 )
    goto LABEL_8;
  do
  {
    if ( !v11 || (unsigned int)v8 >= a2 )
      break;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, (__int64)a3 + 8 * v8);
    if ( v9 < 0 )
      goto LABEL_8;
    v8 = (unsigned int)(v8 + 1);
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v11);
  }
  while ( v9 >= 0 );
  if ( v9 < 0 )
LABEL_8:
    Windows::Foundation::Collections::Detail::_Cleanup<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo,unsigned int>(
      a3,
      (unsigned int)*a4);
  else
    *a4 = v8;
  return (unsigned int)v9;
}
