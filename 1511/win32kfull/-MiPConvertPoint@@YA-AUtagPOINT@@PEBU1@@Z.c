/*
 * XREFs of ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C0008444
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C0008178 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     MiPConvertLogicalRect @ 0x1C0009FC0 (MiPConvertLogicalRect.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 */

struct tagPOINT __fastcall MiPConvertPoint(const struct tagPOINT *a1)
{
  INT v2; // eax
  int v4; // ecx
  int v5; // ecx
  INT *v6; // rbx
  __int64 v7; // rcx
  int v8; // ecx
  int v9; // ecx
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // ecx
  INT *v14; // rbx
  __int64 v15; // rcx
  int v16; // ecx
  int v17; // ecx
  _DWORD *v18; // rcx
  INT b[4]; // [rsp+20h] [rbp-28h]
  _BYTE v20[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v21; // [rsp+58h] [rbp+10h]

  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) == 0 )
  {
    *(_OWORD *)b = *(_OWORD *)MiPConvertLogicalRect(v20, gpDispInfo + 104LL);
    if ( (unsigned int)IsDPIAbsoluteSysMet(78LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) != 0 )
      {
        goto LABEL_7;
      }
    }
    else if ( !(unsigned int)((__int64 (*)(void))IsDPIDWMSysMet)()
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
             ? (v5 = 0)
             : (v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                               + 244LL) & 1),
               !v5) )
    {
LABEL_7:
      if ( (unsigned int)IsDPIDWMSysMet(78LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
          ? (v4 = 0)
          : (v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1),
            v4) )
      {
        v6 = (INT *)(gpsi + 2968LL);
      }
      else
      {
        v6 = (INT *)(gpsi + 2192LL);
      }
LABEL_23:
      if ( (unsigned int)IsDPIAbsoluteSysMet(76LL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) != 0 )
        {
          goto LABEL_26;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(v7)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
               ? (v9 = 0)
               : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                 + 244LL) & 1),
                 !v9) )
      {
LABEL_26:
        if ( (unsigned int)IsDPIDWMSysMet(76LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
            ? (v8 = 0)
            : (v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                              + 244LL) & 1),
              v8) )
        {
          v10 = (_DWORD *)(gpsi + 2960LL);
        }
        else
        {
          v10 = (_DWORD *)(gpsi + 2184LL);
        }
LABEL_42:
        LODWORD(v21) = EngMulDiv(a1->x - *v10, b[2], *v6);
        if ( (unsigned int)IsDPIAbsoluteSysMet(79LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) != 0 )
          {
            goto LABEL_45;
          }
        }
        else if ( !(unsigned int)IsDPIDWMSysMet(v11)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                 ? (v13 = 0)
                 : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                    + 244LL) & 1),
                   !v13) )
        {
LABEL_45:
          if ( (unsigned int)IsDPIDWMSysMet(79LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
              ? (v12 = 0)
              : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                 + 244LL) & 1),
                v12) )
          {
            v14 = (INT *)(gpsi + 2972LL);
          }
          else
          {
            v14 = (INT *)(gpsi + 2196LL);
          }
LABEL_61:
          if ( (unsigned int)IsDPIAbsoluteSysMet(77LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) != 0 )
            {
              goto LABEL_64;
            }
          }
          else if ( !(unsigned int)IsDPIDWMSysMet(v15)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                   ? (v17 = 0)
                   : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v17) )
          {
LABEL_64:
            if ( (unsigned int)IsDPIDWMSysMet(77LL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                ? (v16 = 0)
                : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                   + 244LL) & 1),
                  v16) )
            {
              v18 = (_DWORD *)(gpsi + 2964LL);
            }
            else
            {
              v18 = (_DWORD *)(gpsi + 2188LL);
            }
            goto LABEL_80;
          }
          v18 = (_DWORD *)(gpsi + 2576LL);
LABEL_80:
          v2 = EngMulDiv(a1->y - *v18, b[3], *v14);
          goto LABEL_3;
        }
        v14 = (INT *)(gpsi + 2584LL);
        goto LABEL_61;
      }
      v10 = (_DWORD *)(gpsi + 2572LL);
      goto LABEL_42;
    }
    v6 = (INT *)(gpsi + 2580LL);
    goto LABEL_23;
  }
  LODWORD(v21) = 2540 * (a1->x - *(_DWORD *)(gpDispInfo + 104LL)) / *(unsigned __int16 *)(gpDispInfo + 176LL);
  v2 = 2540 * (a1->y - *(_DWORD *)(gpDispInfo + 108LL)) / *(unsigned __int16 *)(gpDispInfo + 176LL);
LABEL_3:
  HIDWORD(v21) = v2;
  return (struct tagPOINT)v21;
}
