/*
 * XREFs of xxxInjectTouchInput @ 0x1C01D4AF4
 * Callers:
 *     NtUserInjectTouchInput @ 0x1C0216970 (NtUserInjectTouchInput.c)
 * Callees:
 *     CheckGrantedAccess @ 0x1C007163C (CheckGrantedAccess.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00A9964 (IsForegroundShellFrameQueueAccessible.c)
 *     GetDpiForSystem @ 0x1C0129578 (GetDpiForSystem.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01D3980 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01D3DEC (-SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagMONITOR@@I@Z @ 0x1C01D4048 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagMONI.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01D42A8 (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?_ValidateInjectionQpcCount@@YAH_K00HH@Z @ 0x1C01D431C (-_ValidateInjectionQpcCount@@YAH_K00HH@Z.c)
 *     ?_ValidateInjectionTime@@YAHKKKHH@Z @ 0x1C01D4390 (-_ValidateInjectionTime@@YAHKKKHH@Z.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01D43F8 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01D452C (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInjectTouchInput(unsigned int a1, struct tagPOINTER_TOUCH_INFO *a2)
{
  struct tagPOINTER_TOUCH_INFO *v2; // r13
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rbp
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  unsigned int v17; // r8d
  char *v18; // rax
  unsigned int v19; // ecx
  int v20; // r9d
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rax
  struct tagINJECTED_CONTACT *v25; // rdi
  __int64 v26; // rcx
  unsigned __int64 v27; // r9
  int v28; // r8d
  _DWORD *v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // r8
  int *v36; // r8
  __int64 v37; // r9
  __int64 v38; // rsi
  int v39; // edi
  ULONG v40; // ebp
  int QpcBasedTouchStackTime; // eax
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  int v46; // ecx
  INT *v47; // r15
  char *v48; // rsi
  __int64 v49; // r13
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  INT DpiForSystem; // edi
  INT v55; // ebx
  INT v56; // eax
  INT v57; // ecx
  int v58; // edx
  _DWORD *v59; // rax
  int v60; // r8d
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v64; // [rsp+38h] [rbp-70h]
  __int64 v65; // [rsp+40h] [rbp-68h]
  unsigned __int64 v66; // [rsp+48h] [rbp-60h]
  __int128 v67; // [rsp+50h] [rbp-58h]
  __int64 v68; // [rsp+60h] [rbp-48h]
  __int64 v69; // [rsp+68h] [rbp-40h]
  unsigned int v71; // [rsp+C0h] [rbp+18h]
  int v72; // [rsp+C8h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  LODWORD(v63) = 0;
  v4 = *(_QWORD *)(gptiCurrent + 376LL);
  CheckCurrentInjectionConfiguration();
  if ( *(_QWORD *)(gptiCurrent + 408LL) != grpdeskRitInput
    || !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 776LL), 0x20u) )
  {
    goto LABEL_2;
  }
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
    return 1LL;
  if ( !gpqForeground
    || (v7 = *(_QWORD *)(gptiCurrent + 376LL),
        v8 = *(_QWORD *)(gpqForeground + 380LL),
        v9 = *(_QWORD *)(v7 + 824),
        !gbEnforceUIPI)
    || (unsigned int)v9 > (unsigned int)v8
    || (_DWORD)v9 == (_DWORD)v8
    && ((v10 = HIDWORD(v9), v11 = HIDWORD(v8), (_DWORD)v10 == (_DWORD)v11) || (_DWORD)v10 == -1 || (_DWORD)v11 == -1)
    || *(int *)(v7 + 12) < 0
    || IsForegroundShellFrameQueueAccessible(gptiCurrent) )
  {
    if ( *(_QWORD *)(v4 + 840) )
    {
      gppiInputProvider = v4;
      v12 = *(_QWORD *)(v4 + 840);
      v13 = *(unsigned int *)(v12 + 20);
      if ( (unsigned int)v3 > (unsigned int)v13 )
        goto LABEL_19;
      v14 = *((_QWORD *)v2 + 10);
      v71 = *((_DWORD *)v2 + 16);
      v15 = *(_DWORD *)(v12 + 32);
      v16 = *(_QWORD *)(v12 + 56);
      v64 = v15;
      v66 = v16;
      v65 = v14;
      if ( !(unsigned int)SortTouchContacts(v2, v3) )
        goto LABEL_19;
      v17 = 0;
      if ( (_DWORD)v3 )
      {
        v18 = (char *)v2 + 12;
        while ( *((_DWORD *)v18 - 2) < (unsigned int)v13 && *((_DWORD *)v18 - 3) == 2 )
        {
          v19 = *(_DWORD *)v18 & 0xFFFF7FFF;
          if ( v19 != 0x40000 )
          {
            if ( v19 - 0x20000 > 6 || (v20 = 69, !_bittest(&v20, v19 - 0x20000)) )
            {
              if ( v19 != 65542 && v19 != 262146 )
                break;
            }
          }
          v21 = *((_DWORD *)v18 + 22);
          if ( (v21 & 2) != 0 && *((_DWORD *)v18 + 31) >= 0x168u )
            break;
          if ( (v21 & 4) != 0 && *((_DWORD *)v18 + 32) > 0xFDE8u
            || *((_DWORD *)v18 + 21)
            || *((_DWORD *)v18 + 28)
            || *((_DWORD *)v18 + 30)
            || *((_DWORD *)v18 + 27)
            || *((_DWORD *)v18 + 29)
            || *((_DWORD *)v18 - 1)
            || *(_QWORD *)(v18 + 4)
            || *(_QWORD *)(v18 + 12)
            || *((_DWORD *)v18 + 7)
            || *((_DWORD *)v18 + 8)
            || *((_DWORD *)v18 + 9)
            || *((_DWORD *)v18 + 10)
            || *((_DWORD *)v18 + 11)
            || *((_DWORD *)v18 + 12)
            || *((_DWORD *)v18 + 14)
            || *((_DWORD *)v18 + 15)
            || *((_DWORD *)v18 + 16)
            || *((_DWORD *)v18 + 19) )
          {
            break;
          }
          ++v17;
          v18 += 144;
          if ( v17 >= (unsigned int)v3 )
            goto LABEL_53;
        }
        goto LABEL_19;
      }
LABEL_53:
      v22 = *(_QWORD *)(v4 + 840);
      v23 = *(_QWORD *)(v22 + 8);
      v69 = v23;
      if ( !*(_DWORD *)(*(_QWORD *)(v23 + 480) + 1568LL) )
      {
        *(_DWORD *)(v22 + 24) = 0;
        *(_DWORD *)(*(_QWORD *)(v4 + 840) + 28LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v4 + 840) + 32LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v4 + 840) + 40LL) = 0;
        *(_QWORD *)(*(_QWORD *)(v4 + 840) + 48LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)(v4 + 840) + 56LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(v4 + 840) + 64LL) = 0;
      }
      v24 = *(_QWORD *)(v4 + 840);
      v25 = *(struct tagINJECTED_CONTACT **)(v24 + 72);
      if ( v71 && v14 )
        goto LABEL_61;
      if ( *(_DWORD *)(v24 + 24) && v14 )
        goto LABEL_61;
      v26 = *(_QWORD *)(v24 + 48);
      if ( v26 )
      {
        if ( v71 )
          goto LABEL_61;
      }
      if ( v14 || (v28 = 1, v26) )
        v28 = 0;
      v72 = v28;
      if ( !*(_DWORD *)(*(_QWORD *)(v23 + 480) + 1568LL) && (_DWORD)v13 )
      {
        v29 = (_DWORD *)((char *)v25 + 8);
        v30 = v13;
        do
        {
          if ( ((*v29 - 0x20000) & 0xFFFDFFFF) != 0 )
          {
            *v29 = 0x40000;
            LODWORD(v63) = 1;
          }
          v29 += 3;
          --v30;
        }
        while ( v30 );
      }
      v31 = *(_QWORD *)(v4 + 840);
      v32 = 0;
      if ( v28 )
      {
        v33 = *(_QWORD *)(v23 + 480);
        LOBYTE(v32) = *(_DWORD *)(v33 + 1568) == 0;
        LOBYTE(v34) = _ValidateInjectionTime(v71, v64, *(_DWORD *)(v33 + 848), v32, *(_DWORD *)(v31 + 40));
        if ( !v34 )
        {
          v24 = *(_QWORD *)(v4 + 840);
LABEL_61:
          LODWORD(v27) = *(_DWORD *)(v24 + 28);
LABEL_62:
          xxxSendLastFrameTouchUp(v25, (struct DEVICEINFO *)v23, v13, v27);
LABEL_19:
          v5 = 87LL;
          goto LABEL_3;
        }
      }
      else
      {
        v35 = *(_QWORD *)(v23 + 480);
        LOBYTE(v32) = *(_DWORD *)(v35 + 1568) == 0;
        if ( !(unsigned int)_ValidateInjectionQpcCount(v14, v66, *(_QWORD *)(v35 + 856), v32, *(_DWORD *)(v31 + 64)) )
        {
          v27 = (unsigned __int64)(10000LL * *(_QWORD *)(*(_QWORD *)(v4 + 840) + 48LL)) / gliQpcFreq.QuadPart;
          goto LABEL_62;
        }
      }
      *(_QWORD *)&v67 = **(_QWORD **)(v4 + 840);
      if ( !(unsigned int)ValidateInjectedTouchFrame((unsigned int)v3, v2, v25, (struct tagMONITOR *)v67, v13) )
      {
        xxxSendLastFrameTouchUp(v25, (struct DEVICEINFO *)v23, v13, *(_DWORD *)(*(_QWORD *)(v4 + 840) + 28LL));
        v5 = 1460LL;
        if ( (_DWORD)v63 )
          goto LABEL_3;
        goto LABEL_19;
      }
      v38 = *(_QWORD *)(v4 + 840);
      v39 = v72;
      v68 = v38;
      if ( v72 )
      {
        v40 = 10 * (v71 - *(_DWORD *)(v38 + 24));
        QpcBasedTouchStackTime = _GetQpcBasedTouchStackTime();
        v43 = *(_QWORD *)(v23 + 480);
        if ( !*(_DWORD *)(v43 + 1568) )
        {
          v43 = v71;
          *(_DWORD *)(v38 + 24) = v71;
          *(_DWORD *)(v38 + 28) = QpcBasedTouchStackTime;
LABEL_90:
          v40 = 0;
          goto LABEL_92;
        }
        if ( v40 )
          goto LABEL_92;
        v43 = *(unsigned int *)(v38 + 36);
        v40 = QpcBasedTouchStackTime - *(_DWORD *)(v38 + 28);
        if ( v40 > (unsigned int)v43 )
          goto LABEL_92;
        if ( (unsigned int)v43 - v40 < 5 )
        {
          v40 = v43 + 1;
LABEL_92:
          if ( (_DWORD)v13 )
          {
            v43 = 0LL;
            v42 = v13;
            do
            {
              v43 += 12LL;
              *(_DWORD *)(*(_QWORD *)(v38 + 72) + v43 - 4) = 0x40000;
              --v42;
            }
            while ( v42 );
          }
          if ( (_DWORD)v3 )
          {
            v36 = (int *)((char *)v2 + 12);
            v37 = v3;
            do
            {
              v45 = (unsigned int)*(v36 - 2);
              v46 = *v36;
              v36 += 36;
              v42 = 3 * v45;
              *(_DWORD *)(*(_QWORD *)(v38 + 72) + 4 * v42 + 8) = v46 & 0xFFFF7FFF;
              v43 = *(_QWORD *)(v38 + 72);
              *(_QWORD *)(v43 + 4 * v42) = *(_QWORD *)(v36 - 31);
              --v37;
            }
            while ( v37 );
          }
          if ( (W32GetCurrentThreadDpiAwarenessContext(v43, v42, (__int64)v36, v37) & 0xF) != 2 && (_DWORD)v3 )
          {
            v47 = (INT *)((char *)v2 + 116);
            v48 = (char *)v2 + 32;
            v49 = v3;
            do
            {
              v63 = 0LL;
              LogicalToPhysicalDPIPoint(v48, v48, 0LL, &v63);
              DpiForSystem = GetDpiForSystem(v51, v50, v52, v53);
              v55 = *(unsigned __int16 *)(v63 + 154);
              v56 = EngMulDiv(*(v47 - 1) - *(v47 - 3), v55, DpiForSystem);
              v57 = *v47 - *(v47 - 2);
              *(v47 - 1) = v56;
              v48 += 144;
              *v47 = EngMulDiv(v57, v55, DpiForSystem);
              *(_QWORD *)(v47 - 3) = 0LL;
              v47 += 36;
              --v49;
            }
            while ( v49 );
            v38 = v68;
            v23 = v69;
            v2 = a2;
            v39 = v72;
          }
          v67 = *(_OWORD *)(v67 + 28);
          if ( (_DWORD)v3 )
          {
            v58 = DWORD1(v67);
            v59 = (_DWORD *)((char *)v2 + 36);
            v60 = v67;
            v61 = v3;
            do
            {
              *(v59 - 1) -= v60;
              *v59 -= v58;
              v59 += 36;
              --v61;
            }
            while ( v61 );
          }
          *(_DWORD *)(v38 + 36) = v40;
          if ( v39 )
          {
            *(_DWORD *)(v38 + 40) = v64 && !v71;
            *(_DWORD *)(v38 + 32) = v71;
          }
          else
          {
            v62 = v65;
            *(_DWORD *)(v38 + 64) = v66 && !v65;
            *(_QWORD *)(v38 + 56) = v62;
          }
          xxxSendToTouchStack((struct DEVICEINFO *)v23, v3, v2, v40);
          return 1LL;
        }
      }
      else
      {
        v43 = *(_QWORD *)(v23 + 480);
        v44 = (unsigned __int64)(10000 * (v14 - *(_QWORD *)(v38 + 48))) / gliQpcFreq.QuadPart;
        v42 = (unsigned __int64)(10000 * (v14 - *(_QWORD *)(v38 + 48))) % gliQpcFreq.QuadPart;
        v40 = v44;
        if ( !*(_DWORD *)(v43 + 1568) )
        {
          *(_QWORD *)(v38 + 48) = v65;
          goto LABEL_90;
        }
        if ( (_DWORD)v44 != *(_DWORD *)(v38 + 36) )
          goto LABEL_92;
      }
      v5 = 21LL;
      goto LABEL_3;
    }
LABEL_2:
    v5 = RtlNtStatusToDosError(-1073741790);
LABEL_3:
    UserSetLastError(v5);
    return 0LL;
  }
  EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
  return 1LL;
}
