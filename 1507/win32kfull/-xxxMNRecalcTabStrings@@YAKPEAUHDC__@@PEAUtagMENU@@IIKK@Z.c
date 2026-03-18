/*
 * XREFs of ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C011F970
 * Callers:
 *     xxxMNCompute @ 0x1C0052F0C (xxxMNCompute.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     MNIsOwnerDrawItem @ 0x1C0055E1C (MNIsOwnerDrawItem.c)
 *     GreGetTextExtentW @ 0x1C00FA610 (GreGetTextExtentW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0126A38 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C0128938 (CALL_LPK.c)
 *     FindCharPosition @ 0x1C0249D58 (FindCharPosition.c)
 */

__int64 __fastcall xxxMNRecalcTabStrings(
        HDC a1,
        struct tagMENU *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // ebp
  int v7; // r13d
  unsigned int v10; // ebx
  unsigned int v11; // r9d
  unsigned int v12; // r14d
  __int64 v13; // rdi
  int v15; // r8d
  int v16; // r10d
  __int64 v17; // rax
  int v18; // r10d
  int v19; // edx
  __int64 v20; // rcx
  int CharPosition; // eax
  __int64 v23; // r12
  int v24; // r11d
  __int64 ThreadWin32Thread; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 DPIMetrics; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD *v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // [rsp+30h] [rbp-48h]
  struct tagSIZE v36; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v37; // [rsp+90h] [rbp+18h]

  v6 = 0;
  v7 = a6 + a5;
  v10 = a3;
  v37 = a3;
  if ( a3 >= *((_DWORD *)a2 + 13) || a3 > a4 )
    return v6;
  v11 = 0;
  a5 = 0;
  v12 = a3;
  if ( a3 == -1 )
    v13 = 0LL;
  else
    v13 = *((_QWORD *)a2 + 10) + 152LL * a3;
  if ( a3 < a4 )
  {
    while ( 1 )
    {
      if ( !v13 )
      {
LABEL_17:
        v10 = v37;
        break;
      }
      v15 = MNIsOwnerDrawItem((__int64)a2, (_DWORD *)v13);
      v16 = 0;
      *(_DWORD *)(v13 + 88) = v7 - a6;
      v17 = *(_QWORD *)(v13 + 40);
      v35 = v17;
      if ( v17 && *(_DWORD *)(v13 + 48) )
      {
        if ( !v15 )
        {
          v36.cx = 0;
          v36.cy = 0;
          CharPosition = FindCharPosition(v17, 9LL);
          v23 = CharPosition;
          if ( CharPosition < v24 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
              xxxClientGetTextExtentPointW(a1);
            else
              GreGetTextExtentW(a1, (__m128i *)(v35 + 2 + 2 * v23), *(_DWORD *)(v13 + 48) - v23 - 1, &v36, 1);
            DPIMetrics = GetDPIMetrics(v27, v26, v28);
            v16 = *(_DWORD *)(DPIMetrics + 48) + v36.cx;
          }
          v11 = a5;
          goto LABEL_11;
        }
      }
      else if ( !v15 )
      {
        goto LABEL_11;
      }
      a5 = ++v11;
LABEL_11:
      v18 = v7 + v16;
      if ( v18 > (int)v6 )
        v6 = v18;
      if ( ++v12 == -1 || v12 >= *((_DWORD *)a2 + 13) )
        v13 = 0LL;
      else
        v13 = *((_QWORD *)a2 + 10) + 152LL * v12;
      if ( v12 >= a4 )
        goto LABEL_17;
    }
  }
  if ( v11 != a4 - v10 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v31 = 0LL)
        : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !(_DWORD)v31) )
    {
      v33 = (_QWORD *)gpsi;
    }
    else
    {
      v33 = (_QWORD *)gpsi;
      if ( *(_WORD *)(gpsi + 7286LL) != 96 )
      {
        v34 = gpsi + 5748LL;
LABEL_48:
        v6 += *(_DWORD *)(v34 + 1016) + *(_DWORD *)(GetDPIMetrics(v31, v30, v32) + 48);
        goto LABEL_19;
      }
    }
    v34 = *v33 + 4260LL;
    goto LABEL_48;
  }
LABEL_19:
  v19 = v6 - a6;
  while ( 1 )
  {
    v20 = v10 == -1 || v10 >= *((_DWORD *)a2 + 13) ? 0LL : *((_QWORD *)a2 + 10) + 152LL * v10;
    if ( v10 >= a4 || !v20 )
      break;
    *(_DWORD *)(v20 + 80) = v19;
    ++v10;
  }
  return v6;
}
