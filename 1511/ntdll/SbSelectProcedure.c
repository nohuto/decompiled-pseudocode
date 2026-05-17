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
  __int64 *v14; // r13
  __int64 v15; // rbx
  char *v16; // rsi
  char *v17; // rsi
  signed __int64 v18; // r15
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // r15
  char *v25; // rsi
  char *v26; // rsi
  signed __int64 v27; // r14
  _RTL_USER_PROCESS_PARAMETERS *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int16 v32; // bx
  unsigned __int16 v33; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v34; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v35; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v36; // [rsp+3Ch] [rbp-C4h] BYREF
  signed __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  signed __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  signed __int64 v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  signed __int64 v41; // [rsp+60h] [rbp-A0h]
  _QWORD v42[16]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v43[16]; // [rsp+F0h] [rbp-10h] BYREF

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
    v14 = *(__int64 **)(*(_QWORD *)(a3 + 24) + 8 * v7 + 8);
    v40 = v7;
    memset(v42, 0, sizeof(v42));
    v15 = -1LL;
    v35 = 0;
    v33 = 0;
    if ( *((_DWORD *)v14 + 11) )
    {
      v38 = 0LL;
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
              v39 = *((_QWORD *)v17 + 2);
              goto LABEL_26;
            }
            if ( !(unsigned int)EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &v38) )
            {
              v18 = _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 2, v38, 0LL);
              if ( v18 )
              {
                EtwNotificationUnregister(v38, 0LL);
                v39 = v18;
              }
              else
              {
                v39 = v38;
                ProcessParameters = NtCurrentPeb()->ProcessParameters;
                SbpTraceContextUpdate(
                  v38,
                  (_DWORD)v17 + 48,
                  0,
                  ProcessParameters->ImagePathName.Length,
                  (__int64)ProcessParameters->ImagePathName.Buffer);
                v18 = v39;
              }
LABEL_26:
              if ( v18 )
              {
                v20 = *v14;
                v42[0] = (char *)v14 + 52;
                v21 = -1LL;
                v42[1] = 16LL;
                do
                  ++v21;
                while ( *(_WORD *)(v20 + 2 * v21) );
                v42[4] = v20;
                v22 = v14[1];
                v42[2] = &v35;
                v35 = 2 * (v21 + 1);
                v42[5] = v35;
                v23 = -1LL;
                v42[3] = 2LL;
                do
                  ++v23;
                while ( *(_WORD *)(v22 + 2 * v23) );
                v42[8] = v22;
                v42[7] = 2LL;
                v33 = 2 * (v23 + 1);
                v42[6] = &v33;
                v42[9] = v33;
                EtwEventWrite(v18, &AeSbCallEvent, 5LL, v42);
              }
            }
          }
        }
      }
    }
    memset(v43, 0, sizeof(v43));
    v24 = *(__int64 **)(v5 + 8 * v40 + 16);
    v34 = 0;
    v36 = 0;
    if ( *((_DWORD *)v24 + 10) )
    {
      v37 = 0LL;
      v25 = (char *)NtCurrentPeb()->pShimData;
      if ( v25 )
      {
        v26 = v25 + 2016;
        if ( v26 )
        {
          if ( *((_DWORD *)v26 + 12) && *((_DWORD *)v26 + 3) )
          {
            v27 = *((_QWORD *)v26 + 2);
            if ( v27 )
              goto LABEL_43;
            if ( !(unsigned int)EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &v37) )
            {
              v27 = _InterlockedCompareExchange64((volatile signed __int64 *)v26 + 2, v37, 0LL);
              if ( v27 )
              {
                EtwNotificationUnregister(v37, 0LL);
              }
              else
              {
                v41 = v37;
                v28 = NtCurrentPeb()->ProcessParameters;
                SbpTraceContextUpdate(
                  v37,
                  (_DWORD)v26 + 48,
                  0,
                  v28->ImagePathName.Length,
                  (__int64)v28->ImagePathName.Buffer);
                v27 = v41;
              }
              if ( v27 )
              {
LABEL_43:
                v29 = *v24;
                v43[0] = v24 + 14;
                v30 = -1LL;
                v43[1] = 16LL;
                do
                  ++v30;
                while ( *(_WORD *)(v29 + 2 * v30) );
                v43[3] = 2LL;
                v43[4] = v29;
                v34 = 2 * (v30 + 1);
                v43[5] = v34;
                v31 = v24[3];
                v43[2] = &v34;
                do
                  ++v15;
                while ( *(_WORD *)(v31 + 2 * v15) );
                v43[8] = v31;
                v32 = 2 * (v15 + 1);
                v43[7] = 2LL;
                v43[6] = &v36;
                v43[9] = v32;
                v36 = v32;
                EtwEventWrite(v27, &AeSbImplEvent, 5LL, v43);
              }
            }
          }
        }
      }
    }
    return v24[1];
  }
  return v6;
}
