/*
 * XREFs of ?SetProperty@CShadowEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18011D140
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CShadowEffect::SetProperty(float *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  float *v9; // rax

  v4 = 0;
  if ( a3 != 17 )
    goto LABEL_17;
  v5 = *a4;
  if ( a2 )
  {
    v6 = a2 - 2;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 != 1 )
          {
LABEL_17:
            v4 = -2147024809;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x5Eu);
            return v4;
          }
          v9 = a1 + 48;
        }
        else
        {
          v9 = a1 + 47;
        }
      }
      else
      {
        v9 = a1 + 46;
      }
    }
    else
    {
      v9 = a1 + 45;
    }
  }
  else
  {
    if ( v5 < 0.0 )
      v5 = 0.0;
    v9 = a1 + 44;
  }
  if ( !v9 )
    goto LABEL_17;
  if ( *v9 != v5 )
  {
    *v9 = v5;
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return v4;
}
