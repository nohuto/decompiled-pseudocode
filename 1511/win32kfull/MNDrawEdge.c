/*
 * XREFs of MNDrawEdge @ 0x1C023F94C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1C02418A0 (xxxMNDrawFullNC.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C023E928 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 */

void __fastcall MNDrawEdge(__int64 a1, HDC a2, _DWORD *a3, int a4)
{
  int v5; // esi
  int v6; // ebp
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rax
  int *v18; // rcx
  int v19; // edi
  HBRUSH v20; // rax

  v5 = a3[2] - *a3;
  v6 = a3[3] - a3[1];
  if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x4000) != 0 )
    {
      goto LABEL_4;
    }
  }
  else if ( !IsDPIDWMSysMet(v10)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v16 = 0)
           : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v16) )
  {
LABEL_4:
    if ( IsDPIDWMSysMet(5uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v13 = 0)
        : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v13) )
    {
      v17 = gpsi;
      v18 = (int *)(gpsi + 2676LL);
    }
    else
    {
      v17 = gpsi;
      v18 = (int *)(gpsi + 1900LL);
    }
    goto LABEL_20;
  }
  v17 = gpsi;
  v18 = (int *)(gpsi + 2288LL);
LABEL_20:
  v19 = *v18;
  DrawOutline(a2, 0, 0, v5, v6, *v18, *(HBRUSH *)(v17 + 3824));
  v20 = *(HBRUSH *)(a1 + 112);
  if ( !v20 )
    v20 = *(HBRUSH *)(gpsi + 3728LL);
  DrawOutline(a2, v19, v19, v5 - 2 * v19, v6 - 2 * v19, 2 * v19, v20);
  if ( a4 == 0x2000 )
  {
    *a3 -= -3 * v19;
    a3[2] += -3 * v19;
    a3[1] -= -3 * v19;
    a3[3] += -3 * v19;
  }
}
