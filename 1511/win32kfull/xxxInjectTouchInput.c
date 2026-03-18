/*
 * XREFs of xxxInjectTouchInput @ 0x1C01DD214
 * Callers:
 *     NtUserInjectTouchInput @ 0x1C021CE90 (NtUserInjectTouchInput.c)
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0003224 (IsForegroundShellFrameQueueAccessible.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     CheckGrantedAccess @ 0x1C00858B4 (CheckGrantedAccess.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01DBF80 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01DC3F4 (-SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagMONITOR@@I@Z @ 0x1C01DC63C (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagMONI.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01DC8C0 (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?_ValidateInjectionQpcCount@@YAH_K00HH@Z @ 0x1C01DC934 (-_ValidateInjectionQpcCount@@YAH_K00HH@Z.c)
 *     ?_ValidateInjectionTime@@YAHKKKHH@Z @ 0x1C01DC9A8 (-_ValidateInjectionTime@@YAHKKKHH@Z.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01DCA10 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01DCB44 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInjectTouchInput(unsigned int a1, struct tagPOINTER_TOUCH_INFO *a2)
{
  __int64 v3; // r12
  __int64 v4; // rsi
  ULONG v5; // ecx
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbp
  unsigned int v15; // r8d
  char *v16; // rax
  unsigned int v17; // ecx
  int v18; // r9d
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rax
  struct tagINJECTED_CONTACT *v23; // rdi
  __int64 v24; // rcx
  unsigned __int64 v25; // r9
  int v26; // r8d
  _DWORD *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // r9d
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // r8
  int v34; // edi
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
  char *v46; // r15
  __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned __int16 v49; // dx
  INT v50; // ebx
  INT v51; // edi
  INT v52; // eax
  bool v53; // zf
  int v54; // edx
  _DWORD *v55; // rax
  int v56; // r8d
  __int64 v57; // rcx
  int v58; // [rsp+30h] [rbp-78h]
  INT *v59; // [rsp+30h] [rbp-78h]
  unsigned int v60; // [rsp+38h] [rbp-70h]
  __int64 v61; // [rsp+40h] [rbp-68h]
  __int64 v62; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v63; // [rsp+50h] [rbp-58h]
  __int64 v64; // [rsp+58h] [rbp-50h]
  __int128 v65; // [rsp+60h] [rbp-48h]
  __int64 v66; // [rsp+70h] [rbp-38h]
  unsigned int v67; // [rsp+C0h] [rbp+18h]
  int v68; // [rsp+C8h] [rbp+20h]

  v3 = a1;
  v58 = 0;
  v4 = *(_QWORD *)(gptiCurrent + 376LL);
  CheckCurrentInjectionConfiguration();
  if ( *(_QWORD *)(gptiCurrent + 408LL) != grpdeskRitInput
    || !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 768LL), 0x20u) )
  {
    goto LABEL_2;
  }
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
    return 1LL;
  if ( !gpqForeground
    || (v7 = *(_QWORD *)(gptiCurrent + 376LL),
        v8 = *(_QWORD *)(gpqForeground + 372LL),
        v9 = *(_QWORD *)(v7 + 832),
        !gbEnforceUIPI)
    || (unsigned int)v9 > (unsigned int)v8
    || (_DWORD)v9 == (_DWORD)v8
    && ((v10 = HIDWORD(v9), v11 = HIDWORD(v8), (_DWORD)v10 == (_DWORD)v11) || (_DWORD)v10 == -1 || (_DWORD)v11 == -1)
    || *(int *)(v7 + 12) < 0
    || IsForegroundShellFrameQueueAccessible(gptiCurrent) )
  {
    if ( *(_QWORD *)(v4 + 848) )
    {
      gppiInputProvider = v4;
      v12 = *(_QWORD *)(v4 + 848);
      v13 = *(unsigned int *)(v12 + 20);
      if ( (unsigned int)v3 > (unsigned int)v13 )
        goto LABEL_19;
      v14 = *((_QWORD *)a2 + 10);
      v67 = *((_DWORD *)a2 + 16);
      v60 = *(_DWORD *)(v12 + 32);
      v63 = *(_QWORD *)(v12 + 56);
      v61 = v14;
      if ( !(unsigned int)SortTouchContacts(a2, v3) )
        goto LABEL_19;
      v15 = 0;
      if ( (_DWORD)v3 )
      {
        v16 = (char *)a2 + 12;
        while ( *((_DWORD *)v16 - 2) < (unsigned int)v13 && *((_DWORD *)v16 - 3) == 2 )
        {
          v17 = *(_DWORD *)v16 & 0xFFFF7FFF;
          if ( v17 != 0x40000 )
          {
            if ( v17 - 0x20000 > 6 || (v18 = 69, !_bittest(&v18, v17 - 0x20000)) )
            {
              if ( v17 != 65542 && v17 != 262146 )
                break;
            }
          }
          v19 = *((_DWORD *)v16 + 22);
          if ( (v19 & 2) != 0 && *((_DWORD *)v16 + 31) >= 0x168u )
            break;
          if ( (v19 & 4) != 0 && *((_DWORD *)v16 + 32) > 0xFDE8u
            || *((_DWORD *)v16 + 21)
            || *((_DWORD *)v16 + 28)
            || *((_DWORD *)v16 + 30)
            || *((_DWORD *)v16 + 27)
            || *((_DWORD *)v16 + 29)
            || *((_DWORD *)v16 - 1)
            || *(_QWORD *)(v16 + 4)
            || *(_QWORD *)(v16 + 12)
            || *((_DWORD *)v16 + 7)
            || *((_DWORD *)v16 + 8)
            || *((_DWORD *)v16 + 9)
            || *((_DWORD *)v16 + 10)
            || *((_DWORD *)v16 + 11)
            || *((_DWORD *)v16 + 12)
            || *((_DWORD *)v16 + 14)
            || *((_DWORD *)v16 + 15)
            || *((_DWORD *)v16 + 16)
            || *((_DWORD *)v16 + 19) )
          {
            break;
          }
          ++v15;
          v16 += 144;
          if ( v15 >= (unsigned int)v3 )
            goto LABEL_53;
        }
        goto LABEL_19;
      }
LABEL_53:
      v20 = *(_QWORD *)(v4 + 848);
      v21 = *(_QWORD *)(v20 + 8);
      v66 = v21;
      if ( !*(_DWORD *)(*(_QWORD *)(v21 + 416) + 704LL) )
      {
        *(_DWORD *)(v20 + 24) = 0;
        *(_DWORD *)(*(_QWORD *)(v4 + 848) + 28LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v4 + 848) + 32LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v4 + 848) + 40LL) = 0;
        *(_QWORD *)(*(_QWORD *)(v4 + 848) + 48LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)(v4 + 848) + 56LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(v4 + 848) + 64LL) = 0;
      }
      v22 = *(_QWORD *)(v4 + 848);
      v23 = *(struct tagINJECTED_CONTACT **)(v22 + 72);
      if ( v67 && v14 )
        goto LABEL_61;
      if ( *(_DWORD *)(v22 + 24) && v14 )
        goto LABEL_61;
      v24 = *(_QWORD *)(v22 + 48);
      if ( v24 )
      {
        if ( v67 )
          goto LABEL_61;
      }
      if ( v14 || (v26 = 1, v24) )
        v26 = 0;
      v68 = v26;
      if ( !*(_DWORD *)(*(_QWORD *)(v21 + 416) + 704LL) && (_DWORD)v13 )
      {
        v27 = (_DWORD *)((char *)v23 + 8);
        v28 = v13;
        do
        {
          if ( ((*v27 - 0x20000) & 0xFFFDFFFF) != 0 )
          {
            *v27 = 0x40000;
            v58 = 1;
          }
          v27 += 3;
          --v28;
        }
        while ( v28 );
      }
      v29 = *(_QWORD *)(v4 + 848);
      v30 = 0;
      if ( v26 )
      {
        v31 = *(_QWORD *)(v21 + 416);
        LOBYTE(v30) = *(_DWORD *)(v31 + 704) == 0;
        LOBYTE(v32) = _ValidateInjectionTime(v67, v60, *(_DWORD *)(v31 + 880), v30, *(_DWORD *)(v29 + 40));
        if ( !v32 )
        {
          v22 = *(_QWORD *)(v4 + 848);
LABEL_61:
          LODWORD(v25) = *(_DWORD *)(v22 + 28);
LABEL_62:
          xxxSendLastFrameTouchUp(v23, (struct DEVICEINFO *)v21, v13, v25);
LABEL_19:
          v5 = 87;
          goto LABEL_3;
        }
      }
      else
      {
        v33 = *(_QWORD *)(v21 + 416);
        LOBYTE(v30) = *(_DWORD *)(v33 + 704) == 0;
        if ( !(unsigned int)_ValidateInjectionQpcCount(v14, v63, *(_QWORD *)(v33 + 888), v30, *(_DWORD *)(v29 + 64)) )
        {
          v25 = (unsigned __int64)(10000LL * *(_QWORD *)(*(_QWORD *)(v4 + 848) + 48LL)) / gliQpcFreq.QuadPart;
          goto LABEL_62;
        }
      }
      *(_QWORD *)&v65 = **(_QWORD **)(v4 + 848);
      if ( !(unsigned int)ValidateInjectedTouchFrame((unsigned int)v3, a2, v23, (struct tagMONITOR *)v65, v13) )
      {
        xxxSendLastFrameTouchUp(v23, (struct DEVICEINFO *)v21, v13, *(_DWORD *)(*(_QWORD *)(v4 + 848) + 28LL));
        v5 = 1460;
        if ( v58 )
          goto LABEL_3;
        goto LABEL_19;
      }
      v34 = v68;
      v35 = *(_QWORD *)(v4 + 848);
      if ( v68 )
      {
        v36 = 10 * (v67 - *(_DWORD *)(v35 + 24));
        QpcBasedTouchStackTime = _GetQpcBasedTouchStackTime();
        v38 = *(_QWORD *)(v21 + 416);
        if ( !*(_DWORD *)(v38 + 704) )
        {
          v38 = v67;
          *(_DWORD *)(v35 + 24) = v67;
          *(_DWORD *)(v35 + 28) = QpcBasedTouchStackTime;
LABEL_90:
          v36 = 0;
          goto LABEL_92;
        }
        if ( v36 )
          goto LABEL_92;
        v38 = *(unsigned int *)(v35 + 36);
        v36 = QpcBasedTouchStackTime - *(_DWORD *)(v35 + 28);
        if ( v36 > (unsigned int)v38 )
          goto LABEL_92;
        if ( (unsigned int)v38 - v36 < 5 )
        {
          v36 = v38 + 1;
LABEL_92:
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
            v64 = v3;
            v59 = (INT *)((char *)a2 + 116);
            v46 = (char *)a2 + 32;
            do
            {
              v62 = 0LL;
              LogicalToPhysicalDPIPoint(v46, v46, 0LL, &v62);
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
              v51 = *(unsigned __int16 *)(v62 + 152);
              *(v59 - 1) = EngMulDiv(*(v59 - 1) - *(v59 - 3), v51, v49);
              v52 = EngMulDiv(*v59 - *(v59 - 2), v51, v50);
              v46 += 144;
              *(v59 - 2) = 0;
              *(v59 - 3) = 0;
              *v59 = v52;
              v53 = v64-- == 1;
              v59 += 36;
            }
            while ( !v53 );
            v21 = v66;
            v34 = v68;
          }
          v65 = *(_OWORD *)(v65 + 28);
          if ( (_DWORD)v3 )
          {
            v54 = DWORD1(v65);
            v55 = (_DWORD *)((char *)a2 + 36);
            v56 = v65;
            v57 = v3;
            do
            {
              *(v55 - 1) -= v56;
              *v55 -= v54;
              v55 += 36;
              --v57;
            }
            while ( v57 );
          }
          *(_DWORD *)(v35 + 36) = v36;
          if ( v34 )
          {
            *(_DWORD *)(v35 + 40) = v60 && !v67;
            *(_DWORD *)(v35 + 32) = v67;
          }
          else
          {
            *(_DWORD *)(v35 + 64) = v63 && !v61;
            *(_QWORD *)(v35 + 56) = v61;
          }
          xxxSendToTouchStack((struct DEVICEINFO *)v21, v3, a2, v36);
          return 1LL;
        }
      }
      else
      {
        v38 = *(_QWORD *)(v21 + 416);
        v39 = (unsigned __int64)(10000 * (v14 - *(_QWORD *)(v35 + 48))) / gliQpcFreq.QuadPart;
        v36 = v39;
        if ( !*(_DWORD *)(v38 + 704) )
        {
          *(_QWORD *)(v35 + 48) = v61;
          goto LABEL_90;
        }
        if ( (_DWORD)v39 != *(_DWORD *)(v35 + 36) )
          goto LABEL_92;
      }
      v5 = 21;
      goto LABEL_3;
    }
LABEL_2:
    v5 = RtlNtStatusToDosError(-1073741790);
LABEL_3:
    UserSetLastError(v5);
    return 0LL;
  }
  EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 372LL), 1);
  return 1LL;
}
