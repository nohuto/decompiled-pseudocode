/*
 * XREFs of PopDiagTracePerfTrackData @ 0x1405313D8
 * Callers:
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PopQpcTimeInMs @ 0x1403D055C (PopQpcTimeInMs.c)
 *     PopComputeDerivedHiberStats @ 0x140531900 (PopComputeDerivedHiberStats.c)
 *     PopDiagReadLastLogOffEndTime @ 0x140670A94 (PopDiagReadLastLogOffEndTime.c)
 */

char __fastcall PopDiagTracePerfTrackData(char a1)
{
  _UNKNOWN **v1; // rax
  unsigned __int64 v3; // rdi
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  unsigned __int64 v9; // rax
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rcx
  __int64 v11; // r8
  int *v12; // rdx
  const EVENT_DESCRIPTOR *v13; // rdx
  unsigned int v14; // esi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  unsigned __int64 v19; // rax
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *v20; // rcx
  __int64 v21; // r8
  int *v22; // rdx
  int v24; // [rsp+38h] [rbp-69h] BYREF
  int v25; // [rsp+3Ch] [rbp-65h] BYREF
  int v26; // [rsp+40h] [rbp-61h] BYREF
  int v27; // [rsp+44h] [rbp-5Dh] BYREF
  int v28; // [rsp+48h] [rbp-59h] BYREF
  int v29; // [rsp+4Ch] [rbp-55h] BYREF
  __int64 v30; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v31; // [rsp+5Ch] [rbp-45h]
  int v32; // [rsp+60h] [rbp-41h] BYREF
  int v33; // [rsp+64h] [rbp-3Dh] BYREF
  int v34; // [rsp+68h] [rbp-39h] BYREF
  int v35; // [rsp+70h] [rbp-31h] BYREF
  __int16 v36; // [rsp+74h] [rbp-2Dh]
  __int16 v37; // [rsp+76h] [rbp-2Bh]
  __int16 v38; // [rsp+78h] [rbp-29h]
  __int16 v39; // [rsp+7Ah] [rbp-27h]
  __int16 v40; // [rsp+7Ch] [rbp-25h]
  __int16 v41; // [rsp+7Eh] [rbp-23h]
  int v42; // [rsp+80h] [rbp-21h]
  __int16 v43; // [rsp+84h] [rbp-1Dh]
  __int16 v44; // [rsp+86h] [rbp-1Bh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-19h] BYREF
  int *v46; // [rsp+98h] [rbp-9h]
  __int64 v47; // [rsp+A0h] [rbp-1h]
  int *v48; // [rsp+A8h] [rbp+7h]
  __int64 v49; // [rsp+B0h] [rbp+Fh]
  int *v50; // [rsp+B8h] [rbp+17h]
  __int64 v51; // [rsp+C0h] [rbp+1Fh]
  int *v52; // [rsp+C8h] [rbp+27h]
  __int64 v53; // [rsp+D0h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TRANSITIONTIMES);
    if ( (_BYTE)v1 )
    {
      v3 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 1524);
      v33 = PopQpcTimeInMs(&qword_1403037E0, &qword_1403037E8);
      v32 = PopQpcTimeInMs(&qword_1403037D0, &qword_1403037D8);
      if ( qword_1403037C8 )
      {
        v30 = 0LL;
        v26 = PopQpcTimeInMs(&v30, &qword_1403037C8);
        v24 = v26 + PopQpcTimeInMs(&qword_1403037A8, &qword_1403037B0);
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&dword_140303978;
        v46 = &v24;
        v48 = &v26;
        v50 = &v32;
        v52 = &v33;
        v47 = 4LL;
        v49 = 4LL;
        v51 = 4LL;
        v53 = 4LL;
        LOBYTE(v1) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_STANDBY, 0LL, 5u, &UserData);
      }
      else
      {
        LOBYTE(v1) = dword_1403039C0;
        if ( dword_1403039C0 )
        {
          v4 = qword_140303838;
          v28 = (4 * dword_1403039C0) & 0x3FFFFF;
          v34 = qword_140303838;
          v29 = qword_140303810 / v3;
          LOBYTE(v1) = qword_1403039D0;
          v24 = qword_1403039D0;
          if ( (a1 & 8) != 0 )
          {
            if ( !PopShutdownButtonPressTime )
              return (char)v1;
            v25 = PopQpcTimeInMs(&PopShutdownButtonPressTime, &qword_140303788) + v4;
            if ( (int)PopDiagReadLastLogOffEndTime(&v30) < 0 )
              v27 = 0;
            else
              v27 = PopQpcTimeInMs(&v30, &qword_140303840);
            UserData.Ptr = (ULONGLONG)&v28;
            v46 = &v25;
            *(_QWORD *)&UserData.Size = 4LL;
            v48 = &v29;
            v47 = 4LL;
            v50 = &v27;
            v49 = 4LL;
            v51 = 4LL;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HYBRID_SHUTDOWN, 0LL, 4u, &UserData);
            PopComputeDerivedHiberStats(&qword_1403037F8, v3, &v30);
            v35 = v24;
            v36 = -1;
            if ( (unsigned __int64)qword_1403039A8 >> 8 <= 0xFFFF )
              v36 = (unsigned int)qword_1403039A8 >> 8;
            v37 = -1;
            if ( (unsigned __int64)qword_1403039B0 >> 8 <= 0xFFFF )
              v37 = (unsigned int)qword_1403039B0 >> 8;
            v38 = -1;
            if ( qword_140303858 / v3 <= 0xFFFF )
              v38 = qword_140303858 / v3;
            v39 = -1;
            if ( qword_140303938 / v3 <= 0xFFFF )
              v39 = qword_140303938 / v3;
            v40 = -1;
            if ( (unsigned int)dword_140303848 <= 0xFFFF )
              v40 = dword_140303848;
            v41 = -1;
            if ( (unsigned int)dword_140303978 <= 0xFFFF )
              v41 = dword_140303978;
            v5 = HIDWORD(v30);
            v43 = -1;
            if ( HIDWORD(v30) > 0x3FF )
              v5 = 1023;
            v6 = (v42 ^ v5) & 0x3FF ^ v42;
            v7 = v31;
            if ( v31 > 0x1FF )
              v7 = 511;
            v8 = (v6 ^ (v7 << 10)) & 0x7FC00 ^ v6;
            v9 = (qword_1403038D0 - qword_140303900) / v3;
            if ( v9 > 0x1FFF )
              LODWORD(v9) = 0x1FFF;
            v42 = v8 & 0x7FFFF | ((_DWORD)v9 << 19);
            if ( (unsigned __int64)qword_140303988 >> 8 <= 0xFFFF )
              v43 = (unsigned int)qword_140303988 >> 8;
            v44 = -1;
            if ( (unsigned __int64)qword_140303990 >> 8 <= 0xFFFF )
              v44 = (unsigned int)qword_140303990 >> 8;
            p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
            v11 = 6LL;
            v12 = &v35;
            do
            {
              *(_QWORD *)&p_Reserved[-3].Reserved = v12++;
              *(_QWORD *)&p_Reserved[-1].Reserved = 4LL;
              p_Reserved += 4;
              --v11;
            }
            while ( v11 );
            v13 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_PERFTRACK_HYBRID_RESUME;
          }
          else
          {
            UserData.Ptr = (ULONGLONG)&v28;
            v46 = &v34;
            *(_QWORD *)&UserData.Size = 4LL;
            v48 = &v29;
            v47 = 4LL;
            v49 = 4LL;
            LOBYTE(v1) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HIBERNATE, 0LL, 3u, &UserData);
            v14 = dword_140303848;
            if ( !dword_140303848 )
              return (char)v1;
            PopComputeDerivedHiberStats(&qword_1403037F8, v3, &v30);
            v35 = v24;
            v36 = (unsigned int)qword_1403039A8 >> 8;
            if ( (unsigned __int64)qword_1403039A8 >> 8 >= 0xFFFF )
              v36 = -1;
            v37 = (unsigned int)qword_1403039B0 >> 8;
            if ( (unsigned __int64)qword_1403039B0 >> 8 >= 0xFFFF )
              v37 = -1;
            v38 = qword_140303858 / v3;
            if ( qword_140303858 / v3 >= 0xFFFF )
              v38 = -1;
            v39 = qword_140303938 / v3;
            if ( qword_140303938 / v3 >= 0xFFFF )
              v39 = -1;
            v40 = v14;
            if ( v14 >= 0xFFFF )
              v40 = -1;
            v41 = dword_140303978;
            if ( (unsigned int)dword_140303978 >= 0xFFFF )
              v41 = -1;
            v15 = HIDWORD(v30);
            if ( HIDWORD(v30) > 0x3FF )
              v15 = 1023;
            v16 = (v42 ^ v15) & 0x3FF ^ v42;
            v17 = v31;
            if ( v31 > 0x1FF )
              v17 = 511;
            v18 = (v16 ^ (v17 << 10)) & 0x7FC00 ^ v16;
            v19 = (qword_1403038D0 - qword_140303900) / v3;
            if ( v19 > 0x1FFF )
              LODWORD(v19) = 0x1FFF;
            v42 = v18 & 0x7FFFF | ((_DWORD)v19 << 19);
            v43 = (unsigned int)qword_140303988 >> 8;
            if ( (unsigned __int64)qword_140303988 >> 8 >= 0xFFFF )
              v43 = -1;
            v44 = (unsigned int)qword_140303990 >> 8;
            if ( (unsigned __int64)qword_140303990 >> 8 >= 0xFFFF )
              v44 = -1;
            v20 = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
            v21 = 6LL;
            v22 = &v35;
            do
            {
              *(_QWORD *)&v20[-3].Reserved = v22++;
              *(_QWORD *)&v20[-1].Reserved = 4LL;
              v20 += 4;
              --v21;
            }
            while ( v21 );
            v13 = &POP_ETW_EVENT_PERFTRACK_RESUME_FROM_HIBERNATE;
          }
          LOBYTE(v1) = EtwWrite(PopDiagHandle, v13, 0LL, 6u, &UserData);
        }
      }
    }
  }
  return (char)v1;
}
