/*
 * XREFs of ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000B770
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B3B0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     ?HandleGroupSchedulingOwnershipChangeForSingleHost@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000BB60 (-HandleGroupSchedulingOwnershipChangeForSingleHost@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@.c)
 *     ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000BF50 (-CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SI.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180024EC6 (memcmp_0.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     _TlgCreateSid @ 0x18002F820 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
 */

void __fastcall ModernResourceEnforcer::HandleAcquireReleaseGroupSchedulingOwnership(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        void *a7,
        bool a8)
{
  int v12; // eax
  __int128 v13; // xmm1
  char *v14; // r12
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  WCHAR *v17; // rbx
  __int64 v18; // rdi
  unsigned __int8 *v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  char *v24; // rbx
  char *v25; // r14
  unsigned __int64 v26; // rax
  struct EnforcerApplicationState *v27; // r15
  unsigned int v28; // edi
  const SID *v29; // rbx
  char *i; // rbx
  unsigned int v31; // r9d
  unsigned int v32; // ecx
  TraceLoggingHProvider v33; // rcx
  LPCGUID v34; // r8
  LPCGUID v35; // r9
  unsigned int v36; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR v37; // [rsp+44h] [rbp-BCh]
  char v38; // [rsp+48h] [rbp-B8h]
  unsigned int v39; // [rsp+4Ch] [rbp-B4h]
  PSID Sid2; // [rsp+50h] [rbp-B0h] BYREF
  ModernResourceEnforcer *v41; // [rsp+58h] [rbp-A8h] BYREF
  int v42; // [rsp+60h] [rbp-A0h] BYREF
  struct EnforcerApplicationState *ApplicationState; // [rsp+68h] [rbp-98h]
  void *v44; // [rsp+70h] [rbp-90h]
  unsigned __int64 v45; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v46; // [rsp+80h] [rbp-80h]
  wchar_t Buffer[232]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD Buf1[4]; // [rsp+260h] [rbp+160h] BYREF
  int v49; // [rsp+2A0h] [rbp+1A0h]
  unsigned int v50; // [rsp+2A4h] [rbp+1A4h]
  unsigned int v51; // [rsp+2A8h] [rbp+1A8h]
  unsigned __int64 v52; // [rsp+2B0h] [rbp+1B0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2C0h] [rbp+1C0h] BYREF
  int *v54; // [rsp+2E0h] [rbp+1E0h]
  __int64 v55; // [rsp+2E8h] [rbp+1E8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2F0h] [rbp+1F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+300h] [rbp+200h] BYREF
  unsigned int *v58; // [rsp+310h] [rbp+210h]
  __int64 v59; // [rsp+318h] [rbp+218h]
  ModernResourceEnforcer **v60; // [rsp+320h] [rbp+220h]
  __int64 v61; // [rsp+328h] [rbp+228h]
  unsigned __int64 *v62; // [rsp+330h] [rbp+230h]
  __int64 v63; // [rsp+338h] [rbp+238h]
  PSID *p_Sid2; // [rsp+340h] [rbp+240h]
  __int64 v65; // [rsp+348h] [rbp+248h]

  Sid2 = a3;
  v41 = this;
  v46 = a6;
  v45 = a6;
  v44 = a7;
  v36 = a4;
  v39 = a5;
  v42 = 0;
  memset_0(Buffer, 0, 0x228uLL);
  if ( swprintf_s(Buffer, 0xE8uLL, L"%s", a2) <= 0 )
    __fastfail(0x80070057);
  v12 = *((_DWORD *)a3 + 16);
  v13 = *((_OWORD *)a3 + 1);
  v14 = (char *)this + 208;
  Buf1[0] = *(_OWORD *)a3;
  v15 = *((_OWORD *)a3 + 2);
  v49 = v12;
  Buf1[1] = v13;
  v16 = *((_OWORD *)a3 + 3);
  v50 = a4;
  Buf1[2] = v15;
  Buf1[3] = v16;
  v51 = a5;
  v52 = a6;
  v38 = 0;
  if ( !*((_QWORD *)this + 28) )
    goto LABEL_30;
  v17 = Buffer;
  v18 = 314159LL;
  do
  {
    v37 = RtlUpcaseUnicodeChar(*v17++);
    v18 = HIBYTE(v37) + 37 * ((unsigned __int8)v37 + 37 * v18);
  }
  while ( v17 < (WCHAR *)Buf1 );
  v19 = (unsigned __int8 *)Buf1;
  v20 = 11LL;
  do
  {
    v21 = *v19;
    v19 += 8;
    v18 = *(v19 - 1)
        + 37
        * (*(v19 - 2)
         + 37
         * (*(v19 - 3)
          + 37 * (*(v19 - 4) + 37 * (*(v19 - 5) + 37 * (*(v19 - 6) + 37 * (*(v19 - 7) + 37 * (v21 + 37 * v18)))))));
    --v20;
  }
  while ( v20 );
  v22 = 32769 * ((9 * v18) ^ ((unsigned __int64)(9 * v18) >> 11));
  v23 = *((_QWORD *)this + 28) + 16 * (v22 & ((8LL << *((_BYTE *)this + 240)) - 1));
  v24 = *(char **)v23;
  if ( *(_QWORD *)v23 && (v25 = **(char ***)(v23 + 8), v24 != v25) )
  {
    while ( 1 )
    {
      v26 = *((_QWORD *)v24 + 2);
      if ( v26 >= v22 )
      {
        if ( v26 > v22 )
          goto LABEL_30;
        if ( !_wcsicmp(Buffer, (const wchar_t *)v24 + 12) && !memcmp_0(Buf1, v24 + 488, 0x58uLL) )
          break;
      }
      v24 = *(char **)v24;
      if ( v24 == v25 )
        goto LABEL_30;
    }
  }
  else
  {
LABEL_30:
    v24 = (char *)this + 208;
  }
  if ( v24 == v14 )
    v27 = 0LL;
  else
    v27 = (struct EnforcerApplicationState *)(v24 + 576);
  v28 = v36;
  v29 = (const SID *)Sid2;
  ApplicationState = v27;
  if ( v27
    || (ApplicationState = ModernResourceEnforcer::CreateApplicationState(v41, a2, (union _RM_SID *)Sid2, v36, v39, v46),
        (v27 = ApplicationState) != 0LL) )
  {
    if ( v39 == 8 )
    {
      ModernResourceEnforcer::HandleGroupSchedulingOwnershipChangeForSingleHost(
        v41,
        a2,
        (union _RM_SID *)Sid2,
        v36,
        8u,
        v45,
        v44,
        a8);
    }
    else
    {
      for ( i = *(char **)v14; i != v14; i = *(char **)i )
      {
        if ( !wcsncmp((const wchar_t *)i + 12, a2, 0xE8uLL) )
        {
          if ( RtlEqualSid(i + 488, Sid2) )
          {
            v31 = *((_DWORD *)i + 139);
            if ( v31 == v36 )
            {
              v32 = *((_DWORD *)i + 140);
              if ( ((v32 - 2) & 0xFFFFFFFD) == 0 )
                ModernResourceEnforcer::HandleGroupSchedulingOwnershipChangeForSingleHost(
                  v41,
                  (const unsigned __int16 *)i + 12,
                  (union _RM_SID *)(i + 488),
                  v31,
                  v32,
                  *((_QWORD *)i + 71),
                  v44,
                  a8);
            }
          }
        }
      }
      v27 = ApplicationState;
      v29 = (const SID *)Sid2;
      v28 = v36;
    }
    *(_BYTE *)v27 = a8 | *(_BYTE *)v27 & 0xFE;
    if ( (unsigned int)dword_1800690A0 > 4 && (qword_1800690B0 & 1) != 0 && (qword_1800690B8 & 1) == qword_1800690B8 )
    {
      v55 = 4LL;
      v54 = &v42;
      TlgCreateWsz(&pDesc, a2);
      TlgCreateSid(&v57, v29);
      v36 = v28;
      v58 = &v36;
      LODWORD(v41) = v39;
      v60 = &v41;
      v62 = &v45;
      p_Sid2 = &Sid2;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 8LL;
      LODWORD(Sid2) = 0;
      v65 = 4LL;
      TlgWrite(v33, &unk_180059F9E, v34, v35, 9u, &pData);
    }
  }
}
