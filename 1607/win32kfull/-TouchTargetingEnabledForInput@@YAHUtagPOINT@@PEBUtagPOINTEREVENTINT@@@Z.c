/*
 * XREFs of ?TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C02219DC
 * Callers:
 *     PointerSpeedHitTest @ 0x1C02233A0 (PointerSpeedHitTest.c)
 *     ValidatePointerOffset @ 0x1C0223668 (ValidatePointerOffset.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C0223A7C (xxxPerformTargetingWithinPwnd.c)
 *     xxxPointerWindowHitTest @ 0x1C0223C68 (xxxPointerWindowHitTest.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall TouchTargetingEnabledForInput(
        struct tagPOINT a1,
        const struct tagPOINTEREVENTINT *a2,
        __int64 a3,
        __int64 a4)
{
  const struct tagPOINTEREVENTINT *v4; // rbx
  unsigned int v5; // edi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  LONG v8; // eax
  LONG v9; // edx
  int v10; // r8d
  int v11; // r9d
  struct tagPOINT v13; // [rsp+30h] [rbp+8h]

  v13 = a1;
  v4 = a2;
  if ( *((_DWORD *)a2 + 2) != 2 || (*((_DWORD *)a2 + 5) & 0x10000) == 0 )
    return 0;
  v5 = 1;
  if ( (*((_DWORD *)a2 + 27) & 1) != 0 )
  {
    v6 = *((_QWORD *)a2 + 3);
    if ( v6 )
    {
      LOBYTE(a2) = 19;
      v7 = HMValidateHandleNoSecure(v6, (__int64)a2, a3, a4);
      if ( v7 && (*(_BYTE *)(v7 + 64) & 0x40) == 0 )
      {
        a1.x = v13.x;
        goto LABEL_11;
      }
      a1.x = v13.x;
    }
    if ( *((_DWORD *)v4 + 28) == *((_DWORD *)v4 + 30) && *((_DWORD *)v4 + 29) == *((_DWORD *)v4 + 31) )
      return 0;
  }
LABEL_11:
  v8 = *((_DWORD *)v4 + 30);
  v9 = *((_DWORD *)v4 + 28);
  if ( v8 < v9 )
    return 0;
  v10 = *((_DWORD *)v4 + 31);
  v11 = *((_DWORD *)v4 + 29);
  if ( v10 < v11 || v9 > a1.x || v8 < a1.x || v11 > v13.y || v10 < v13.y )
    return 0;
  return v5;
}
