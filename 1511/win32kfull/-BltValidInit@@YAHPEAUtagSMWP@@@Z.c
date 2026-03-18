/*
 * XREFs of ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0055B50
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     SpbCheckRect @ 0x1C00097BC (SpbCheckRect.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C00573EC (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C006A080 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01C518C (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 */

__int64 __fastcall BltValidInit(struct tagSMWP *a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rbx
  int v3; // r14d
  int v4; // esi
  int v5; // edi
  __int64 v6; // r15
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  HRGN EmptyRgn; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16; // ecx

  v1 = 0;
  v2 = *((_QWORD *)a1 + 5);
  v3 = 0;
  v4 = *((_DWORD *)a1 + 7) - 1;
  if ( v4 < 0 )
    return 0;
  do
  {
    *(_QWORD *)(v2 + 96) = 0LL;
    v5 = *(_DWORD *)(v2 + 32);
    if ( !*(_QWORD *)v2 )
      goto LABEL_9;
    v6 = HMValidateHandleNoSecure(*(_QWORD *)v2, 1);
    if ( !v6 || !(unsigned int)IsStillWindowC(*(HWND *)(v2 + 8)) )
    {
      *(_QWORD *)v2 = 0LL;
      *(_DWORD *)(v2 + 32) = 6159;
      goto LABEL_9;
    }
    if ( *(_QWORD *)(gpDispInfo + 72LL) && (v5 & 8) == 0 )
      SpbCheckRect((struct tagWND *)v6, (struct tagRECT *)(v6 + 112), 1u);
    ++v1;
    if ( (v5 & 0x18E7) != 0x1807 )
      v3 = 1;
    if ( (*(_DWORD *)(v2 + 32) & 8) == 0 )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(81LL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) == 0 )
        {
LABEL_34:
          v11 = (_DWORD *)(gpsi + 2592LL);
          goto LABEL_17;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(v8)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_34;
      }
      if ( (unsigned int)IsDPIDWMSysMet(81LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v16 = 0)
          : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v16) )
      {
        v11 = (_DWORD *)(gpsi + 2980LL);
      }
      else
      {
        v11 = (_DWORD *)(gpsi + 2204LL);
      }
LABEL_17:
      if ( !*v11 )
        PreventInterMonitorBlts((struct tagCVR *)v2);
      *(_DWORD *)(v2 + 88) = 0;
      EmptyRgn = (HRGN)CreateEmptyRgn();
      *(_QWORD *)(v2 + 96) = EmptyRgn;
      if ( !EmptyRgn || !(unsigned int)SwpCalcVisRgn((struct tagWND *)v6, EmptyRgn) )
        *(_DWORD *)(v2 + 88) = 2;
    }
LABEL_9:
    v2 += 168LL;
    --v4;
  }
  while ( v4 >= 0 );
  if ( !v3 )
    return 0;
  return v1;
}
