/*
 * XREFs of xxxGetMenuBarInfo @ 0x14000D8F8
 * Callers:
 *     NtUserGetMenuBarInfo @ 0x14000D710 (NtUserGetMenuBarInfo.c)
 * Callees:
 *     xxxGetSysMenu @ 0x14000D5F8 (xxxGetSysMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x14000EC1C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     GetThreadpGlobalPopupMenu @ 0x14000F544 (GetThreadpGlobalPopupMenu.c)
 *     GetWindowBordersForDpi @ 0x14000F560 (GetWindowBordersForDpi.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     _HasCaptionIcon @ 0x14014E1C4 (_HasCaptionIcon.c)
 */

__int64 __fastcall xxxGetMenuBarInfo(struct tagWND *a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // r14
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // ecx
  unsigned int WindowDpiLastNotify; // r15d
  __int64 SysMenu; // r13
  int v14; // r8d
  int v15; // r9d
  int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // r15
  int v20; // r8d
  int v21; // r9d
  int WindowBordersForDpi; // r8d
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 ThreadpGlobalPopupMenu; // rax
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // r9
  __int64 v31; // r10
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // edx
  int v35; // r8d
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r8
  int v39; // eax
  _DWORD *v40; // rax
  __int64 v41; // r9
  __int64 v42; // r10
  __int64 v43; // rcx
  __int64 v44; // rdx
  int v45; // ecx
  int v46; // r8d
  int v47; // edx
  _DWORD *v48; // rax
  __int64 *v49; // rcx
  int v50; // ecx
  _DWORD *v51; // [rsp+30h] [rbp-30h] BYREF
  __int64 v52; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v53[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v54; // [rsp+50h] [rbp-10h]

  v5 = a3;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v53);
  v8 = PtiCurrent();
  v51 = (_DWORD *)gSmartObjNullRef;
  v52 = *((_QWORD *)v8 + 209);
  *((_QWORD *)v8 + 209) = &v52;
  if ( *(_DWORD *)a4 == 48 )
  {
    v9 = 0LL;
    *(_OWORD *)(a4 + 4) = 0LL;
    *(_DWORD *)(a4 + 40) &= 0xFFFFFFFC;
    *(_QWORD *)(a4 + 24) = 0LL;
    *(_QWORD *)(a4 + 32) = 0LL;
    v10 = *((_QWORD *)a1 + 5);
    v11 = *(_DWORD *)(v10 + 288) & 0xF;
    if ( v11 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v10 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v10 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( !v11
           && (v28 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v28 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
    }
    switch ( a2 )
    {
      case -3:
        if ( (*(_BYTE *)(v10 + 31) & 0x40) == 0 )
        {
          if ( *((_QWORD *)a1 + 21) )
          {
            v54 = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=(v53);
            if ( (v54 || *(_QWORD *)v53[0])
              && (int)v5 >= 0
              && (unsigned int)v5 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v53[0] + 40LL) + 44LL) )
            {
              *(_QWORD *)(a4 + 24) = **(_QWORD **)v53[0];
              if ( *(_DWORD *)(*(_QWORD *)v53[0] + 64LL) && *(_DWORD *)(*(_QWORD *)v53[0] + 68LL) )
              {
                if ( (_DWORD)v5 )
                {
                  v41 = 96 * v5;
                  v42 = *(_QWORD *)(*(_QWORD *)v53[0] + 88LL);
                  v43 = *((_QWORD *)a1 + 5);
                  v44 = *(_QWORD *)(v42 + 96 * v5 - 96);
                  if ( (*(_BYTE *)(v43 + 26) & 0x40) != 0 )
                  {
                    v45 = *(_DWORD *)(v43 + 96) - *(_DWORD *)(v44 + 64);
                    *(_DWORD *)(a4 + 12) = v45;
                    *(_DWORD *)(a4 + 4) = v45 - *(_DWORD *)(*(_QWORD *)(v42 + v41 - 96) + 72LL);
                  }
                  else
                  {
                    v47 = *(_DWORD *)(v43 + 88) + *(_DWORD *)(v44 + 64);
                    *(_DWORD *)(a4 + 4) = v47;
                    *(_DWORD *)(a4 + 12) = v47 + *(_DWORD *)(*(_QWORD *)(v42 + v41 - 96) + 72LL);
                  }
                  v46 = *(_DWORD *)(*(_QWORD *)(v42 + v41 - 96) + 68LL) + *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL);
                  *(_DWORD *)(a4 + 8) = v46;
                  *(_DWORD *)(a4 + 16) = v46 + *(_DWORD *)(*(_QWORD *)(v42 + v41 - 96) + 76LL);
                }
                else
                {
                  WindowBordersForDpi = GetWindowBordersForDpi(
                                          *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL),
                                          *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL),
                                          v20,
                                          v21,
                                          WindowDpiLastNotify);
                  v23 = *((_QWORD *)a1 + 5);
                  if ( (*(_BYTE *)(v23 + 26) & 0x40) != 0 )
                  {
                    *(_DWORD *)(a4 + 12) = *(_DWORD *)(v23 + 96) - WindowBordersForDpi;
                    *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12) - *(_DWORD *)(*(_QWORD *)v53[0] + 64LL);
                  }
                  else
                  {
                    v24 = *(_DWORD *)(v23 + 88);
                    v25 = v53[0];
                    *(_DWORD *)(a4 + 4) = WindowBordersForDpi + v24;
                    *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4) + *(_DWORD *)(*(_QWORD *)v25 + 64LL);
                  }
                  *(_DWORD *)(a4 + 8) = WindowBordersForDpi + *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL);
                  v26 = *((_QWORD *)a1 + 5);
                  if ( (*(_BYTE *)(v26 + 16) & 8) != 0 )
                    *(_DWORD *)(a4 + 8) += GetDpiDependentMetric(
                                             ((*(char *)(v26 + 24) >> 7) & 0x14u) + 2,
                                             WindowDpiLastNotify);
                  *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8) + *(_DWORD *)(*(_QWORD *)v53[0] + 68LL);
                }
              }
              ThreadpGlobalPopupMenu = GetThreadpGlobalPopupMenu(*((_QWORD *)a1 + 2));
              SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v51, ThreadpGlobalPopupMenu);
              if ( !*(_QWORD *)v51 || (**(_DWORD **)v51 & 2) == 0 || (**(_DWORD **)v51 & 4) != 0 )
                goto LABEL_21;
