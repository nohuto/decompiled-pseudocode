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
  __int64 *v14; // r14
  __int64 v15; // r13
  _DWORD *v16; // rcx
  char *v17; // r15
  __int64 *v18; // rdi
  _QWORD *v19; // rcx
  volatile signed __int64 *v20; // rsi
  signed __int64 v22; // rcx
  _RTL_USER_PROCESS_PARAMETERS *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
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
  unsigned __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  signed __int64 v40; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v41; // [rsp+58h] [rbp-A8h]
  _QWORD v42[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v43[16]; // [rsp+E0h] [rbp-20h] BYREF

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
    memset(v42, 0, sizeof(v42));
    v14 = *(__int64 **)(v13 + 8 * v7 + 8);
    v15 = -1LL;
    v36 = 0;
    v34 = 0;
    if ( !*((_DWORD *)v14 + 11)
      || (v38 = 0LL, (v16 = NtCurrentPeb()->pShimData) == 0LL)
      || (v17 = (char *)(v16 + 504), v16 == (_DWORD *)-2016LL)
      || !v16[516]
      || !v16[507] )
    {
LABEL_16:
      v18 = *(__int64 **)(v5 + 8 * v7 + 16);
      memset(v43, 0, sizeof(v43));
      v35 = 0;
      v37 = 0;
      if ( *((_DWORD *)v18 + 10) )
      {
        v39 = 0LL;
        v19 = NtCurrentPeb()->pShimData;
        if ( v19 )
        {
          v20 = v19 + 252;
          if ( v19 != (_QWORD *)-2016LL && *((_DWORD *)v19 + 516) && *((_DWORD *)v19 + 507) )
          {
            v28 = v19[254];
            if ( v28 )
              goto LABEL_48;
            if ( !(unsigned int)EtwEventRegister((__int64)&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &v39) )
            {
              v28 = _InterlockedCompareExchange64(v20 + 2, v39, 0LL);
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
                v35 = 2 * (v31 + 1);
                v43[5] = v35;
                v32 = v18[3];
                v43[2] = &v35;
                do
                  ++v15;
                while ( *(_WORD *)(v32 + 2 * v15) );
                v43[8] = v32;
                v33 = 2 * (v15 + 1);
                v43[7] = 2LL;
                v43[6] = &v37;
                v43[9] = v33;
                v37 = v33;
                EtwEventWrite(v28, (int)&AeSbImplEvent, 5, (__int64)v43);
              }
            }
          }
        }
      }
      return v18[1];
    }
    v22 = *((_QWORD *)v16 + 254);
    if ( v22 )
    {
      v40 = *((_QWORD *)v17 + 2);
    }
    else
    {
      if ( (unsigned int)EtwEventRegister((__int64)&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &v38) )
        goto LABEL_16;
      v40 = _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 2, v38, 0LL);
      if ( v40 )
      {
        EtwNotificationUnregister(v38, 0LL);
      }
      else
      {
        v40 = v38;
        v23 = NtCurrentPeb()->ProcessParameters;
        SbpTraceContextUpdate(v38, (_DWORD)v17 + 48, 0, v23->ImagePathName.Length, (__int64)v23->ImagePathName.Buffer);
      }
      v22 = v40;
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
      v42[2] = &v36;
      v36 = 2 * (v25 + 1);
      v42[5] = v36;
      v27 = -1LL;
      v42[3] = 2LL;
      do
        ++v27;
      while ( *(_WORD *)(v26 + 2 * v27) );
      v42[8] = v26;
      v42[7] = 2LL;
      v34 = 2 * (v27 + 1);
      v42[6] = &v34;
      v42[9] = v34;
      EtwEventWrite(v22, (int)&AeSbCallEvent, 5, (__int64)v42);
    }
    goto LABEL_16;
  }
  return 0LL;
}
