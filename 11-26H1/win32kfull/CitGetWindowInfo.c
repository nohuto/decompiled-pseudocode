/*
 * XREFs of CitGetWindowInfo @ 0x14025D590
 * Callers:
 *     <none>
 * Callees:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     GetNormalRect @ 0x14024BFD0 (GetNormalRect.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall CitGetWindowInfo(__int64 a1, _WORD *a2)
{
  __int64 result; // rax
  __int16 v4; // bx
  const struct tagWND *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  char v8; // cl
  __int16 v9; // si
  __int16 v10; // dx
  __int16 v11; // dx
  __int128 v12; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF

  result = GetTopLevelWindow(a1);
  v4 = 0;
  v5 = (const struct tagWND *)result;
  if ( result )
  {
    v6 = *(_QWORD *)(result + 40);
    v12 = 0LL;
    v13 = *(_OWORD *)(v6 + 88);
    if ( (*(_BYTE *)(*(_QWORD *)(result + 40) + 31LL) & 0x20) != 0
      && (unsigned int)GetNormalRect((const struct tagWND *)result, &v12) )
    {
      v13 = v12;
    }
    LogicalToPhysicalDPIRect(&v13, &v13, *(unsigned int *)(*((_QWORD *)v5 + 5) + 288LL), 0LL);
    *a2 = WORD4(v13) - v13;
    a2[1] = WORD6(v13) - WORD2(v13);
    v7 = MonitorFromRect((__int32 *)&v13, 1LL, 0x12u);
    if ( v7 )
      CitGetMonitorInfo(v7, a2);
    v8 = *(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL);
    if ( (v8 & 0x20) != 0 )
    {
      v9 = 1;
    }
    else if ( (v8 & 1) != 0 )
    {
      v9 = 2;
    }
    else
    {
      v9 = 0;
      if ( IsArranged(v5) )
        v9 = 3;
    }
    v10 = 0;
    if ( (*(_DWORD *)(*((_QWORD *)v5 + 5) + 288LL) & 0xF) == 1 )
    {
      v10 = 1;
    }
    else if ( (*(_DWORD *)(*((_QWORD *)v5 + 5) + 288LL) & 0xF) == 2 )
    {
      v10 = 2;
    }
    v11 = v9 | (8 * v10);
    a2[4] = v11;
    result = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 456LL) + 272LL);
    if ( (unsigned __int16)result > 0x60u )
    {
      if ( (unsigned __int16)result > 0x78u )
      {
        if ( (unsigned __int16)result > 0x90u )
        {
          if ( (unsigned __int16)result > 0xA8u )
          {
            v4 = 192;
            if ( (unsigned __int16)result > 0xC0u )
            {
              if ( (unsigned __int16)result > 0xF0u )
              {
                if ( (unsigned __int16)result > 0x120u )
                  v4 = 224;
              }
              else
              {
                v4 = 160;
              }
            }
            else
            {
              v4 = 128;
            }
          }
          else
          {
            v4 = 96;
          }
        }
        else
        {
          v4 = 64;
        }
      }
      else
      {
        v4 = 32;
      }
    }
    a2[4] = v4 | v11;
  }
  return result;
}
