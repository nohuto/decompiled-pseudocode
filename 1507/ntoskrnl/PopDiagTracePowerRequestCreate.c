/*
 * XREFs of PopDiagTracePowerRequestCreate @ 0x1404E5984
 * Callers:
 *     PopCreateKernelPowerRequest @ 0x1404E5880 (PopCreateKernelPowerRequest.c)
 *     PopCreateUserPowerRequest @ 0x1404EA9B8 (PopCreateUserPowerRequest.c)
 *     EtwpAddKmRegEntry @ 0x14054C94C (EtwpAddKmRegEntry.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     PoStoreRequester @ 0x1400D0B50 (PoStoreRequester.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EvaluateCurrentState @ 0x140233034 (EvaluateCurrentState.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopDiagTracePowerRequestCreate(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v4; // rdx
  int *v5; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  unsigned __int16 v8; // di
  char *v9; // rsi
  __int64 v10; // rdx
  _WORD *v11; // rax
  unsigned __int16 Length; // dx
  wchar_t *Buffer; // r8
  __int64 v14; // rax
  _WORD *v15; // r9
  int v16; // eax
  _WORD *v17; // rdx
  __int64 v18; // rax
  wchar_t *v19; // rdx
  __int64 v20; // r10
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // r9d
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  bool v28; // zf
  unsigned __int16 v29; // di
  unsigned __int16 v30; // dx
  __int64 v31; // rcx
  __int64 v32; // rax
  const EVENT_DESCRIPTOR *v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  ULONG v40; // r9d
  REGHANDLE v41; // rcx
  int v42; // [rsp+30h] [rbp-D0h] BYREF
  int v43; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v44; // [rsp+38h] [rbp-C8h] BYREF
  int v45; // [rsp+3Ch] [rbp-C4h] BYREF
  int SessionId; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v47; // [rsp+44h] [rbp-BCh] BYREF
  int v48; // [rsp+48h] [rbp-B8h] BYREF
  int v49; // [rsp+4Ch] [rbp-B4h] BYREF
  int v50; // [rsp+50h] [rbp-B0h] BYREF
  int v51; // [rsp+54h] [rbp-ACh] BYREF
  int v52; // [rsp+58h] [rbp-A8h] BYREF
  int v53; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v54; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING NumberOfBytes; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  int *v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  int *v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h]
  int *p_SessionId; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  int *v63; // [rsp+C0h] [rbp-40h]
  __int64 v64; // [rsp+C8h] [rbp-38h]
  int *v65; // [rsp+D0h] [rbp-30h]
  __int64 v66; // [rsp+D8h] [rbp-28h]
  int *v67; // [rsp+E0h] [rbp-20h]
  __int64 v68; // [rsp+E8h] [rbp-18h]
  int *v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  __int64 v71; // [rsp+100h] [rbp+0h]
  __int64 v72; // [rsp+108h] [rbp+8h]
  __int64 v73; // [rsp+110h] [rbp+10h]
  __int64 v74; // [rsp+118h] [rbp+18h]
  __int64 v75; // [rsp+120h] [rbp+20h]
  __int64 v76; // [rsp+128h] [rbp+28h]
  __int16 *v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+138h] [rbp+38h]
  __int16 *v79; // [rsp+140h] [rbp+40h]
  __int64 v80; // [rsp+148h] [rbp+48h]
  char *v81; // [rsp+150h] [rbp+50h]
  int v82; // [rsp+158h] [rbp+58h]
  int v83; // [rsp+15Ch] [rbp+5Ch]
  wchar_t pszDest[24]; // [rsp+1D0h] [rbp+D0h] BYREF

  v54 = a2;
  if ( PopDiagHandleRegistered )
  {
    v4 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
    if ( a1 )
      v4 = &POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
    if ( EtwEventEnabled(PopDiagHandle, v4) )
    {
      v5 = *(int **)(a2 + 80);
      *(_QWORD *)&NumberOfBytes.Length = 0LL;
      v49 = *v5;
      v52 = 0;
      SessionId = 0;
      v51 = 0;
      v48 = 0;
      v50 = 0;
      v42 = 0;
      v53 = 0;
      v45 = 0;
      v43 = 0;
      PoStoreRequester(*(_QWORD *)(a2 + 80), 0LL, (unsigned __int64 *)&NumberOfBytes.Length, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(SIZE_T *)&NumberOfBytes.Length, 0x50455654u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (int)PoStoreRequester(
                    *(_QWORD *)(v54 + 80),
                    (__int64)PoolWithTag,
                    (unsigned __int64 *)&NumberOfBytes.Length,
                    0) >= 0 )
        {
          if ( v49 )
          {
            v52 = v7[6];
            LOBYTE(v16) = EvaluateCurrentState((int **)&g_Feature_4274317627_57077665_FeatureDescriptorDetails);
            if ( v16 )
              SessionId = *(_DWORD *)(v54 + 16);
            else
              SessionId = MmGetSessionIdEx(*(struct _KPROCESS **)(*(_QWORD *)(v54 + 80) + 8LL));
            v8 = 0;
            v9 = 0LL;
            if ( (_DWORD *)((char *)v7 + *((_QWORD *)v7 + 2)) )
            {
              v17 = (_WORD *)((char *)v7 + *((_QWORD *)v7 + 2));
              v18 = 0x7FFFLL;
              do
              {
                if ( !*v17 )
                  break;
                ++v17;
                --v18;
              }
              while ( v18 );
              if ( v18 )
              {
                v9 = (char *)v7 + *((_QWORD *)v7 + 2);
                v8 = 2 * (0x7FFF - v18);
              }
            }
            if ( v49 == 2 )
            {
              RtlStringCbPrintfW(pszDest, 0x2CuLL, L"%d", (unsigned int)v7[7]);
              v19 = pszDest;
            }
            else
            {
              v19 = 0LL;
            }
            RtlInitUnicodeString(&NumberOfBytes, v19);
            Length = NumberOfBytes.Length;
            Buffer = NumberOfBytes.Buffer;
          }
          else
          {
            v8 = 0;
            v9 = 0LL;
            if ( (_DWORD *)((char *)v7 + *((_QWORD *)v7 + 2)) )
            {
              v10 = 0x7FFFLL;
              v11 = (_WORD *)((char *)v7 + *((_QWORD *)v7 + 2));
              do
              {
                if ( !*v11 )
                  break;
                ++v11;
                --v10;
              }
              while ( v10 );
              if ( v10 )
              {
                v9 = (char *)v7 + *((_QWORD *)v7 + 2);
                v8 = 2 * (0x7FFF - v10);
              }
            }
            Length = 0;
            Buffer = 0LL;
            if ( (_DWORD *)((char *)v7 + *((_QWORD *)v7 + 3)) )
            {
              v14 = 0x7FFFLL;
              v15 = (_WORD *)((char *)v7 + *((_QWORD *)v7 + 3));
              do
              {
                if ( !*v15 )
                  break;
                ++v15;
                --v14;
              }
              while ( v14 );
              if ( v14 )
              {
                Buffer = (wchar_t *)((char *)v7 + *((_QWORD *)v7 + 3));
                Length = 2 * (0x7FFF - v14);
              }
            }
          }
          v20 = v54;
          v21 = v51;
          v22 = v48;
          v23 = 13;
          if ( !*(_QWORD *)(v54 + 80) )
            v21 = 1;
          v51 = v21;
          if ( (*(_BYTE *)(v54 + 20) & 2) != 0 )
            v22 = 1;
          v48 = v22;
          v24 = v50;
          v25 = v42;
          if ( (*(_BYTE *)(v54 + 20) & 1) != 0 )
            v24 = 1;
          v50 = v24;
          if ( (*(_BYTE *)(v54 + 20) & 4) != 0 )
            v25 = 1;
          v42 = v25;
          v26 = v43;
          v27 = v45;
          if ( (*(_BYTE *)(v54 + 20) & 8) != 0 )
            v26 = 1;
          v43 = v26;
          v28 = (*(_BYTE *)(v54 + 20) & 0x10) == 0;
          *(_QWORD *)&UserData.Size = 8LL;
          v58 = 4LL;
          UserData.Ptr = (ULONGLONG)&v54;
          if ( !v28 )
            v27 = 1;
          v29 = v8 >> 1;
          v57 = &v49;
          v59 = &v52;
          p_SessionId = &SessionId;
          v63 = &v51;
          v65 = &v48;
          v67 = &v50;
          v69 = &v42;
          v71 = v54 + 36;
          v73 = v54 + 32;
          v75 = v54 + 40;
          v30 = Length >> 1;
          v77 = (__int16 *)&v47;
          v79 = (__int16 *)&v44;
          v45 = v27;
          v47 = v29;
          v44 = v30;
          v60 = 4LL;
          v62 = 4LL;
          v64 = 4LL;
          v66 = 4LL;
          v68 = 4LL;
          v70 = 4LL;
          v72 = 4LL;
          v74 = 4LL;
          v76 = 4LL;
          v78 = 2LL;
          v80 = 2LL;
          if ( v29 )
          {
            v23 = 14;
            v81 = v9;
            v82 = 2 * v29;
            v83 = 0;
          }
          if ( v30 )
          {
            v31 = 2LL * v23++;
            *(&UserData.Ptr + v31) = (ULONGLONG)Buffer;
            *(&UserData.Size + 2 * v31) = 2 * v30;
            *(&UserData.Reserved + 2 * v31) = 0;
          }
          v32 = 2LL * v23;
          v33 = &POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
          *(&UserData.Ptr + v32) = (ULONGLONG)&v43;
          *((_QWORD *)&UserData.Size + v32) = 4LL;
          v34 = v23 + 1;
          v35 = v23 + 2;
          v34 *= 2LL;
          *(&UserData.Ptr + v34) = (ULONGLONG)&v45;
          *((_QWORD *)&UserData.Size + v34) = 4LL;
          v36 = 2LL * v35;
          *(&UserData.Ptr + v36) = (ULONGLONG)&v53;
          *((_QWORD *)&UserData.Size + v36) = 4LL;
          v37 = v35 + 1;
          v35 += 2;
          v37 *= 2LL;
          *(&UserData.Ptr + v37) = v20 + 44;
          *((_QWORD *)&UserData.Size + v37) = 4LL;
          v38 = 2LL * v35;
          *(&UserData.Ptr + v38) = v20 + 48;
          *((_QWORD *)&UserData.Size + v38) = 4LL;
          v39 = v35 + 1;
          v40 = v35 + 2;
          v39 *= 2LL;
          *(&UserData.Ptr + v39) = (ULONGLONG)&v53;
          v41 = PopDiagHandle;
          *((_QWORD *)&UserData.Size + v39) = 4LL;
          if ( !a1 )
            v33 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
          EtwWrite(v41, v33, 0LL, v40, &UserData);
        }
        ExFreePoolWithTag(v7, 0x50455654u);
      }
    }
  }
}
