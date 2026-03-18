/*
 * XREFs of ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x14014DE9C
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x14014C0C0 (xxxGetTitleBarInfoEx.c)
 *     NtUserGetTitleBarInfo @ 0x1402B4CA0 (NtUserGetTitleBarInfo.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x140032974 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     xxxMNCanClose @ 0x140032C30 (xxxMNCanClose.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 *     _HasCaptionIcon @ 0x14014E1C4 (_HasCaptionIcon.c)
 */

void __fastcall xxxCommonGetTitleBarInfo(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  int v4; // ecx
  __int64 v5; // rdx
  int v6; // ecx
  unsigned int WindowDpiLastNotify; // r14d
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  unsigned int AppCompatFlags2; // eax
  __int64 v12; // r8
  int WindowBordersForDpiWithCompatFlags2; // eax
  int v14; // ebx
  int v15; // ebx
  int v16; // ecx
  char v17; // cl
  char v18; // cl
  char *v19; // rcx
  int v20; // edx
  int v21; // r8d
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax

  v4 = *((_DWORD *)a2 + 5);
  *((_DWORD *)a2 + 5) = v4 | 0x100000;
  v5 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v5 + 30) & 0xC0) == 0xC0 )
  {
    if ( (*(_BYTE *)(v5 + 31) & 0x20) != 0 || (*(_BYTE *)(v5 + 16) & 8) != 0 )
    {
      v6 = *(_DWORD *)(v5 + 288) & 0xF;
      if ( v6 == 3 )
      {
        WindowDpiLastNotify = (*(_DWORD *)(v5 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v5 + 232) & 0x400) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( !v6
             && (v22 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v22 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
      }
      *(_OWORD *)((char *)a2 + 4) = *(_OWORD *)(v5 + 88);
      v8 = *((_QWORD *)a1 + 5);
      v9 = *(_DWORD *)(v8 + 24);
      v10 = *(_DWORD *)(v8 + 28);
      AppCompatFlags2 = GetAppCompatFlags2(39168LL);
      WindowBordersForDpiWithCompatFlags2 = GetWindowBordersForDpiWithCompatFlags2(
                                              v10,
                                              v9,
                                              v12,
                                              0,
                                              WindowDpiLastNotify,
                                              AppCompatFlags2);
      v14 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 1) += WindowBordersForDpiWithCompatFlags2;
      v15 = WindowBordersForDpiWithCompatFlags2 + v14;
      *((_DWORD *)a2 + 3) -= WindowBordersForDpiWithCompatFlags2;
      v16 = 22;
      *((_DWORD *)a2 + 4) -= WindowBordersForDpiWithCompatFlags2;
      *((_DWORD *)a2 + 2) = v15;
      if ( *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
        v16 = 2;
      *((_DWORD *)a2 + 4) = v15 + GetDpiDependentMetric(v16, WindowDpiLastNotify);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 && (unsigned int)HasCaptionIcon(a1) )
      {
        v20 = *((_DWORD *)a2 + 2);
        v21 = *((_DWORD *)a2 + 4);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
          *((_DWORD *)a2 + 3) += v20 - v21 + 1;
        else
          *((_DWORD *)a2 + 1) += v21 + ~v20;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
      {
        if ( !(unsigned int)xxxMNCanClose(a1) )
          *((_DWORD *)a2 + 10) |= 1u;
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x10) != 0 )
          *((_DWORD *)a2 + 10) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 10) |= 0x8000u;
      }
      v17 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL);
      if ( (v17 & 8) != 0 )
      {
        if ( (v17 & 1) == 0 )
        {
          v23 = *((_DWORD *)a2 + 8);
          if ( (v17 & 2) != 0 )
            v24 = v23 | 1;
          else
            v24 = v23 | 0x8000;
          *((_DWORD *)a2 + 8) = v24;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x20) != 0 )
          *((_DWORD *)a2 + 8) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 8) |= 0x8000u;
      }
      v18 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL);
      if ( (v18 & 8) != 0 )
      {
        if ( (v18 & 2) == 0 )
        {
          v25 = *((_DWORD *)a2 + 7);
          if ( (v18 & 1) != 0 )
            v26 = v25 | 1;
          else
            v26 = v25 | 0x8000;
          *((_DWORD *)a2 + 7) = v26;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x40) != 0 )
          *((_DWORD *)a2 + 7) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 7) |= 0x8000u;
      }
      v19 = (char *)*((_QWORD *)a1 + 5);
      if ( (v19[25] & 4) == 0 || (v19[30] & 3) != 0 )
      {
        *((_DWORD *)a2 + 9) |= 0x8000u;
      }
      else if ( v19[21] < 0 )
      {
        *((_DWORD *)a2 + 9) |= 8u;
      }
      *((_DWORD *)a2 + 6) = 0x8000;
    }
    else
    {
      *((_DWORD *)a2 + 5) = v4 | 0x110000;
      *(_OWORD *)((char *)a2 + 4) = 0LL;
    }
  }
  else
  {
    *((_DWORD *)a2 + 5) = v4 | 0x108000;
  }
}
