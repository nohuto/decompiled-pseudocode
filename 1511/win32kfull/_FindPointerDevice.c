/*
 * XREFs of _FindPointerDevice @ 0x1C011A7F8
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C0117E98 (_GetPointerDeviceRects.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C011A8E0 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C0144770 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDevice @ 0x1C0147E70 (NtUserGetPointerDevice.c)
 *     NtUserGetPhysicalDeviceRect @ 0x1C021B280 (NtUserGetPhysicalDeviceRect.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     IsPTPPointerDevicePresent @ 0x1C01D1714 (IsPTPPointerDevicePresent.c)
 */

__int64 __fastcall FindPointerDevice(unsigned __int64 a1, struct _LIST_ENTRY **a2, __int64 *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v9; // rax
  struct _LIST_ENTRY *v10; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  EnterDeviceInfoListCrit_(a1);
  *a2 = 0LL;
  if ( a1 == -2LL )
  {
    v12 = 0LL;
    if ( !(unsigned int)IsPTPPointerDevicePresent(v7, &v12) )
      goto LABEL_20;
    v9 = v12;
  }
  else
  {
    v9 = HMValidateHandleNoSecure(a1, 19);
  }
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 308) )
    {
      if ( !a3 )
        goto LABEL_17;
    }
    else if ( !a3 )
    {
      UserSetLastError(6);
      goto LABEL_20;
    }
    *a3 = v9;
LABEL_17:
    if ( *(_DWORD *)(v9 + 308) )
      *a2 = *(struct _LIST_ENTRY **)(v9 + 416);
LABEL_19:
    v6 = 1;
    goto LABEL_20;
  }
  Flink = gPointerDeviceInfoList.Flink;
  while ( Flink != &gPointerDeviceInfoList )
  {
    v10 = Flink - 95;
    Flink = Flink->Flink;
    if ( v10[46].Flink == (struct _LIST_ENTRY *)a1 )
      goto LABEL_10;
  }
  v10 = 0LL;
LABEL_10:
  *a2 = v10;
  if ( v10 )
    goto LABEL_19;
LABEL_20:
  LeaveDeviceInfoListCrit_(Flink);
  return v6;
}
