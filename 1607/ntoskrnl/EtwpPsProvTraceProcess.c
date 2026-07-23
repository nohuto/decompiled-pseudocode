/*
 * XREFs of EtwpPsProvTraceProcess @ 0x14054BA48
 * Callers:
 *     EtwpWriteProcessEvent @ 0x14045C5C0 (EtwpWriteProcessEvent.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1406A7ECC (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     MmGetSessionId @ 0x140013CE0 (MmGetSessionId.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 *     PsQueryStatisticsProcess @ 0x14044DA90 (PsQueryStatisticsProcess.c)
 *     ObGetProcessHandleCount @ 0x14051B034 (ObGetProcessHandleCount.c)
 */

int __fastcall EtwpPsProvTraceProcess(PEPROCESS Process, __int64 a2, unsigned int *a3, __int64 a4, __int16 a5)
{
  _UNKNOWN **v5; // rax
  const EVENT_DESCRIPTOR *v9; // r15
  ULONG v10; // edi
  PACCESS_TOKEN v11; // r14
  NTSTATUS v12; // eax
  PVOID v13; // rdi
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  void **p_InstrumentationCallback; // rax
  unsigned __int64 *v19; // rbx
  __int64 v20; // rax
  char v21; // dl
  UNICODE_STRING *p_DestinationString; // rax
  unsigned int Length; // ecx
  unsigned int v24; // eax
  int v26; // [rsp+38h] [rbp-D0h] BYREF
  int v27; // [rsp+3Ch] [rbp-CCh] BYREF
  int Blink; // [rsp+40h] [rbp-C8h] BYREF
  int ProcessHandleCount; // [rsp+44h] [rbp-C4h] BYREF
  int v30; // [rsp+48h] [rbp-C0h] BYREF
  int v31; // [rsp+4Ch] [rbp-BCh] BYREF
  int v32; // [rsp+50h] [rbp-B8h] BYREF
  int v33; // [rsp+54h] [rbp-B4h] BYREF
  int Next; // [rsp+58h] [rbp-B0h] BYREF
  int SessionId; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v36; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  PVOID TokenInformation; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  __int64 v41[3]; // [rsp+98h] [rbp-70h] BYREF
  char v42; // [rsp+B0h] [rbp-58h] BYREF
  int v43; // [rsp+C0h] [rbp-48h]
  int v44; // [rsp+C4h] [rbp-44h]
  int v45; // [rsp+C8h] [rbp-40h]
  int v46; // [rsp+CCh] [rbp-3Ch]
  __int64 v47; // [rsp+D8h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F8h] [rbp-10h] BYREF
  _LIST_ENTRY *p_ThreadListHead; // [rsp+108h] [rbp+0h]
  __int64 v51; // [rsp+110h] [rbp+8h]
  unsigned __int64 *p_Next; // [rsp+118h] [rbp+10h]
  __int64 v53; // [rsp+120h] [rbp+18h]
  char *p_SessionId; // [rsp+128h] [rbp+20h]
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
  int *v66; // [rsp+188h] [rbp+80h]
  __int64 v67; // [rsp+190h] [rbp+88h]
  int *v68; // [rsp+198h] [rbp+90h]
  __int64 v69; // [rsp+1A0h] [rbp+98h]
  int *v70; // [rsp+1A8h] [rbp+A0h]
  __int64 v71; // [rsp+1B0h] [rbp+A8h]
  int *v72; // [rsp+1B8h] [rbp+B0h]
  __int64 v73; // [rsp+1C0h] [rbp+B8h]
  void **v74; // [rsp+1C8h] [rbp+C0h]
  __int64 v75; // [rsp+1D0h] [rbp+C8h]
  unsigned __int64 *v76; // [rsp+1D8h] [rbp+D0h]
  int v77; // [rsp+1E0h] [rbp+D8h]
  int v78; // [rsp+1E4h] [rbp+DCh]
  wchar_t pszDest[16]; // [rsp+1E8h] [rbp+E0h] BYREF
  _UNKNOWN *retaddr; // [rsp+240h] [rbp+138h] BYREF

  v5 = &retaddr;
  v26 = 0;
  switch ( a5 )
  {
    case 769:
      v9 = &ProcessStart;
      break;
    case 770:
      v9 = &ProcessStop;
      break;
    case 771:
      v9 = (const EVENT_DESCRIPTOR *)&ProcessRundown;
      break;
    default:
      return (int)v5;
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
      PsQueryStatisticsProcess((__int64)Process, v41);
      v53 = 8LL;
      p_Next = &Process[2].Affinity.Bitmap[17];
      v55 = 4LL;
      p_SessionId = (char *)&Process[2].Affinity.Bitmap[4] + 4;
      v11 = PsReferencePrimaryToken(Process);
      v12 = SeQueryInformationToken(v11, TokenElevationType, &TokenInformation);
      v13 = TokenInformation;
      if ( v12 >= 0 )
      {
        if ( *(_DWORD *)TokenInformation == 1 )
        {
          P = 0LL;
          if ( SeQueryInformationToken(v11, TokenElevation, &P) >= 0 )
            v26 = *(_DWORD *)P != 0 ? 1 : 4;
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        else
        {
          v26 = *(_DWORD *)TokenInformation;
        }
      }
      ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v11);
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      v57 = 4LL;
      v56 = &v26;
      ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)Process, 0LL);
      v59 = 4LL;
      p_ProcessHandleCount = (wchar_t *)&ProcessHandleCount;
      v36 = *(_QWORD *)&Process[1].IdealNode[4];
      v36 <<= 12;
      v60 = &v36;
      v37 = *(_QWORD *)&Process[1].IdealNode[8];
      v37 <<= 12;
      v62 = &v37;
      v64 = &v42;
      v14 = v43;
      if ( v44 )
        v14 = -1;
      v61 = 8LL;
      v30 = v14;
      v66 = &v30;
      v15 = v45;
      if ( v46 )
        v15 = -1;
      v63 = 8LL;
      v31 = v15;
      v68 = &v31;
      v16 = v47 >> 10;
      v47 >>= 10;
      v65 = 8LL;
      if ( HIDWORD(v47) )
        LODWORD(v16) = -1;
      v67 = 4LL;
      v32 = v16;
      v70 = &v32;
      v17 = v48 >> 10;
      v48 >>= 10;
      v69 = 4LL;
      if ( HIDWORD(v48) )
        LODWORD(v17) = -1;
      v71 = 4LL;
      v33 = v17;
      v72 = &v33;
      p_InstrumentationCallback = &Process[1].InstrumentationCallback;
      v19 = &Process[1].ActiveProcessors.Bitmap[12];
      v74 = p_InstrumentationCallback;
      v76 = v19;
      v20 = -1LL;
      v73 = 4LL;
      v75 = 4LL;
      do
        ++v20;
      while ( *((_BYTE *)v19 + v20) );
      v78 = 0;
      v77 = v20 + 1;
      v10 = 15;
    }
  }
  else
  {
    Next = (int)Process[1].SwapListEntry.Next;
    p_Next = (unsigned __int64 *)&Next;
    v53 = 4LL;
    SessionId = MmGetSessionId(Process);
    v55 = 4LL;
    p_SessionId = (char *)&SessionId;
    v27 = (v21 & 1) != 0;
    if ( (v21 & 8) != 0 )
      v27 = ((v21 & 1) != 0) | 2;
    v57 = 4LL;
    v56 = &v27;
    p_DestinationString = (UNICODE_STRING *)Process[1].ActiveProcessors.Bitmap[15];
    if ( !p_DestinationString || !p_DestinationString->Length )
    {
      RtlStringCchPrintfW(pszDest, 0xFuLL, L"%S", &Process[1].ActiveProcessors.Bitmap[12]);
      RtlInitUnicodeString(&DestinationString, pszDest);
      p_DestinationString = &DestinationString;
    }
    Length = p_DestinationString->Length;
    p_ProcessHandleCount = p_DestinationString->Buffer;
    v60 = (__int64 *)&EtwpNull;
    v64 = (char *)(a4 + 4);
    v66 = (int *)(a3 + 4);
    v67 = *a3;
    v68 = (int *)(a3 + 68);
    v24 = a3[2];
    v61 = 2LL;
    v10 = 11;
    v69 = v24;
    v59 = Length;
    v62 = (__int64 *)a4;
    v63 = 4LL;
    v65 = 4LL;
  }
  LODWORD(v5) = EtwWrite(EtwpPsProvRegHandle, v9, 0LL, v10, &UserData);
  return (int)v5;
}
