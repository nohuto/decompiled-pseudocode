/*
 * XREFs of ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C009C938
 * Callers:
 *     xxxSendMessageBSM @ 0x1C009C7E0 (xxxSendMessageBSM.c)
 * Callees:
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     CanForceForeground @ 0x1C009AF60 (CanForceForeground.c)
 *     _PostTransformableMessageIL @ 0x1C009CD54 (_PostTransformableMessageIL.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxSendNotifyMessage @ 0x1C00AA4C0 (xxxSendNotifyMessage.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00F994C (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendBSMtoDesktop(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  int v7; // esi
  __int64 v8; // r12
  unsigned int v10; // r13d
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rsi
  int v20; // esi
  int v21; // r13d
  int v22; // esi
  BOOL v23; // r12d
  int v24; // r14d
  _OWORD *v25; // r9
  __int64 v26; // rdx
  void *v27; // rcx
  PETHREAD *v28; // rcx
  PETHREAD *v29; // rcx
  __m128i v30; // xmm0
  _QWORD *v31; // rcx
  bool v32; // zf
  void *v33; // rax
  int v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v36; // [rsp+60h] [rbp-A0h]
  int v37; // [rsp+68h] [rbp-98h]
  void *Handle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE InputBuffer; // [rsp+78h] [rbp-88h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h]
  _DWORD v43[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v45; // [rsp+A8h] [rbp-58h]
  struct tagBWL *v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  _QWORD v48[3]; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v49; // [rsp+D8h] [rbp-28h] BYREF
  int v50; // [rsp+E8h] [rbp-18h]

  LODWORD(Handle) = 0;
  v7 = 0;
  v8 = a4;
  v42 = a4;
  v40 = gptiCurrent;
  v10 = 1;
  v36 = a3;
  v34 = 1;
  if ( a2 - 1024 <= 0xBBFF )
  {
    LODWORD(v11) = 1;
    UserSetLastError(87LL);
  }
  else
  {
    LODWORD(v11) = 0;
  }
  if ( a1 )
  {
    if ( !a6 && (a2 == 26 || a2 == 21 || a2 == 29 || a2 == 295 || a2 == 794) )
      a6 = 1;
    v46 = BuildHwndList(*((_QWORD *)a1 + 12), (struct tagWND *)2, 0LL);
    if ( v46 )
    {
      if ( (*((_DWORD *)a5 + 1) & 0x90) == 0x80
        && *((_QWORD *)a1 + 3) == grpdeskRitInput
        && ((*(_DWORD *)(v40 + 440) & 8) != 0 || (unsigned int)CanForceForeground(*(_QWORD *)(v40 + 376))) )
      {
        SetLastInputWoken(0LL, 0LL);
      }
      if ( a2 != 537 || ((v36 - 0x8000) & 0xFFFFFFFFFFFFFFFBuLL) != 0 || *(_DWORD *)(v8 + 4) != 2 )
        goto LABEL_14;
      if ( (*(_DWORD *)(v8 + 12) & 0x40000000) == 0 )
      {
        v30 = *(__m128i *)v8;
        v50 = *(_DWORD *)(v8 + 16);
        v32 = (*((_DWORD *)a5 + 1) & 0x400) == 0;
        v49 = v30;
        v49.m128i_i32[3] = _mm_srli_si128(v30, 8).m128i_i32[1] | 0x40000000;
        if ( v32 )
        {
          v35 = 0LL;
          GetProcessLuid(0LL, &v35);
          if ( v35 == __PAIR64__(luidSystem[1], luidSystem[0]) )
            v7 = 1;
        }
LABEL_14:
        v45 = (unsigned __int64 *)((char *)v46 + 32);
        v15 = *((_QWORD *)v46 + 4);
        if ( v15 == 1 )
        {
LABEL_15:
          FreeHwndList(v46);
          return v10;
        }
        v11 = (int)v11;
        v47 = v7;
        v44 = (int)v11;
        while ( 1 )
        {
          v37 = 0;
          LOBYTE(v12) = 1;
          v17 = HMValidateHandleNoSecure(v15, v12, v13, v14);
          v18 = v17;
          if ( !v17 )
            goto LABEL_44;
          v12 = *((unsigned int *)a5 + 1);
          v19 = v40;
          if ( (v12 & 2) != 0 && *(_QWORD *)(*(_QWORD *)(v17 + 16) + 384LL) == *(_QWORD *)(v40 + 384) )
            goto LABEL_44;
          if ( (v12 & 0x400) != 0 )
          {
            v31 = *(_QWORD **)(v17 + 16);
            v35 = 0LL;
            if ( (int)GetProcessLuid(*v31, &v35) < 0 || *((_QWORD *)a5 + 4) != v35 )
              goto LABEL_44;
          }
          v13 = 1LL;
          if ( v47 == 1 )
          {
            if ( (int)GetProcessLuid(**(_QWORD **)(v18 + 16), v43) < 0 )
              goto LABEL_44;
            if ( luidSystem[0] == v43[0] && luidSystem[1] == v43[1] )
            {
              v13 = 1LL;
            }
            else
            {
              v13 = 1LL;
              v37 = 1;
            }
          }
          if ( (*(_WORD *)(v18 + 66) & 0x3FFF) != 0x29C )
          {
            v12 = *(unsigned __int16 *)(*(_QWORD *)(v18 + 152) + 8LL);
            if ( *(_WORD *)(gpsi + 892LL) != (_WORD)v12
              && gaOleMainThreadWndClass != (_WORD)v12
              && (!v11 || (*(_BYTE *)(v18 + 45) & 2) == 0) )
            {
              v48[0] = *(_QWORD *)(v19 + 368);
              *(_QWORD *)(v19 + 368) = v48;
              v48[1] = v18;
              ++*(_DWORD *)(v18 + 8);
              v20 = *((_DWORD *)a5 + 1);
              if ( (v20 & 0x10) != 0 )
              {
                PostTransformableMessageIL((struct tagWND *)v18, a2, v36, v8, a6);
              }
              else if ( (v20 & 0x100) != 0 )
              {
                xxxSendNotifyMessage(v18, a2, v36, v8, a6);
              }
              else if ( (v20 & 0x20000000) != 0 )
              {
                QueueNotifyTransformableMessage((struct tagWND *)v18, a2, v36, v8, a6, 1);
              }
              else
              {
                BugCheckParameter3 = 0LL;
                v21 = v20 & 8;
                v22 = v20 & 0x20;
                v23 = a2 == 536 && v36 == 4;
                if ( v21 )
                  v24 = v23 ? 2000 : 5000;
                else
                  v24 = 0;
                if ( v23 )
                {
                  v28 = *(PETHREAD **)(v18 + 16);
                  InputBuffer = 0LL;
                  InputBuffer = PsGetThreadProcessId(*v28);
                  ZwPowerInformation(TraceApplicationPowerMessage, &InputBuffer, 8u, 0LL, 0);
                }
                v25 = &v49;
                if ( !v37 )
                  v25 = (_OWORD *)v42;
                if ( xxxSendTransformableMessageTimeout(
                       (struct tagWND *)v18,
                       a2,
                       v36,
                       (__int64)v25,
                       (v21 != 0 ? 2 : 0) | (*((unsigned __int8 *)a5 + 4) >> 3) & 8u,
                       v24,
                       (__int64 *)&BugCheckParameter3,
                       a6,
                       1) )
                {
                  if ( (*((_DWORD *)a5 + 1) & 1) != 0 )
                  {
                    v10 = 0;
                    if ( a2 == 17 )
                      v32 = BugCheckParameter3 == 0;
                    else
                      v32 = BugCheckParameter3 == 1112363332;
                    LOBYTE(v10) = !v32;
                    v34 = v10;
                  }
                  else
                  {
                    v10 = v34;
                  }
                }
                else
                {
                  v10 = v22;
                  v34 = v22;
                }
                if ( v23 )
                {
                  v29 = *(PETHREAD **)(v18 + 16);
                  InputBuffer = 0LL;
                  InputBuffer = PsGetThreadProcessId(*v29);
                  ZwPowerInformation(TraceApplicationPowerMessageEnd, &InputBuffer, 8u, 0LL, 0);
                }
                if ( !v10 )
                {
                  v32 = (*((_DWORD *)a5 + 1) & 0x200) == 0;
                  *((_QWORD *)a5 + 3) = *(_QWORD *)v18;
                  if ( !v32 )
                  {
                    v27 = *(void **)(v18 + 24);
                    v33 = 0LL;
                    Handle = 0LL;
                    if ( v27 )
                    {
                      ObOpenObjectByPointer(v27, 0, 0LL, 0x1F0003u, 0LL, 1, &Handle);
                      v33 = Handle;
                    }
                    *((_QWORD *)a5 + 2) = v33;
                  }
                  LODWORD(Handle) = 1;
                }
                v11 = v44;
                v8 = v42;
              }
              ThreadUnlock1(v27, v26);
              if ( (_DWORD)Handle )
                goto LABEL_15;
            }
          }
LABEL_44:
          v15 = *++v45;
          if ( *v45 == 1 )
            goto LABEL_15;
        }
      }
    }
  }
  return 0LL;
}
