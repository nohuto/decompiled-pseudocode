/*
 * XREFs of HMCreateHandleForObject @ 0x1C0010760
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectReference @ 0x1C0010880 (RawInputManagerDeviceObjectReference.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C006CB80 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 __fastcall HMCreateHandleForObject(unsigned __int64 *a1, char a2)
{
  bool i; // zf
  __int64 *v5; // rcx
  __int64 v6; // r8
  bool v7; // cc
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int64 v11; // rbx

  if ( a2 == 19 || a2 == 22 )
  {
    for ( i = a1 == 0LL; ; i = (unsigned int)HMGrowHandleTable() == 0 )
    {
      if ( i )
        return 0LL;
      if ( qword_1C0103528 && a2 != 1 )
        break;
      if ( qword_1C0103520 )
      {
        v5 = &qword_1C0103520;
        goto LABEL_7;
      }
    }
    v5 = &qword_1C0103528;
LABEL_7:
    v6 = *v5;
    v7 = (unsigned int)*v5 <= giheLast;
    v8 = qword_1C0102D48;
    v9 = 3 * *v5;
    *v5 = *(_QWORD *)(qword_1C0102D48 + 24 * *v5);
    if ( !v7 )
      giheLast = v6;
    *(_BYTE *)(v8 + 8 * v9 + 16) = a2;
    *(_QWORD *)(v8 + 8 * v9) = a1;
    *a1 = (int)v6 | (unsigned __int64)(*(unsigned __int16 *)(v6 * (unsigned int)dword_1C0102D50 + qword_1C0102D48 + 18) << 16);
    if ( ++giheCount > (unsigned int)giheCountPeak )
      giheCountPeak = giheCount;
    if ( a2 == 19 )
    {
      RawInputManagerDeviceObjectReference(a1[4]);
    }
    else
    {
      v11 = a1[2];
      RawInputManagerDeviceObjectReference(*(_QWORD *)(v11 + 32));
      ++*(_DWORD *)(v11 + 8);
    }
    return *(_QWORD *)(v8 + 8 * v9);
  }
  return 0LL;
}
