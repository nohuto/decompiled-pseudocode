/*
 * XREFs of ?SetProperty@CRotateTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180118DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRotateTransform3D::SetProperty(double *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  double *v10; // rax

  v4 = 0;
  if ( a3 != 17 )
    goto LABEL_19;
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
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 != 1 )
              {
LABEL_19:
                v4 = -2147024809;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x7C0u);
                return v4;
              }
              v10 = a1 + 17;
            }
            else
            {
              v10 = a1 + 16;
            }
          }
          else
          {
            v10 = a1 + 15;
          }
        }
        else
        {
          v10 = a1 + 20;
        }
      }
      else
      {
        v10 = a1 + 19;
      }
    }
    else
    {
      v10 = a1 + 18;
    }
  }
  else
  {
    v10 = a1 + 14;
  }
  if ( !v10 )
    goto LABEL_19;
  if ( *v10 != *a4 )
  {
    *v10 = *a4;
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return v4;
}
