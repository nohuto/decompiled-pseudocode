/*
 * XREFs of ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x180006A4C
 * Callers:
 *     ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z @ 0x1800060E8 (-GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z.c)
 * Callees:
 *     ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x1800068BC (-NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z.c)
 *     ?GetSystemMetrics@CWindowData@@QEAAHH@Z @ 0x18001B4CC (-GetSystemMetrics@CWindowData@@QEAAHH@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x1800411FC (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     floor_0 @ 0x18005056A (floor_0.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 */

void __fastcall CTopLevelWindow::GetTitleBarInfo(CTopLevelWindow *this, struct tagTITLEBARINFOEX *a2, bool *a3)
{
  int SystemMetrics; // eax
  LONG v7; // ecx
  int v8; // eax
  bool v9; // cf
  __int64 v10; // rax
  RECT *v11; // r14
  DWORD *v12; // rbx
  int i; // ebp
  __int64 v14; // rdx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-48h] BYREF
  RECT v17; // [rsp+24h] [rbp-44h]

  if ( CTopLevelWindow::HasRenderedBorder(*((_DWORD *)this + 152)) )
  {
    *a3 = 1;
    *(_QWORD *)a2->rgstate = 0LL;
    *(_QWORD *)&a2->rgstate[2] = 0LL;
    *(_QWORD *)&a2->rgstate[4] = 0LL;
    memset_0(a2->rgrect, 0, sizeof(a2->rgrect));
    a2->rgstate[0] |= 0x100000u;
    if ( (*(_DWORD *)(*((_QWORD *)this + 93) + 100LL) & 0xC00000) == 0xC00000 )
    {
      a2->rcTitleBar.left = *((_DWORD *)this + 153);
      SystemMetrics = CWindowData::GetSystemMetrics(*((CWindowData **)this + 93), 8);
      a2->rcTitleBar.top = (int)floor_0((float)((float)SystemMetrics * *(float *)(*((_QWORD *)this + 93) + 176LL)) + 0.5);
      v7 = *((_DWORD *)this + 28) - *((_DWORD *)this + 154);
      a2->rcTitleBar.right = v7;
      a2->rcTitleBar.bottom = *((_DWORD *)this + 155);
      v8 = *((_DWORD *)this + 152);
      if ( (v8 & 0x10000) != 0 )
      {
        v9 = (v8 & 0x20000) != 0;
        v10 = *((_QWORD *)this + 68);
        if ( v9 )
          a2->rcTitleBar.right = v7 - *(_DWORD *)(v10 + 112);
        else
          a2->rcTitleBar.left += *(_DWORD *)(v10 + 112);
      }
      OffsetRect(
        &a2->rcTitleBar,
        *(_DWORD *)(*((_QWORD *)this + 93) + 48LL),
        *(_DWORD *)(*((_QWORD *)this + 93) + 52LL));
      v11 = &a2->rgrect[2];
      a2->rgstate[1] = 0x8000;
      v12 = &a2->rgstate[2];
      for ( i = 2; i <= 5; ++i )
      {
        v14 = 1LL;
        switch ( i )
        {
          case 2:
            v16 = 1;
            break;
          case 3:
            v16 = 2;
            v14 = 2LL;
            break;
          case 4:
            v16 = 0;
            v14 = 0LL;
            break;
          case 5:
            v16 = 3;
            v14 = 3LL;
            break;
        }
        v15 = *((_DWORD *)this + 152);
        if ( (v15 & dword_1800A4680[2 * v14]) != 0 )
        {
          if ( (v15 & dword_1800A4680[2 * v14 + 1]) != 0 )
          {
            if ( *(_DWORD *)(*((_QWORD *)this + v14 + 63) + 400LL) == 2 )
              *v12 |= 8u;
          }
          else
          {
            *v12 |= 1u;
          }
        }
        else
        {
          *v12 |= 0x8000u;
        }
        if ( (*v12 & 0x8000) == 0 )
        {
          CTopLevelWindow::NcAdornmentInfoQuery(this, (struct NCADORNMENT_INFO *)&v16);
          *v11 = v17;
        }
        ++v12;
        ++v11;
      }
    }
    else
    {
      a2->rgstate[0] |= 0x8000u;
    }
  }
  else
  {
    *a3 = 0;
  }
}
