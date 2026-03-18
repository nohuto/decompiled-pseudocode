/*
 * XREFs of ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C004E3B8
 * Callers:
 *     xxxSendMessageBSM @ 0x1C004E260 (xxxSendMessageBSM.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C004DCF0 (xxxSendNotifyMessage.c)
 *     _PostTransformableMessageIL @ 0x1C004E7D4 (_PostTransformableMessageIL.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     CanForceForeground @ 0x1C0080A70 (CanForceForeground.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00D53CC (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
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
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rsi
  int v18; // esi
  int v19; // r13d
  int v20; // esi
  BOOL v21; // r12d
  int v22; // r14d
  __m128i *v23; // r9
  __int64 v24; // rdx
  void *v25; // rcx
  PETHREAD *v26; // rcx
  PETHREAD *v27; // rcx
  __m128i v28; // xmm0
  _QWORD *v29; // rcx
  bool v30; // zf
  void *v31; // rax
  HANDLE InputBuffer; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v34; // [rsp+60h] [rbp-A0h]
  void *Handle; // [rsp+68h] [rbp-98h] BYREF
  int v36; // [rsp+70h] [rbp-90h]
  int v37; // [rsp+78h] [rbp-88h] BYREF
  int v38; // [rsp+7Ch] [rbp-84h]
  __int64 v39; // [rsp+80h] [rbp-80h] BYREF
  __int64 v40; // [rsp+88h] [rbp-78h]
  __m128i *v41; // [rsp+90h] [rbp-70h]
  _QWORD *v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  _DWORD v44[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  _QWORD v47[3]; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v48; // [rsp+D8h] [rbp-28h] BYREF
  int v49; // [rsp+E8h] [rbp-18h]

  LODWORD(Handle) = 0;
  v7 = 0;
  v8 = a4;
  v41 = (__m128i *)a4;
  v40 = gptiCurrent;
  v10 = 1;
  v34 = a3;
  v33 = 1;
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
    v43 = BuildHwndList(*((_QWORD *)a1 + 12), 2LL, 0LL);
    if ( v43 )
    {
      if ( (*((_DWORD *)a5 + 1) & 0x90) == 0x80
        && *((_QWORD *)a1 + 3) == grpdeskRitInput
        && ((*(_DWORD *)(v40 + 448) & 8) != 0 || (unsigned int)CanForceForeground(*(_QWORD *)(v40 + 384))) )
      {
        SetLastInputWoken(0LL, 0LL);
      }
      if ( a2 != 537 || ((v34 - 0x8000) & 0xFFFFFFFFFFFFFFFBuLL) != 0 || *(_DWORD *)(v8 + 4) != 2 )
        goto LABEL_14;
      if ( (*(_DWORD *)(v8 + 12) & 0x40000000) == 0 )
      {
        v28 = *(__m128i *)v8;
        v49 = *(_DWORD *)(v8 + 16);
        v30 = (*((_DWORD *)a5 + 1) & 0x400) == 0;
        v48 = v28;
        v48.m128i_i32[3] = _mm_srli_si128(v28, 8).m128i_i32[1] | 0x40000000;
        if ( v30 )
        {
          InputBuffer = 0LL;
          GetProcessLuid(0LL, &InputBuffer);
          if ( InputBuffer == (HANDLE)__PAIR64__(luidSystem[1], luidSystem[0]) )
            v7 = 1;
        }
LABEL_14:
        v42 = (_QWORD *)(v43 + 32);
        v13 = *(_QWORD *)(v43 + 32);
        if ( v13 == 1 )
        {
LABEL_15:
          FreeHwndList(v43);
          return v10;
        }
        v11 = (int)v11;
        v46 = v7;
        v45 = (int)v11;
        while ( 1 )
        {
          v36 = 0;
          LOBYTE(v12) = 1;
          v15 = HMValidateHandleNoSecure(v13, v12);
          v16 = v15;
          if ( !v15 )
            goto LABEL_44;
          v12 = *((unsigned int *)a5 + 1);
          v17 = v40;
          if ( (v12 & 2) != 0 && *(_QWORD *)(*(_QWORD *)(v15 + 16) + 392LL) == *(_QWORD *)(v40 + 392) )
            goto LABEL_44;
          if ( (v12 & 0x400) != 0 )
          {
            v29 = *(_QWORD **)(v15 + 16);
            v38 = 0;
            v37 = 0;
            if ( (int)GetProcessLuid(*v29, &v37) < 0 || *((_DWORD *)a5 + 8) != v37 || *((_DWORD *)a5 + 9) != v38 )
              goto LABEL_44;
          }
          if ( v46 == 1 )
          {
            if ( (int)GetProcessLuid(**(_QWORD **)(v16 + 16), v44) < 0 )
              goto LABEL_44;
            if ( luidSystem[0] != v44[0] || luidSystem[1] != v44[1] )
              v36 = 1;
          }
          if ( (*(_WORD *)(v16 + 66) & 0x3FFF) != 0x29C )
          {
            v12 = *(unsigned __int16 *)(*(_QWORD *)(v16 + 152) + 8LL);
            if ( *(_WORD *)(gpsi + 892LL) != (_WORD)v12
              && gaOleMainThreadWndClass != (_WORD)v12
              && (!v11 || (*(_BYTE *)(v16 + 45) & 2) == 0) )
            {
              v47[0] = *(_QWORD *)(v17 + 376);
              *(_QWORD *)(v17 + 376) = v47;
              v47[1] = v16;
              ++*(_DWORD *)(v16 + 8);
              v18 = *((_DWORD *)a5 + 1);
              if ( (v18 & 0x10) != 0 )
              {
                PostTransformableMessageIL((struct tagWND *)v16, a2, v34, v8, a6);
              }
              else if ( (v18 & 0x100) != 0 )
              {
                xxxSendNotifyMessage((struct tagWND *)v16, a2, v34, (struct _LARGE_STRING *)v8, a6);
              }
              else if ( (v18 & 0x20000000) != 0 )
              {
                QueueNotifyTransformableMessage((struct tagWND *)v16, a2, v34, v8, a6, 1);
              }
              else
              {
                v39 = 0LL;
                v19 = v18 & 8;
                v20 = v18 & 0x20;
                v21 = a2 == 536 && v34 == 4;
                if ( v19 )
                  v22 = v21 ? 2000 : 5000;
                else
                  v22 = 0;
                if ( v21 )
                {
                  v26 = *(PETHREAD **)(v16 + 16);
                  InputBuffer = 0LL;
                  InputBuffer = PsGetThreadProcessId(*v26);
                  ZwPowerInformation(TraceApplicationPowerMessage, &InputBuffer, 8u, 0LL, 0);
                }
                v23 = &v48;
                if ( !v36 )
                  v23 = v41;
                if ( xxxSendTransformableMessageTimeout(
                       (struct tagWND *)v16,
                       a2,
                       v34,
                       (__int64)v23,
                       (v19 != 0 ? 2 : 0) | (*((unsigned __int8 *)a5 + 4) >> 3) & 8u,
                       v22,
                       (__int64)&v39,
                       a6,
                       1) )
                {
                  if ( (*((_DWORD *)a5 + 1) & 1) != 0 )
                  {
                    v10 = 0;
                    if ( a2 == 17 )
                      v30 = v39 == 0;
                    else
                      v30 = v39 == 1112363332;
                    LOBYTE(v10) = !v30;
                    v33 = v10;
                  }
                  else
                  {
                    v10 = v33;
                  }
                }
                else
                {
                  v10 = v20;
                  v33 = v20;
                }
                if ( v21 )
                {
                  v27 = *(PETHREAD **)(v16 + 16);
                  InputBuffer = 0LL;
                  InputBuffer = PsGetThreadProcessId(*v27);
                  ZwPowerInformation(TraceApplicationPowerMessageEnd, &InputBuffer, 8u, 0LL, 0);
                }
                if ( !v10 )
                {
                  v30 = (*((_DWORD *)a5 + 1) & 0x200) == 0;
                  *((_QWORD *)a5 + 3) = *(_QWORD *)v16;
                  if ( !v30 )
                  {
                    v25 = *(void **)(v16 + 24);
                    v31 = 0LL;
                    Handle = 0LL;
                    if ( v25 )
                    {
                      ObOpenObjectByPointer(v25, 0, 0LL, 0x1F0003u, 0LL, 1, &Handle);
                      v31 = Handle;
                    }
                    *((_QWORD *)a5 + 2) = v31;
                  }
                  LODWORD(Handle) = 1;
                }
                v11 = v45;
                v8 = (__int64)v41;
              }
              ThreadUnlock1(v25, v24);
              if ( (_DWORD)Handle )
                goto LABEL_15;
            }
          }
LABEL_44:
          v13 = *++v42;
          if ( *v42 == 1LL )
            goto LABEL_15;
        }
      }
    }
  }
  return 0LL;
}
