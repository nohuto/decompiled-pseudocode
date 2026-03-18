/*
 * XREFs of CitGetWindowInfo @ 0x1C00F6D90
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall CitGetWindowInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v4; // bl
  __int64 v5; // rdi
  unsigned int MonitorFlags; // eax
  __int64 v7; // rax
  char v8; // al
  char v9; // cl
  char v10; // cl
  char v11; // dl
  char v12; // dl
  __int128 *Prop; // rax
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF

  result = GetTopLevelWindow(a1);
  v4 = 0;
  v5 = result;
  if ( result )
  {
    v14 = *(_OWORD *)(result + 112);
    if ( (*(_BYTE *)(result + 55) & 0x20) != 0 )
    {
      Prop = (__int128 *)GetProp(result, (unsigned __int16)atomCheckpointProp, 1LL);
      if ( Prop )
        v14 = *Prop;
    }
    MonitorFlags = GetMonitorFlags(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 376LL));
    LogicalToPhysicalDPIRect(&v14, &v14, MonitorFlags, 0LL);
    *(_WORD *)a2 = WORD4(v14) - v14;
    *(_WORD *)(a2 + 2) = WORD6(v14) - WORD2(v14);
    v7 = MonitorFromRect((int *)&v14, 0x21u);
    if ( v7 )
      CitGetMonitorInfo(v7, a2);
    v8 = *(_BYTE *)(v5 + 55);
    if ( (v8 & 0x20) != 0 )
    {
      v10 = 1;
    }
    else if ( (v8 & 1) != 0 )
    {
      v10 = 2;
    }
    else
    {
      v9 = *(_BYTE *)(v5 + 289);
      if ( (v9 & 3) == 3 )
      {
        v10 = 5;
      }
      else if ( (v9 & 1) != 0 )
      {
        v10 = 3;
      }
      else if ( (v9 & 2) != 0 )
      {
        v10 = 4;
      }
      else
      {
        v10 = 0;
        if ( (*(_BYTE *)(v5 + 291) & 1) != 0 )
          v10 = 6;
      }
    }
    v11 = 0;
    if ( *(_DWORD *)(v5 + 344) == 1 )
    {
      v11 = 1;
    }
    else if ( *(_DWORD *)(v5 + 344) == 2 )
    {
      v11 = 2;
    }
    v12 = v10 | (8 * v11);
    *(_BYTE *)(a2 + 9) = v12;
    result = *(unsigned __int16 *)(gpsi + 7286LL);
    if ( (unsigned int)result > 0x60 )
    {
      if ( (unsigned int)result > 0x78 )
      {
        if ( (unsigned int)result > 0x90 )
        {
          if ( (unsigned int)result > 0xA8 )
          {
            if ( (unsigned int)result > 0xC0 )
            {
              if ( (unsigned int)result > 0xF0 )
                v4 = ((unsigned int)result > 0x120) + 6;
              else
                v4 = 5;
            }
            else
            {
              v4 = 4;
            }
          }
          else
          {
            v4 = 3;
          }
        }
        else
        {
          v4 = 2;
        }
      }
      else
      {
        v4 = 1;
      }
    }
    *(_BYTE *)(a2 + 9) = v12 | (32 * v4);
  }
  return result;
}
