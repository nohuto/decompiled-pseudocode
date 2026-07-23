/*
 * XREFs of EtwpRegTraceCallback @ 0x1406A49F4
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmCallbackGetKeyObjectID @ 0x1405FAF6C (CmCallbackGetKeyObjectID.c)
 *     EtwpCapturePreviousRegistryData @ 0x1406A485C (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x1406A495C (EtwpCaptureRegistryData.c)
 */

__int64 __fastcall EtwpRegTraceCallback(PVOID CallbackContext, PVOID Argument1, int *Argument2)
{
  char v4; // di
  _DWORD *v5; // r15
  PCUNICODE_STRING v6; // r12
  __int16 *v7; // r14
  unsigned __int16 v8; // r10
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int128 v16; // xmm0
  __int64 v17; // rdx
  PVOID v18; // rax
  unsigned int v19; // r8d
  __int64 v20; // rsi
  const void *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // r8d
  PVOID *v25; // rax
  __int128 v26; // xmm0
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  __int16 **v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  PVOID v36; // rax
  char v37; // bl
  unsigned int v38; // r9d
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  ULONGLONG Buffer; // r8
  unsigned __int16 Length; // ax
  __int64 v48; // rcx
  __int64 v49; // rax
  ULONG v50; // r9d
  ULONGLONG v51; // r8
  unsigned __int16 v52; // ax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // ecx
  __int64 v58; // rax
  __int64 v59; // rax
  ULONG v60; // r9d
  unsigned __int16 v61; // dx
  __int64 v62; // rax
  __int64 v63; // rcx
  bool v64; // sf
  int v66; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v67; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v68; // [rsp+40h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v70; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  int v72; // [rsp+60h] [rbp-A8h] BYREF
  int v73; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v74; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v75; // [rsp+70h] [rbp-98h] BYREF
  PCUNICODE_STRING ObjectName[4]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  PVOID *v78; // [rsp+A8h] [rbp-60h]
  __int64 v79; // [rsp+B0h] [rbp-58h]

  ObjectName[0] = 0LL;
  v4 = 0;
  v5 = 0LL;
  v72 = 0;
  v6 = 0LL;
  v70 = 0LL;
  LODWORD(v68) = 0;
  Object = 0LL;
  v7 = 0LL;
  v75 = 0LL;
  v8 = 0;
  P = 0LL;
  LODWORD(v74) = 0;
  v73 = 0;
  LOWORD(v66) = 0;
  v67 = 0;
  if ( (int)Argument1 > 22 )
  {
    v27 = (_DWORD)Argument1 - 23;
    if ( !v27 )
    {
      v20 = (__int64)Argument2;
      v35 = *((_QWORD *)Argument2 + 2);
      v4 = 113;
      v36 = *(PVOID *)Argument2;
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_QUERY_VALUE_KEY;
      v7 = *(__int16 **)(v35 + 8);
      Object = v36;
      LODWORD(v70) = *(_DWORD *)(v35 + 16);
      v19 = **(_DWORD **)(v35 + 40);
      LODWORD(v68) = v19;
      if ( (EtwpRegTraceOptions & 2) == 0 || Argument2[2] < 0 )
        goto LABEL_53;
      v21 = *(const void **)(v35 + 24);
LABEL_52:
      v8 = EtwpCaptureRegistryData(&P, v21, v19);
      LOWORD(v66) = v8;
      goto LABEL_53;
    }
    v28 = v27 - 1;
    if ( !v28 )
    {
      v34 = *((_QWORD *)Argument2 + 2);
      v20 = (__int64)Argument2;
      v4 = 40;
      Object = *(PVOID *)Argument2;
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_QUERY_MULTIPLE_VALUE_KEY;
      HIDWORD(v70) = *(_DWORD *)(v34 + 16);
      LODWORD(v68) = **(_DWORD **)(v34 + 32);
      goto LABEL_53;
    }
    v29 = v28 - 3;
    if ( v29 )
    {
      v30 = v29 - 2;
      if ( v30 )
      {
        v31 = v30 - 2;
        if ( v31 )
        {
          v32 = v31 - 6;
          if ( v32 )
          {
            if ( v32 != 2 )
              return 0LL;
            v26 = ETW_REGISTRY_EVENT_SET_SECURITY_KEY;
          }
          else
          {
            v26 = ETW_REGISTRY_EVENT_QUERY_SECURITY_KEY;
          }
        }
        else
        {
          v26 = ETW_REGISTRY_EVENT_FLUSH_KEY;
        }
        v20 = (__int64)Argument2;
        goto LABEL_41;
      }
      v20 = (__int64)Argument2;
      v33 = (__int16 **)*((_QWORD *)Argument2 + 2);
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_OPEN_KEY;
      Object = v33[1];
      if ( Argument2[2] >= 0 )
        goto LABEL_46;
    }
    else
    {
      v20 = (__int64)Argument2;
      v33 = (__int16 **)*((_QWORD *)Argument2 + 2);
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_CREATE_KEY;
      Object = v33[1];
      if ( Argument2[2] >= 0 )
      {
        v72 = *(_DWORD *)v33[8];
LABEL_46:
        v75 = *(PVOID *)Argument2;
      }
    }
    v7 = *v33;
    v4 = 7;
    goto LABEL_53;
  }
  if ( (_DWORD)Argument1 == 22 )
  {
    v17 = *((_QWORD *)Argument2 + 2);
    Object = *(PVOID *)Argument2;
    *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_QUERY_KEY;
    LODWORD(v70) = *(_DWORD *)(v17 + 8);
    v19 = **(_DWORD **)(v17 + 32);
    goto LABEL_18;
  }
  v9 = (_DWORD)Argument1 - 1;
  if ( v9 )
  {
    v10 = v9 - 13;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
      {
        v25 = (PVOID *)*((_QWORD *)Argument2 + 2);
        v20 = (__int64)Argument2;
        *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_DELETE_KEY;
        Object = *v25;
        goto LABEL_53;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        v20 = (__int64)Argument2;
        v23 = *((_QWORD *)Argument2 + 2);
        *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_SET_VALUE_KEY;
        v7 = *(__int16 **)(v23 + 8);
        LODWORD(v70) = *(_DWORD *)(v23 + 20);
        Object = *(PVOID *)Argument2;
        v24 = *(_DWORD *)(v23 + 32);
        LODWORD(v68) = v24;
        if ( (EtwpRegTraceOptions & 2) != 0 && Argument2[2] >= 0 )
        {
          v8 = EtwpCaptureRegistryData(&P, *(const void **)(v23 + 24), v24);
          LOWORD(v66) = v8;
        }
        v5 = (_DWORD *)*((_QWORD *)Argument2 + 4);
        v4 = -15;
        goto LABEL_53;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 2;
          if ( v15 )
          {
            if ( v15 != 1 )
              return 0LL;
            v16 = ETW_REGISTRY_EVENT_ENUMERATE_VALUE_KEY;
          }
          else
          {
            v16 = ETW_REGISTRY_EVENT_ENUMERATE_KEY;
          }
          v17 = *((_QWORD *)Argument2 + 2);
          v4 = 120;
          v18 = *(PVOID *)Argument2;
          *(_OWORD *)&ObjectName[1] = v16;
          Object = v18;
          HIDWORD(v70) = *(_DWORD *)(v17 + 8);
          LODWORD(v70) = *(_DWORD *)(v17 + 12);
          v19 = **(_DWORD **)(v17 + 32);
          goto LABEL_13;
        }
        v17 = *((_QWORD *)Argument2 + 2);
        Object = *(PVOID *)Argument2;
        *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_SET_INFORMATION_KEY;
        LODWORD(v70) = *(_DWORD *)(v17 + 8);
        v19 = *(_DWORD *)(v17 + 24);
LABEL_18:
        v4 = 112;
LABEL_13:
        v20 = (__int64)Argument2;
        LODWORD(v68) = v19;
        if ( (EtwpRegTraceOptions & 2) == 0 || Argument2[2] < 0 )
          goto LABEL_53;
        v21 = *(const void **)(v17 + 16);
        goto LABEL_52;
      }
      v22 = *((_QWORD *)Argument2 + 2);
      v20 = (__int64)Argument2;
      v4 = 1;
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_DELETE_VALUE_KEY;
      v7 = *(__int16 **)(v22 + 8);
LABEL_20:
      Object = *(PVOID *)Argument2;
LABEL_53:
      if ( (EtwpRegTraceOptions & 1) != 0 )
      {
        v37 = 1;
        if ( Object )
        {
          CmCallbackGetKeyObjectID(&EtwpRegTraceCookie, Object, 0LL, ObjectName);
          v8 = v66;
          v6 = ObjectName[0];
        }
      }
      else
      {
        v37 = 0;
      }
      UserData.Ptr = (ULONGLONG)&Object;
      v38 = 1;
      *(_QWORD *)&UserData.Size = 8LL;
      if ( (v4 & 4) != 0 )
      {
        v79 = 8LL;
        v78 = &v75;
        v38 = 2;
      }
      if ( v20 == 1 )
      {
        v40 = 16LL * v38;
        *(ULONGLONG *)((char *)&UserData.Ptr + v40) = (ULONGLONG)&EtwpNull;
        *(_QWORD *)((char *)&UserData.Size + v40) = 4LL;
      }
      else
      {
        v39 = 2LL * v38;
        *(&UserData.Ptr + v39) = v20 + 8;
        *((_QWORD *)&UserData.Size + v39) = 4LL;
      }
      v41 = v38 + 1;
      if ( (v4 & 8) != 0 )
      {
        v42 = 16LL * v41++;
        *(ULONGLONG *)((char *)&UserData.Ptr + v42) = (ULONGLONG)&v70 + 4;
        *(_QWORD *)((char *)&UserData.Size + v42) = 4LL;
      }
      if ( (v4 & 0x10) != 0 )
      {
        v43 = 16LL * v41++;
        *(ULONGLONG *)((char *)&UserData.Ptr + v43) = (ULONGLONG)&v70;
        *(_QWORD *)((char *)&UserData.Size + v43) = 4LL;
      }
      if ( (v4 & 2) != 0 )
      {
        v44 = 16LL * v41++;
        *(ULONGLONG *)((char *)&UserData.Ptr + v44) = (ULONGLONG)&v72;
        *(_QWORD *)((char *)&UserData.Size + v44) = 4LL;
      }
      if ( (v4 & 0x20) != 0 )
      {
        v45 = 16LL * v41++;
        *(ULONGLONG *)((char *)&UserData.Ptr + v45) = (ULONGLONG)&v68;
        *(_QWORD *)((char *)&UserData.Size + v45) = 4LL;
      }
      if ( v37 == 1 )
      {
        if ( v6 )
        {
          Buffer = (ULONGLONG)v6->Buffer;
          if ( Buffer )
          {
            Length = v6->Length;
            if ( v6->Length )
            {
              v48 = 2LL * v41++;
              *(&UserData.Ptr + v48) = Buffer;
              *(&UserData.Size + 2 * v48) = Length;
              *(&UserData.Reserved + 2 * v48) = 0;
            }
          }
        }
      }
      v49 = 16LL * v41;
      v50 = v41 + 1;
      *(ULONGLONG *)((char *)&UserData.Ptr + v49) = (ULONGLONG)&EtwpNull;
      *(_QWORD *)((char *)&UserData.Size + v49) = 2LL;
      if ( (v4 & 1) != 0 )
      {
        if ( v7 )
        {
          v51 = *((_QWORD *)v7 + 1);
          if ( v51 )
          {
            v52 = *v7;
            if ( *v7 )
            {
              v53 = 2LL * v50++;
              *(&UserData.Ptr + v53) = v51;
              *(&UserData.Size + 2 * v53) = v52;
              *(&UserData.Reserved + 2 * v53) = 0;
            }
          }
        }
        v54 = 2LL * v50++;
        *(&UserData.Ptr + v54) = (ULONGLONG)&EtwpNull;
        *((_QWORD *)&UserData.Size + v54) = 2LL;
      }
      if ( (v4 & 0x40) != 0 )
      {
        v55 = 2LL * v50++;
        *(&UserData.Ptr + v55) = (ULONGLONG)&v66;
        *((_QWORD *)&UserData.Size + v55) = 2LL;
        if ( v8 )
        {
          v56 = 2LL * v50++;
          *(&UserData.Ptr + v56) = (ULONGLONG)P;
          *(&UserData.Size + 2 * v56) = v8;
          *(&UserData.Reserved + 2 * v56) = 0;
        }
      }
      if ( v4 < 0 )
      {
        if ( v5 )
        {
          v57 = v5[2];
          LODWORD(v74) = v57;
          v73 = v5[1];
          v67 = 2048;
          if ( v57 <= 0x800 )
            v67 = v57;
        }
        v58 = 2LL * v50;
        *(&UserData.Ptr + v58) = (ULONGLONG)&v73;
        *((_QWORD *)&UserData.Size + v58) = 4LL;
        v59 = v50 + 1;
        v60 = v50 + 2;
        v59 *= 2LL;
        *(&UserData.Ptr + v59) = (ULONGLONG)&v74;
        *((_QWORD *)&UserData.Size + v59) = 4LL;
        v61 = v67;
        v62 = v60;
        v50 = v60 + 1;
        v62 *= 2LL;
        *(&UserData.Ptr + v62) = (ULONGLONG)&v67;
        *((_QWORD *)&UserData.Size + v62) = 2LL;
        if ( v61 )
        {
          v63 = 2LL * v50++;
          *(&UserData.Ptr + v63) = (ULONGLONG)(v5 + 3);
          *(&UserData.Size + 2 * v63) = v61;
          *(&UserData.Reserved + 2 * v63) = 0;
        }
      }
      if ( v20 == 1 || (v64 = *(int *)(v20 + 8) < 0, BYTE4(ObjectName[1]) = 1, !v64) )
        BYTE4(ObjectName[1]) = 2;
      EtwWrite(EtwpRegTraceHandle, (PCEVENT_DESCRIPTOR)&ObjectName[1], 0LL, v50, &UserData);
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      return 0LL;
    }
    v26 = ETW_REGISTRY_EVENT_CLOSE_KEY;
    v20 = 1LL;
LABEL_41:
    *(_OWORD *)&ObjectName[1] = v26;
    goto LABEL_20;
  }
  if ( (EtwpRegTraceOptions & 4) != 0 )
    EtwpCapturePreviousRegistryData((__int64)Argument2);
  return 0LL;
}
