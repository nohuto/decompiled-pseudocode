/*
 * XREFs of NtUserCalculatePopupWindowPosition @ 0x1402AFF30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x14000EA04 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _MonitorFromPoint @ 0x14008A650 (_MonitorFromPoint.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x14011F624 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     FindBestPos @ 0x14017604C (FindBestPos.c)
 *     ??$ReadFromUser@UtagRECT@@@UmpDetail@@YA?AUtagRECT@@PEBU1@@Z @ 0x1402512A4 (--$ReadFromUser@UtagRECT@@@UmpDetail@@YA-AUtagRECT@@PEBU1@@Z.c)
 *     ??$Write@UtagRECT@@@?$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z @ 0x1402574C8 (--$Write@UtagRECT@@@-$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall NtUserCalculatePopupWindowPosition(__int64 a1, __int64 a2, int a3, void *a4, __int64 a5)
{
  int v9; // r14d
  struct tagRECT *v10; // r13
  int v11; // ecx
  __int64 v12; // rcx
  __int64 ULong64FromUser; // rax
  __int64 v14; // kr00_8
  unsigned __int64 v15; // rdi
  LONG v16; // esi
  unsigned __int64 v17; // rbx
  int BestPos; // ebx
  struct tagMONITOR *v20; // [rsp+60h] [rbp-88h]
  __int64 v21[3]; // [rsp+68h] [rbp-80h] BYREF
  __int128 v22; // [rsp+80h] [rbp-68h] BYREF
  __int128 *v23; // [rsp+90h] [rbp-58h]
  __int128 v24; // [rsp+A8h] [rbp-40h] BYREF

  v22 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v24 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (a3 & 0xFFFE0200) != 0 )
  {
    v11 = 1004;
LABEL_3:
    UserSetLastError(v11);
    goto LABEL_20;
  }
  if ( !a5 )
  {
    v11 = 87;
    goto LABEL_3;
  }
  if ( a4 )
  {
    v22 = *UmpDetail::ReadFromUser<tagRECT>(v21, a4);
    v10 = (struct tagRECT *)&v22;
    v23 = &v22;
  }
  ULong64FromUser = RtlReadULong64FromUser(a2);
  v14 = ULong64FromUser;
  if ( (int)ULong64FromUser < 0 || ULong64FromUser < 0 )
  {
    UserSetLastError(87);
  }
  else
  {
    v15 = RtlReadULong64FromUser(a1);
    v21[0] = v15;
    v16 = v15;
    v17 = HIDWORD(v15);
    v20 = (struct tagMONITOR *)MonitorFromPoint(v15, 2LL, 0);
    if ( (a3 & 4) != 0 )
    {
      v16 = v15 - (int)v14 / 2;
    }
    else if ( (a3 & 8) != 0 )
    {
      v16 = v15 - v14;
    }
    if ( (a3 & 0x10) != 0 )
    {
      LODWORD(v17) = SHIDWORD(v14) / -2 + HIDWORD(v15);
    }
    else if ( (a3 & 0x20) != 0 )
    {
      LODWORD(v17) = HIDWORD(v15) - HIDWORD(v14);
    }
    v9 = 1;
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>((__int64)v21, 0LL);
    BestPos = FindBestPos(v16, v17, v14, SHIDWORD(v14), v10, a3 | 0x20000u, (unsigned int ***)v21, v20, v15);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>((__int64)v21);
    LODWORD(v24) = (__int16)BestPos;
    DWORD1(v24) = SHIWORD(BestPos);
    DWORD2(v24) = (__int16)BestPos + (_DWORD)v14;
    HIDWORD(v24) = SHIWORD(BestPos) + HIDWORD(v14);
    UserModePointer<tagRECT>::Write<tagRECT>((void **)&a5, &v24);
  }
LABEL_20:
  UserSessionSwitchLeaveCrit(v12);
  return v9;
}
