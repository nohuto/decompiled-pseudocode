/*
 * XREFs of GetScaledLogFontForDpi @ 0x1C01D9140
 * Callers:
 *     _SystemParametersInfoForDpi @ 0x1C01CEA40 (_SystemParametersInfoForDpi.c)
 *     GetWindowNCMetricsForDpi @ 0x1C01D92C4 (GetWindowNCMetricsForDpi.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C00B5C20 (GetDPIMETRICSForDpiUnsafe.c)
 *     GetDPIServerInfoForDpiUnsafe @ 0x1C00B7700 (GetDPIServerInfoForDpiUnsafe.c)
 *     CreateScaledFont @ 0x1C01DFEC4 (CreateScaledFont.c)
 *     DeleteMetricsFont @ 0x1C01DFF6C (DeleteMetricsFont.c)
 */

__int64 __fastcall GetScaledLogFontForDpi(int a1, unsigned int a2, unsigned __int16 *a3)
{
  struct tagDpiKMMetricsCacheNode *DPIMETRICSForDpiUnsafe; // rdi
  struct tagDpiKMMetricsCacheNode *DPIServerInfoForDpiUnsafe; // rsi
  unsigned int v5; // r12d
  int v9; // r15d
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  struct HLFONT__ *v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  struct HLFONT__ *v18; // [rsp+68h] [rbp+48h] BYREF

  DPIMETRICSForDpiUnsafe = 0LL;
  DPIServerInfoForDpiUnsafe = 0LL;
  v5 = 0;
  if ( a1 >= 0 )
  {
    if ( a1 <= 3 )
    {
      DPIMETRICSForDpiUnsafe = GetDPIMETRICSForDpiUnsafe(a2);
    }
    else if ( a1 <= 5 )
    {
      DPIServerInfoForDpiUnsafe = GetDPIServerInfoForDpiUnsafe(a2);
    }
  }
  v18 = 0LL;
  v9 = 0;
  if ( a1 )
  {
    v10 = a1 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 != 1 )
              return v5;
            if ( DPIServerInfoForDpiUnsafe )
            {
              v14 = (struct HLFONT__ *)*((_QWORD *)DPIServerInfoForDpiUnsafe + 2);
              goto LABEL_31;
            }
            v15 = *(_QWORD *)(gpsi + 5536LL);
          }
          else
          {
            if ( DPIServerInfoForDpiUnsafe )
            {
              v14 = (struct HLFONT__ *)*((_QWORD *)DPIServerInfoForDpiUnsafe + 1);
              goto LABEL_31;
            }
            v15 = *(_QWORD *)(gpsi + 5528LL);
          }
        }
        else
        {
          if ( DPIMETRICSForDpiUnsafe )
          {
            v14 = (struct HLFONT__ *)*((_QWORD *)DPIMETRICSForDpiUnsafe + 3);
            goto LABEL_31;
          }
          v15 = gdpi96[3];
        }
      }
      else
      {
        if ( DPIMETRICSForDpiUnsafe )
        {
          v14 = (struct HLFONT__ *)*((_QWORD *)DPIMETRICSForDpiUnsafe + 1);
          goto LABEL_31;
        }
        v15 = gdpi96[1];
      }
    }
    else
    {
      if ( DPIMETRICSForDpiUnsafe )
      {
        v14 = (struct HLFONT__ *)*((_QWORD *)DPIMETRICSForDpiUnsafe + 5);
        goto LABEL_31;
      }
      v15 = gdpi96[5];
    }
  }
  else
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v14 = (struct HLFONT__ *)*((_QWORD *)DPIMETRICSForDpiUnsafe + 4);
      goto LABEL_31;
    }
    v15 = gdpi96[4];
  }
  v16 = CreateScaledFont(v15, &v18, a3, a2);
  v14 = v18;
  v9 = v16;
LABEL_31:
  if ( v14 && (unsigned int)GreExtGetObjectW(v14, 92, a3) )
    v5 = 1;
  if ( v9 )
    DeleteMetricsFont(v14);
  return v5;
}
