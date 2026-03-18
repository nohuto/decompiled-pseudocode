/*
 * XREFs of ?SetProperty@CMatrixTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18011F950
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMatrixTransform::SetProperty(double *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  double *v9; // rax

  v4 = 0;
  if ( a3 != 17 )
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
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x74u);
              return v4;
            }
            v9 = a1 + 18;
          }
          else
          {
            v9 = a1 + 17;
          }
        }
        else
        {
          v9 = a1 + 16;
        }
      }
      else
      {
        v9 = a1 + 15;
      }
    }
    else
    {
      v9 = a1 + 14;
    }
  }
  else
  {
    v9 = a1 + 13;
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
