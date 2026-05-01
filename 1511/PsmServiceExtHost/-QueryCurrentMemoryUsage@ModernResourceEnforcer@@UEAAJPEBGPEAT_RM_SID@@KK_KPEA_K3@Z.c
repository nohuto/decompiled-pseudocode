/*
 * XREFs of ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z @ 0x180017520
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     RmpActivityHostQueryCommit @ 0x180015DC0 (RmpActivityHostQueryCommit.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ModernResourceEnforcer::QueryCurrentMemoryUsage(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  unsigned __int64 *v9; // r15
  unsigned __int64 *v10; // r12
  const GUID *v14; // r9
  const struct _TlgProvider_t *v15; // rcx
  unsigned __int128 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  const unsigned __int16 *v19; // rcx
  int v20; // ecx
  const struct _TlgProvider_t *v22; // rcx
  const GUID *v23; // r8
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v27; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR v30; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+90h] [rbp-70h] BYREF
  void *v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h]
  int v35; // [rsp+ACh] [rbp-54h]
  int *v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  void *v41; // [rsp+E0h] [rbp-20h]
  int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+ECh] [rbp-14h]
  const unsigned __int16 *v44; // [rsp+F0h] [rbp-10h]
  int v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FCh] [rbp-4h]
  union _RM_SID *v47; // [rsp+100h] [rbp+0h]
  int v48; // [rsp+108h] [rbp+8h]
  int v49; // [rsp+10Ch] [rbp+Ch]
  int *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  unsigned int *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v58; // [rsp+150h] [rbp+50h]
  __int64 v59; // [rsp+158h] [rbp+58h]
  unsigned __int64 *v60; // [rsp+160h] [rbp+60h]
  __int64 v61; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF
  int *v63; // [rsp+190h] [rbp+90h]
  __int64 v64; // [rsp+198h] [rbp+98h]
  unsigned __int64 *v65; // [rsp+1A0h] [rbp+A0h]
  __int64 v66; // [rsp+1A8h] [rbp+A8h]

  v9 = a7;
  v10 = a8;
  v24 = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned __int64 *, _QWORD))this
         + 12))(
          a3,
          a4,
          a2,
          a5,
          a6,
          &v28,
          0LL);
  LODWORD(v14) = v24;
  if ( v24 < 0 )
  {
    if ( (unsigned int)dword_180071060 <= 4 || (qword_180071070 & 1) == 0 || (qword_180071078 & 1) != qword_180071078 )
      return (unsigned int)v14 | 0x10000000;
    v37 = 4LL;
    v36 = &v24;
    v38 = &a6;
    v39 = 8LL;
    *(_DWORD *)&v30.Level = 4;
    v32.Ptr = (ULONGLONG)off_180071068;
    *(_DWORD *)&v30.Id = ((unsigned int)&unk_180061A0D - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v30.Keyword = 1LL;
    v32.Size = *(unsigned __int16 *)off_180071068;
    v33 = &unk_180061A18;
    v32.Reserved = 2;
    v34 = 60;
    v35 = 1;
    EventWriteTransfer(RegHandle, &v30, 0LL, 0LL, 4u, &v32);
LABEL_14:
    LODWORD(v14) = v24;
    return (unsigned int)v14 | 0x10000000;
  }
  v24 = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned __int64 *))this
         + 21))(
          a3,
          a4,
          a2,
          a5,
          a6,
          &v25);
  LODWORD(v14) = v24;
  if ( v24 < 0 )
  {
    if ( (unsigned int)dword_180071060 <= 4 || !TlgKeywordOn(v15, 1uLL) )
      return (unsigned int)v14 | 0x10000000;
    v64 = 4LL;
    v63 = &v24;
    v65 = &a6;
    v66 = 8LL;
    TlgWrite(v22, &unk_1800617E8, v23, v14, 4u, &pData);
    goto LABEL_14;
  }
  v16 = v25 * (unsigned __int128)0x1000uLL;
  v17 = v25 << 12;
  if ( is_mul_ok(v25, 0x1000uLL) )
  {
    v25 <<= 12;
    LODWORD(v14) = DWORD2(v16);
  }
  else
  {
    v17 = -1LL;
    LODWORD(v14) = -1073741675;
    v25 = -1LL;
    DWORD2(v16) = 0;
  }
  v18 = v28;
  *v9 = v28;
  *v10 = v17;
  v24 = (int)v14;
  v29 = v17 + v18;
  if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
  {
    v19 = (const unsigned __int16 *)&unk_1800574EC;
    LODWORD(v16) = DWORD2(v16);
    if ( a2 )
    {
      v19 = a2;
      *(_QWORD *)&v16 = -1LL;
      do
        *(_QWORD *)&v16 = v16 + 1;
      while ( a2[(_QWORD)v16] );
    }
    v44 = v19;
    v20 = 2 * v16 + 2;
    LOBYTE(v16) = *((_BYTE *)a3 + 1);
    v45 = v20;
    v46 = DWORD2(v16);
    if ( (unsigned __int8)v16 > 0xFu )
      LODWORD(v16) = 15;
    else
      LODWORD(v16) = (unsigned __int8)v16;
    v47 = a3;
    v48 = 4 * v16 + 8;
    v50 = (int *)&v27;
    v52 = &v26;
    v54 = &a6;
    v56 = &v29;
    v58 = &v28;
    v60 = &v25;
    v49 = DWORD2(v16);
    v27 = a4;
    v51 = 4LL;
    v26 = a5;
    v53 = 4LL;
    v55 = 8LL;
    v57 = 8LL;
    v59 = 8LL;
    v61 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_180071068;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18006195C - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_180071068;
    v41 = &unk_180061967;
    UserData.Reserved = 2;
    v42 = 165;
    v43 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
    goto LABEL_14;
  }
  return (unsigned int)v14 | 0x10000000;
}
