/*
 * XREFs of PsmRetrieveHostMemoryLimit @ 0x180015020
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180013700 (_TlgCreateWsz.c)
 *     _TlgCreateSid @ 0x1800151E4 (_TlgCreateSid.c)
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x180015204 (RmpHandlePsmRetrieveHostMemoryLimit.c)
 *     ?RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z @ 0x18001571C (-RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall PsmRetrieveHostMemoryLimit(
        SID *Src,
        unsigned int a2,
        wchar_t *Source,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  ULONGLONG v12; // r11
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v15; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE Srca[80]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v19; // [rsp+B0h] [rbp-50h]
  int v20; // [rsp+B8h] [rbp-48h]
  int v21; // [rsp+BCh] [rbp-44h]
  unsigned int *v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  unsigned int *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  __int64 v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]

  v6 = a6;
  RmpRmSidInitialize((union _RM_SID *)Srca, Src);
  result = RmpHandlePsmRetrieveHostMemoryLimit(Srca, a2, Source, a4, a5, v6);
  v13 = result;
  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
  {
    v23 = 4LL;
    v22 = &v13;
    TlgCreateWsz(&pDesc, Source);
    TlgCreateSid(&v25, Src);
    v14 = a2;
    v26 = &v14;
    v28 = &v15;
    v30 = &a5;
    v27 = 4LL;
    v15 = a4;
    v29 = 4LL;
    v31 = 8LL;
    v32 = v6;
    v33 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18004D038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18003EE01 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = v12;
    UserData.Size = *(unsigned __int16 *)off_18004D038;
    v19 = &unk_18003EE0C;
    UserData.Reserved = 2;
    v20 = 106;
    v21 = v12;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
    return v13;
  }
  return result;
}
