/*
 * XREFs of ?TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@QEAAXI_K@Z @ 0x18000D740
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryRecordInputActivity(
        CPartitionVerticalBlankScheduler *this,
        unsigned int a2,
        const GUID *a3)
{
  unsigned int v3; // r9d
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  __int64 v6; // [rsp+58h] [rbp+17h]
  __int64 v7; // [rsp+60h] [rbp+1Fh]
  int *v8; // [rsp+68h] [rbp+27h]
  __int64 v9; // [rsp+70h] [rbp+2Fh]
  const GUID **v10; // [rsp+78h] [rbp+37h]
  __int64 v11; // [rsp+80h] [rbp+3Fh]
  unsigned int v12; // [rsp+B0h] [rbp+6Fh] BYREF
  const GUID *v13; // [rsp+B8h] [rbp+77h] BYREF

  v13 = a3;
  v12 = a2;
  v3 = a2;
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v6 = *((_QWORD *)this + 2741);
    v8 = (int *)&v12;
    v10 = &v13;
    v7 = 8LL;
    v9 = 4LL;
    v11 = 8LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C3169, a3, (LPCGUID)a2, 5u, &pData);
    a3 = v13;
    v3 = v12;
  }
  *((_QWORD *)this + 3093) = **((_QWORD **)this + 2741);
  *((_DWORD *)this + 6184) = v3;
  *((_QWORD *)this + 3094) = a3;
}
