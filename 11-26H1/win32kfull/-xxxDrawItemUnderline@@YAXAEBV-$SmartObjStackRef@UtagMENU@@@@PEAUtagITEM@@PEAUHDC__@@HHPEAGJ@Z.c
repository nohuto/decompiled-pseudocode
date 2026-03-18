/*
 * XREFs of ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x14028F650
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x14017819C (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1401FAD80 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 * Callees:
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 *     xxxClientGetTextExtentPointW @ 0x140122668 (xxxClientGetTextExtentPointW.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x140123D9C (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     GreGetTextExtentW @ 0x1401FB67C (GreGetTextExtentW.c)
 *     GetDpiMetricsForCurrentThread @ 0x1403023CC (GetDpiMetricsForCurrentThread.c)
 */

char __fastcall xxxDrawItemUnderline(
        __int64 **a1,
        __int64 a2,
        Gre::Base *a3,
        int a4,
        int a5,
        unsigned __int16 *SourceString,
        signed int a7)
{
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct tagTHREADINFO *v15; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // r12d
  int v23; // eax
  WCHAR *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  bool v29; // zf
  __int64 DpiMetricsForCurrentThread; // rax
  __int64 v31; // rax
  struct tagSIZE v33; // [rsp+30h] [rbp-28h] BYREF

  v11 = PtiCurrent((__int64)a1);
  v15 = v11;
  if ( a7 == 0xFFFF )
    return (char)v11;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 84LL) != 0x7FFFFFFF )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    if ( CurrentProcessWin32Process )
    {
      v13 = -*(_QWORD *)CurrentProcessWin32Process;
      v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcessWin32Process &= v12;
    }
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 744) & 0xF) == 0 )
    {
LABEL_15:
      v22 = *(_DWORD *)(*(_QWORD *)a2 + 84LL) + a4;
      if ( !*(_DWORD *)(*(_QWORD *)a2 + 88LL) )
      {
        v33 = 0LL;
        v23 = CALL_LPK(v15);
        v24 = &SourceString[a7];
        if ( v23 )
        {
          xxxClientGetTextExtentPointW(a3, v24, 1, &v33);
          v25 = (__int64)a1[2];
          if ( !v25 )
            v25 = **a1;
          LOBYTE(v11) = MNIspItemValid(v25, a2);
          v29 = (_BYTE)v11 == 0;
        }
        else
        {
          LODWORD(v11) = GreGetTextExtentW((HDC)a3, v24, 1u, &v33);
          v29 = (_DWORD)v11 == 0;
        }
        if ( v29 )
          return (char)v11;
        DpiMetricsForCurrentThread = GetDpiMetricsForCurrentThread(v27, v26, v28);
        v13 = (unsigned int)(v33.cx - *(_DWORD *)(DpiMetricsForCurrentThread + 16));
        *(_DWORD *)(*(_QWORD *)a2 + 88LL) = v13;
      }
      v31 = GetDpiMetricsForCurrentThread(v13, v12, v14);
      LOBYTE(v11) = GrePatBlt(a3, v22, a5 + *(_DWORD *)(v31 + 24), *(_DWORD *)(*(_QWORD *)a2 + 88LL), 1, 15728673);
      return (char)v11;
    }
  }
  if ( !a7 )
  {
    *(_DWORD *)(*(_QWORD *)a2 + 84LL) = 0;
    goto LABEL_15;
  }
  v33 = 0LL;
  if ( !(unsigned int)CALL_LPK(v15) )
  {
    GreGetTextExtentW((HDC)a3, SourceString, a7, &v33);
LABEL_13:
    v21 = GetDpiMetricsForCurrentThread(v19, v18, v20);
    v13 = (unsigned int)(v33.cx - *(_DWORD *)(v21 + 16));
    *(_DWORD *)(*(_QWORD *)a2 + 84LL) = v13;
    goto LABEL_15;
  }
  xxxClientGetTextExtentPointW(a3, SourceString, a7, &v33);
  v17 = (__int64)a1[2];
  if ( !v17 )
    v17 = **a1;
  LOBYTE(v11) = MNIspItemValid(v17, a2);
  if ( (_BYTE)v11 )
    goto LABEL_13;
  return (char)v11;
}
