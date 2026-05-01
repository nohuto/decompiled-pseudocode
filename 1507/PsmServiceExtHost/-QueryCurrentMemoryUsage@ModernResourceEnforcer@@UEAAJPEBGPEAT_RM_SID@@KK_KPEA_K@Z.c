/*
 * XREFs of ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K@Z @ 0x18000C130
 * Callers:
 *     RmpActivityHostQueryTotalCommit @ 0x180006290 (RmpActivityHostQueryTotalCommit.c)
 *     ?UpdateAndGetCommitMemoryNotificationState@ResourceManager@ExecutionModel@@QEBAJPEAVResourceSet@2@_K1111PEA_K22PEAW4RmCommitLevel@@@Z @ 0x180011D20 (-UpdateAndGetCommitMemoryNotificationState@ResourceManager@ExecutionModel@@QEBAJPEAVResourceSet@.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     _TlgCreateSid @ 0x18002F820 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
 */

__int64 __fastcall ModernResourceEnforcer::QueryCurrentMemoryUsage(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        const SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 *a7)
{
  unsigned __int64 *v8; // rsi
  int v12; // r8d
  int v13; // ebx
  TraceLoggingHProvider v15; // rcx
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  TraceLoggingHProvider v18; // rcx
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  TraceLoggingHProvider v21; // rcx
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v26; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  unsigned int *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]

  v8 = a7;
  v12 = (*((__int64 (__fastcall **)(const SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned __int64 *, _QWORD))this
         + 12))(
          a3,
          a4,
          a2,
          a5,
          a6,
          &v28,
          0LL);
  v24 = v12;
  if ( (unsigned int)dword_1800690A0 > 5 && (qword_1800690B0 & 1) != 0 && (qword_1800690B8 & 1) == qword_1800690B8 )
  {
    *(_QWORD *)&v30.Size = 4LL;
    v30.Ptr = (ULONGLONG)&v24;
    TlgCreateWsz(&pDesc, a2);
    TlgCreateSid(&v32, a3);
    v26 = a4;
    v33 = &v26;
    v35 = &v25;
    v37 = &a6;
    v39 = &v28;
    v34 = 4LL;
    v25 = a5;
    v36 = 4LL;
    v38 = 8LL;
    v40 = 8LL;
    TlgWrite(v15, &unk_18005A012, v16, v17, 9u, &pData);
    v12 = v24;
  }
  if ( v12 >= 0 )
  {
    v24 = (*((__int64 (__fastcall **)(const SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned __int64 *))this
           + 21))(
            a3,
            a4,
            a2,
            a5,
            a6,
            &v27);
    v12 = v24;
    v13 = -1073741675;
    if ( v24 >= 0 )
    {
      if ( is_mul_ok(v27, 0x1000uLL) )
      {
        v27 <<= 12;
        v12 = 0;
      }
      else
      {
        v27 = -1LL;
        v12 = -1073741675;
      }
      v24 = v12;
    }
    if ( (unsigned int)dword_1800690A0 > 5 && (qword_1800690B0 & 1) != 0 && (qword_1800690B8 & 1) == qword_1800690B8 )
    {
      *(_QWORD *)&v30.Size = 4LL;
      v30.Ptr = (ULONGLONG)&v24;
      TlgCreateWsz(&pDesc, a2);
      TlgCreateSid(&v32, a3);
      v25 = a4;
      v33 = &v25;
      v35 = &v26;
      v37 = &a6;
      v39 = &v27;
      v34 = 4LL;
      v26 = a5;
      v36 = 4LL;
      v38 = 8LL;
      v40 = 8LL;
      TlgWrite(v18, &unk_18005A081, v19, v20, 9u, &pData);
      v12 = v24;
    }
    if ( v12 >= 0 )
    {
      if ( v28 + v27 < v28 )
      {
        *v8 = -1LL;
      }
      else
      {
        *v8 = v28 + v27;
        v13 = 0;
      }
      v24 = v13;
      if ( (unsigned int)dword_1800690A0 > 4 && (qword_1800690B0 & 1) != 0 && (qword_1800690B8 & 1) == qword_1800690B8 )
      {
        TlgCreateWsz(&v30, a2);
        TlgCreateSid(&pDesc, a3);
        v25 = a4;
        v32.Ptr = (ULONGLONG)&v25;
        v33 = &v26;
        v35 = (unsigned int *)&a6;
        v39 = &v28;
        v41 = &v27;
        *(_QWORD *)&v32.Size = 4LL;
        v26 = a5;
        v34 = 4LL;
        v36 = 8LL;
        v37 = v8;
        v38 = 8LL;
        v40 = 8LL;
        v42 = 8LL;
        TlgWrite(v21, &unk_18005A0F7, v22, v23, 0xAu, &pData);
      }
      v12 = 0;
    }
  }
  return v12 | 0x10000000u;
}
