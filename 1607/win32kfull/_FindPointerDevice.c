/*
 * XREFs of _FindPointerDevice @ 0x1C00E44A4
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C00E3B58 (_GetPointerDeviceRects.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C00E3D00 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C014ADF0 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDevice @ 0x1C014C620 (NtUserGetPointerDevice.c)
 *     NtUserGetPhysicalDeviceRect @ 0x1C0214140 (NtUserGetPhysicalDeviceRect.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsPTPPointerDevicePresent @ 0x1C01C940C (IsPTPPointerDevicePresent.c)
 */

__int64 __fastcall FindPointerDevice(unsigned __int64 a1, struct _LIST_ENTRY ***a2, __int64 *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _LIST_ENTRY *v11; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v13; // rax
  struct _LIST_ENTRY **p_Blink; // rax
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  EnterDeviceInfoListCrit_(a1);
  *a2 = 0LL;
  if ( a1 == -2LL )
  {
    v16 = 0LL;
    if ( !(unsigned int)IsPTPPointerDevicePresent(v8, &v16) )
      goto LABEL_20;
    v13 = v16;
  }
  else
  {
    LOBYTE(v7) = 19;
    v13 = HMValidateHandleNoSecure(a1, v7, v9, v10);
  }
  if ( v13 )
  {
    if ( *(_DWORD *)(v13 + 316) )
    {
      if ( !a3 )
        goto LABEL_17;
    }
    else if ( !a3 )
    {
      UserSetLastError(6LL);
      goto LABEL_20;
    }
    *a3 = v13;
LABEL_17:
    if ( *(_DWORD *)(v13 + 316) )
      *a2 = *(struct _LIST_ENTRY ***)(v13 + 480);
LABEL_19:
    v6 = 1;
    goto LABEL_20;
  }
  Flink = gPointerDeviceInfoList.Flink;
  v11 = &gPointerDeviceInfoList;
  while ( Flink != &gPointerDeviceInfoList )
  {
    p_Blink = &Flink[-93].Blink;
    Flink = Flink->Flink;
    if ( p_Blink[88] == (struct _LIST_ENTRY *)a1 )
      goto LABEL_10;
  }
  p_Blink = 0LL;
LABEL_10:
  *a2 = p_Blink;
  if ( p_Blink )
    goto LABEL_19;
LABEL_20:
  LeaveDeviceInfoListCrit_(Flink, v11);
  return v6;
}
