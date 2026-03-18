/*
 * XREFs of ?SetProperty@CAffineTransform2DEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18011E550
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAffineTransform2DEffect::SetProperty(float *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  float *v11; // rax

  v4 = 0;
  if ( a3 != 17 )
    goto LABEL_17;
  v5 = *a4;
  v6 = a2 - 4;
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
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 != 1 )
            {
LABEL_17:
              v4 = -2147024809;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x46u);
              return v4;
            }
            v11 = a1 + 51;
          }
          else
          {
            v11 = a1 + 50;
          }
        }
        else
        {
          v11 = a1 + 49;
        }
      }
      else
      {
        v11 = a1 + 48;
      }
    }
    else
    {
      v11 = a1 + 47;
    }
  }
  else
  {
    v11 = a1 + 46;
  }
  if ( !v11 )
    goto LABEL_17;
  if ( *v11 != v5 )
  {
    *v11 = v5;
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return v4;
}
