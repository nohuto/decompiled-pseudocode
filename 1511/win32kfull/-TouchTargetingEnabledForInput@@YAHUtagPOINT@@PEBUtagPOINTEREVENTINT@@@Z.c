/*
 * XREFs of ?TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C022BD14
 * Callers:
 *     PointerSpeedHitTest @ 0x1C022D63C (PointerSpeedHitTest.c)
 *     ValidatePointerOffset @ 0x1C022D8FC (ValidatePointerOffset.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C022DD08 (xxxPerformTargetingWithinPwnd.c)
 *     xxxPointerWindowHitTest @ 0x1C022DEF4 (xxxPointerWindowHitTest.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall TouchTargetingEnabledForInput(struct tagPOINT a1, const struct tagPOINTEREVENTINT *a2)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  LONG v6; // eax
  LONG v7; // edx
  int v8; // r8d
  int v9; // r9d
  struct tagPOINT v11; // [rsp+30h] [rbp+8h]

  v11 = a1;
  if ( *((_DWORD *)a2 + 2) != 2 || (*((_DWORD *)a2 + 5) & 0x10000) == 0 )
    return 0;
  v3 = 1;
  if ( (*((_DWORD *)a2 + 27) & 1) != 0 )
  {
    v4 = *((_QWORD *)a2 + 3);
    if ( v4 )
    {
      v5 = HMValidateHandleNoSecure(v4, 19);
      if ( v5 && (*(_BYTE *)(v5 + 64) & 0x40) == 0 )
      {
        a1.x = v11.x;
        goto LABEL_11;
      }
      a1.x = v11.x;
    }
    if ( *((_DWORD *)a2 + 28) == *((_DWORD *)a2 + 30) && *((_DWORD *)a2 + 29) == *((_DWORD *)a2 + 31) )
      return 0;
  }
LABEL_11:
  v6 = *((_DWORD *)a2 + 30);
  v7 = *((_DWORD *)a2 + 28);
  if ( v6 < v7 )
    return 0;
  v8 = *((_DWORD *)a2 + 31);
  v9 = *((_DWORD *)a2 + 29);
  if ( v8 < v9 || v7 > a1.x || v6 < a1.x || v9 > v11.y || v8 < v11.y )
    return 0;
  return v3;
}
