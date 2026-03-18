/*
 * XREFs of DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C0155A70
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetAdapterDefaultScaling @ 0x1C00AE2A0 (DxgkGetAdapterDefaultScaling.c)
 *     IsMiniportDriverCCDSupport @ 0x1C015632C (IsMiniportDriverCCDSupport.c)
 */

__int64 __fastcall DxgkConvertDisplayConfigCScalingToDdiScaling(__int64 a1, struct _LUID *a2, int *a3)
{
  __int64 v3; // rbp
  unsigned int v4; // edi
  __int64 v7; // rax

  v3 = (int)a1;
  v4 = 0;
  switch ( (_DWORD)a1 )
  {
    case 1:
      goto LABEL_15;
    case 2:
      *a3 = 2;
      return v4;
    case 3:
      *a3 = 3;
      return v4;
    case 4:
      if ( (unsigned int)IsMiniportDriverCCDSupport(a2) )
      {
        *a3 = 4;
        return v4;
      }
      goto LABEL_15;
    case 5:
      if ( (unsigned int)IsMiniportDriverCCDSupport(a2) )
      {
        *a3 = 5;
        return v4;
      }
LABEL_15:
      DxgkGetAdapterDefaultScaling(a2, a3);
      return v4;
    case 0x80:
      *a3 = 253;
      break;
    default:
      v7 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v7 + 24) = v3;
      WdLogEvent5_WdError(v7);
      return (unsigned int)-1073741811;
  }
  return v4;
}
