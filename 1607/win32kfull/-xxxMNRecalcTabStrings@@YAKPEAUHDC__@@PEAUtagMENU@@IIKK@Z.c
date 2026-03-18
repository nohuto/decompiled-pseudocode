/*
 * XREFs of ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C014E06C
 * Callers:
 *     xxxMNCompute @ 0x1C00B4BF8 (xxxMNCompute.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     MNIsOwnerDrawItem @ 0x1C00B6AB4 (MNIsOwnerDrawItem.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9374 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C00B98EC (CALL_LPK.c)
 *     GreGetTextExtentW @ 0x1C0123640 (GreGetTextExtentW.c)
 *     FindCharPosition @ 0x1C0245FB8 (FindCharPosition.c)
 */

__int64 __fastcall xxxMNRecalcTabStrings(
        HDC a1,
        struct tagMENU *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // ebp
  int v7; // r13d
  unsigned int v10; // ebx
  __int64 v11; // r9
  unsigned int v12; // r14d
  __int64 v13; // rdi
  int v15; // r10d
  __int64 v16; // rax
  int v17; // r10d
  int v18; // edx
  __int64 v19; // rcx
  int CharPosition; // eax
  __int64 v22; // r9
  __int64 v23; // r12
  int v24; // r11d
  __int64 ThreadWin32Thread; // rax
  int v26; // eax
  unsigned int v27; // r8d
  WCHAR *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 DPIMetrics; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // [rsp+30h] [rbp-48h]
  struct tagSIZE v41; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v42; // [rsp+90h] [rbp+18h]

  v6 = 0;
  v7 = a6 + a5;
  v10 = a3;
  v42 = a3;
  if ( (unsigned int)a3 >= *((_DWORD *)a2 + 13) || (unsigned int)a3 > a4 )
    return v6;
  v11 = 0LL;
  a5 = 0;
  v12 = a3;
  if ( (_DWORD)a3 == -1 )
    v13 = 0LL;
  else
    v13 = *((_QWORD *)a2 + 10) + 152LL * (unsigned int)a3;
  if ( (unsigned int)a3 < a4 )
  {
    while ( 1 )
    {
      if ( !v13 )
      {
LABEL_17:
        v10 = v42;
        break;
      }
      a3 = (unsigned int)MNIsOwnerDrawItem((__int64)a2, (_DWORD *)v13);
      v15 = 0;
      *(_DWORD *)(v13 + 88) = v7 - a6;
      v16 = *(_QWORD *)(v13 + 40);
      v40 = v16;
      if ( v16 && *(_DWORD *)(v13 + 48) )
      {
        if ( !(_DWORD)a3 )
        {
          v41.cx = 0;
          v41.cy = 0;
          CharPosition = FindCharPosition(v16, 9LL);
          v23 = CharPosition;
          if ( CharPosition < v24 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, v22);
            v26 = CALL_LPK(ThreadWin32Thread);
            v27 = *(_DWORD *)(v13 + 48) - v23 - 1;
            v28 = (WCHAR *)(v40 + 2 + 2 * v23);
            if ( v26 )
              xxxClientGetTextExtentPointW(a1, v28, v27, &v41);
            else
              GreGetTextExtentW(a1, v28, v27, &v41, 1);
            DPIMetrics = GetDPIMetrics(v30, v29);
            v15 = *(_DWORD *)(DPIMetrics + 48) + v41.cx;
          }
          v11 = a5;
          goto LABEL_11;
        }
      }
      else if ( !(_DWORD)a3 )
      {
        goto LABEL_11;
      }
      v11 = (unsigned int)(v11 + 1);
      a5 = v11;
LABEL_11:
      v17 = v7 + v15;
      if ( v17 > (int)v6 )
        v6 = v17;
      if ( ++v12 == -1 || v12 >= *((_DWORD *)a2 + 13) )
        v13 = 0LL;
      else
        v13 = *((_QWORD *)a2 + 10) + 152LL * v12;
      if ( v12 >= a4 )
        goto LABEL_17;
    }
  }
  if ( (_DWORD)v11 != a4 - v10 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, (__int64)a2, a3, v11) & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v34, v35) + 408)
        ? (v33 = 0LL)
        : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v32,
                                                       v36,
                                                       v37)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v33) )
    {
      v38 = (_QWORD *)gpsi;
    }
    else
    {
      v38 = (_QWORD *)gpsi;
      if ( *(_WORD *)(gpsi + 8678LL) != 96 )
      {
        v39 = gpsi + 7140LL;
LABEL_47:
        v6 += *(_DWORD *)(GetDPIMetrics(v33, v32) + 48) + *(_DWORD *)(v39 + 1016);
        goto LABEL_19;
      }
    }
    v39 = *v38 + 5652LL;
    goto LABEL_47;
  }
LABEL_19:
  v18 = v6 - a6;
  while ( 1 )
  {
    v19 = v10 == -1 || v10 >= *((_DWORD *)a2 + 13) ? 0LL : *((_QWORD *)a2 + 10) + 152LL * v10;
    if ( v10 >= a4 || !v19 )
      break;
    *(_DWORD *)(v19 + 80) = v18;
    ++v10;
  }
  return v6;
}
