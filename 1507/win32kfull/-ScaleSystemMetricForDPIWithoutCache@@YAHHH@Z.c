/*
 * XREFs of ?ScaleSystemMetricForDPIWithoutCache@@YAHHH@Z @ 0x1C01E917C
 * Callers:
 *     ?ScaleSystemMetricForDPIWithoutCache@@YAHHH@Z @ 0x1C01E917C (-ScaleSystemMetricForDPIWithoutCache@@YAHHH@Z.c)
 *     _CacheSecondaryDpiMetric @ 0x1C01E95A0 (_CacheSecondaryDpiMetric.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C0053EE8 (GetDPIMETRICSForDpi.c)
 *     IsDpiDependentMetric @ 0x1C00953D8 (IsDpiDependentMetric.c)
 *     ?ScaleSystemMetricForDPIWithoutCache@@YAHHH@Z @ 0x1C01E917C (-ScaleSystemMetricForDPIWithoutCache@@YAHHH@Z.c)
 */

__int64 __fastcall ScaleSystemMetricForDPIWithoutCache(int a1, int a2)
{
  __int64 v2; // rbx
  INT v4; // edx
  INT v6; // esi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  char *DPIMETRICSForDpi; // rax
  char *v10; // rdi
  int v11; // ecx
  int v12; // esi
  int v13; // ecx
  int v14; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // ecx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // eax
  int v28; // eax
  int v29; // ebx
  int v30; // esi
  int v31; // edi
  int v32; // eax
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  int v37; // ebx
  int v38; // edi
  int v39; // eax

  v2 = a1;
  if ( !IsDpiDependentMetric(a1) )
    return *(unsigned int *)(gpsi + 4 * v2 + 1880);
  v6 = EngMulDiv(*(_DWORD *)(gpsi + 4 * v2 + 2268), v4, 96);
  v7 = (unsigned int)(v2 - 31);
  if ( (unsigned int)v7 <= 0x29 )
  {
    v8 = 0x30001400001LL;
    if ( _bittest64(&v8, v7) )
    {
      DPIMETRICSForDpi = GetDPIMETRICSForDpi(a2);
      v10 = DPIMETRICSForDpi;
      switch ( (_DWORD)v2 )
      {
        case 0x1F:
          if ( v6 <= (int)(*((_DWORD *)DPIMETRICSForDpi + 19) + ScaleSystemMetricForDPIWithoutCache(46, a2)) )
            v6 = *((_DWORD *)v10 + 19) + ScaleSystemMetricForDPIWithoutCache(46, a2);
          break;
        case 0x35:
          if ( v6 <= (int)(*((_DWORD *)DPIMETRICSForDpi + 21) + ScaleSystemMetricForDPIWithoutCache(46, a2)) )
            v6 = *((_DWORD *)v10 + 21) + ScaleSystemMetricForDPIWithoutCache(46, a2);
          break;
        case 0x37:
          if ( v6 <= (int)(*((_DWORD *)DPIMETRICSForDpi + 15)
                         + *((_DWORD *)DPIMETRICSForDpi + 13)
                         + ScaleSystemMetricForDPIWithoutCache(46, a2)) )
            v6 = *((_DWORD *)v10 + 15) + *((_DWORD *)v10 + 13) + ScaleSystemMetricForDPIWithoutCache(46, a2);
          break;
        default:
          if ( (unsigned int)(v2 - 71) <= 1 )
            v6 = *((_DWORD *)DPIMETRICSForDpi + 15) + *((_DWORD *)DPIMETRICSForDpi + 13) - 1;
          break;
      }
      return (unsigned int)v6;
    }
  }
  if ( (int)v2 > 38 )
  {
    v20 = v2 - 39;
    if ( !v20 )
    {
      v19 = 12;
      goto LABEL_71;
    }
    v21 = v20 - 10;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 2;
            if ( v25 )
            {
              v26 = v25 - 4;
              if ( v26 )
              {
                if ( v26 == 34 )
                {
                  v27 = 100;
                  if ( v6 < 100 )
                    v27 = v6;
                  if ( v27 <= 0 )
                  {
                    return 0;
                  }
                  else if ( v6 >= 100 )
                  {
                    return 100;
                  }
                }
                return (unsigned int)v6;
              }
              v28 = ScaleSystemMetricForDPIWithoutCache(8, a2);
              v13 = 31;
              v12 = 2 * v28;
              return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v13, a2) + v12);
            }
          }
          goto LABEL_60;
        }
        v11 = 53;
