/*
 * XREFs of SbSelectProcedure @ 0x180041D20
 * Callers:
 *     SwitchedRtlGetVersion @ 0x180042774 (SwitchedRtlGetVersion.c)
 *     RtlInitializeHeapManager @ 0x1800D8010 (RtlInitializeHeapManager.c)
 *     SbExecuteProcedure @ 0x1800F62A0 (SbExecuteProcedure.c)
 * Callees:
 *     EtwNotificationUnregister @ 0x18000E370 (EtwNotificationUnregister.c)
 *     EtwEventWrite @ 0x18000F6B0 (EtwEventWrite.c)
 *     EtwEventRegister @ 0x180039340 (EtwEventRegister.c)
 *     SbpUpdateCacheWithCurrentImpl @ 0x180041F50 (SbpUpdateCacheWithCurrentImpl.c)
 *     SbpUpdateCache @ 0x180043340 (SbpUpdateCache.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 *     SbpTraceContextUpdate @ 0x1800F61C0 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbSelectProcedure(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v7; // rsi
  _DWORD *pShimData; // rcx
  char *v9; // r8
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r13
  char *v16; // rcx
  char *v17; // r15
  __int64 v18; // rdi
  _QWORD *v19; // rcx
  volatile signed __int64 *v20; // rsi
  REGHANDLE v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  REGHANDLE v27; // r15
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int16 v31; // r13
  unsigned __int16 v32; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v33; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v34; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v35; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONGLONG v36; // [rsp+40h] [rbp-C0h] BYREF
  ULONGLONG RegHandle; // [rsp+48h] [rbp-B8h] BYREF
  REGHANDLE v38; // [rsp+50h] [rbp-B0h]
  ULONGLONG v39; // [rsp+58h] [rbp-A8h]
  _EVENT_DATA_DESCRIPTOR UserData[8]; // [rsp+60h] [rbp-A0h] BYREF
  _EVENT_DATA_DESCRIPTOR v41[8]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = 0LL;
  v5 = *(_QWORD *)(a3 + 8);
  v7 = a4;
  pShimData = NtCurrentPeb()->pShimData;
  if ( !pShimData || (v9 = (char *)(pShimData + 504), pShimData == (_DWORD *)-2016LL) || !pShimData[516] )
  {
    SbpUpdateCacheWithCurrentImpl(v5, a3);
    goto LABEL_10;
  }
  v10 = (char *)NtCurrentPeb()->pShimData;
  if ( v10 && (v11 = v10 + 2016) != 0LL && *((_DWORD *)v11 + 12) )
    v12 = *(_QWORD *)v11;
  else
    v12 = 0LL;
  if ( v12 == *(_QWORD *)v5 && a2 == *(_DWORD *)(v5 + 8) || (unsigned int)SbpUpdateCache(v5, a3, v9 + 24, a2) )
  {
LABEL_10:
    if ( (unsigned int)v7 >= *(_DWORD *)(v5 + 12) )
      return v4;
    _mm_lfence();
    v13 = *(_QWORD *)(a3 + 24);
    memset(UserData, 0, sizeof(UserData));
    v14 = *(_QWORD *)(v13 + 8 * v7 + 8);
    v15 = -1LL;
    v34 = 0;
    v32 = 0;
    if ( !*(_DWORD *)(v14 + 44)
      || (v36 = 0LL, (v16 = (char *)NtCurrentPeb()->pShimData) == 0LL)
      || (v17 = v16 + 2016, v16 == (char *)-2016LL)
      || !*((_DWORD *)v16 + 516)
      || !*((_DWORD *)v16 + 507) )
    {
LABEL_16:
      v18 = *(_QWORD *)(v5 + 8 * v7 + 16);
      memset(v41, 0, sizeof(v41));
      v33 = 0;
      v35 = 0;
      if ( *(_DWORD *)(v18 + 40) )
      {
        RegHandle = 0LL;
        v19 = NtCurrentPeb()->pShimData;
        if ( v19 )
        {
          v20 = v19 + 252;
          if ( v19 != (_QWORD *)-2016LL && *((_DWORD *)v19 + 516) && *((_DWORD *)v19 + 507) )
          {
            v27 = v19[254];
            if ( v27 )
              goto LABEL_48;
            if ( !EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &RegHandle) )
            {
              v27 = _InterlockedCompareExchange64(v20 + 2, RegHandle, 0LL);
              if ( v27 )
              {
                EtwNotificationUnregister(RegHandle, 0LL);
              }
              else
              {
                v39 = RegHandle;
                SbpTraceContextUpdate(RegHandle, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
                v27 = v39;
              }
              if ( v27 )
              {
LABEL_48:
                v28 = *(_QWORD *)v18;
                v41[0].Ptr = v18 + 112;
                v29 = -1LL;
                *(_QWORD *)&v41[0].Size = 16LL;
                do
                  ++v29;
                while ( *(_WORD *)(v28 + 2 * v29) );
                *(_QWORD *)&v41[1].Size = 2LL;
                v41[2].Ptr = v28;
                v33 = 2 * (v29 + 1);
                *(_QWORD *)&v41[2].Size = v33;
                v30 = *(_QWORD *)(v18 + 24);
                v41[1].Ptr = (unsigned __int64)&v33;
                do
                  ++v15;
                while ( *(_WORD *)(v30 + 2 * v15) );
                v41[4].Ptr = v30;
                v31 = 2 * (v15 + 1);
                *(_QWORD *)&v41[3].Size = 2LL;
                v41[3].Ptr = (unsigned __int64)&v35;
                *(_QWORD *)&v41[4].Size = v31;
                v35 = v31;
                EtwEventWrite(v27, &AeSbImplEvent, 5u, v41);
              }
            }
          }
        }
      }
      return *(_QWORD *)(v18 + 8);
    }
    v22 = *((_QWORD *)v16 + 254);
    if ( v22 )
    {
      v38 = *((_QWORD *)v17 + 2);
    }
    else
    {
      if ( EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &v36) )
        goto LABEL_16;
      v38 = _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 2, v36, 0LL);
      if ( v38 )
      {
        EtwNotificationUnregister(v36, 0LL);
      }
      else
      {
        v38 = v36;
        SbpTraceContextUpdate(v36, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
      }
      v22 = v38;
    }
    if ( v22 )
    {
      v23 = *(_QWORD *)v14;
      UserData[0].Ptr = v14 + 52;
      v24 = -1LL;
      *(_QWORD *)&UserData[0].Size = 16LL;
      do
        ++v24;
      while ( *(_WORD *)(v23 + 2 * v24) );
      UserData[2].Ptr = v23;
      v25 = *(_QWORD *)(v14 + 8);
      UserData[1].Ptr = (unsigned __int64)&v34;
      v34 = 2 * (v24 + 1);
      *(_QWORD *)&UserData[2].Size = v34;
      v26 = -1LL;
      *(_QWORD *)&UserData[1].Size = 2LL;
      do
        ++v26;
      while ( *(_WORD *)(v25 + 2 * v26) );
      UserData[4].Ptr = v25;
      *(_QWORD *)&UserData[3].Size = 2LL;
      v32 = 2 * (v26 + 1);
      UserData[3].Ptr = (unsigned __int64)&v32;
      *(_QWORD *)&UserData[4].Size = v32;
      EtwEventWrite(v22, &AeSbCallEvent, 5u, UserData);
    }
    goto LABEL_16;
  }
  return 0LL;
}
