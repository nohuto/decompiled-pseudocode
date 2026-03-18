/*
 * XREFs of ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C02342CC
 * Callers:
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C02342CC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C023446C (xxxDragObject.c)
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     _ScreenToClient @ 0x1C00DD204 (_ScreenToClient.c)
 *     _ChildWindowFromPointEx @ 0x1C014B020 (_ChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C02342CC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     _ClientToScreen @ 0x1C0245D20 (_ClientToScreen.c)
 */

struct tagCURSOR *__fastcall xxxQueryDropObject(struct tagWND *a1, struct tagDROPSTRUCT *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagCURSOR *result; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v16[5]; // [rsp+50h] [rbp-28h] BYREF
  int v17; // [rsp+A0h] [rbp+28h]
  unsigned __int64 v19; // [rsp+B0h] [rbp+38h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+B8h] [rbp+40h] BYREF

  v2 = *((_QWORD *)a2 + 4);
  BugCheckParameter3 = 0LL;
  v19 = v2;
  if ( !PtInRect((_DWORD *)a1 + 28, v2) )
    return 0LL;
  if ( (*((_BYTE *)a1 + 55) & 8) != 0 )
    return 0LL;
  v5 = *((_QWORD *)a1 + 25);
  if ( v5 )
  {
    if ( !(unsigned int)GrePtInRegion(v5, (unsigned int)v2, HIDWORD(v19)) )
      return 0LL;
  }
  if ( (*((_BYTE *)a1 + 55) & 0x20) != 0 || !PtInRect((_DWORD *)a1 + 32, v2) )
  {
    v17 = 1;
  }
  else
  {
    v17 = 0;
    ScreenToClient((__int64)a1, &v19);
    ChildWindowFromPointEx(v6, v19, 3LL, v7);
    ClientToScreen(a1, &v19);
    BugCheckParameter3 = 0LL;
    if ( v8 )
    {
      if ( (struct tagWND *)v8 != a1 )
      {
        v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v16;
        v16[1] = v8;
        ++*(_DWORD *)(v8 + 8);
        BugCheckParameter3 = (ULONG_PTR)xxxQueryDropObject((struct tagWND *)v8, a2);
        ThreadUnlock1(v10, v9);
        result = (struct tagCURSOR *)BugCheckParameter3;
        if ( BugCheckParameter3 )
          return result;
      }
    }
    v2 = v19;
  }
  ScreenToClient((__int64)a1, (_DWORD *)a2 + 8);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a1;
  v12 = xxxSendTransformableMessageTimeout(a1, 555LL, v17, (__int64)a2, 2, 3000, (__int64 *)&BugCheckParameter3, 1, 0);
  result = (struct tagCURSOR *)(BugCheckParameter3 & -(__int64)(v12 != 0));
  BugCheckParameter3 = (ULONG_PTR)result;
  if ( !result )
    goto LABEL_16;
  if ( result != (struct tagCURSOR *)1 )
  {
    LOBYTE(v13) = 3;
    result = (struct tagCURSOR *)HMValidateHandle((__int64)result, v13, v14, v15);
  }
  if ( !result )
LABEL_16:
    *((_QWORD *)a2 + 4) = v2;
  return result;
}
