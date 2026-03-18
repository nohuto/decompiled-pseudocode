/*
 * XREFs of xxxCreateWindowSmIcon @ 0x1C00FE3C0
 * Callers:
 *     xxxGetWindowSmIcon @ 0x1C007EE70 (xxxGetWindowSmIcon.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00804CC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C022A494 (xxxRecreateSmallIcons.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     InternalSetProp @ 0x1C0079054 (InternalSetProp.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxClientCopyImage @ 0x1C0080648 (xxxClientCopyImage.c)
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall xxxCreateWindowSmIcon(_DWORD *a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int *v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int *v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // ecx

  v5 = 0LL;
  v6 = HMValidateHandleNoRip(a2, 3);
  if ( !v6 )
    return v5;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x32uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) != 0 )
    {
      goto LABEL_5;
    }
LABEL_17:
    v10 = (int *)(gpsi + 2468LL);
    goto LABEL_7;
  }
  if ( IsDPIDWMSysMet(v7)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_17;
  }
LABEL_5:
  if ( IsDPIDWMSysMet(0x32uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v20 = 0)
      : (v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v20) )
  {
    v10 = (int *)(gpsi + 2856LL);
  }
  else
  {
    v10 = (int *)(gpsi + 2080LL);
  }
LABEL_7:
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x31uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) != 0 )
    {
      goto LABEL_10;
    }
  }
  else if ( !IsDPIDWMSysMet(v11)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v23 = 0)
           : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v23) )
  {
LABEL_10:
    if ( IsDPIDWMSysMet(0x31uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v24 = 0)
        : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v24) )
    {
      v14 = (int *)(gpsi + 2852LL);
    }
    else
    {
      v14 = (int *)(gpsi + 2076LL);
    }
    goto LABEL_12;
  }
  v14 = (int *)(gpsi + 2464LL);
LABEL_12:
  v15 = xxxClientCopyImage(
          *(_QWORD *)v6,
          (unsigned int)(*(_WORD *)(v6 + 74) != 3) + 1,
          *v14,
          *v10,
          a3 != 0 ? 0x4000 : 0);
  if ( v15 )
  {
    v5 = *(_QWORD *)v15;
    if ( *(_QWORD *)v15 )
    {
      *(_DWORD *)(v15 + 80) |= 0x80u;
      InternalSetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1356LL), v5, 5);
      if ( !a3 )
        SetOrClrWF(1, a1, 0x720u, 1);
    }
  }
  return v5;
}
