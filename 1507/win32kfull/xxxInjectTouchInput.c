/*
 * XREFs of xxxInjectTouchInput @ 0x1C01DCB84
 * Callers:
 *     NtUserInjectTouchInput @ 0x1C021D080 (NtUserInjectTouchInput.c)
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0041278 (IsForegroundShellFrameQueueAccessible.c)
 *     CheckGrantedAccess @ 0x1C005CD60 (CheckGrantedAccess.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHXZ @ 0x1C01DBCC8 (-RealizePendingRecreateTouchInjectionDevices@@YAHXZ.c)
 *     ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01DBD58 (-SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagMONITOR@@I@Z @ 0x1C01DBFA0 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagMONI.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01DC224 (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?_ValidateInjectionQpcCount@@YAH_K00HH@Z @ 0x1C01DC298 (-_ValidateInjectionQpcCount@@YAH_K00HH@Z.c)
 *     ?_ValidateInjectionTime@@YAHKKKHH@Z @ 0x1C01DC30C (-_ValidateInjectionTime@@YAHKKKHH@Z.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01DC374 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01DC4A8 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInjectTouchInput(unsigned int a1, struct tagPOINTER_TOUCH_INFO *a2)
{
  __int64 v3; // r15
  __int64 v4; // rsi
  ULONG v5; // ecx
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r12
  unsigned int v15; // ebp
  unsigned int v16; // r8d
  char *v17; // rax
  unsigned int v18; // ecx
  int v19; // r9d
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rax
  struct tagINJECTED_CONTACT *v24; // rdi
  __int64 v25; // rcx
  unsigned __int64 v26; // r9
  int v27; // ebp
  _DWORD *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // r9d
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // rsi
  ULONG v36; // ebp
  int QpcBasedTouchStackTime; // eax
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  int *v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rdx
  char *v46; // r12
  __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned __int16 v49; // dx
  INT v50; // ebx
  INT v51; // edi
  bool v52; // zf
  int v53; // edx
  _DWORD *v54; // rax
  int v55; // r8d
  __int64 v56; // rcx
  int v57; // [rsp+30h] [rbp-78h]
  unsigned int v58; // [rsp+34h] [rbp-74h]
  __int64 v59; // [rsp+38h] [rbp-70h] BYREF
  __int64 v60; // [rsp+40h] [rbp-68h]
  unsigned __int64 v61; // [rsp+48h] [rbp-60h]
  __int64 v62; // [rsp+50h] [rbp-58h]
  __int128 v63; // [rsp+58h] [rbp-50h]
  unsigned int v64; // [rsp+C0h] [rbp+18h]
  int v65; // [rsp+C8h] [rbp+20h]
  INT *v66; // [rsp+C8h] [rbp+20h]

  v3 = a1;
  v65 = 0;
  v4 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( gbPendRecreateTouchInjectionDevices == 1 )
  {
    gbPendRecreateTouchInjectionDevices = 0;
    RealizePendingRecreateTouchInjectionDevices();
  }
  if ( *(_QWORD *)(gptiCurrent + 416LL) != grpdeskRitInput
    || !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 776LL), 0x20u) )
  {
    goto LABEL_4;
  }
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
    return 1LL;
  if ( gpqForeground )
  {
    v7 = *(_QWORD *)(gptiCurrent + 384LL);
    v8 = *(_QWORD *)(gpqForeground + 372LL);
    v9 = *(_QWORD *)(v7 + 832);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v9 <= (unsigned int)v8 )
      {
        if ( (_DWORD)v9 != (_DWORD)v8
          || (v10 = HIDWORD(v9), v11 = HIDWORD(v8), (_DWORD)v10 != (_DWORD)v11)
          && (_DWORD)v10 != -1
          && (_DWORD)v11 != -1 )
        {
          if ( *(int *)(v7 + 12) >= 0 && !IsForegroundShellFrameQueueAccessible(gptiCurrent) )
          {
            EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 372LL), 1);
            return 1LL;
          }
        }
      }
    }
  }
  if ( !*(_QWORD *)(v4 + 848) )
  {
LABEL_4:
    v5 = RtlNtStatusToDosError(-1073741790);
LABEL_5:
    UserSetLastError(v5);
    return 0LL;
  }
  gppiInputProvider = v4;
  v12 = *(_QWORD *)(v4 + 848);
  v13 = *(unsigned int *)(v12 + 20);
  if ( (unsigned int)v3 > (unsigned int)v13
    || (v14 = *((_QWORD *)a2 + 10),
        v15 = *((_DWORD *)a2 + 16),
        v58 = *(_DWORD *)(v12 + 32),
        v61 = *(_QWORD *)(v12 + 56),
        v64 = v15,
        v62 = v14,
        !(unsigned int)SortTouchContacts(a2, v3)) )
  {
LABEL_22:
    v5 = 87;
    goto LABEL_5;
  }
  v16 = 0;
  if ( (_DWORD)v3 )
  {
    v17 = (char *)a2 + 12;
    while ( *((_DWORD *)v17 - 2) < (unsigned int)v13 && *((_DWORD *)v17 - 3) == 2 )
    {
      v18 = *(_DWORD *)v17 & 0xFFFF7FFF;
      if ( v18 != 0x40000 )
      {
        if ( v18 - 0x20000 > 6 || (v19 = 69, !_bittest(&v19, v18 - 0x20000)) )
        {
          if ( v18 != 65542 && v18 != 262146 )
            break;
        }
      }
      v20 = *((_DWORD *)v17 + 22);
      if ( (v20 & 2) != 0 && *((_DWORD *)v17 + 31) >= 0x168u )
        break;
      if ( (v20 & 4) != 0 && *((_DWORD *)v17 + 32) > 0xFDE8u
        || *((_DWORD *)v17 + 21)
        || *((_DWORD *)v17 + 28)
        || *((_DWORD *)v17 + 30)
        || *((_DWORD *)v17 + 27)
        || *((_DWORD *)v17 + 29)
        || *((_DWORD *)v17 - 1)
        || *(_QWORD *)(v17 + 4)
        || *(_QWORD *)(v17 + 12)
        || *((_DWORD *)v17 + 7)
        || *((_DWORD *)v17 + 8)
        || *((_DWORD *)v17 + 9)
        || *((_DWORD *)v17 + 10)
        || *((_DWORD *)v17 + 11)
        || *((_DWORD *)v17 + 12)
        || *((_DWORD *)v17 + 14)
        || *((_DWORD *)v17 + 15)
        || *((_DWORD *)v17 + 16)
        || *((_DWORD *)v17 + 19) )
      {
        break;
      }
      ++v16;
      v17 += 144;
      if ( v16 >= (unsigned int)v3 )
        goto LABEL_56;
    }
    goto LABEL_22;
  }
LABEL_56:
  v21 = *(_QWORD *)(v4 + 848);
  v22 = *(_QWORD *)(v21 + 8);
  if ( !*(_DWORD *)(*(_QWORD *)(v22 + 416) + 688LL) )
  {
    *(_DWORD *)(v21 + 24) = 0;
    *(_DWORD *)(*(_QWORD *)(v4 + 848) + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v4 + 848) + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v4 + 848) + 40LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v4 + 848) + 48LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)(v4 + 848) + 56LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)(v4 + 848) + 64LL) = 0;
  }
  v23 = *(_QWORD *)(v4 + 848);
  v24 = *(struct tagINJECTED_CONTACT **)(v23 + 72);
  if ( v15 && v14 )
    goto LABEL_64;
  if ( *(_DWORD *)(v23 + 24) && v14 )
    goto LABEL_64;
  v25 = *(_QWORD *)(v23 + 48);
  if ( v25 )
  {
    if ( v15 )
      goto LABEL_64;
  }
  if ( v14 || (v27 = 1, v25) )
    v27 = 0;
  v57 = v27;
  if ( !*(_DWORD *)(*(_QWORD *)(v22 + 416) + 688LL) && (_DWORD)v13 )
  {
    v28 = (_DWORD *)((char *)v24 + 8);
    v29 = v13;
    do
    {
      if ( ((*v28 - 0x20000) & 0xFFFDFFFF) != 0 )
      {
        *v28 = 0x40000;
        v65 = 1;
      }
      v28 += 3;
      --v29;
    }
    while ( v29 );
  }
  v30 = *(_QWORD *)(v4 + 848);
  v31 = 0;
  if ( v27 )
  {
    v32 = *(_QWORD *)(v22 + 416);
    LOBYTE(v31) = *(_DWORD *)(v32 + 688) == 0;
    LOBYTE(v33) = _ValidateInjectionTime(v64, v58, *(_DWORD *)(v32 + 864), v31, *(_DWORD *)(v30 + 40));
    if ( !v33 )
    {
      v23 = *(_QWORD *)(v4 + 848);
LABEL_64:
      LODWORD(v26) = *(_DWORD *)(v23 + 28);
LABEL_65:
      xxxSendLastFrameTouchUp(v24, (struct DEVICEINFO *)v22, v13, v26);
      goto LABEL_22;
    }
  }
  else
  {
    v34 = *(_QWORD *)(v22 + 416);
    LOBYTE(v31) = *(_DWORD *)(v34 + 688) == 0;
    if ( !(unsigned int)_ValidateInjectionQpcCount(v14, v61, *(_QWORD *)(v34 + 872), v31, *(_DWORD *)(v30 + 64)) )
    {
      v26 = (unsigned __int64)(10000LL * *(_QWORD *)(*(_QWORD *)(v4 + 848) + 48LL)) / gliQpcFreq.QuadPart;
      goto LABEL_65;
    }
  }
  *(_QWORD *)&v63 = **(_QWORD **)(v4 + 848);
  if ( !(unsigned int)ValidateInjectedTouchFrame((unsigned int)v3, a2, v24, (struct tagMONITOR *)v63, v13) )
  {
    xxxSendLastFrameTouchUp(v24, (struct DEVICEINFO *)v22, v13, *(_DWORD *)(*(_QWORD *)(v4 + 848) + 28LL));
    v5 = 1460;
    if ( v65 )
      goto LABEL_5;
    goto LABEL_22;
  }
  v35 = *(_QWORD *)(v4 + 848);
  if ( !v27 )
  {
    v38 = *(_QWORD *)(v22 + 416);
    v39 = (unsigned __int64)(10000 * (v14 - *(_QWORD *)(v35 + 48))) / gliQpcFreq.QuadPart;
    v36 = v39;
    if ( !*(_DWORD *)(v38 + 688) )
    {
      *(_QWORD *)(v35 + 48) = v14;
      goto LABEL_93;
    }
    if ( (_DWORD)v39 != *(_DWORD *)(v35 + 36) )
      goto LABEL_95;
LABEL_90:
    v5 = 21;
    goto LABEL_5;
  }
  v36 = 10 * (v64 - *(_DWORD *)(v35 + 24));
  QpcBasedTouchStackTime = _GetQpcBasedTouchStackTime();
  v38 = *(_QWORD *)(v22 + 416);
  if ( !*(_DWORD *)(v38 + 688) )
  {
    *(_DWORD *)(v35 + 24) = v64;
    *(_DWORD *)(v35 + 28) = QpcBasedTouchStackTime;
LABEL_93:
    v36 = 0;
    goto LABEL_95;
  }
  if ( v36 )
    goto LABEL_95;
  v38 = *(unsigned int *)(v35 + 36);
  v36 = QpcBasedTouchStackTime - *(_DWORD *)(v35 + 28);
  if ( v36 > (unsigned int)v38 )
    goto LABEL_95;
  if ( (unsigned int)v38 - v36 >= 5 )
    goto LABEL_90;
  v36 = v38 + 1;
LABEL_95:
  if ( (_DWORD)v13 )
  {
    v38 = 0LL;
    v40 = v13;
    do
    {
      v38 += 12LL;
      *(_DWORD *)(*(_QWORD *)(v35 + 72) + v38 - 4) = 0x40000;
      --v40;
    }
    while ( v40 );
  }
  if ( (_DWORD)v3 )
  {
    v41 = (int *)((char *)a2 + 12);
    v42 = v3;
    do
    {
      v43 = (unsigned int)*(v41 - 2);
      v44 = *v41;
      v41 += 36;
      v45 = 3 * v43;
      *(_DWORD *)(*(_QWORD *)(v35 + 72) + 4 * v45 + 8) = v44 & 0xFFFF7FFF;
      v38 = *(_QWORD *)(v35 + 72);
      *(_QWORD *)(v38 + 4 * v45) = *(_QWORD *)(v41 - 31);
      --v42;
    }
    while ( v42 );
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x4000) == 0 && (_DWORD)v3 )
  {
    v60 = v3;
    v66 = (INT *)((char *)a2 + 116);
    v46 = (char *)a2 + 32;
    do
    {
      v59 = 0LL;
      LogicalToPhysicalDPIPoint(v46, v46, 0LL, &v59);
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x4000) != 0 )
      {
        v49 = *(_WORD *)(gpsi + 7286LL);
      }
      else
      {
        v49 = 96;
      }
      v50 = v49;
      v51 = *(unsigned __int16 *)(v59 + 152);
      *(v66 - 1) = EngMulDiv(*(v66 - 1) - *(v66 - 3), v51, v49);
      v46 += 144;
      *v66 = EngMulDiv(*v66 - *(v66 - 2), v51, v50);
      *(_QWORD *)(v66 - 3) = 0LL;
      v52 = v60-- == 1;
      v66 += 36;
    }
    while ( !v52 );
    v14 = v62;
  }
  v63 = *(_OWORD *)(v63 + 28);
  if ( (_DWORD)v3 )
  {
    v53 = DWORD1(v63);
    v54 = (_DWORD *)((char *)a2 + 36);
    v55 = v63;
    v56 = v3;
    do
    {
      *(v54 - 1) -= v55;
      *v54 -= v53;
      v54 += 36;
      --v56;
    }
    while ( v56 );
  }
  *(_DWORD *)(v35 + 36) = v36;
  if ( v57 )
  {
    *(_DWORD *)(v35 + 40) = v58 && !v64;
    *(_DWORD *)(v35 + 32) = v64;
  }
  else
  {
    *(_DWORD *)(v35 + 64) = v61 && !v14;
    *(_QWORD *)(v35 + 56) = v14;
  }
  xxxSendToTouchStack((struct DEVICEINFO *)v22, v3, a2, v36);
  return 1LL;
}
