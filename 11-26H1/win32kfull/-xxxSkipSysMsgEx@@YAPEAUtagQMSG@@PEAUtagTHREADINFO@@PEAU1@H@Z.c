/*
 * XREFs of ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1401948F0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     DelQEntry @ 0x140095C20 (DelQEntry.c)
 *     Feature_YieldInputQueue2__private_GetVariant @ 0x14018AA6C (Feature_YieldInputQueue2__private_GetVariant.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x14019B14C (-RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD @ 0x1401BA098 (WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD.c)
 */

struct tagQMSG *__fastcall xxxSkipSysMsgEx(struct tagTHREADINFO *a1, struct tagQMSG *a2, int a3)
{
  struct tagQMSG *v3; // rbx
  struct tagTHREADINFO *v4; // rbp
  __int64 v5; // rdi
  char v6; // si
  char v7; // r15
  char v8; // r14
  _DWORD *v9; // r12
  int v10; // ebx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  int v15; // eax
  struct MOVESIZEDATA *v16; // rcx
  char v17; // al
  int v18; // esi
  __int64 v19; // rbp
  __int64 v20; // r14
  __int64 v21; // r15
  int v22; // r12d
  __int64 v23; // r13
  int v24; // edi
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  _DWORD *v30; // rdx
  int v31; // eax
  char v32; // bl
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  char v37; // r15
  char v38; // r14
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  __int64 v42; // r13
  __int64 v43; // r12
  bool v44; // r15
  char v45; // r14
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  __int64 v49; // rax
  int v50; // [rsp+20h] [rbp-108h]
  int v51; // [rsp+28h] [rbp-100h]
  int v52; // [rsp+30h] [rbp-F8h]
  int v53; // [rsp+38h] [rbp-F0h]
  char v54; // [rsp+48h] [rbp-E0h]
  bool v55; // [rsp+B0h] [rbp-78h]
  int v56; // [rsp+B4h] [rbp-74h]
  char v57; // [rsp+B8h] [rbp-70h]
  __int64 v58; // [rsp+C0h] [rbp-68h]
  __int64 v59; // [rsp+C8h] [rbp-60h]
  char v60; // [rsp+D0h] [rbp-58h]
  char v64; // [rsp+148h] [rbp+20h]

  v3 = a2;
  v4 = a1;
  v5 = *(_QWORD *)(*((_QWORD *)a1 + 58) + 88LL);
  v57 = v5;
  if ( !v5 )
    return 0LL;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v7 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v8 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v8 = 0;
  }
  if ( v7 || v8 )
  {
    v9 = (_DWORD *)((char *)a2 + 24);
    v10 = *((_DWORD *)a2 + 6);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v12) = v8;
    LOBYTE(v13) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      18,
      24,
      (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
      v10);
    v3 = a2;
  }
  else
  {
    v9 = (_DWORD *)((char *)a2 + 24);
  }
  InputTraceLogging::Delivery::RemoveMessage(v3, *((const struct tagQ **)v4 + 58));
  if ( *(_QWORD *)(v5 + 16) != *((_QWORD *)v3 + 2)
    || (v15 = *(_DWORD *)(v5 + 24), v15 != *v9)
    || v15 != 512 && (*(_QWORD *)(v5 + 104) != *((_QWORD *)v3 + 13) || *(_DWORD *)(v5 + 48) != *((_DWORD *)v3 + 12)) )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
      || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v17 = 0;
    }
    v64 = v17;
    v55 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v18 = *(_DWORD *)(v5 + 48);
      v19 = *(_QWORD *)(v5 + 40);
      v20 = *(_QWORD *)(v5 + 32);
      v21 = *(_QWORD *)(v5 + 16);
      v22 = *(_DWORD *)(v5 + 24);
      v23 = *(_QWORD *)(v5 + 104);
      v24 = *((_DWORD *)v3 + 6);
      v56 = *((_DWORD *)v3 + 12);
      v58 = *((_QWORD *)v3 + 5);
      v59 = *((_QWORD *)v3 + 4);
      v25 = *((_QWORD *)v3 + 2);
      v26 = *((_QWORD *)v3 + 13);
      v60 = v25;
      LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      v27 = W32GetUserSessionState(v16, v14);
      LOBYTE(v28) = v55;
      LOBYTE(v29) = v64;
      v54 = v26;
      v3 = a2;
      WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(v27 + 69152),
        v50,
        v51,
        v52,
        v53,
        (char)a2,
        v54,
        v24,
        v60,
        v59,
        v58,
        v56,
        v57,
        v23,
        v22,
        v21,
        v20,
        v19,
        v18);
      v4 = a1;
      v6 = 1;
    }
    v30 = (_DWORD *)((char *)v3 + 24);
    v5 = *(_QWORD *)(*((_QWORD *)v4 + 58) + 24LL);
    if ( v5 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v5 + 16) == *((_QWORD *)v3 + 2) )
        {
          v31 = *(_DWORD *)(v5 + 24);
          if ( v31 == *v30
            && (v31 == 512
             || *(_QWORD *)(v5 + 104) == *((_QWORD *)v3 + 13) && *(_DWORD *)(v5 + 48) == *((_DWORD *)v3 + 12)) )
          {
            break;
          }
        }
        v5 = *(_QWORD *)v5;
        if ( !v5 )
          goto LABEL_32;
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
        || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v37 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v38 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v38 = 0;
      }
      if ( v37 || v38 )
      {
        v39 = W32GetUserSessionState(WPP_GLOBAL_Control, v30);
        LOBYTE(v40) = v38;
        LOBYTE(v41) = v37;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v41,
          v40,
          *(_QWORD *)(v39 + 69152),
          5,
          18,
          26,
          (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
          v5);
      }
      goto LABEL_53;
    }
LABEL_32:
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
      || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v32 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v6 = 0;
    }
    if ( v32 || v6 )
    {
      v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v30);
      LOBYTE(v34) = v6;
      LOBYTE(v35) = v32;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v35,
        v34,
        *(_QWORD *)(v33 + 69152),
        5,
        18,
        27,
        (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids);
    }
    return 0LL;
  }
LABEL_53:
  v42 = *((_QWORD *)v4 + 58);
  v43 = *(_QWORD *)(v42 + 88);
  if ( v5 == v43 )
  {
    v44 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v45 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v45 = 0;
    }
    if ( v44 || v45 )
    {
      v46 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v47) = v45;
      LOBYTE(v48) = v44;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v48,
        v47,
        *(_QWORD *)(v46 + 69152),
        5,
        18,
        28,
        (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
        v42,
        v43);
    }
    *(_QWORD *)(*((_QWORD *)v4 + 58) + 88LL) = 0LL;
  }
  if ( (unsigned int)Feature_YieldInputQueue2__private_GetVariant() == 3 && (*(_DWORD *)(v5 + 100) & 0x10000000) != 0 )
  {
    v49 = *((_QWORD *)v4 + 58);
    if ( *(_WORD *)(v49 + 548) )
      ++*(_WORD *)(v49 + 550);
  }
  DelQEntry(*((_QWORD *)v4 + 58) + 24LL, v5, a3);
  if ( a3 )
  {
    v5 = 0LL;
  }
  else
  {
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)v5 = 0LL;
  }
  EtwTraceInputProcessDelay(v4);
  *(_DWORD *)(*((_QWORD *)v4 + 58) + 456LL) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (*((_DWORD *)v3 + 25) & 0x40000) == 0 )
  {
    UpdateKeyStateForMessage(v4, v3);
    if ( v5 )
      *(_DWORD *)(v5 + 100) |= 0x40000u;
  }
  return (struct tagQMSG *)v5;
}
