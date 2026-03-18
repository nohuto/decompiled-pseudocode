/*
 * XREFs of ?SetProperty@CSkewTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180118F50
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSkewTransform::SetProperty(double *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx
  double *v7; // rax

  v4 = 0;
  if ( a3 != 17 )
    goto LABEL_13;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
        {
LABEL_13:
          v4 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xC0Cu);
          return v4;
        }
        v7 = a1 + 16;
      }
      else
      {
        v7 = a1 + 15;
      }
    }
    else
    {
      v7 = a1 + 14;
    }
  }
  else
  {
    v7 = a1 + 13;
  }
  if ( !v7 )
    goto LABEL_13;
  if ( *v7 != *a4 )
  {
    *v7 = *a4;
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return v4;
}
