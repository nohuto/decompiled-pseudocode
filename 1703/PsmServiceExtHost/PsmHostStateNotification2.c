/*
 * XREFs of PsmHostStateNotification2 @ 0x1800134B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180009FE0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800217DC (memcpy_0.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

int __fastcall PsmHostStateNotification2(
        _BYTE *Src,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned int *a4,
        unsigned __int64 *a5,
        unsigned int a6,
        void *a7,
        int a8)
{
  unsigned __int16 *v12; // rcx
  __int64 v13; // rax
  int v14; // ecx
  ULONG v15; // eax
  unsigned int v17; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v18; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v19; // [rsp+58h] [rbp-A8h] BYREF
  int v20; // [rsp+5Ch] [rbp-A4h] BYREF
  void *v21; // [rsp+60h] [rbp-A0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v23[80]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  void *v25; // [rsp+E0h] [rbp-20h]
  int v26; // [rsp+E8h] [rbp-18h]
  int v27; // [rsp+ECh] [rbp-14h]
  unsigned __int16 *v28; // [rsp+F0h] [rbp-10h]
  int v29; // [rsp+F8h] [rbp-8h]
  int v30; // [rsp+FCh] [rbp-4h]
  _BYTE *v31; // [rsp+100h] [rbp+0h]
  int v32; // [rsp+108h] [rbp+8h]
  int v33; // [rsp+10Ch] [rbp+Ch]
  unsigned int *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  unsigned int *v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  unsigned int *v38; // [rsp+130h] [rbp+30h]
  __int64 v39; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v40; // [rsp+140h] [rbp+40h]
  __int64 v41; // [rsp+148h] [rbp+48h]
  int *v42; // [rsp+150h] [rbp+50h]
  __int64 v43; // [rsp+158h] [rbp+58h]

  v21 = a7;
  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
  {
    v12 = (unsigned __int16 *)&unk_18003CFF4;
    LODWORD(v13) = 0;
    if ( a3 )
    {
      v12 = a3;
      v13 = -1LL;
      do
        ++v13;
      while ( a3[v13] );
    }
    v28 = v12;
    v14 = 2 * v13 + 2;
    LOBYTE(v13) = Src[1];
    v29 = v14;
    v30 = 0;
    if ( (unsigned __int8)v13 > 0xFu )
      LODWORD(v13) = 15;
    else
      LODWORD(v13) = (unsigned __int8)v13;
    v31 = Src;
    v32 = 4 * v13 + 8;
    v34 = &v17;
    v36 = &v18;
    v19 = *a4;
    v38 = &v19;
    v42 = &v20;
    v33 = 0;
    v17 = a2;
    v35 = 4LL;
    v18 = a6;
    v37 = 4LL;
    v39 = 4LL;
    v40 = a5;
    v41 = 8LL;
    v20 = a8;
    v43 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18004D038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18003EE77 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18004D038;
    v25 = &unk_18003EE82;
    UserData.Reserved = 2;
    v26 = 109;
    v27 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  memset_0(v23, 0, 0x44uLL);
  v15 = RtlLengthSid(Src);
  memcpy_0(v23, Src, v15);
  return ModernResourceEnforcer::ApplicationStateNotification(
           *((_QWORD *)RmSvcGlobals + 7),
           (__int64)v23,
           a2,
           a3,
           a4,
           a5,
           a6,
           v21,
           a8);
}
