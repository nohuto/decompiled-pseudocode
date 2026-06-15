/*
 * XREFs of ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1800A51A4
 * Callers:
 *     _lambda_418c5ae5971ebab8b75617066dde6fa1_::operator() @ 0x1800A4F74 (_lambda_418c5ae5971ebab8b75617066dde6fa1_--operator().c)
 * Callees:
 *     ??1?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@QEAA@XZ @ 0x180039564 (--1-$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@QEAA@XZ.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18007F8A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Add@?$CSimpleArray@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@2@@ATL@@QEAAHAEBV?$CComHeapPtr@UtWAVEFORMATEX@@@2@@Z @ 0x1800A5118 (-Add@-$CSimpleArray@V-$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V-$CSimpleArrayEqualHelper@V-$CComHeapP.c)
 */

__int64 __fastcall CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(
        CConnectorProcessingModeCharacteristics *this,
        const struct tWAVEFORMATEX *a2)
{
  int v3; // ebx
  struct tWAVEFORMATEX *v5; // [rsp+40h] [rbp+18h] BYREF
  struct tWAVEFORMATEX *v6; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v3 = CloneWaveFormat(a2, &v5);
  if ( v3 >= 0 )
  {
    v6 = v5;
    if ( (unsigned int)ATL::CSimpleArray<ATL::CComHeapPtr<tWAVEFORMATEX>,ATL::CSimpleArrayEqualHelper<ATL::CComHeapPtr<tWAVEFORMATEX>>>::Add(
                         (__int64)this + 32,
                         &v6) )
      v5 = 0LL;
    else
      v3 = -2147024882;
  }
  ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>((LPVOID *)&v5);
  return (unsigned int)v3;
}
