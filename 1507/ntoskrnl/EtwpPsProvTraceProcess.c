/*
 * XREFs of EtwpPsProvTraceProcess @ 0x14050BCA8
 * Callers:
 *     EtwTraceProcess @ 0x14050C208 (EtwTraceProcess.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1406E94E0 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     MmGetSessionId @ 0x140050140 (MmGetSessionId.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     EtwProviderEnabled @ 0x1400DCD78 (EtwProviderEnabled.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     PsQueryStatisticsProcess @ 0x140508494 (PsQueryStatisticsProcess.c)
 *     ObGetProcessHandleCount @ 0x140508648 (ObGetProcessHandleCount.c)
 *     PsGetProcessServerSilo @ 0x14050C11C (PsGetProcessServerSilo.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 */

_QWORD *__fastcall EtwpPsProvTraceProcess(PEPROCESS Process, __int64 a2, unsigned int *a3, __int64 a4, __int16 a5)
{
  _QWORD *result; // rax
  const EVENT_DESCRIPTOR *v9; // r14
  ULONG v10; // edi
  char v11; // dl
  UNICODE_STRING *p_DestinationString; // rax
  unsigned int Length; // ecx
  unsigned int v14; // eax
  __int64 v15; // r9
  void *v16; // rsi
  PACCESS_TOKEN v17; // rdi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  REGHANDLE v24; // r15
  int v25; // [rsp+38h] [rbp-D0h] BYREF
  int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v27; // [rsp+40h] [rbp-C8h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  int v32; // [rsp+68h] [rbp-A0h] BYREF
  int ProcessHandleCount; // [rsp+6Ch] [rbp-9Ch] BYREF
  int Next; // [rsp+70h] [rbp-98h] BYREF
  int v35; // [rsp+74h] [rbp-94h] BYREF
  int Blink; // [rsp+78h] [rbp-90h] BYREF
  int v37; // [rsp+7Ch] [rbp-8Ch] BYREF
  PVOID P; // [rsp+80h] [rbp-88h] BYREF
  __int64 v39; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-60h] BYREF
  char v42; // [rsp+B8h] [rbp-50h] BYREF
  int v43; // [rsp+C8h] [rbp-40h]
  int v44; // [rsp+CCh] [rbp-3Ch]
  int v45; // [rsp+D0h] [rbp-38h]
  int v46; // [rsp+D4h] [rbp-34h]
  __int64 v47; // [rsp+E0h] [rbp-28h]
  __int64 v48; // [rsp+E8h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F8h] [rbp-10h] BYREF
  _LIST_ENTRY *p_ThreadListHead; // [rsp+108h] [rbp+0h]
  __int64 v51; // [rsp+110h] [rbp+8h]
  unsigned __int64 *p_Next; // [rsp+118h] [rbp+10h]
  __int64 v53; // [rsp+120h] [rbp+18h]
  __int64 *v54; // [rsp+128h] [rbp+20h]
  __int64 v55; // [rsp+130h] [rbp+28h]
  int *v56; // [rsp+138h] [rbp+30h]
  __int64 v57; // [rsp+140h] [rbp+38h]
  wchar_t *p_ProcessHandleCount; // [rsp+148h] [rbp+40h]
  __int64 v59; // [rsp+150h] [rbp+48h]
  __int64 *v60; // [rsp+158h] [rbp+50h]
  __int64 v61; // [rsp+160h] [rbp+58h]
  __int64 *v62; // [rsp+168h] [rbp+60h]
  __int64 v63; // [rsp+170h] [rbp+68h]
  char *v64; // [rsp+178h] [rbp+70h]
  __int64 v65; // [rsp+180h] [rbp+78h]
  __int64 *v66; // [rsp+188h] [rbp+80h]
  __int64 v67; // [rsp+190h] [rbp+88h]
  int *v68; // [rsp+198h] [rbp+90h]
  __int64 v69; // [rsp+1A0h] [rbp+98h]
  int *v70; // [rsp+1A8h] [rbp+A0h]
  __int64 v71; // [rsp+1B0h] [rbp+A8h]
  int *v72; // [rsp+1B8h] [rbp+B0h]
  __int64 v73; // [rsp+1C0h] [rbp+B8h]
  unsigned __int64 *p_SecurePid; // [rsp+1C8h] [rbp+C0h]
  __int64 v75; // [rsp+1D0h] [rbp+C8h]
  unsigned __int64 *v76; // [rsp+1D8h] [rbp+D0h]
  int v77; // [rsp+1E0h] [rbp+D8h]
  int v78; // [rsp+1E4h] [rbp+DCh]
  wchar_t pszDest[16]; // [rsp+1E8h] [rbp+E0h] BYREF
  _UNKNOWN *retaddr; // [rsp+240h] [rbp+138h] BYREF

  result = &retaddr;
  v25 = 0;
  switch ( a5 )
  {
    case 769:
      v9 = &ProcessStart;
      break;
    case 770:
      v9 = (const EVENT_DESCRIPTOR *)&ProcessStop;
      break;
    case 771:
      v9 = (const EVENT_DESCRIPTOR *)&ProcessRundown;
      break;
    default:
      return result;
  }
  Blink = (int)Process[1].Header.WaitListHead.Blink;
  v10 = 2;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&Blink;
  p_ThreadListHead = &Process[1].ThreadListHead;
  v51 = 8LL;
  if ( ((a5 - 769) & 0xFFFD) != 0 )
  {
    if ( a5 == 770 )
    {
      TokenInformation = 0LL;
      PsQueryStatisticsProcess((__int64)Process, &v41, 770LL, a4);
      v53 = 8LL;
      p_Next = &Process[2].Affinity.Bitmap[14];
      v55 = 4LL;
      v54 = (__int64 *)((char *)&Process[2].Affinity.Bitmap[1] + 4);
      v17 = PsReferencePrimaryToken(Process);
      if ( SeQueryInformationToken(v17, TokenElevationType, &TokenInformation) >= 0 )
      {
        if ( *(_DWORD *)TokenInformation == 1 )
        {
          P = 0LL;
          if ( SeQueryInformationToken(v17, TokenElevation, &P) >= 0 )
            v25 = *(_DWORD *)P != 0 ? 1 : 4;
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        else
        {
          v25 = *(_DWORD *)TokenInformation;
        }
      }
      ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v17);
      if ( TokenInformation )
        ExFreePoolWithTag(TokenInformation, 0);
      v57 = 4LL;
      v56 = &v25;
      ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)Process, 0LL);
      v59 = 4LL;
      p_ProcessHandleCount = (wchar_t *)&ProcessHandleCount;
      v29 = *(_QWORD *)Process[1].IdealNode;
      v29 <<= 12;
      v60 = &v29;
      v31 = *(_QWORD *)&Process[1].IdealNode[4];
      v31 <<= 12;
      v62 = &v31;
      v64 = &v42;
      v18 = v43;
      if ( v44 )
        v18 = -1;
      v61 = 8LL;
      LODWORD(v30) = v18;
      v66 = &v30;
      v19 = v45;
      if ( v46 )
        v19 = -1;
      v63 = 8LL;
      v35 = v19;
      v68 = &v35;
      v20 = v47 >> 10;
      v47 >>= 10;
      v65 = 8LL;
      if ( HIDWORD(v47) )
        LODWORD(v20) = -1;
      v67 = 4LL;
      v32 = v20;
      v70 = &v32;
      v21 = v48 >> 10;
      v48 >>= 10;
      v69 = 4LL;
      if ( HIDWORD(v48) )
        LODWORD(v21) = -1;
      v71 = 4LL;
      v37 = v21;
      v73 = 4LL;
      v72 = &v37;
      p_SecurePid = &Process[1].SecurePid;
      v22 = -1LL;
      v75 = 4LL;
      v76 = &Process[1].ActiveProcessors.Bitmap[11];
      do
        ++v22;
      while ( *((_BYTE *)&Process[1].ActiveProcessors.Bitmap[11] + v22) );
      v78 = 0;
      v77 = v22 + 1;
      v10 = 15;
    }
  }
  else
  {
    Next = (int)Process[1].SwapListEntry.Next;
    p_Next = (unsigned __int64 *)&Next;
    v53 = 4LL;
    LODWORD(v27) = MmGetSessionId(Process);
    v55 = 4LL;
    v54 = &v27;
    v26 = (v11 & 1) != 0;
    if ( (v11 & 8) != 0 )
      v26 = ((v11 & 1) != 0) | 2;
    v57 = 4LL;
    v56 = &v26;
    p_DestinationString = (UNICODE_STRING *)Process[1].ActiveProcessors.Bitmap[14];
    if ( !p_DestinationString || !p_DestinationString->Length )
    {
      RtlStringCchPrintfW(pszDest, 0xFuLL, L"%S", &Process[1].ActiveProcessors.Bitmap[11]);
      RtlInitUnicodeString(&DestinationString, pszDest);
      p_DestinationString = &DestinationString;
    }
    Length = p_DestinationString->Length;
    p_ProcessHandleCount = p_DestinationString->Buffer;
    v60 = (__int64 *)&EtwpNull;
    v64 = (char *)(a4 + 4);
    v66 = (__int64 *)(a3 + 4);
    v67 = *a3;
    v68 = (int *)(a3 + 68);
    v14 = a3[2];
    v61 = 2LL;
    v10 = 11;
    v69 = v14;
    v59 = Length;
    v62 = (__int64 *)a4;
    v63 = 4LL;
    v65 = 4LL;
  }
  EtwWrite(EtwpPsProvRegHandle, v9, 0LL, v10, &UserData);
  result = (_QWORD *)PsGetProcessServerSilo(Process);
  v16 = result;
  if ( result )
  {
    PsGetMonitorContextServerSilo(EtwSiloMonitor, result, &v39, v15);
    v23 = v39;
    if ( v39 )
    {
      v24 = *(_QWORD *)(v39 + 400);
      if ( EtwProviderEnabled(v24, 0, 0x10uLL) )
        EtwWrite(v24, v9, 0LL, v10, &UserData);
      PsDereferenceMonitorContextServerSilo(v23);
    }
    return (_QWORD *)PspDereferenceSiloObject(v16);
  }
  return result;
}
