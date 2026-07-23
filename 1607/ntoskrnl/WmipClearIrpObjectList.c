/*
 * XREFs of WmipClearIrpObjectList @ 0x1400A0FAC
 * Callers:
 *     WmipCompleteGuidIrpWithError @ 0x1400A05B8 (WmipCompleteGuidIrpWithError.c)
 *     WmipNotificationIrpCancel @ 0x1400A0F54 (WmipNotificationIrpCancel.c)
 *     WmipReceiveNotifications @ 0x1400AD93C (WmipReceiveNotifications.c)
 *     WmipWriteWnodeToObject @ 0x14012C9E4 (WmipWriteWnodeToObject.c)
 * Callees:
 *     <none>
 */

void __fastcall WmipClearIrpObjectList(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r9
  _QWORD *v6; // r8

  v1 = (_QWORD *)(a1 + 120);
  v2 = *(_QWORD **)(a1 + 120);
  while ( v2 != v1 )
  {
    v3 = v2 - 10;
    v2 = (_QWORD *)*v2;
    v3[9] = 0LL;
    v4 = v3 + 10;
    v5 = *v4;
    v6 = (_QWORD *)v4[1];
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
  }
}
