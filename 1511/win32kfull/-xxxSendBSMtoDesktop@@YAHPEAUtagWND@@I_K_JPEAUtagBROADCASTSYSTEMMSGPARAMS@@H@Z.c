/*
 * XREFs of ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C008E100
 * Callers:
 *     xxxSendMessageBSM @ 0x1C008D820 (xxxSendMessageBSM.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     FreeHwndList @ 0x1C006D900 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 *     xxxSendNotifyMessage @ 0x1C0078B80 (xxxSendNotifyMessage.c)
 *     CanForceForeground @ 0x1C008B4E0 (CanForceForeground.c)
 *     _PostTransformableMessageIL @ 0x1C009176C (_PostTransformableMessageIL.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00DBB38 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
  unsigned __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // edx
  __int64 v17; // rsi
  __int16 v18; // dx
  int v19; // esi
  int v20; // r13d
  int v21; // esi
  BOOL v22; // r12d
  int v23; // r14d
  __m128i *v24; // r9
  __int64 v25; // rdx
  void *v26; // rcx
  PETHREAD *v27; // rcx
  PETHREAD *v28; // rcx
  __m128i v29; // xmm0
  _QWORD *v30; // rcx
  bool v31; // zf
  void *v32; // rax
  HANDLE InputBuffer; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v35; // [rsp+60h] [rbp-A0h]
  void *Handle; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+70h] [rbp-90h]
  int v38; // [rsp+78h] [rbp-88h] BYREF
  int v39; // [rsp+7Ch] [rbp-84h]
  __int64 v40; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+88h] [rbp-78h]
  __m128i *v42; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v43; // [rsp+98h] [rbp-68h]
  struct tagBWL *v44; // [rsp+A0h] [rbp-60h]
  _DWORD v45[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  _QWORD v48[3]; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v49; // [rsp+D8h] [rbp-28h] BYREF
  int v50; // [rsp+E8h] [rbp-18h]

  LODWORD(Handle) = 0;
  v7 = 0;
  v8 = a4;
  v42 = (__m128i *)a4;
  v41 = gptiCurrent;
  v10 = 1;
  v35 = a3;
  v34 = 1;
  if ( a2 - 1024 <= 0xBBFF )
  {
    LODWORD(v11) = 1;
    UserSetLastError(87);
  }
  else
  {
    LODWORD(v11) = 0;
  }
  if ( a1 )
  {
    if ( !a6 && (a2 == 26 || a2 == 21 || a2 == 29 || a2 == 295 || a2 == 794) )
      a6 = 1;
    v44 = BuildHwndList(*((_QWORD *)a1 + 12), 2, 0LL);
    if ( v44 )
    {
      if ( (*((_DWORD *)a5 + 1) & 0x90) == 0x80
        && *((_QWORD *)a1 + 3) == grpdeskRitInput
        && ((*(_DWORD *)(v41 + 440) & 8) != 0
         || (unsigned int)CanForceForeground(*(const struct tagPROCESSINFO **)(v41 + 376))) )
      {
        SetLastInputWoken(0LL, 0LL);
      }
      if ( a2 != 537 || ((v35 - 0x8000) & 0xFFFFFFFFFFFFFFFBuLL) != 0 || *(_DWORD *)(v8 + 4) != 2 )
        goto LABEL_14;
      if ( (*(_DWORD *)(v8 + 12) & 0x40000000) == 0 )
      {
        v29 = *(__m128i *)v8;
        v50 = *(_DWORD *)(v8 + 16);
        v31 = (*((_DWORD *)a5 + 1) & 0x400) == 0;
        v49 = v29;
        v49.m128i_i32[3] = _mm_srli_si128(v29, 8).m128i_i32[1] | 0x40000000;
        if ( v31 )
        {
          InputBuffer = 0LL;
          GetProcessLuid(0LL, &InputBuffer);
          if ( InputBuffer == (HANDLE)__PAIR64__(luidSystem[1], luidSystem[0]) )
            v7 = 1;
        }
LABEL_14:
        v43 = (unsigned __int64 *)((char *)v44 + 32);
        v12 = *((_QWORD *)v44 + 4);
        if ( v12 == 1 )
        {
LABEL_15:
          FreeHwndList(v44);
          return v10;
        }
        v11 = (int)v11;
        v47 = v7;
        v46 = (int)v11;
        while ( 1 )
        {
          v37 = 0;
          v14 = HMValidateHandleNoSecure(v12, 1);
          v15 = v14;
          if ( !v14 )
            goto LABEL_44;
          v16 = *((_DWORD *)a5 + 1);
          v17 = v41;
          if ( (v16 & 2) != 0 && *(_QWORD *)(*(_QWORD *)(v14 + 16) + 384LL) == *(_QWORD *)(v41 + 384) )
            goto LABEL_44;
          if ( (v16 & 0x400) != 0 )
          {
            v30 = *(_QWORD **)(v14 + 16);
            v39 = 0;
            v38 = 0;
            if ( (int)GetProcessLuid(*v30, &v38) < 0 || *((_DWORD *)a5 + 8) != v38 || *((_DWORD *)a5 + 9) != v39 )
              goto LABEL_44;
          }
          if ( v47 == 1 )
          {
            if ( (int)GetProcessLuid(**(_QWORD **)(v15 + 16), v45) < 0 )
              goto LABEL_44;
            if ( luidSystem[0] != v45[0] || luidSystem[1] != v45[1] )
              v37 = 1;
          }
          if ( (*(_WORD *)(v15 + 66) & 0x3FFF) != 0x29C )
          {
            v18 = *(_WORD *)(*(_QWORD *)(v15 + 152) + 8LL);
            if ( *(_WORD *)(gpsi + 892LL) != v18
              && gaOleMainThreadWndClass != v18
              && (!v11 || (*(_BYTE *)(v15 + 45) & 2) == 0) )
            {
              v48[0] = *(_QWORD *)(v17 + 368);
              *(_QWORD *)(v17 + 368) = v48;
              v48[1] = v15;
              ++*(_DWORD *)(v15 + 8);
              v19 = *((_DWORD *)a5 + 1);
              if ( (v19 & 0x10) != 0 )
              {
                PostTransformableMessageIL((struct tagWND *)v15, a2, v35, v8, a6);
              }
              else if ( (v19 & 0x100) != 0 )
              {
                xxxSendNotifyMessage((struct tagWND *)v15, a2, v35, (struct _LARGE_STRING *)v8, a6);
              }
              else if ( (v19 & 0x20000000) != 0 )
              {
                QueueNotifyTransformableMessage((struct tagWND *)v15, a2, v35, v8, a6, 1);
              }
              else
              {
                v40 = 0LL;
                v20 = v19 & 8;
                v21 = v19 & 0x20;
                v22 = a2 == 536 && v35 == 4;
                if ( v20 )
                  v23 = v22 ? 2000 : 5000;
                else
                  v23 = 0;
                if ( v22 )
                {
                  v27 = *(PETHREAD **)(v15 + 16);
                  InputBuffer = 0LL;
                  InputBuffer = PsGetThreadProcessId(*v27);
                  ZwPowerInformation(TraceApplicationPowerMessage, &InputBuffer, 8u, 0LL, 0);
                }
                v24 = &v49;
                if ( !v37 )
                  v24 = v42;
                if ( xxxSendTransformableMessageTimeout(
                       (struct tagWND *)v15,
                       a2,
                       v35,
                       (__int64)v24,
                       (v20 != 0 ? 2 : 0) | (*((unsigned __int8 *)a5 + 4) >> 3) & 8u,
                       v23,
                       &v40,
                       a6,
                       1) )
                {
                  if ( (*((_DWORD *)a5 + 1) & 1) != 0 )
                  {
                    v10 = 0;
                    if ( a2 == 17 )
                      v31 = v40 == 0;
                    else
                      v31 = v40 == 1112363332;
                    LOBYTE(v10) = !v31;
                    v34 = v10;
                  }
                  else
                  {
                    v10 = v34;
                  }
                }
                else
                {
                  v10 = v21;
                  v34 = v21;
                }
                if ( v22 )
                {
                  v28 = *(PETHREAD **)(v15 + 16);
                  InputBuffer = 0LL;
                  InputBuffer = PsGetThreadProcessId(*v28);
                  ZwPowerInformation(TraceApplicationPowerMessageEnd, &InputBuffer, 8u, 0LL, 0);
                }
                if ( !v10 )
                {
                  v31 = (*((_DWORD *)a5 + 1) & 0x200) == 0;
                  *((_QWORD *)a5 + 3) = *(_QWORD *)v15;
                  if ( !v31 )
                  {
                    v26 = *(void **)(v15 + 24);
                    v32 = 0LL;
                    Handle = 0LL;
                    if ( v26 )
                    {
                      ObOpenObjectByPointer(v26, 0, 0LL, 0x1F0003u, 0LL, 1, &Handle);
                      v32 = Handle;
                    }
                    *((_QWORD *)a5 + 2) = v32;
                  }
                  LODWORD(Handle) = 1;
                }
                v11 = v46;
                v8 = (__int64)v42;
              }
              ThreadUnlock1(v26, v25);
              if ( (_DWORD)Handle )
                goto LABEL_15;
            }
          }
LABEL_44:
          v12 = *++v43;
          if ( *v43 == 1 )
            goto LABEL_15;
        }
      }
    }
  }
  return 0LL;
}