LABEL_80:
              if ( *(struct tagWND **)(*(_QWORD *)v51 + 8LL) == a1 )
              {
                v39 = *(_DWORD *)(a4 + 40) | 1;
                *(_DWORD *)(a4 + 40) = v39;
                if ( !(_DWORD)v5 )
                {
LABEL_82:
                  *(_DWORD *)(a4 + 40) = v39 | 2;
                  goto LABEL_21;
                }
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v51 + 64LL) + 80LL) == (_DWORD)v5 - 1 )
                {
                  v48 = v51;
                  *(_DWORD *)(a4 + 40) |= 2u;
                  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48 + 64LL) + 24LL) )
                  {
                    v49 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)v51 + 64LL) + 24LL);
LABEL_85:
                    v9 = *v49;
                    goto LABEL_66;
                  }
                  goto LABEL_66;
                }
              }
              goto LABEL_21;
            }
          }
        }
        break;
      case -1:
        if ( (*(_BYTE *)(v10 + 30) & 8) != 0 )
        {
          if ( (SysMenu = xxxGetSysMenu(a1, 0), v54 = 0LL, SysMenu != *(_QWORD *)v53[0])
            && ((SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v53), !SysMenu)
              ? (v53[0] = gSmartObjNullRef)
              : (v53[0] = *(_QWORD *)(SysMenu + 152), ++*(_DWORD *)(v53[0] + 8LL)),
                v54)
            || *(_QWORD *)v53[0] )
          {
            if ( (int)v5 >= 0 && (unsigned int)v5 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v53[0] + 40LL) + 44LL) )
            {
              *(_QWORD *)(a4 + 24) = **(_QWORD **)v53[0];
              if ( (unsigned int)HasCaptionIcon(a1) )
              {
                v16 = GetWindowBordersForDpi(
                        *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL),
                        *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL),
                        v14,
                        v15,
                        WindowDpiLastNotify);
                v17 = *((_QWORD *)a1 + 5);
                if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 )
                {
                  *(_DWORD *)(a4 + 12) = *(_DWORD *)(v17 + 96) - v16;
                  *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12)
                                      - GetDpiDependentMetric(
                                          ((*(char *)(*((_QWORD *)a1 + 5) + 24LL) >> 7) & 0xBu) + 12,
                                          WindowDpiLastNotify);
                }
                else
                {
                  *(_DWORD *)(a4 + 4) = v16 + *(_DWORD *)(v17 + 88);
                  *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4)
                                       + GetDpiDependentMetric(
                                           ((*(char *)(*((_QWORD *)a1 + 5) + 24LL) >> 7) & 0xBu) + 12,
                                           WindowDpiLastNotify);
                }
                *(_DWORD *)(a4 + 8) = v16 + *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL);
                *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8)
                                     + GetDpiDependentMetric(
                                         ((*(char *)(*((_QWORD *)a1 + 5) + 24LL) >> 7) & 0xBu) + 13,
                                         WindowDpiLastNotify);
              }
              v18 = GetThreadpGlobalPopupMenu(*((_QWORD *)a1 + 2));
              if ( v18 != *(_QWORD *)v51 )
              {
                SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v51);
                if ( v18 )
                {
                  v51 = *(_DWORD **)(v18 + 88);
                  ++v51[2];
                }
                else
                {
                  v51 = (_DWORD *)gSmartObjNullRef;
                }
              }
              if ( !*(_QWORD *)v51 || (**(_DWORD **)v51 & 2) == 0 || (**(_DWORD **)v51 & 4) == 0 )
                goto LABEL_21;
              goto LABEL_80;
            }
          }
        }
        break;
      case -4:
        v29 = xxxSendMessage(a1, 481LL, 0LL, 0LL);
        ValidateHmenu(v29, 1LL);
        v54 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v53);
        if ( (v54 || *(_QWORD *)v53[0])
          && (int)v5 >= 0
          && (unsigned int)v5 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v53[0] + 40LL) + 44LL) )
        {
          *(_QWORD *)(a4 + 24) = v29;
          if ( (_DWORD)v5 )
          {
            v30 = 96 * v5;
            v31 = *(_QWORD *)(*(_QWORD *)v53[0] + 88LL);
            v32 = *((_QWORD *)a1 + 5);
            v33 = *(_QWORD *)(v31 + 96 * v5 - 96);
            if ( (*(_BYTE *)(v32 + 26) & 0x40) != 0 )
            {
              v50 = *(_DWORD *)(v32 + 112) - *(_DWORD *)(v33 + 64);
              *(_DWORD *)(a4 + 12) = v50;
              *(_DWORD *)(a4 + 4) = v50 - *(_DWORD *)(*(_QWORD *)(v31 + v30 - 96) + 72LL);
            }
            else
            {
              v34 = *(_DWORD *)(v32 + 104) + *(_DWORD *)(v33 + 64);
              *(_DWORD *)(a4 + 4) = v34;
              *(_DWORD *)(a4 + 12) = v34 + *(_DWORD *)(*(_QWORD *)(v31 + v30 - 96) + 72LL);
            }
            v35 = *(_DWORD *)(*(_QWORD *)(v31 + v30 - 96) + 68LL) + *(_DWORD *)(*((_QWORD *)a1 + 5) + 108LL);
            *(_DWORD *)(a4 + 8) = v35;
            *(_DWORD *)(a4 + 16) = v35 + *(_DWORD *)(*(_QWORD *)(v31 + v30 - 96) + 76LL);
          }
          else
          {
            *(_OWORD *)(a4 + 4) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL);
          }
          v36 = safe_cast_fnid_to_PMENUWND(a1);
          if ( !v36 )
            goto LABEL_21;
          SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v51, *(_QWORD *)(v36 + 8));
          if ( !*(_QWORD *)v51 )
            goto LABEL_21;
          v37 = GetThreadpGlobalPopupMenu(*((_QWORD *)a1 + 2));
          if ( *(_QWORD *)(v38 + 64) != v37 )
            goto LABEL_21;
          v39 = *(_DWORD *)(a4 + 40) | 1;
          *(_DWORD *)(a4 + 40) = v39;
          if ( !(_DWORD)v5 )
            goto LABEL_82;
          if ( (_DWORD)v5 == *(_DWORD *)(*(_QWORD *)v51 + 80LL) + 1 )
          {
            v40 = v51;
            *(_DWORD *)(a4 + 40) |= 2u;
            if ( *(_QWORD *)(*(_QWORD *)v40 + 24LL) )
            {
              v49 = *(__int64 **)(*(_QWORD *)v51 + 24LL);
              goto LABEL_85;
            }
LABEL_66:
            *(_QWORD *)(a4 + 32) = v9;
          }
LABEL_21:
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v51);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v53);
          return 1LL;
        }
        break;
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v51);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v53);
  return 0LL;
}
