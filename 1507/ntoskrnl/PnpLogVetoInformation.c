/*
 * XREFs of PnpLogVetoInformation @ 0x14058EADC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     PsGetProcessImageFileName @ 0x140120260 (PsGetProcessImageFileName.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageName @ 0x140443A34 (PsGetAllocatedFullProcessImageName.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     PsLookupProcessByProcessId @ 0x1405114D8 (PsLookupProcessByProcessId.c)
 *     PnpTraceDeviceRemoveProcessVeto @ 0x140693B48 (PnpTraceDeviceRemoveProcessVeto.c)
 */

void __fastcall PnpLogVetoInformation(__int16 *a1, _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // r12
  unsigned __int16 *v4; // rsi
  _QWORD *i; // r14
  char v6; // r13
  PEPROCESS v7; // r15
  UNICODE_STRING *v8; // rbx
  const CHAR *ProcessImageFileName; // rax
  unsigned __int16 v10; // ax
  wchar_t *Buffer; // rcx
  unsigned __int16 v12; // cx
  __int64 v13; // rax
  REGHANDLE v14; // rsi
  __int64 *v15; // rax
  _QWORD *v16; // rsi
  __int16 *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int16 v20; // [rsp+30h] [rbp-89h] BYREF
  __int16 v21; // [rsp+34h] [rbp-85h] BYREF
  PEPROCESS Process; // [rsp+38h] [rbp-81h] BYREF
  int Blink; // [rsp+40h] [rbp-79h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  __int16 *v25; // [rsp+50h] [rbp-69h]
  _QWORD *v26; // [rsp+58h] [rbp-61h]
  UNICODE_STRING v27; // [rsp+60h] [rbp-59h] BYREF
  _STRING DestinationString; // [rsp+70h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-39h] BYREF
  __int16 *v30; // [rsp+90h] [rbp-29h]
  __int64 v31; // [rsp+98h] [rbp-21h]
  wchar_t *v32; // [rsp+A0h] [rbp-19h]
  int v33; // [rsp+A8h] [rbp-11h]
  int v34; // [rsp+ACh] [rbp-Dh]
  __int16 *v35; // [rsp+B0h] [rbp-9h]
  __int64 v36; // [rsp+B8h] [rbp-1h]
  __int64 v37; // [rsp+C0h] [rbp+7h]
  int v38; // [rsp+C8h] [rbp+Fh]
  int v39; // [rsp+CCh] [rbp+13h]

  v2 = *a2 - 24LL;
  v26 = a2;
  v3 = a2;
  v25 = a1;
  v4 = (unsigned __int16 *)a1;
  Process = 0LL;
  for ( i = (_QWORD *)(v2 + 24); v3 != i; i = (_QWORD *)*i )
  {
    v6 = 0;
    if ( PsLookupProcessByProcessId((HANDLE)*(unsigned int *)(v2 + 16), &Process) >= 0 )
    {
      v7 = Process;
      if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, &P) >= 0 )
      {
        v8 = (UNICODE_STRING *)P;
        if ( !*(_WORD *)P )
        {
          v6 = 1;
          ExFreePoolWithTag(P, 0);
          v8 = &v27;
          P = &v27;
          ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)v7);
          RtlInitAnsiString(&DestinationString, ProcessImageFileName);
          RtlAnsiStringToUnicodeString(&v27, &DestinationString, 1u);
        }
      }
      else
      {
        v8 = 0LL;
        P = 0LL;
      }
      Blink = (int)v7[1].Header.WaitListHead.Blink;
      UserData.Ptr = (ULONGLONG)&Blink;
      *(_QWORD *)&UserData.Size = 4LL;
      if ( v8 )
      {
        v10 = v8->Length >> 1;
        v20 = v10;
      }
      else
      {
        v10 = 0;
        v20 = 0;
      }
      v31 = 2LL;
      v30 = (__int16 *)&v20;
      if ( v8 )
        Buffer = v8->Buffer;
      else
        Buffer = 0LL;
      v32 = Buffer;
      v12 = *v4;
      v33 = 2 * v10;
      v35 = &v21;
      v13 = *((_QWORD *)v4 + 1);
      v14 = PnpEtwHandle;
      v37 = v13;
      v34 = 0;
      v21 = v12 >> 1;
      v36 = 2LL;
      v38 = 2 * (v12 >> 1);
      v39 = 0;
      if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DeviceEject_Pend) )
        EtwWrite(v14, &KMPnPEvt_DeviceEject_Pend, 0LL, 5u, &UserData);
      v15 = (__int64 *)(*(_QWORD *)v2 - 8LL);
      v16 = *(_QWORD **)v2;
      if ( v2 != *(_QWORD *)v2 )
      {
        v17 = v25;
        do
        {
          v18 = *v15;
          if ( v18 )
            v19 = *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL);
          else
            v19 = 0LL;
          PnpTraceDeviceRemoveProcessVeto(v17, v19 + 40, v8);
          v15 = (__int64 *)(*v16 - 8LL);
          v16 = (_QWORD *)*v16;
        }
        while ( (_QWORD *)v2 != v16 );
        v7 = Process;
        v3 = v26;
      }
      if ( v6 )
      {
        RtlFreeAnsiString(v8);
      }
      else if ( v8 )
      {
        ExFreePoolWithTag(v8, 0);
      }
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
      v4 = (unsigned __int16 *)v25;
    }
    v2 = *i - 24LL;
  }
}
