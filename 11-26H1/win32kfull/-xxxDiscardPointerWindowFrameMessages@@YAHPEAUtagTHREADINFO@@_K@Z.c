/*
 * XREFs of ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1401387F4
 * Callers:
 *     xxxDiscardPointerFrameMessagesInternal @ 0x140137EB0 (xxxDiscardPointerFrameMessagesInternal.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1401407C8 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140251CD4 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDq @ 0x140259E5C (WPP_RECORDER_AND_TRACE_SF_DDq.c)
 *     WPP_RECORDER_AND_TRACE_SF_DHD @ 0x1402AA520 (WPP_RECORDER_AND_TRACE_SF_DHD.c)
 */

__int64 __fastcall xxxDiscardPointerWindowFrameMessages(struct tagTHREADINFO *a1, unsigned __int64 a2)
{
  struct tagTHREADINFO *v3; // r13
  __int64 UserSessionState; // rax
  __int64 result; // rax
  char *v6; // r14
  int v7; // edx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rax
  unsigned int v12; // r15d
  int v13; // edi
  unsigned int *v14; // rdx
  __int64 *v15; // r12
  struct MOVESIZEDATA *v16; // rcx
  char v17; // r13
  char v18; // r15
  __int64 v19; // rbx
  int v20; // edi
  int v21; // esi
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  char v28; // r13
  char v29; // r15
  __int16 v30; // bx
  __int16 v31; // di
  int v32; // esi
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  char *v36; // r9
  unsigned int v37; // ebx
  int v38; // eax
  struct MOVESIZEDATA *v39; // rcx
  char v40; // di
  bool v41; // si
  char v42; // bl
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  __int64 v46; // rax
  struct tagTHREADINFO *v47; // rax
  _QWORD *v48; // rcx
  unsigned int i; // ebx
  struct tagTHREADINFO *v50; // rax
  int v51; // [rsp+20h] [rbp-69h]
  int v52; // [rsp+28h] [rbp-61h]
  int v53; // [rsp+30h] [rbp-59h]
  int v54; // [rsp+38h] [rbp-51h]
  char v55; // [rsp+50h] [rbp-39h]
  int v56; // [rsp+60h] [rbp-29h]
  unsigned int v57; // [rsp+64h] [rbp-25h] BYREF
  int v58; // [rsp+68h] [rbp-21h]
  HWND HwndReference; // [rsp+70h] [rbp-19h]
  __int64 *v60; // [rsp+78h] [rbp-11h]
  __int64 v61; // [rsp+80h] [rbp-9h]
  _QWORD v62[11]; // [rsp+88h] [rbp-1h] BYREF
  unsigned __int16 v65; // [rsp+100h] [rbp+77h] BYREF
  unsigned int v66; // [rsp+108h] [rbp+7Fh]

  v57 = 0;
  v3 = a1;
  v65 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  HwndReference = CTouchProcessor::GetHwndReference(*(CTouchProcessor **)(UserSessionState + 3256), a2, &v65, &v57);
  result = ValidateHwnd(HwndReference);
  v61 = result;
  if ( result )
  {
    v6 = 0LL;
    if ( ((*((_BYTE *)v3 + 712) | *(_BYTE *)(**((_QWORD **)v3 + 62) + 16LL)) & 0x10) != 0 )
    {
      v7 = 1;
      v8 = 48LL * v57;
      if ( v8 <= 0xFFFFFFFF && (unsigned int)v8 < 0x2710000 && (_DWORD)v8 )
      {
        v9 = Win32AllocPoolZInit((unsigned int)v8, 1735422805LL);
        v7 = 1;
        v6 = (char *)v9;
      }
    }
    else
    {
      v7 = 0;
    }
    v66 = 0;
    v10 = 0;
    v11 = *((_QWORD *)v3 + 58);
    v12 = 0;
    v56 = 0;
    v13 = v6 != 0LL ? v7 : 0;
    v14 = &WPP_RECORDER_INITIALIZED;
    v58 = v13;
    v15 = *(__int64 **)(v11 + 24);
    if ( v15 )
    {
      do
      {
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200) == 0
          || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v17 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v18 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v18 = 0;
        }
        if ( v17 || v18 )
        {
          v19 = v15[5];
          v20 = *((_DWORD *)v15 + 8);
          v21 = *((_DWORD *)v15 + 6);
          v22 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v23) = v18;
          LOBYTE(v24) = v17;
          WPP_RECORDER_AND_TRACE_SF_DDq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v24,
            v23,
            *(_QWORD *)(v22 + 69152),
            v51,
            10,
            11,
            (__int64)&WPP_2a91d0f5cb08399c149e0bb179d9a0be_Traceguids,
            v21,
            v20,
            v19);
          v13 = v58;
          v10 = v56;
        }
        v25 = (__int64 *)*v15;
        v60 = (__int64 *)*v15;
        v26 = W32GetUserSessionState(v16, v14);
        if ( CTouchProcessor::IsPointerWindowFrameMessage(
               *(CTouchProcessor **)(v26 + 3256),
               a2,
               HwndReference,
               *((_DWORD *)v15 + 6),
               v15[5],
               1) )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200) == 0
            || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            v28 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v29 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
          {
            v29 = 0;
          }
          if ( v28 || v29 )
          {
            v30 = *((_WORD *)v15 + 17);
            v31 = *((_WORD *)v15 + 16);
            v32 = *((_DWORD *)v15 + 6);
            v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v27);
            LOBYTE(v34) = v29;
            LOBYTE(v35) = v28;
            WPP_RECORDER_AND_TRACE_SF_DHD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v35,
              v34,
              *(_QWORD *)(v33 + 69152),
              v51,
              v52,
              v53,
              v54,
              v32,
              v31,
              v30);
            v13 = v58;
            v25 = v60;
          }
          v36 = 0LL;
          if ( v13 )
          {
            v37 = v66;
            if ( v66 < v57 )
              v36 = &v6[48 * v66];
          }
          else
          {
            v37 = v66;
          }
          v3 = a1;
          v38 = DiscardPointerMessage(a1, v15, v61, v36);
          if ( v13 && v38 == 1 )
            v66 = v37 + 1;
          v10 = ++v56;
        }
        else
        {
          v3 = a1;
        }
        v15 = v25;
        v14 = &WPP_RECORDER_INITIALIZED;
      }
      while ( v25 );
      v12 = v66;
      v14 = &WPP_RECORDER_INITIALIZED;
    }
    v39 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200) == 0
      || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v40 = 0;
    }
    v41 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v40 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v42 = v65;
      v43 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      v55 = v42;
      v10 = v56;
      LOBYTE(v44) = v41;
      LOBYTE(v45) = v40;
      WPP_RECORDER_AND_TRACE_SF_qdd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v45,
        v44,
        *(_QWORD *)(v43 + 69152),
        4,
        10,
        13,
        (__int64)&WPP_2a91d0f5cb08399c149e0bb179d9a0be_Traceguids,
        (char)v3,
        v56,
        v55);
    }
    if ( v10 )
    {
      v46 = W32GetUserSessionState(v39, v14);
      CTouchProcessor::UpdateThreadPointerList(
        *(CTouchProcessor **)(v46 + 3256),
        (struct tagTHREADINFO *)((char *)v3 + 1208),
        v65);
    }
    if ( v58 )
    {
      v47 = PtiCurrent((__int64)v39);
      v62[0] = *((_QWORD *)v47 + 47);
      v48 = v62;
      *((_QWORD *)v47 + 47) = v62;
      v62[2] = Win32FreePool;
      v62[1] = v6;
      for ( i = 0; i < v12; xxxCallHook(0LL, 1LL, (__int64)&v6[48 * i++], 3) )
      {
        if ( i >= v57 )
          break;
      }
      v50 = PtiCurrent((__int64)v48);
      *((_QWORD *)v50 + 47) = v62[0];
    }
    if ( v6 )
      Win32FreePool(v6);
    return 1LL;
  }
  return result;
}
