/*
 * XREFs of EtwpPsProvTraceProcess @ 0x14044A4A8
 * Callers:
 *     EtwTraceProcess @ 0x1404497E4 (EtwTraceProcess.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140666328 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140003C28 (RtlStringCchPrintfW.c)
 *     MmGetSessionId @ 0x140038610 (MmGetSessionId.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObGetProcessHandleCount @ 0x1403E94CC (ObGetProcessHandleCount.c)
 *     PsQueryStatisticsProcess @ 0x1403EC180 (PsQueryStatisticsProcess.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 */

int __fastcall EtwpPsProvTraceProcess(PEPROCESS Process, __int64 a2, unsigned int *a3, __int64 a4, __int16 a5)
{
  _UNKNOWN **v5; // rax
  const EVENT_DESCRIPTOR *v9; // r15
  ULONG v10; // edi
  char v11; // dl
  UNICODE_STRING *p_DestinationString; // rax
  unsigned int Length; // ecx
  unsigned int v14; // eax
  PACCESS_TOKEN v15; // r14
  NTSTATUS v16; // eax
  PVOID v17; // rdi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  PEPROCESS v22; // rax
  unsigned __int64 *v23; // rbx
  __int64 v24; // rax
  int v26; // [rsp+38h] [rbp-D0h] BYREF
  int v27; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v28; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  int v32; // [rsp+60h] [rbp-A8h] BYREF
  int SessionId; // [rsp+64h] [rbp-A4h] BYREF
  int v34; // [rsp+68h] [rbp-A0h] BYREF
  int v35; // [rsp+6Ch] [rbp-9Ch] BYREF
  int Blink; // [rsp+70h] [rbp-98h] BYREF
  int v37; // [rsp+74h] [rbp-94h] BYREF
  PVOID TokenInformation; // [rsp+78h] [rbp-90h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  __int64 v41; // [rsp+98h] [rbp-70h] BYREF
  char v42; // [rsp+A8h] [rbp-60h] BYREF
  int v43; // [rsp+B8h] [rbp-50h]
  int v44; // [rsp+BCh] [rbp-4Ch]
  int v45; // [rsp+C0h] [rbp-48h]
  int v46; // [rsp+C4h] [rbp-44h]
  __int64 v47; // [rsp+D0h] [rbp-38h]
  __int64 v48; // [rsp+D8h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E8h] [rbp-20h] BYREF
  _LIST_ENTRY *p_ThreadListHead; // [rsp+F8h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp-8h]
  unsigned __int64 *v52; // [rsp+108h] [rbp+0h]
  __int64 v53; // [rsp+110h] [rbp+8h]
  char *p_SessionId; // [rsp+118h] [rbp+10h]
  __int64 v55; // [rsp+120h] [rbp+18h]
  int *v56; // [rsp+128h] [rbp+20h]
  __int64 v57; // [rsp+130h] [rbp+28h]
  wchar_t *Buffer; // [rsp+138h] [rbp+30h]
  __int64 v59; // [rsp+140h] [rbp+38h]
  __int64 *v60; // [rsp+148h] [rbp+40h]
  __int64 v61; // [rsp+150h] [rbp+48h]
  __int64 *v62; // [rsp+158h] [rbp+50h]
  __int64 v63; // [rsp+160h] [rbp+58h]
  char *v64; // [rsp+168h] [rbp+60h]
  __int64 v65; // [rsp+170h] [rbp+68h]
  int *v66; // [rsp+178h] [rbp+70h]
  __int64 v67; // [rsp+180h] [rbp+78h]
  int *v68; // [rsp+188h] [rbp+80h]
  __int64 v69; // [rsp+190h] [rbp+88h]
  int *v70; // [rsp+198h] [rbp+90h]
  __int64 v71; // [rsp+1A0h] [rbp+98h]
  int *v72; // [rsp+1A8h] [rbp+A0h]
  __int64 v73; // [rsp+1B0h] [rbp+A8h]
  PEPROCESS v74; // [rsp+1B8h] [rbp+B0h]
  __int64 v75; // [rsp+1C0h] [rbp+B8h]
  unsigned __int64 *v76; // [rsp+1C8h] [rbp+C0h]
  int v77; // [rsp+1D0h] [rbp+C8h]
  int v78; // [rsp+1D4h] [rbp+CCh]
  wchar_t pszDest[16]; // [rsp+1D8h] [rbp+D0h] BYREF
  _UNKNOWN *retaddr; // [rsp+230h] [rbp+128h] BYREF

  v5 = &retaddr;
  v26 = 0;
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
      PsQueryStatisticsProcess((__int64)Process, &v41);
      v53 = 8LL;
      v52 = &Process[2].Affinity.Bitmap[15];
      v55 = 4LL;
      p_SessionId = (char *)&Process[2].Affinity.Bitmap[2] + 4;
      v15 = PsReferencePrimaryToken(Process);
      v16 = SeQueryInformationToken(v15, TokenElevationType, &TokenInformation);
      v17 = TokenInformation;
      if ( v16 >= 0 )
      {
        if ( *(_DWORD *)TokenInformation == 1 )
        {
          P = 0LL;
          if ( SeQueryInformationToken(v15, TokenElevation, &P) >= 0 )
            v26 = *(_DWORD *)P != 0 ? 1 : 4;
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        else
        {
          v26 = *(_DWORD *)TokenInformation;
        }
      }
      ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v15);
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
      v57 = 4LL;
      v56 = &v26;
      LODWORD(v30) = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)Process, 0LL);
      v59 = 4LL;
      Buffer = (wchar_t *)&v30;
      v29 = *(_QWORD *)&Process[1].IdealNode[4];
      v29 <<= 12;
      v60 = &v29;
      v31 = *(_QWORD *)&Process[1].IdealNode[8];
      v31 <<= 12;
      v62 = &v31;
      v64 = &v42;
      v18 = v43;
      if ( v44 )
        v18 = -1;
      v61 = 8LL;
      v35 = v18;
      v66 = &v35;
      v19 = v45;
      if ( v46 )
        v19 = -1;
      v63 = 8LL;
      v32 = v19;
      v68 = &v32;
      v20 = v47 >> 10;
      v47 >>= 10;
      v65 = 8LL;
      if ( HIDWORD(v47) )
        LODWORD(v20) = -1;
      v67 = 4LL;
      v37 = v20;
      v70 = &v37;
      v21 = v48 >> 10;
      v48 >>= 10;
      v69 = 4LL;
      if ( HIDWORD(v48) )
        LODWORD(v21) = -1;
      v71 = 4LL;
      v34 = v21;
      v72 = &v34;
      v22 = Process + 2;
      v23 = &Process[1].ActiveProcessors.Bitmap[12];
      v74 = v22;
      v76 = v23;
      v24 = -1LL;
      v73 = 4LL;
      v75 = 4LL;
      do
        ++v24;
      while ( *((_BYTE *)v23 + v24) );
      v78 = 0;
      v77 = v24 + 1;
      v10 = 15;
    }
  }
  else
  {
    LODWORD(v28) = Process[1].SwapListEntry.Next;
    v52 = (unsigned __int64 *)&v28;
    v53 = 4LL;
    SessionId = MmGetSessionId(Process);
    v55 = 4LL;
    p_SessionId = (char *)&SessionId;
    v27 = (v11 & 1) != 0;
    if ( (v11 & 8) != 0 )
      v27 = ((v11 & 1) != 0) | 2;
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
    Buffer = p_DestinationString->Buffer;
    v60 = (__int64 *)&EtwpNull;
    v64 = (char *)(a4 + 4);
    v66 = (int *)(a3 + 4);
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
  LODWORD(v5) = EtwWrite(EtwpPsProvRegHandle, v9, 0LL, v10, &UserData);
  return (int)v5;
}
