/*
 * XREFs of ?RemoveGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@@Z @ 0x1800454C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x1800078A0 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1800247E8 (__report_rangecheckfailure.c)
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x180045018 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 *     ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z @ 0x18004D900 (-Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::RemoveGameConfig(
        ExecutionModel::GameConfigStoreServer *this,
        struct _GUID *a2)
{
  const WCHAR *v4; // rcx
  int v5; // ebx
  __int64 v6; // rax
  int v7; // eax
  const WCHAR *v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-39h] BYREF
  unsigned __int16 v11[4]; // [rsp+28h] [rbp-31h] BYREF
  HKEY v12; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int16 v13[4]; // [rsp+38h] [rbp-21h] BYREF
  WCHAR v14[40]; // [rsp+40h] [rbp-19h] BYREF

  v10 = 36;
  if ( IsDebuggerPresent() )
    DebugBreak();
  v4 = (const WCHAR *)*((_QWORD *)this + 1);
  *(_QWORD *)v13 = 0LL;
  *(_QWORD *)v11 = 0LL;
  v12 = 0LL;
  v5 = ExecutionModel::Internal::OpenGameConfigStoreRegKeys(v4, (HKEY *)v13, (HKEY *)v11, &v12);
  if ( v5 >= 0 )
  {
    v6 = *(_QWORD *)&a2->Data1;
    if ( !*(_QWORD *)&a2->Data1 )
      v6 = *(_QWORD *)a2->Data4;
    if ( v6 )
    {
      v7 = Common::Guid::Encode(a2, v14, 0x24u, &v10);
      if ( v7 >= 0 )
      {
        if ( 2 * (unsigned __int64)v10 >= 0x4A )
          _report_rangecheckfailure();
        v8 = (const WCHAR *)*((_QWORD *)this + 1);
        v14[v10] = 0;
        v7 = ExecutionModel::Internal::RemoveFromPermanentStore(v8, (ExecutionModel::Internal *)v11, &v12, v14);
      }
      v5 = v7;
    }
    else
    {
      v5 = -2147024809;
    }
  }
  Common::AutoHandleCloseHKEY<HKEY__ *>(v12);
  Common::AutoHandleCloseHKEY<HKEY__ *>(*(HKEY *)v11);
  Common::AutoHandleCloseHKEY<HKEY__ *>(*(HKEY *)v13);
  return (unsigned int)v5;
}
