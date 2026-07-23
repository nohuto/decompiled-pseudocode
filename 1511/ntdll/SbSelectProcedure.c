/*
 * XREFs of SbSelectProcedure @ 0x18000EFD0
 * Callers:
 *     RtlInitializeHeapManager @ 0x18004BCAC (RtlInitializeHeapManager.c)
 *     SwitchedRtlGetVersion @ 0x180074114 (SwitchedRtlGetVersion.c)
 *     SbExecuteProcedure @ 0x1800F5B80 (SbExecuteProcedure.c)
 * Callees:
 *     SbpUpdateCacheWithCurrentImpl @ 0x18000F440 (SbpUpdateCacheWithCurrentImpl.c)
 *     EtwNotificationUnregister @ 0x180047E50 (EtwNotificationUnregister.c)
 *     EtwEventWrite @ 0x180049CE0 (EtwEventWrite.c)
 *     EtwEventRegister @ 0x1800541A0 (EtwEventRegister.c)
 *     SbpUpdateCache @ 0x1800721FC (SbpUpdateCache.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     SbpTraceContextUpdate @ 0x1800F5AA0 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbSelectProcedure(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rsi
  char *pShimData; // r8
  char *v9; // r8
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v14; // r13
  __int64 v15; // rbx
  char *v16; // rsi
  char *v17; // rsi
  REGHANDLE v18; // r15
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r15
  char *v24; // rsi
  char *v25; // rsi
  REGHANDLE v26; // r14
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int16 v30; // bx
  unsigned __int16 v31; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v32; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v33; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v34; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONGLONG v35; // [rsp+40h] [rbp-C0h] BYREF
  ULONGLONG RegHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONGLONG v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h]
  ULONGLONG v39; // [rsp+60h] [rbp-A0h]
  _EVENT_DATA_DESCRIPTOR UserData[8]; // [rsp+70h] [rbp-90h] BYREF
  _EVENT_DATA_DESCRIPTOR v41[8]; // [rsp+F0h] [rbp-10h] BYREF

  v5 = *(_QWORD *)(a3 + 8);
  v6 = 0LL;
  v7 = a4;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( pShimData && (v9 = pShimData + 2016) != 0LL && *((_DWORD *)v9 + 12) )
  {
    v10 = (char *)NtCurrentPeb()->pShimData;
    if ( v10 && (v11 = v10 + 2016) != 0LL && *((_DWORD *)v11 + 12) )
      v12 = *(_QWORD *)v11;
    else
      v12 = 0LL;
    if ( (v12 != *(_QWORD *)v5 || a2 != *(_DWORD *)(v5 + 8)) && !(unsigned int)SbpUpdateCache(v5, a3, v9 + 24, a2) )
      return 0LL;
  }
  else
  {
    SbpUpdateCacheWithCurrentImpl(v5, a3);
  }
  if ( (unsigned int)v7 < *(_DWORD *)(v5 + 12) )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 8 * v7 + 8);
    v38 = v7;
    memset(UserData, 0, sizeof(UserData));
    v15 = -1LL;
    v33 = 0;
    v31 = 0;
    if ( *(_DWORD *)(v14 + 44) )
    {
      RegHandle = 0LL;
      v16 = (char *)NtCurrentPeb()->pShimData;
      if ( v16 )
      {
        v17 = v16 + 2016;
        if ( v17 )
        {
          if ( *((_DWORD *)v17 + 12) && *((_DWORD *)v17 + 3) )
          {
            v18 = *((_QWORD *)v17 + 2);
            if ( v18 )
            {
              v37 = *((_QWORD *)v17 + 2);
              goto LABEL_26;
            }
            if ( !EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &RegHandle) )
            {
              v18 = _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 2, RegHandle, 0LL);
              if ( v18 )
              {
                EtwNotificationUnregister(RegHandle, 0LL);
                v37 = v18;
              }
              else
              {
                v37 = RegHandle;
                SbpTraceContextUpdate(RegHandle, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
                v18 = v37;
              }
LABEL_26:
              if ( v18 )
              {
                v19 = *(_QWORD *)v14;
                UserData[0].Ptr = v14 + 52;
                v20 = -1LL;
                *(_QWORD *)&UserData[0].Size = 16LL;
                do
                  ++v20;
                while ( *(_WORD *)(v19 + 2 * v20) );
                UserData[2].Ptr = v19;
                v21 = *(_QWORD *)(v14 + 8);
                UserData[1].Ptr = (unsigned __int64)&v33;
                v33 = 2 * (v20 + 1);
                *(_QWORD *)&UserData[2].Size = v33;
                v22 = -1LL;
                *(_QWORD *)&UserData[1].Size = 2LL;
                do
                  ++v22;
                while ( *(_WORD *)(v21 + 2 * v22) );
                UserData[4].Ptr = v21;
                *(_QWORD *)&UserData[3].Size = 2LL;
                v31 = 2 * (v22 + 1);
                UserData[3].Ptr = (unsigned __int64)&v31;
                *(_QWORD *)&UserData[4].Size = v31;
                EtwEventWrite(v18, &AeSbCallEvent, 5u, UserData);
              }
            }
          }
        }
      }
    }
    memset(v41, 0, sizeof(v41));
    v23 = *(_QWORD *)(v5 + 8 * v38 + 16);
    v32 = 0;
    v34 = 0;
    if ( *(_DWORD *)(v23 + 40) )
    {
      v35 = 0LL;
      v24 = (char *)NtCurrentPeb()->pShimData;
      if ( v24 )
      {
        v25 = v24 + 2016;
        if ( v25 )
        {
          if ( *((_DWORD *)v25 + 12) && *((_DWORD *)v25 + 3) )
          {
            v26 = *((_QWORD *)v25 + 2);
            if ( v26 )
              goto LABEL_43;
            if ( !EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &v35) )
            {
              v26 = _InterlockedCompareExchange64((volatile signed __int64 *)v25 + 2, v35, 0LL);
              if ( v26 )
              {
                EtwNotificationUnregister(v35, 0LL);
              }
              else
              {
                v39 = v35;
                SbpTraceContextUpdate(v35, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
                v26 = v39;
              }
              if ( v26 )
              {
LABEL_43:
                v27 = *(_QWORD *)v23;
                v41[0].Ptr = v23 + 112;
                v28 = -1LL;
                *(_QWORD *)&v41[0].Size = 16LL;
                do
                  ++v28;
                while ( *(_WORD *)(v27 + 2 * v28) );
                *(_QWORD *)&v41[1].Size = 2LL;
                v41[2].Ptr = v27;
                v32 = 2 * (v28 + 1);
                *(_QWORD *)&v41[2].Size = v32;
                v29 = *(_QWORD *)(v23 + 24);
                v41[1].Ptr = (unsigned __int64)&v32;
                do
                  ++v15;
                while ( *(_WORD *)(v29 + 2 * v15) );
                v41[4].Ptr = v29;
                v30 = 2 * (v15 + 1);
                *(_QWORD *)&v41[3].Size = 2LL;
                v41[3].Ptr = (unsigned __int64)&v34;
                *(_QWORD *)&v41[4].Size = v30;
                v34 = v30;
                EtwEventWrite(v26, &AeSbImplEvent, 5u, v41);
              }
            }
          }
        }
      }
    }
    return *(_QWORD *)(v23 + 8);
  }
  return v6;
}
