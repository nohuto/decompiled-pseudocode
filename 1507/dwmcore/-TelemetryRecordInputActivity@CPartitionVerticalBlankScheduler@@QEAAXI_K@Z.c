/*
 * XREFs of ?TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@QEAAXI_K@Z @ 0x18000F7B4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
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
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_180190AC0 & 2) != 0 && (qword_180190AC8 & 2) == qword_180190AC8 )
  {
    v6 = *((_QWORD *)this + 2787);
    v8 = (int *)&v12;
    v10 = &v13;
    v7 = 8LL;
    v9 = 4LL;
    v11 = 8LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016DC99, a3, (LPCGUID)a2, 5u, &pData);
    a3 = v13;
    v3 = v12;
  }
  *((_QWORD *)this + 3123) = **((_QWORD **)this + 2787);
  *((_DWORD *)this + 6244) = v3;
  *((_QWORD *)this + 3124) = a3;
}
