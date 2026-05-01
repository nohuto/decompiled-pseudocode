/*
 * XREFs of ?RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z @ 0x18002CE80
 * Callers:
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x18001AC20 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::RemoveIoCountersFromCirculation(
        ExecutionModel::ResourceManager *this,
        unsigned __int64 a2,
        struct ExecutionModel::BaseResourceSet *a3)
{
  __int64 v3; // r8
  unsigned __int64 *v4; // r8
  unsigned __int64 v5; // rax
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned __int64 v10; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v14; // [rsp+70h] [rbp-9h]
  __int64 v15; // [rsp+78h] [rbp-1h]
  __int64 *v16; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+Fh]
  __int64 *v18; // [rsp+90h] [rbp+17h]
  __int64 v19; // [rsp+98h] [rbp+1Fh]
  const GUID *v20; // [rsp+A0h] [rbp+27h]
  __int64 v21; // [rsp+A8h] [rbp+2Fh]
  const struct _TlgProvider_t *v22; // [rsp+B0h] [rbp+37h]
  __int64 v23; // [rsp+B8h] [rbp+3Fh]

  *((_QWORD *)this + 17) += a2;
  v3 = *((_QWORD *)this + 15);
  v11 = a2;
  if ( (*(_BYTE *)(v3 + 1344) & 4) == 0 )
  {
    v4 = (unsigned __int64 *)(v3 + 248);
    v5 = *v4;
    if ( a2 < *v4 )
      v5 = a2;
    v6 = (ExecutionModel::ResourceManager *)((char *)this + 144);
    v12 = v5;
    v10 = a2 - v5;
    *v4 -= v5;
    *(_QWORD *)v6 += v10;
    if ( (unsigned int)dword_18004C030 > 4 )
    {
      if ( TlgKeywordOn(v6, 1uLL) )
      {
        v15 = 8LL;
        v14 = (__int64 *)&v11;
        v16 = (__int64 *)&v12;
        v18 = (__int64 *)&v10;
        v17 = 8LL;
        v19 = 8LL;
        v20 = v8;
        v21 = 8LL;
        v22 = v7;
        v23 = 8LL;
        TlgWrite(v7, &unk_18003FFBD, v8, v9, 7u, &pData);
      }
    }
  }
}
