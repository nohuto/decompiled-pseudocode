/*
 * XREFs of ?SetProperty@CScaleTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801518F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CScaleTransform3D::SetProperty(double *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  double *v9; // rax

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_17;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
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
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x73Eu);
              return v4;
            }
            v9 = a1 + 32;
          }
          else
          {
            v9 = a1 + 31;
          }
        }
        else
        {
          v9 = a1 + 30;
        }
      }
      else
      {
        v9 = a1 + 29;
      }
    }
    else
    {
      v9 = a1 + 28;
    }
  }
  else
  {
    v9 = a1 + 27;
  }
  if ( !v9 )
    goto LABEL_17;
  if ( *v9 != *a4 )
  {
    *v9 = *a4;
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return v4;
}
