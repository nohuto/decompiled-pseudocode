/*
 * XREFs of ?SetDisplayId@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x180055150
 * Callers:
 *     ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x18009016C (-UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z.c)
 *     ?SetDisplayId@CDxHandleStereoBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x180190560 (-SetDisplayId@CDxHandleStereoBitmapRealization@@UEAA_NVDisplayId@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDxHandleBitmapRealization::SetDisplayId(__int64 a1, int a2)
{
  __int64 v2; // rax
  char v4; // di
  __int64 v5; // rcx
  __int64 v7; // rcx
  int v8; // [rsp+38h] [rbp+10h]

  v8 = a2;
  v2 = 0LL;
  v4 = 0;
  if ( a2 == DisplayId::Invalid )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
    v4 = 1;
LABEL_9:
    a2 = v8;
    goto LABEL_4;
  }
  if ( a2 != *(_DWORD *)(a1 + 424) )
  {
    v5 = *(_QWORD *)(a1 + 416);
    v4 = 1;
    if ( v5 )
    {
      *(_DWORD *)(v5 + 248) = a2;
      v7 = *(_QWORD *)(a1 + 416);
      if ( v7 )
        v2 = v7 + 112;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 24LL))(a1 + 16, v2);
      goto LABEL_9;
    }
  }
LABEL_4:
  *(_DWORD *)(a1 + 424) = a2;
  return v4;
}
