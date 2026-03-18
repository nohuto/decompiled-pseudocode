/*
 * XREFs of CitGetWindowInfo @ 0x1C0080E80
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall CitGetWindowInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v4; // bl
  __int64 v5; // rdi
  unsigned int MonitorFlags; // eax
  __int64 v7; // r8
  __int64 v8; // rax
  char v9; // al
  char v10; // cl
  char v11; // cl
  char v12; // dl
  char v13; // dl
  __int128 *Prop; // rax
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF

  result = GetTopLevelWindow(a1);
  v4 = 0;
  v5 = result;
  if ( result )
  {
    v15 = *(_OWORD *)(result + 112);
    if ( (*(_BYTE *)(result + 55) & 0x20) != 0 )
    {
      Prop = (__int128 *)GetProp(result, (unsigned __int16)atomCheckpointProp, 1LL);
      if ( Prop )
        v15 = *Prop;
    }
    MonitorFlags = GetMonitorFlags(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 384LL));
    LogicalToPhysicalDPIRect(&v15, &v15, MonitorFlags, 0LL);
    *(_WORD *)a2 = WORD4(v15) - v15;
    *(_WORD *)(a2 + 2) = WORD6(v15) - WORD2(v15);
    v8 = MonitorFromRect(&v15, 33LL, v7);
    if ( v8 )
      CitGetMonitorInfo(v8, a2);
    v9 = *(_BYTE *)(v5 + 55);
    if ( (v9 & 0x20) != 0 )
    {
      v11 = 1;
    }
    else if ( (v9 & 1) != 0 )
    {
      v11 = 2;
    }
    else
    {
      v10 = *(_BYTE *)(v5 + 289);
      if ( (v10 & 3) == 3 )
      {
        v11 = 5;
      }
      else if ( (v10 & 1) != 0 )
      {
        v11 = 3;
      }
      else if ( (v10 & 2) != 0 )
      {
        v11 = 4;
      }
      else
      {
        v11 = 0;
        if ( (*(_BYTE *)(v5 + 291) & 1) != 0 )
          v11 = 6;
      }
    }
    v12 = 0;
    if ( *(_DWORD *)(v5 + 344) == 1 )
    {
      v12 = 1;
    }
    else if ( *(_DWORD *)(v5 + 344) == 2 )
    {
      v12 = 2;
    }
    v13 = v11 | (8 * v12);
    *(_BYTE *)(a2 + 9) = v13;
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
    *(_BYTE *)(a2 + 9) = v13 | (32 * v4);
  }
  return result;
}
