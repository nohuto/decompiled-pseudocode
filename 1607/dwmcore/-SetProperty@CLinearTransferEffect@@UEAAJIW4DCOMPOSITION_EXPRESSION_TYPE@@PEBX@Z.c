/*
 * XREFs of ?SetProperty@CLinearTransferEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180156D20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CLinearTransferEffect::SetProperty(float *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  float *v12; // rax

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_21;
  v5 = *a4;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 2;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 2;
              if ( v11 )
              {
                if ( v11 != 1 )
                {
LABEL_21:
                  v4 = -2147024809;
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xB0u);
                  return v4;
                }
                v12 = a1 + 78;
              }
              else
              {
                v12 = a1 + 77;
              }
            }
            else
            {
              v12 = a1 + 75;
            }
          }
          else
          {
            v12 = a1 + 74;
          }
        }
        else
        {
          v12 = a1 + 72;
        }
      }
      else
      {
        v12 = a1 + 71;
      }
    }
    else
    {
      v12 = a1 + 69;
    }
  }
  else
  {
    v12 = a1 + 68;
  }
  if ( !v12 )
    goto LABEL_21;
  if ( *v12 != v5 )
  {
    *v12 = v5;
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return v4;
}
