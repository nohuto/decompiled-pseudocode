/*
 * XREFs of ?SetProperty@CRectangleGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801077E0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRectangleGeometry::SetProperty(float *a1, unsigned int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  float *v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx

  v4 = 0;
  if ( a3 != 17 )
    goto LABEL_30;
  v5 = *a4;
  if ( a2 > 6 )
  {
    v11 = a2 - 7;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 != 1 )
              goto LABEL_30;
            v10 = a1 + 33;
          }
          else
          {
            v10 = a1 + 32;
          }
        }
        else
        {
          v10 = a1 + 31;
        }
      }
      else
      {
        v10 = a1 + 30;
      }
    }
    else
    {
      v10 = a1 + 29;
    }
  }
  else if ( a2 == 6 )
  {
    v10 = a1 + 28;
  }
  else if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 == 1 )
            {
              v10 = a1 + 27;
              goto LABEL_27;
            }
LABEL_30:
            v4 = -2147024809;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x88u);
            return v4;
          }
          v10 = a1 + 26;
        }
        else
        {
          v10 = a1 + 25;
        }
      }
      else
      {
        v10 = a1 + 24;
      }
    }
    else
    {
      v10 = a1 + 23;
    }
  }
  else
  {
    v10 = a1 + 22;
  }
LABEL_27:
  if ( !v10 )
    goto LABEL_30;
  if ( *v10 != v5 )
  {
    *v10 = v5;
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return v4;
}
