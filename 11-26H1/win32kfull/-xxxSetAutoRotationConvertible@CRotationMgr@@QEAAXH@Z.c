/*
 * XREFs of ?xxxSetAutoRotationConvertible@CRotationMgr@@QEAAXH@Z @ 0x1400F97C8
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CRotationMgr@@UEAAXXZ @ 0x1400F9598 (-xxxRefreshDisplayOrientation@CRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1400F94F0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall CRotationMgr::xxxSetAutoRotationConvertible(CRotationMgr *this, int a2, __int64 a3, __int64 a4)
{
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1403AAA30 > 5
    && (qword_1403AAA40 & 0x200000000001LL) != 0
    && (qword_1403AAA48 & 0x200000000001LL) == qword_1403AAA48 )
  {
    v6 = *((_DWORD *)this + 6);
    v7 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA30,
      byte_140372FF2,
      a3,
      a4,
      (__int64)&v6,
      (__int64)&v7);
  }
  *((_DWORD *)this + 6) = a2;
}
