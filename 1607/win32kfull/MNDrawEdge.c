/*
 * XREFs of MNDrawEdge @ 0x1C023715C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1C0237D5C (xxxMNDrawFullNC.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C02362D8 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 */

void __fastcall MNDrawEdge(__int64 a1, HDC a2, _DWORD *a3, int a4)
{
  int v5; // esi
  int v7; // ebp
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // ecx
  __int64 v36; // rax
  int *v37; // rcx
  int v38; // edi
  HBRUSH v39; // rax

  v5 = a3[2] - *a3;
  v7 = a3[3] - a3[1];
  if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) != 0 )
      goto LABEL_3;
  }
  else if ( !IsDPIDWMSysMet(v11)
         || (W32GetCurrentThreadDpiAwarenessContext(v26, v25, v27, v28) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 408)
           ? (v35 = 0)
           : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v32,
                                                          v33,
                                                          v34)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v35) )
  {
LABEL_3:
    if ( IsDPIDWMSysMet(5uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20) + 408)
        ? (v24 = 0)
        : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v21,
                                                       v22,
                                                       v23)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v24) )
    {
      v36 = gpsi;
      v37 = (int *)(gpsi + 2676LL);
    }
    else
    {
      v36 = gpsi;
      v37 = (int *)(gpsi + 1900LL);
    }
    goto LABEL_18;
  }
  v36 = gpsi;
  v37 = (int *)(gpsi + 2288LL);
LABEL_18:
  v38 = *v37;
  DrawOutline(a2, 0, 0, v5, v7, *v37, *(HBRUSH *)(v36 + 5216));
  v39 = *(HBRUSH *)(a1 + 112);
  if ( !v39 )
    v39 = *(HBRUSH *)(gpsi + 5120LL);
  DrawOutline(a2, v38, v38, v5 - 2 * v38, v7 - 2 * v38, 2 * v38, v39);
  if ( a4 == 0x2000 )
  {
    *a3 -= -3 * v38;
    a3[2] += -3 * v38;
    a3[1] -= -3 * v38;
    a3[3] += -3 * v38;
  }
}
