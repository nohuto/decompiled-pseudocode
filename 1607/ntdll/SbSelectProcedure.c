/*
 * XREFs of SbSelectProcedure @ 0x18002E9C0
 * Callers:
 *     SwitchedRtlGetVersion @ 0x18002B7F0 (SwitchedRtlGetVersion.c)
 *     RtlInitializeHeapManager @ 0x18005D72C (RtlInitializeHeapManager.c)
 *     SbExecuteProcedure @ 0x1800FEA20 (SbExecuteProcedure.c)
 * Callees:
 *     EtwEventRegister @ 0x18002A3C0 (EtwEventRegister.c)
 *     SbpUpdateCache @ 0x18002C538 (SbpUpdateCache.c)
 *     SbpUpdateCacheWithCurrentImpl @ 0x18002EBE0 (SbpUpdateCacheWithCurrentImpl.c)
 *     EtwNotificationUnregister @ 0x180059700 (EtwNotificationUnregister.c)
 *     EtwEventWrite @ 0x18005AF20 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
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
  __int64 *v14; // r12
  __int64 v15; // r13
  char *v16; // rsi
  char *v17; // rsi
  __int64 *v18; // rsi
  char *v19; // rdi
  char *v20; // rdi
  signed __int64 v22; // r13
  _RTL_USER_PROCESS_PARAMETERS *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  signed __int64 v28; // r15
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int16 v33; // r13
  unsigned __int16 v34; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v35; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v36; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v37; // [rsp+3Ch] [rbp-C4h] BYREF
  signed __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  signed __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  signed __int64 v40; // [rsp+50h] [rbp-B0h]
  signed __int64 v41; // [rsp+58h] [rbp-A8h]
  _QWORD v42[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v43[16]; // [rsp+E0h] [rbp-20h] BYREF

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
    v14 = *(__int64 **)(*(_QWORD *)(a3 + 24) + 8 * v7 + 8);
    memset(v42, 0, sizeof(v42));
    v15 = -1LL;
    v34 = 0;
    v35 = 0;
    if ( !*((_DWORD *)v14 + 11)
      || (v38 = 0LL, (v16 = (char *)NtCurrentPeb()->pShimData) == 0LL)
      || (v17 = v16 + 2016) == 0LL
      || !*((_DWORD *)v17 + 12)
      || !*((_DWORD *)v17 + 3) )
    {
LABEL_16:
      v18 = *(__int64 **)(v5 + 8 * v13 + 16);
      memset(v43, 0, sizeof(v43));
      v36 = 0;
      v37 = 0;
      if ( *((_DWORD *)v18 + 10) )
      {
        v39 = 0LL;
        v19 = (char *)NtCurrentPeb()->pShimData;
        if ( v19 )
        {
          v20 = v19 + 2016;
          if ( v20 )
          {
            if ( *((_DWORD *)v20 + 12) && *((_DWORD *)v20 + 3) )
            {
              v28 = *((_QWORD *)v20 + 2);
              if ( v28 )
                goto LABEL_48;
              if ( !(unsigned int)EtwEventRegister((int)&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, (__int64)&v39) )
              {
                v28 = _InterlockedCompareExchange64((volatile signed __int64 *)v20 + 2, v39, 0LL);
                if ( v28 )
                {
                  EtwNotificationUnregister(v39, 0LL);
                }
                else
                {
                  v41 = v39;
                  ProcessParameters = NtCurrentPeb()->ProcessParameters;
                  SbpTraceContextUpdate(
                    v39,
                    (_DWORD)v20 + 48,
                    0,
                    ProcessParameters->ImagePathName.Length,
                    (__int64)ProcessParameters->ImagePathName.Buffer);
                  v28 = v41;
                }
                if ( v28 )
                {
LABEL_48:
                  v30 = *v18;
                  v43[0] = v18 + 14;
                  v31 = -1LL;
                  v43[1] = 16LL;
                  do
                    ++v31;
                  while ( *(_WORD *)(v30 + 2 * v31) );
                  v43[3] = 2LL;
                  v43[4] = v30;
                  v36 = 2 * (v31 + 1);
                  v43[5] = v36;
                  v32 = v18[3];
                  v43[2] = &v36;
                  do
                    ++v15;
                  while ( *(_WORD *)(v32 + 2 * v15) );
                  v43[8] = v32;
                  v33 = 2 * (v15 + 1);
                  v43[7] = 2LL;
                  v43[6] = &v37;
                  v43[9] = v33;
                  v37 = v33;
                  EtwEventWrite(v28, &AeSbImplEvent, 5LL, v43);
                }
              }
            }
          }
        }
      }
      return v18[1];
    }
    v22 = *((_QWORD *)v17 + 2);
    if ( v22 )
    {
      v40 = *((_QWORD *)v17 + 2);
    }
    else
    {
      if ( (unsigned int)EtwEventRegister((int)&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, (__int64)&v38) )
      {
LABEL_41:
        v15 = -1LL;
        goto LABEL_16;
      }
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 2, v38, 0LL);
      if ( v22 )
      {
        EtwNotificationUnregister(v38, 0LL);
        v40 = v22;
      }
      else
      {
        v40 = v38;
        v23 = NtCurrentPeb()->ProcessParameters;
        SbpTraceContextUpdate(v38, (_DWORD)v17 + 48, 0, v23->ImagePathName.Length, (__int64)v23->ImagePathName.Buffer);
        v22 = v40;
      }
    }
    if ( v22 )
    {
      v24 = *v14;
      v42[0] = (char *)v14 + 52;
      v25 = -1LL;
      v42[1] = 16LL;
      do
        ++v25;
      while ( *(_WORD *)(v24 + 2 * v25) );
      v42[4] = v24;
      v26 = v14[1];
      v42[2] = &v34;
      v34 = 2 * (v25 + 1);
      v42[5] = v34;
      v27 = -1LL;
      v42[3] = 2LL;
      do
        ++v27;
      while ( *(_WORD *)(v26 + 2 * v27) );
      v42[8] = v26;
      v42[7] = 2LL;
      v35 = 2 * (v27 + 1);
      v42[6] = &v35;
      v42[9] = v35;
      EtwEventWrite(v22, &AeSbCallEvent, 5LL, v42);
    }
    goto LABEL_41;
  }
  return 0LL;
}
