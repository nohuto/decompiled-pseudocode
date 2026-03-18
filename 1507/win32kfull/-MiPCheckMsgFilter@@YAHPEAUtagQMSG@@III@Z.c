/*
 * XREFs of ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C00E1C4C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     IsMouseInPointerActive @ 0x1C00E1D04 (IsMouseInPointerActive.c)
 */

__int64 __fastcall MiPCheckMsgFilter(struct tagQMSG *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // esi
  unsigned int v10; // ebp
  unsigned int v11; // ebp
  unsigned int v12; // ebp
  unsigned int v13; // ebp
  bool v14; // cf
  bool v15; // cf
  unsigned int v16; // eax
  unsigned int v17; // eax

  v4 = 0;
  if ( !a3 && a4 == -1 )
    return 1LL;
  if ( a3 <= a4 )
  {
    if ( a2 < a3 || a2 > a4 )
      goto LABEL_7;
    return 1LL;
  }
  if ( a2 < a4 || a2 > a3 )
    return 1LL;
LABEL_7:
  if ( !(unsigned int)IsMouseInPointerActive(gptiCurrent, a1) || (*((_DWORD *)a1 + 23) & 0x400) == 0 )
    return 0LL;
  if ( a3 <= a4 )
  {
    if ( a3 <= 0x257 && a4 >= 0x245 )
      goto LABEL_25;
  }
  else if ( a4 < 0x257 && a3 > 0x245 )
  {
    goto LABEL_25;
  }
  if ( a3 <= a4 )
  {
    if ( a3 > 0x244 || a4 < 0x241 )
      return 0LL;
  }
  else if ( a4 >= 0x244 || a3 <= 0x241 )
  {
    return 0LL;
  }
LABEL_25:
  if ( a2 > 0x200 )
  {
    switch ( a2 )
    {
      case 0x201u:
      case 0x203u:
      case 0x204u:
      case 0x206u:
      case 0x207u:
      case 0x209u:
      case 0x20Bu:
      case 0x20Du:
        goto LABEL_45;
      case 0x202u:
      case 0x205u:
      case 0x208u:
      case 0x20Cu:
        goto LABEL_34;
      case 0x20Au:
        if ( !a3 && a4 == -1 )
          return 1;
        v16 = 590;
        break;
      case 0x20Eu:
        if ( !a3 && a4 == -1 )
          return 1;
        v16 = 591;
        break;
      default:
        return 0LL;
    }
    if ( a3 <= a4 )
    {
      if ( a3 > v16 )
        return v4;
      v15 = a4 < v16;
LABEL_68:
      if ( !v15 )
        return 1;
      return v4;
    }
    if ( a4 <= v16 )
    {
      v14 = a3 < v16;
LABEL_64:
      if ( !v14 )
        return v4;
    }
    return 1;
  }
  if ( a2 != 512 )
  {
    if ( a2 > 0xA7 )
    {
      v10 = a2 - 168;
      if ( !v10 )
        goto LABEL_34;
      v11 = v10 - 1;
      if ( !v11 )
        goto LABEL_45;
      v12 = v11 - 2;
      if ( !v12 )
        goto LABEL_45;
      v13 = v12 - 1;
      if ( !v13 )
      {
LABEL_34:
        if ( !a3 && a4 == -1 )
          return 1;
        if ( a3 <= a4 )
        {
          if ( a3 <= 0x247 && a4 >= 0x247 )
            return 1;
        }
        else if ( a4 > 0x247 || a3 < 0x247 )
        {
          return 1;
        }
        if ( !a3 && a4 == -1 )
          return 1;
        v17 = 579;
        goto LABEL_81;
      }
      if ( v13 == 1 )
      {
LABEL_45:
        if ( !a3 && a4 == -1 )
          return 1;
        if ( a3 <= a4 )
        {
          if ( a3 <= 0x246 && a4 >= 0x246 )
            return 1;
        }
        else if ( a4 > 0x246 || a3 < 0x246 )
        {
          return 1;
        }
        if ( !a3 && a4 == -1 )
          return 1;
        v17 = 578;
LABEL_81:
        if ( a3 <= a4 )
        {
          if ( a3 <= v17 && a4 >= v17 )
            return 1;
        }
        else if ( a4 > v17 || a3 < v17 )
        {
          return 1;
        }
        goto LABEL_51;
      }
    }
    else
    {
      if ( a2 >= 0xA6 )
        goto LABEL_45;
      switch ( a2 )
      {
        case 0xA0u:
          goto LABEL_51;
        case 0xA1u:
          goto LABEL_45;
        case 0xA2u:
          goto LABEL_34;
      }
      if ( a2 > 0xA2 )
      {
        if ( a2 > 0xA4 )
          goto LABEL_34;
        goto LABEL_45;
      }
    }
    return 0LL;
  }
LABEL_51:
  if ( !a3 && a4 == -1 )
    return 1;
  if ( a3 <= a4 )
  {
    if ( a3 <= 0x245 && a4 >= 0x245 )
      return 1;
  }
  else if ( a4 > 0x245 || a3 < 0x245 )
  {
    return 1;
  }
  if ( !a3 && a4 == -1 )
    return 1;
  if ( a3 > a4 )
  {
    if ( a4 <= 0x241 )
    {
      v14 = a3 < 0x241;
      goto LABEL_64;
    }
    return 1;
  }
  if ( a3 <= 0x241 )
  {
    v15 = a4 < 0x241;
    goto LABEL_68;
  }
  return v4;
}
