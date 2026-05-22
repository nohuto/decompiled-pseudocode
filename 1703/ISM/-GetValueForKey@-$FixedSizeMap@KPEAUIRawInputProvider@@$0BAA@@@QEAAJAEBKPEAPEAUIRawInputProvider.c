/*
 * XREFs of ?GetValueForKey@?$FixedSizeMap@KPEAUIRawInputProvider@@$0BAA@@@QEAAJAEBKPEAPEAUIRawInputProvider@@@Z @ 0x180007144
 * Callers:
 *     ?OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x180006560 (-OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x180006780 (-OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z @ 0x180006FC0 (-SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall FixedSizeMap<unsigned long,IRawInputProvider *,256>::GetValueForKey(__int64 a1, int *a2, _QWORD *a3)
{
  int v3; // r9d
  unsigned int v4; // ebx
  __int64 v5; // rax
  _DWORD *v6; // rdx
  char v7; // al
  int v8; // r9d

  v3 = *a2;
  v4 = 0;
  if ( *a2 != *(_DWORD *)(a1 + 4096) && a3 )
  {
    v5 = 0LL;
    v6 = (_DWORD *)a1;
    do
    {
      if ( *v6 == v3 )
      {
        *a3 = *(_QWORD *)(a1 + 16 * v5 + 8);
        return v4;
      }
      v5 = (unsigned int)(v5 + 1);
      v6 += 4;
    }
    while ( (unsigned int)v5 < 0x100 );
    v7 = 5;
    v4 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v4;
    v8 = 113;
    goto LABEL_11;
  }
  v7 = 87;
  v4 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 96;
LABEL_11:
    Template_qqq(a1, &MinInput_Warning_CheckResult, 1, v8, v7);
  }
  return v4;
}
