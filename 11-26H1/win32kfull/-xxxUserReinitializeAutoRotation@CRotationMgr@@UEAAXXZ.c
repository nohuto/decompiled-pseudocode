/*
 * XREFs of ?xxxUserReinitializeAutoRotation@CRotationMgr@@UEAAXXZ @ 0x1400F7500
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryAutoRotationRegistrySetting@@YAKPEBGK0@Z @ 0x1400F75E4 (-QueryAutoRotationRegistrySetting@@YAKPEBGK0@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1400F94F0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall CRotationMgr::xxxUserReinitializeAutoRotation(CRotationMgr *this)
{
  unsigned int AutoRotationRegistrySetting; // eax
  int v3; // r9d
  unsigned int v4; // eax
  bool v5; // zf
  __int64 v6; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  AutoRotationRegistrySetting = QueryAutoRotationRegistrySetting(
                                  L"Enable",
                                  1u,
                                  L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  *((_DWORD *)this + 2) = AutoRotationRegistrySetting;
  if ( (unsigned int)dword_1403AAA30 > 5
    && (qword_1403AAA40 & 0x400000000001LL) != 0
    && (qword_1403AAA48 & 0x400000000001LL) == qword_1403AAA48 )
  {
    v8 = AutoRotationRegistrySetting;
    v7 = 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1403AAA30,
      (unsigned int)&unk_140372F11,
      1,
      v3,
      (__int64)&v8,
      (__int64)&v7);
  }
  *((_DWORD *)this + 3) = QueryAutoRotationRegistrySetting(
                            L"SlateEnable",
                            1u,
                            L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  v4 = QueryAutoRotationRegistrySetting(
         L"SensorPresent",
         0,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  *((_DWORD *)this + 7) = 0;
  v5 = v4 == 1;
  v6 = *(_QWORD *)this;
  *((_DWORD *)this + 4) = v5;
  (*(void (__fastcall **)(CRotationMgr *))(v6 + 16))(this);
}
