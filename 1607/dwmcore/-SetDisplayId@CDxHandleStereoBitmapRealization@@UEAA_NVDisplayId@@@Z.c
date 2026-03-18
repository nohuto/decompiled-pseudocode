/*
 * XREFs of ?SetDisplayId@CDxHandleStereoBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x180190560
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDisplayId@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x180055150 (-SetDisplayId@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDxHandleStereoBitmapRealization::SetDisplayId(__int64 a1, int a2)
{
  char v3; // al
  __int64 v4; // rdx
  char v5; // di
  __int64 v6; // r8
  __int64 v7; // rcx

  v3 = CDxHandleBitmapRealization::SetDisplayId(a1, a2);
  v4 = 0LL;
  v5 = v3;
  if ( v3 )
  {
    v6 = *(_QWORD *)(a1 + 432);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 248) = a2;
      v7 = *(_QWORD *)(a1 + 432);
      if ( v7 )
        v4 = v7 + 112;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 456) + 24LL))(a1 + 456, v4);
    }
  }
  return v5;
}
