/*
 * XREFs of SbSelectProcedure @ 0x18002E9B0
 * Callers:
 *     SwitchedRtlGetVersion @ 0x18002B7E0 (SwitchedRtlGetVersion.c)
 *     RtlInitializeHeapManager @ 0x18005D71C (RtlInitializeHeapManager.c)
 *     SbExecuteProcedure @ 0x1800FEA20 (SbExecuteProcedure.c)
 * Callees:
 *     EtwEventRegister @ 0x18002A3B0 (EtwEventRegister.c)
 *     SbpUpdateCache @ 0x18002C528 (SbpUpdateCache.c)
 *     SbpUpdateCacheWithCurrentImpl @ 0x18002EBD0 (SbpUpdateCacheWithCurrentImpl.c)
 *     EtwNotificationUnregister @ 0x1800596F0 (EtwNotificationUnregister.c)
 *     EtwEventWrite @ 0x18005AF10 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     SbpTraceContextUpdate @ 0x1800FE93C (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbSelectProcedure(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  char *pShimData; // r8
  char *v9; // r8
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // r13
  char *v16; // rsi
  char *v17; // rsi
  __int64 v18; // rsi
  char *v19; // rdi
  char *v20; // rdi
  REGHANDLE v22; // r13
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
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
  ULONGLONG v38; // [rsp+50h] [rbp-B0h]
  ULONGLONG v39; // [rsp+58h] [rbp-A8h]
  _EVENT_DATA_DESCRIPTOR UserData[8]; // [rsp+60h] [rbp-A0h] BYREF
  _EVENT_DATA_DESCRIPTOR v41[8]; // [rsp+E0h] [rbp-20h] BYREF

  v5 = *(_QWORD *)(a3 + 8);
  v6 = 0LL;
  v7 = a4;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( !pShimData || (v9 = pShimData + 2016) == 0LL || !*((_DWORD *)v9 + 12) )
  {
    SbpUpdateCacheWithCurrentImpl(v5, a3);
    goto LABEL_10;
  }
  v10 = (char *)NtCurrentPeb()->pShimData;
  if ( v10 && (v11 = v10 + 2016) != 0LL && *((_DWORD *)v11 + 12) )
    v12 = *(_QWORD *)v11;
  else
    v12 = 0LL;
  if ( v12 == *(_QWORD *)v5 && a2 == *(_DWORD *)(v5 + 8) || (unsigned int)SbpUpdateCache(v5, a3, (__int64)(v9 + 24), a2) )
  {
LABEL_10:
    if ( (unsigned int)v7 >= *(_DWORD *)(v5 + 12) )
      return v6;
    _mm_lfence();
    v13 = v7;
    v14 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 8 * v7 + 8);
    memset(UserData, 0, sizeof(UserData));
    v15 = -1LL;
    v32 = 0;
    v33 = 0;
    if ( !*(_DWORD *)(v14 + 44)
      || (v36 = 0LL, (v16 = (char *)NtCurrentPeb()->pShimData) == 0LL)
      || (v17 = v16 + 2016) == 0LL
      || !*((_DWORD *)v17 + 12)
      || !*((_DWORD *)v17 + 3) )
    {
LABEL_16:
      v18 = *(_QWORD *)(v5 + 8 * v13 + 16);
      memset(v41, 0, sizeof(v41));
      v34 = 0;
      v35 = 0;
      if ( *(_DWORD *)(v18 + 40) )
      {
        RegHandle = 0LL;
        v19 = (char *)NtCurrentPeb()->pShimData;
        if ( v19 )
        {
          v20 = v19 + 2016;
          if ( v20 )
          {
            if ( *((_DWORD *)v20 + 12) && *((_DWORD *)v20 + 3) )
            {
              v27 = *((_QWORD *)v20 + 2);
              if ( v27 )
                goto LABEL_48;
              if ( !EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &RegHandle) )
              {
                v27 = _InterlockedCompareExchange64((volatile signed __int64 *)v20 + 2, RegHandle, 0LL);
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
                  v34 = 2 * (v29 + 1);
                  v41[2].Size = v34;
                  v30 = *(_QWORD *)(v18 + 24);
                  v41[1].Ptr = (unsigned __int64)&v34;
                  v41[2].Reserved = 0;
                  do
                    ++v15;
                  while ( *(_WORD *)(v30 + 2 * v15) );
                  v41[4].Ptr = v30;
                  v31 = 2 * (v15 + 1);
                  *(_QWORD *)&v41[3].Size = 2LL;
                  v41[3].Ptr = (unsigned __int64)&v35;
                  v41[4].Size = v31;
                  v35 = v31;
                  v41[4].Reserved = 0;
                  EtwEventWrite(v27, &AeSbImplEvent, 5u, v41);
                }
              }
            }
          }
        }
      }
      return *(_QWORD *)(v18 + 8);
    }
    v22 = *((_QWORD *)v17 + 2);
    if ( v22 )
    {
      v38 = *((_QWORD *)v17 + 2);
    }
    else
    {
      if ( EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &v36) )
      {
LABEL_41:
        v15 = -1LL;
        goto LABEL_16;
      }
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 2, v36, 0LL);
      if ( v22 )
      {
        EtwNotificationUnregister(v36, 0LL);
        v38 = v22;
      }
      else
      {
        v38 = v36;
        SbpTraceContextUpdate(v36, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
        v22 = v38;
      }
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
      UserData[1].Ptr = (unsigned __int64)&v32;
      v32 = 2 * (v24 + 1);
      UserData[2].Size = v32;
      v26 = -1LL;
      *(_QWORD *)&UserData[1].Size = 2LL;
      UserData[2].Reserved = 0;
      do
        ++v26;
      while ( *(_WORD *)(v25 + 2 * v26) );
      UserData[4].Ptr = v25;
      *(_QWORD *)&UserData[3].Size = 2LL;
      v33 = 2 * (v26 + 1);
      UserData[3].Ptr = (unsigned __int64)&v33;
      UserData[4].Size = v33;
      UserData[4].Reserved = 0;
      EtwEventWrite(v22, &AeSbCallEvent, 5u, UserData);
    }
    goto LABEL_41;
  }
  return 0LL;
}