LABEL_32:
        v12 = ScaleSystemMetricForDPIWithoutCache(v11, a2);
        v13 = 6;
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v13, a2) + v12);
      }
      v29 = ScaleSystemMetricForDPIWithoutCache(46, a2);
      v30 = 12;
      v31 = ScaleSystemMetricForDPIWithoutCache(31, a2) - v29;
      v32 = ScaleSystemMetricForDPIWithoutCache(12, a2);
      v33 = a2;
      if ( v31 < v32 / 2 )
      {
        v34 = ScaleSystemMetricForDPIWithoutCache(46, a2);
        v35 = 31;
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v35, a2) - v34);
      }
    }
    else
    {
      v37 = ScaleSystemMetricForDPIWithoutCache(45, a2);
      v30 = 11;
      v38 = ScaleSystemMetricForDPIWithoutCache(30, a2) - v37;
      v39 = ScaleSystemMetricForDPIWithoutCache(11, a2);
      v33 = a2;
      if ( v38 < v39 / 2 )
      {
        v34 = ScaleSystemMetricForDPIWithoutCache(45, a2);
        v35 = 30;
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v35, a2) - v34);
      }
    }
    return (unsigned int)((int)ScaleSystemMetricForDPIWithoutCache(v30, v33) / 2);
  }
  if ( (_DWORD)v2 == 38 )
  {
    v19 = 11;
LABEL_71:
    if ( v6 > (int)ScaleSystemMetricForDPIWithoutCache(v19, a2) )
      return (unsigned int)v6;
    return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v19, a2);
  }
  if ( (int)v2 > 15 )
  {
    if ( (int)v2 < 20 )
      return (unsigned int)v6;
    if ( (int)v2 <= 21 )
    {
LABEL_41:
      if ( v6 <= (int)(4 * ScaleSystemMetricForDPIWithoutCache(46, a2)) )
      {
        v18 = 46;
        return (unsigned int)(4 * ScaleSystemMetricForDPIWithoutCache(v18, a2));
      }
      return (unsigned int)v6;
    }
    if ( (_DWORD)v2 != 30 )
    {
      if ( (_DWORD)v2 == 32 )
      {
        v16 = EngMulDiv(*(_DWORD *)(gpsi + 4128LL), a2, 96) + 1;
        v17 = ScaleSystemMetricForDPIWithoutCache(5, a2);
        v13 = 45;
        v12 = v16 * v17;
      }
      else
      {
        if ( (_DWORD)v2 != 33 )
          return (unsigned int)v6;
        v14 = EngMulDiv(*(_DWORD *)(gpsi + 4128LL), a2, 96) + 1;
        v15 = ScaleSystemMetricForDPIWithoutCache(6, a2);
        v13 = 46;
        v12 = v14 * v15;
      }
      return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v13, a2) + v12);
    }
    goto LABEL_60;
  }
  if ( (_DWORD)v2 == 15 )
  {
    v11 = 55;
    goto LABEL_32;
  }
  if ( (int)v2 < 2 )
    return (unsigned int)v6;
  if ( (int)v2 > 3 )
  {
    if ( (_DWORD)v2 != 4 )
    {
      if ( (int)v2 <= 8 )
        return (unsigned int)v6;
      if ( (int)v2 > 10 )
      {
        if ( (unsigned int)(v2 - 13) <= 1 )
        {
          if ( a2 >= 144 )
          {
            v6 = 64;
            if ( a2 < 192 )
              return 48;
          }
          else
          {
            return 32;
          }
        }
        return (unsigned int)v6;
      }
      goto LABEL_41;
    }
    v11 = 31;
    goto LABEL_32;
  }
LABEL_60:
  if ( v6 <= (int)(4 * ScaleSystemMetricForDPIWithoutCache(45, a2)) )
  {
    v18 = 45;
    return (unsigned int)(4 * ScaleSystemMetricForDPIWithoutCache(v18, a2));
  }
  return (unsigned int)v6;
}
