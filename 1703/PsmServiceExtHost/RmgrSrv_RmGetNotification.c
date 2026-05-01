/*
 * XREFs of RmgrSrv_RmGetNotification @ 0x18001C030
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x18001C140 (-RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResou.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmgrSrv_RmGetNotification(
        struct ExecutionModel::ResourceHandle__ *a1,
        struct ExecutionModel::ExternalResourceNotification *a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  unsigned int Notification; // eax
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned int v11; // [rsp+30h] [rbp-19h] BYREF
  struct ExecutionModel::ResourceHandle__ *v12; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  struct ExecutionModel::ResourceHandle__ **v14; // [rsp+60h] [rbp+17h]
  int v15; // [rsp+68h] [rbp+1Fh]
  int v16; // [rsp+6Ch] [rbp+23h]
  struct ExecutionModel::ResourceHandle__ **v17; // [rsp+70h] [rbp+27h]
  int v18; // [rsp+78h] [rbp+2Fh]
  int v19; // [rsp+7Ch] [rbp+33h]

  v11 = 0;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 2uLL) )
  {
    v16 = 0;
    v14 = &v12;
    v12 = a1;
    v15 = 8;
    TlgWrite(a1, &unk_18003F23A, v4, v5, 3u, &pData);
  }
  Notification = ExecutionModel::ResourceManager::RmGetNotification(a1, a1, a2);
  LODWORD(v7) = Notification;
  v11 = Notification;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)Notification, 2uLL) )
  {
    v16 = 0;
    v19 = 0;
    v14 = (struct ExecutionModel::ResourceHandle__ **)&v11;
    LODWORD(v12) = *(_DWORD *)a2;
    v17 = &v12;
    v15 = 4;
    v18 = 4;
    TlgWrite(v7, &unk_18003EEF0, v8, v9, 4u, &pData);
    LODWORD(v7) = v11;
  }
  return (unsigned int)v7;
}
