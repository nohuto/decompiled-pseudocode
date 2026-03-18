/*
 * XREFs of PopDiagTracePerfTrackData @ 0x140566E28
 * Callers:
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PopQpcTimeInMs @ 0x1403EF040 (PopQpcTimeInMs.c)
 *     PopComputeDerivedHiberStats @ 0x14056736C (PopComputeDerivedHiberStats.c)
 */

char __fastcall PopDiagTracePerfTrackData(char a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  unsigned __int64 v10; // rax
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rcx
  __int64 v12; // r8
  int *v13; // rdx
  const EVENT_DESCRIPTOR *v14; // rdx
  unsigned int v15; // esi
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  unsigned __int64 v20; // rax
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *v21; // rcx
  __int64 v22; // r8
  int *v23; // rdx
  int v25; // [rsp+38h] [rbp-69h] BYREF
  int v26; // [rsp+3Ch] [rbp-65h] BYREF
  int v27; // [rsp+40h] [rbp-61h] BYREF
  int v28; // [rsp+44h] [rbp-5Dh] BYREF
  int v29; // [rsp+48h] [rbp-59h] BYREF
  int v30; // [rsp+4Ch] [rbp-55h] BYREF
  int v31; // [rsp+50h] [rbp-51h] BYREF
  int v32; // [rsp+54h] [rbp-4Dh] BYREF
  _BYTE v33[4]; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v34; // [rsp+5Ch] [rbp-45h]
  unsigned int v35; // [rsp+64h] [rbp-3Dh]
  __int64 v36; // [rsp+68h] [rbp-39h] BYREF
  int v37; // [rsp+70h] [rbp-31h] BYREF
  __int16 v38; // [rsp+74h] [rbp-2Dh]
  __int16 v39; // [rsp+76h] [rbp-2Bh]
  __int16 v40; // [rsp+78h] [rbp-29h]
  __int16 v41; // [rsp+7Ah] [rbp-27h]
  __int16 v42; // [rsp+7Ch] [rbp-25h]
  __int16 v43; // [rsp+7Eh] [rbp-23h]
  int v44; // [rsp+80h] [rbp-21h]
  __int16 v45; // [rsp+84h] [rbp-1Dh]
  __int16 v46; // [rsp+86h] [rbp-1Bh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-19h] BYREF
  int *v48; // [rsp+98h] [rbp-9h]
  __int64 v49; // [rsp+A0h] [rbp-1h]
  int *v50; // [rsp+A8h] [rbp+7h]
  __int64 v51; // [rsp+B0h] [rbp+Fh]
  int *v52; // [rsp+B8h] [rbp+17h]
  __int64 v53; // [rsp+C0h] [rbp+1Fh]
  int *v54; // [rsp+C8h] [rbp+27h]
  __int64 v55; // [rsp+D0h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TRANSITIONTIMES);
    if ( (_BYTE)v1 )
    {
      v3 = 0LL;
      if ( (_DWORD)KeNumberProcessors_0 )
        v3 = KiProcessorBlock[0];
      v4 = 1000LL * *(unsigned int *)(v3 + 1524);
      v32 = PopQpcTimeInMs(&qword_14032EBD0, &qword_14032EBD8);
      v30 = PopQpcTimeInMs(&qword_14032EBC0, &qword_14032EBC8);
      if ( qword_14032EBB8 )
      {
        v36 = 0LL;
        v27 = PopQpcTimeInMs(&v36, &qword_14032EBB8);
        v25 = v27 + PopQpcTimeInMs(&qword_14032EB98, &qword_14032EBA0);
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&dword_14032ED58;
        v48 = &v25;
        v50 = &v27;
        v52 = &v30;
        v54 = &v32;
        v49 = 4LL;
        v51 = 4LL;
        v53 = 4LL;
        v55 = 4LL;
        LOBYTE(v1) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_STANDBY, 0LL, 5u, &UserData);
      }
      else
      {
        LOBYTE(v1) = dword_14032EDA0;
        if ( dword_14032EDA0 )
        {
          v5 = qword_14032EC20;
          v28 = (4 * dword_14032EDA0) & 0x3FFFFF;
          v31 = qword_14032EC20;
          v29 = qword_14032EBF8 / v4;
          LOBYTE(v1) = qword_14032EDB0;
          v25 = qword_14032EDB0;
          if ( (a1 & 8) != 0 )
          {
            if ( !PopShutdownButtonPressTime )
              return (char)v1;
            v26 = PopQpcTimeInMs(&PopShutdownButtonPressTime, &qword_14032EB88) + v5;
            UserData.Ptr = (ULONGLONG)&v28;
            *(_QWORD *)&UserData.Size = 4LL;
            v48 = &v26;
            v49 = 4LL;
            v50 = &v29;
            v51 = 4LL;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HYBRID_SHUTDOWN, 0LL, 3u, &UserData);
            PopComputeDerivedHiberStats(&qword_14032EBE0, v4, v33);
            v37 = v25;
            v38 = -1;
            if ( (unsigned __int64)qword_14032ED88 >> 8 <= 0xFFFF )
              v38 = (unsigned int)qword_14032ED88 >> 8;
            v39 = -1;
            if ( (unsigned __int64)qword_14032ED90 >> 8 <= 0xFFFF )
              v39 = (unsigned int)qword_14032ED90 >> 8;
            v40 = -1;
            if ( qword_14032EC38 / v4 <= 0xFFFF )
              v40 = qword_14032EC38 / v4;
            v41 = -1;
            if ( qword_14032ED18 / v4 <= 0xFFFF )
              v41 = qword_14032ED18 / v4;
            v42 = -1;
            if ( (unsigned int)dword_14032EC28 <= 0xFFFF )
              v42 = dword_14032EC28;
            v43 = -1;
            if ( (unsigned int)dword_14032ED58 <= 0xFFFF )
              v43 = dword_14032ED58;
            v6 = v34;
            v45 = -1;
            if ( v34 > 0x3FF )
              v6 = 1023;
            v7 = (v44 ^ v6) & 0x3FF ^ v44;
            v8 = v35;
            if ( v35 > 0x1FF )
              v8 = 511;
            v9 = (v7 ^ (v8 << 10)) & 0x7FC00 ^ v7;
            v10 = (qword_14032ECB0 - qword_14032ECE0) / v4;
            if ( v10 > 0x1FFF )
              LODWORD(v10) = 0x1FFF;
            v44 = v9 & 0x7FFFF | ((_DWORD)v10 << 19);
            if ( (unsigned __int64)qword_14032ED68 >> 8 <= 0xFFFF )
              v45 = (unsigned int)qword_14032ED68 >> 8;
            v46 = -1;
            if ( (unsigned __int64)qword_14032ED70 >> 8 <= 0xFFFF )
              v46 = (unsigned int)qword_14032ED70 >> 8;
            p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
            v12 = 6LL;
            v13 = &v37;
            do
            {
              *(_QWORD *)&p_Reserved[-3].Reserved = v13++;
              *(_QWORD *)&p_Reserved[-1].Reserved = 4LL;
              p_Reserved += 4;
              --v12;
            }
            while ( v12 );
            v14 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_PERFTRACK_HYBRID_RESUME;
          }
          else
          {
            UserData.Ptr = (ULONGLONG)&v28;
            v48 = &v31;
            *(_QWORD *)&UserData.Size = 4LL;
            v50 = &v29;
            v49 = 4LL;
            v51 = 4LL;
            LOBYTE(v1) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HIBERNATE, 0LL, 3u, &UserData);
            v15 = dword_14032EC28;
            if ( !dword_14032EC28 )
              return (char)v1;
            PopComputeDerivedHiberStats(&qword_14032EBE0, v4, v33);
            v37 = v25;
            v38 = (unsigned int)qword_14032ED88 >> 8;
            if ( (unsigned __int64)qword_14032ED88 >> 8 >= 0xFFFF )
              v38 = -1;
            v39 = (unsigned int)qword_14032ED90 >> 8;
            if ( (unsigned __int64)qword_14032ED90 >> 8 >= 0xFFFF )
              v39 = -1;
            v40 = qword_14032EC38 / v4;
            if ( qword_14032EC38 / v4 >= 0xFFFF )
              v40 = -1;
            v41 = qword_14032ED18 / v4;
            if ( qword_14032ED18 / v4 >= 0xFFFF )
              v41 = -1;
            v42 = v15;
            if ( v15 >= 0xFFFF )
              v42 = -1;
            v43 = dword_14032ED58;
            if ( (unsigned int)dword_14032ED58 >= 0xFFFF )
              v43 = -1;
            v16 = v34;
            if ( v34 > 0x3FF )
              v16 = 1023;
            v17 = (v44 ^ v16) & 0x3FF ^ v44;
            v18 = v35;
            if ( v35 > 0x1FF )
              v18 = 511;
            v19 = (v17 ^ (v18 << 10)) & 0x7FC00 ^ v17;
            v20 = (qword_14032ECB0 - qword_14032ECE0) / v4;
            if ( v20 > 0x1FFF )
              LODWORD(v20) = 0x1FFF;
            v44 = v19 & 0x7FFFF | ((_DWORD)v20 << 19);
            v45 = (unsigned int)qword_14032ED68 >> 8;
            if ( (unsigned __int64)qword_14032ED68 >> 8 >= 0xFFFF )
              v45 = -1;
            v46 = (unsigned int)qword_14032ED70 >> 8;
            if ( (unsigned __int64)qword_14032ED70 >> 8 >= 0xFFFF )
              v46 = -1;
            v21 = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
            v22 = 6LL;
            v23 = &v37;
            do
            {
              *(_QWORD *)&v21[-3].Reserved = v23++;
              *(_QWORD *)&v21[-1].Reserved = 4LL;
              v21 += 4;
              --v22;
            }
            while ( v22 );
            v14 = &POP_ETW_EVENT_PERFTRACK_RESUME_FROM_HIBERNATE;
          }
          LOBYTE(v1) = EtwWrite(PopDiagHandle, v14, 0LL, 6u, &UserData);
        }
      }
    }
  }
  return (char)v1;
}
