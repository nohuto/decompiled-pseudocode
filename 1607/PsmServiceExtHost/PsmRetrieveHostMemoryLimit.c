/*
 * XREFs of PsmRetrieveHostMemoryLimit @ 0x180017860
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180015F14 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgCreateSid @ 0x180017A10 (_TlgCreateSid.c)
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x180017A38 (RmpHandlePsmRetrieveHostMemoryLimit.c)
 *     RmpRmSidInitialize @ 0x180017BDC (RmpRmSidInitialize.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall PsmRetrieveHostMemoryLimit(SID *Src, int a2, const WCHAR *a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  unsigned int HostMemoryLimit; // eax
  unsigned int v12; // ecx
  ULONGLONG v13; // r11
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE Srca[80]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v21; // [rsp+B0h] [rbp-50h]
  int v22; // [rsp+B8h] [rbp-48h]
  int v23; // [rsp+BCh] [rbp-44h]
  unsigned int *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+E0h] [rbp-20h] BYREF
  int *v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  int *v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  __int64 *v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  __int64 v34; // [rsp+120h] [rbp+20h]
  __int64 v35; // [rsp+128h] [rbp+28h]

  v6 = a6;
  RmpRmSidInitialize(Srca, Src);
  HostMemoryLimit = RmpHandlePsmRetrieveHostMemoryLimit(Srca, a5, v6);
  v12 = HostMemoryLimit;
  v15 = HostMemoryLimit;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)HostMemoryLimit, 1uLL) )
  {
    v25 = 4LL;
    v24 = &v15;
    TlgCreateWsz(&pDesc, a3);
    TlgCreateSid(&v27, Src);
    v16 = a2;
    v28 = &v16;
    v30 = &v17;
    v32 = &a5;
    v29 = 4LL;
    v17 = a4;
    v31 = 4LL;
    v33 = 8LL;
    v34 = v6;
    v35 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18004C038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18003E781 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = v13;
    UserData.Size = *(unsigned __int16 *)off_18004C038;
    v21 = &unk_18003E78C;
    UserData.Reserved = 2;
    v22 = 106;
    v23 = v13;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
    return v15;
  }
  return v12;
}
