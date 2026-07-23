/*
 * XREFs of PopDiagTracePowerRequestCreate @ 0x140503074
 * Callers:
 *     PopCreateKernelPowerRequest @ 0x14050137C (PopCreateKernelPowerRequest.c)
 *     PopCreateUserPowerRequest @ 0x1405017B8 (PopCreateUserPowerRequest.c)
 *     PopDiagTraceControlCallback @ 0x14052BF20 (PopDiagTraceControlCallback.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     PoStoreRequester @ 0x1400F914C (PoStoreRequester.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
  _WORD *v16; // rdx
  __int64 v17; // rax
  wchar_t *v18; // rdx
  __int64 v19; // r10
  int v20; // eax
  unsigned int v21; // r9d
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned __int16 v28; // di
  unsigned __int16 v29; // dx
  __int64 v30; // rcx
  __int64 v31; // rax
  const EVENT_DESCRIPTOR *v32; // rdx
  __int64 v33; // rax
  unsigned int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  ULONG v39; // r9d
  unsigned __int16 v40; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v41; // [rsp+34h] [rbp-CCh] BYREF
  int v42; // [rsp+38h] [rbp-C8h] BYREF
  int v43; // [rsp+3Ch] [rbp-C4h] BYREF
  int v44; // [rsp+40h] [rbp-C0h] BYREF
  int v45; // [rsp+44h] [rbp-BCh] BYREF
  int v46; // [rsp+48h] [rbp-B8h] BYREF
  int v47; // [rsp+4Ch] [rbp-B4h] BYREF
  int v48; // [rsp+50h] [rbp-B0h] BYREF
  int v49; // [rsp+54h] [rbp-ACh] BYREF
  int v50; // [rsp+58h] [rbp-A8h] BYREF
  int v51; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING NumberOfBytes; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  int *v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  int *v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  int *v59; // [rsp+B0h] [rbp-50h]
  __int64 v60; // [rsp+B8h] [rbp-48h]
  int *v61; // [rsp+C0h] [rbp-40h]
  __int64 v62; // [rsp+C8h] [rbp-38h]
  int *v63; // [rsp+D0h] [rbp-30h]
  __int64 v64; // [rsp+D8h] [rbp-28h]
  int *v65; // [rsp+E0h] [rbp-20h]
  __int64 v66; // [rsp+E8h] [rbp-18h]
  int *v67; // [rsp+F0h] [rbp-10h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  __int64 v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  __int64 v71; // [rsp+110h] [rbp+10h]
  __int64 v72; // [rsp+118h] [rbp+18h]
  __int64 v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  __int16 *v75; // [rsp+130h] [rbp+30h]
  __int64 v76; // [rsp+138h] [rbp+38h]
  __int16 *v77; // [rsp+140h] [rbp+40h]
  __int64 v78; // [rsp+148h] [rbp+48h]
  char *v79; // [rsp+150h] [rbp+50h]
  int v80; // [rsp+158h] [rbp+58h]
  int v81; // [rsp+15Ch] [rbp+5Ch]
  wchar_t pszDest[24]; // [rsp+1D0h] [rbp+D0h] BYREF

  v52 = a2;
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
      v50 = 0;
      v51 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v48 = 0;
      v47 = 0;
      v46 = 0;
      PoStoreRequester(*(_QWORD *)(a2 + 80), 0LL, (unsigned __int64 *)&NumberOfBytes.Length, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(SIZE_T *)&NumberOfBytes.Length, 0x50455654u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (int)PoStoreRequester(
                    *(_QWORD *)(v52 + 80),
                    (__int64)PoolWithTag,
                    (unsigned __int64 *)&NumberOfBytes.Length,
                    0) >= 0 )
        {
          v8 = 0;
          v9 = 0LL;
          if ( v49 )
          {
            v50 = v7[6];
            v51 = *(_DWORD *)(v52 + 16);
            if ( (_DWORD *)((char *)v7 + *((_QWORD *)v7 + 2)) )
            {
              v16 = (_WORD *)((char *)v7 + *((_QWORD *)v7 + 2));
              v17 = 0x7FFFLL;
              do
              {
                if ( !*v16 )
                  break;
                ++v16;
                --v17;
              }
              while ( v17 );
              if ( v17 )
              {
                v9 = (char *)v7 + *((_QWORD *)v7 + 2);
                v8 = 2 * (0x7FFF - v17);
              }
            }
            if ( v49 == 2 )
            {
              RtlStringCbPrintfW(pszDest, 0x2CuLL, L"%d", (unsigned int)v7[7]);
              v18 = pszDest;
            }
            else
            {
              v18 = 0LL;
            }
            RtlInitUnicodeString(&NumberOfBytes, v18);
            Length = NumberOfBytes.Length;
            Buffer = NumberOfBytes.Buffer;
          }
          else
          {
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
          v19 = v52;
          v20 = v42;
          v21 = 13;
          if ( !*(_QWORD *)(v52 + 80) )
            v20 = 1;
          v42 = v20;
          v22 = v43;
          if ( (*(_BYTE *)(v52 + 20) & 2) != 0 )
            v22 = 1;
          v43 = v22;
          v23 = v44;
          if ( (*(_BYTE *)(v52 + 20) & 1) != 0 )
            v23 = 1;
          v44 = v23;
          v24 = v45;
          if ( (*(_BYTE *)(v52 + 20) & 4) != 0 )
            v24 = 1;
          v45 = v24;
          v25 = v46;
          if ( (*(_BYTE *)(v52 + 20) & 8) != 0 )
            v25 = 1;
          v46 = v25;
          v26 = v47;
          if ( (*(_BYTE *)(v52 + 20) & 0x10) != 0 )
            v26 = 1;
          v47 = v26;
          v27 = v48;
          if ( (*(_BYTE *)(v52 + 20) & 0x20) != 0 )
            v27 = 1;
          *(_QWORD *)&UserData.Size = 8LL;
          v48 = v27;
          UserData.Ptr = (ULONGLONG)&v52;
          v55 = &v49;
          v57 = &v50;
          v59 = &v51;
          v61 = &v42;
          v63 = &v43;
          v65 = &v44;
          v67 = &v45;
          v69 = v52 + 36;
          v71 = v52 + 32;
          v73 = v52 + 40;
          v28 = v8 >> 1;
          v29 = Length >> 1;
          v75 = (__int16 *)&v40;
          v77 = (__int16 *)&v41;
          v40 = v28;
          v41 = v29;
          v56 = 4LL;
          v58 = 4LL;
          v60 = 4LL;
          v62 = 4LL;
          v64 = 4LL;
          v66 = 4LL;
          v68 = 4LL;
          v70 = 4LL;
          v72 = 4LL;
          v74 = 4LL;
          v76 = 2LL;
          v78 = 2LL;
          if ( v28 )
          {
            v21 = 14;
            v79 = v9;
            v80 = 2 * v28;
            v81 = 0;
          }
          if ( v29 )
          {
            v30 = 2LL * v21++;
            *(&UserData.Ptr + v30) = (ULONGLONG)Buffer;
            *(&UserData.Size + 2 * v30) = 2 * v29;
            *(&UserData.Reserved + 2 * v30) = 0;
          }
          v31 = 2LL * v21;
          v32 = &POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
          *(&UserData.Ptr + v31) = (ULONGLONG)&v46;
          *((_QWORD *)&UserData.Size + v31) = 4LL;
          v33 = v21 + 1;
          v34 = v21 + 2;
          v33 *= 2LL;
          *(&UserData.Ptr + v33) = (ULONGLONG)&v47;
          *((_QWORD *)&UserData.Size + v33) = 4LL;
          v35 = 2LL * v34;
          *(&UserData.Ptr + v35) = (ULONGLONG)&v48;
          *((_QWORD *)&UserData.Size + v35) = 4LL;
          v36 = v34 + 1;
          v34 += 2;
          v36 *= 2LL;
          *(&UserData.Ptr + v36) = v19 + 44;
          *((_QWORD *)&UserData.Size + v36) = 4LL;
          v37 = 2LL * v34;
          *(&UserData.Ptr + v37) = v19 + 48;
          *((_QWORD *)&UserData.Size + v37) = 4LL;
          v38 = v34 + 1;
          v39 = v34 + 2;
          v38 *= 2LL;
          *(&UserData.Ptr + v38) = v19 + 52;
          *((_QWORD *)&UserData.Size + v38) = 4LL;
          if ( !a1 )
            v32 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
          EtwWrite(PopDiagHandle, v32, 0LL, v39, &UserData);
        }
        ExFreePoolWithTag(v7, 0x50455654u);
      }
    }
  }
}
