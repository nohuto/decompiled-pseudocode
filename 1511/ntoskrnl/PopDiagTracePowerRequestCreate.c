/*
 * XREFs of PopDiagTracePowerRequestCreate @ 0x140454D34
 * Callers:
 *     PopCreateUserPowerRequest @ 0x140452BD8 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x140454CCC (PopCreateKernelPowerRequest.c)
 *     EtwpDisallowedGuidAddition @ 0x1404CFA30 (EtwpDisallowedGuidAddition.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     PoStoreRequester @ 0x140098274 (PoStoreRequester.c)
 *     RtlStringCbPrintfW @ 0x14009C26C (RtlStringCbPrintfW.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
  __int64 v16; // r10
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // r9d
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  bool v24; // zf
  unsigned __int16 v25; // di
  unsigned __int16 v26; // dx
  __int64 v27; // rax
  const EVENT_DESCRIPTOR *v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  ULONG v35; // r9d
  REGHANDLE v36; // rcx
  _WORD *v37; // rdx
  __int64 v38; // rax
  wchar_t *v39; // rdx
  __int64 v40; // rcx
  int v41; // [rsp+30h] [rbp-D0h] BYREF
  int v42; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v43; // [rsp+38h] [rbp-C8h] BYREF
  int v44; // [rsp+3Ch] [rbp-C4h] BYREF
  int v45; // [rsp+40h] [rbp-C0h] BYREF
  int v46; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int16 v47; // [rsp+48h] [rbp-B8h] BYREF
  int v48; // [rsp+4Ch] [rbp-B4h] BYREF
  int v49; // [rsp+50h] [rbp-B0h] BYREF
  int v50; // [rsp+54h] [rbp-ACh] BYREF
  int SessionId; // [rsp+58h] [rbp-A8h] BYREF
  int v52; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING NumberOfBytes; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  int *v56; // [rsp+90h] [rbp-70h]
  __int64 v57; // [rsp+98h] [rbp-68h]
  int *v58; // [rsp+A0h] [rbp-60h]
  __int64 v59; // [rsp+A8h] [rbp-58h]
  int *p_SessionId; // [rsp+B0h] [rbp-50h]
  __int64 v61; // [rsp+B8h] [rbp-48h]
  int *v62; // [rsp+C0h] [rbp-40h]
  __int64 v63; // [rsp+C8h] [rbp-38h]
  int *v64; // [rsp+D0h] [rbp-30h]
  __int64 v65; // [rsp+D8h] [rbp-28h]
  int *v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  int *v68; // [rsp+F0h] [rbp-10h]
  __int64 v69; // [rsp+F8h] [rbp-8h]
  __int64 v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+108h] [rbp+8h]
  __int64 v72; // [rsp+110h] [rbp+10h]
  __int64 v73; // [rsp+118h] [rbp+18h]
  __int64 v74; // [rsp+120h] [rbp+20h]
  __int64 v75; // [rsp+128h] [rbp+28h]
  __int16 *v76; // [rsp+130h] [rbp+30h]
  __int64 v77; // [rsp+138h] [rbp+38h]
  __int16 *v78; // [rsp+140h] [rbp+40h]
  __int64 v79; // [rsp+148h] [rbp+48h]
  char *v80; // [rsp+150h] [rbp+50h]
  int v81; // [rsp+158h] [rbp+58h]
  int v82; // [rsp+15Ch] [rbp+5Ch]
  wchar_t pszDest[24]; // [rsp+1D0h] [rbp+D0h] BYREF

  v53 = a2;
  if ( PopDiagHandleRegistered )
  {
    v4 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
    if ( a1 )
      v4 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
    if ( EtwEventEnabled(PopDiagHandle, v4) )
    {
      v5 = *(int **)(a2 + 80);
      *(_QWORD *)&NumberOfBytes.Length = 0LL;
      v49 = *v5;
      v50 = 0;
      SessionId = 0;
      v48 = 0;
      v46 = 0;
      v44 = 0;
      v45 = 0;
      v52 = 0;
      v42 = 0;
      v41 = 0;
      PoStoreRequester(*(_QWORD *)(a2 + 80), 0LL, (unsigned __int64 *)&NumberOfBytes.Length, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(SIZE_T *)&NumberOfBytes.Length, 0x50455654u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (int)PoStoreRequester(
                    *(_QWORD *)(v53 + 80),
                    (__int64)PoolWithTag,
                    (unsigned __int64 *)&NumberOfBytes.Length,
                    0) >= 0 )
        {
          if ( v49 )
          {
            v50 = v7[6];
            SessionId = MmGetSessionIdEx(*(struct _KPROCESS **)(*(_QWORD *)(v53 + 80) + 8LL));
            v8 = 0;
            v9 = 0LL;
            if ( (_DWORD *)((char *)v7 + *((_QWORD *)v7 + 2)) )
            {
              v37 = (_WORD *)((char *)v7 + *((_QWORD *)v7 + 2));
              v38 = 0x7FFFLL;
              do
              {
                if ( !*v37 )
                  break;
                ++v37;
                --v38;
              }
              while ( v38 );
              if ( v38 )
              {
                v9 = (char *)v7 + *((_QWORD *)v7 + 2);
                v8 = 2 * (0x7FFF - v38);
              }
            }
            if ( v49 == 2 )
            {
              RtlStringCbPrintfW(pszDest, 0x2CuLL, L"%d", (unsigned int)v7[7]);
              v39 = pszDest;
            }
            else
            {
              v39 = 0LL;
            }
            RtlInitUnicodeString(&NumberOfBytes, v39);
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
          v16 = v53;
          v17 = v48;
          v18 = v46;
          v19 = 13;
          if ( !*(_QWORD *)(v53 + 80) )
            v17 = 1;
          v48 = v17;
          if ( (*(_BYTE *)(v53 + 20) & 2) != 0 )
            v18 = 1;
          v46 = v18;
          v20 = v44;
          v21 = v45;
          if ( (*(_BYTE *)(v53 + 20) & 1) != 0 )
            v20 = 1;
          v44 = v20;
          if ( (*(_BYTE *)(v53 + 20) & 4) != 0 )
            v21 = 1;
          v45 = v21;
          v22 = v41;
          v23 = v42;
          if ( (*(_BYTE *)(v53 + 20) & 8) != 0 )
            v22 = 1;
          v41 = v22;
          v24 = (*(_BYTE *)(v53 + 20) & 0x10) == 0;
          *(_QWORD *)&UserData.Size = 8LL;
          v57 = 4LL;
          UserData.Ptr = (ULONGLONG)&v53;
          if ( !v24 )
            v23 = 1;
          v25 = v8 >> 1;
          v56 = &v49;
          v58 = &v50;
          p_SessionId = &SessionId;
          v62 = &v48;
          v64 = &v46;
          v66 = &v44;
          v68 = &v45;
          v70 = v53 + 36;
          v72 = v53 + 32;
          v74 = v53 + 40;
          v26 = Length >> 1;
          v76 = (__int16 *)&v47;
          v78 = (__int16 *)&v43;
          v42 = v23;
          v47 = v25;
          v43 = v26;
          v59 = 4LL;
          v61 = 4LL;
          v63 = 4LL;
          v65 = 4LL;
          v67 = 4LL;
          v69 = 4LL;
          v71 = 4LL;
          v73 = 4LL;
          v75 = 4LL;
          v77 = 2LL;
          v79 = 2LL;
          if ( v25 )
          {
            v19 = 14;
            v80 = v9;
            v81 = 2 * v25;
            v82 = 0;
          }
          if ( v26 )
          {
            v40 = 2LL * v19++;
            *(&UserData.Ptr + v40) = (ULONGLONG)Buffer;
            *(&UserData.Size + 2 * v40) = 2 * v26;
            *(&UserData.Reserved + 2 * v40) = 0;
          }
          v27 = 2LL * v19;
          v28 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
          *(&UserData.Ptr + v27) = (ULONGLONG)&v41;
          *((_QWORD *)&UserData.Size + v27) = 4LL;
          v29 = v19 + 1;
          v30 = v19 + 2;
          v29 *= 2LL;
          *(&UserData.Ptr + v29) = (ULONGLONG)&v42;
          *((_QWORD *)&UserData.Size + v29) = 4LL;
          v31 = 2LL * v30;
          *(&UserData.Ptr + v31) = (ULONGLONG)&v52;
          *((_QWORD *)&UserData.Size + v31) = 4LL;
          v32 = v30 + 1;
          v30 += 2;
          v32 *= 2LL;
          *(&UserData.Ptr + v32) = v16 + 44;
          *((_QWORD *)&UserData.Size + v32) = 4LL;
          v33 = 2LL * v30;
          *(&UserData.Ptr + v33) = v16 + 48;
          *((_QWORD *)&UserData.Size + v33) = 4LL;
          v34 = v30 + 1;
          v35 = v30 + 2;
          v34 *= 2LL;
          *(&UserData.Ptr + v34) = (ULONGLONG)&v52;
          v36 = PopDiagHandle;
          *((_QWORD *)&UserData.Size + v34) = 4LL;
          if ( !a1 )
            v28 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
          EtwWrite(v36, v28, 0LL, v35, &UserData);
        }
        ExFreePoolWithTag(v7, 0x50455654u);
      }
    }
  }
}
