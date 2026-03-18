/*
 * XREFs of ?SetDisplayRestriction@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x18001EEB0
 * Callers:
 *     ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x180046928 (-UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z.c)
 *     ?SetDisplayRestriction@CDxHandleStereoBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x18014E670 (-SetDisplayRestriction@CDxHandleStereoBitmapRealization@@UEAA_NVDisplayId@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CDxHandleBitmapRealization::SetDisplayRestriction(__int64 a1, int a2)
{
  __int64 v2; // rbp
  char v4; // r14
  char result; // al
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // [rsp+48h] [rbp+10h]

  v8 = a2;
  v2 = 0LL;
  v4 = 0;
  if ( a2 == DisplayId::Invalid )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
    v4 = 1;
LABEL_10:
    a2 = v8;
    goto LABEL_3;
  }
  if ( a2 != *(_DWORD *)(a1 + 464) )
  {
    v6 = *(_QWORD *)(a1 + 456);
    v4 = 1;
    if ( v6 )
    {
      *(_DWORD *)(v6 + 248) = a2;
      v7 = *(_QWORD *)(a1 + 456);
      if ( v7 )
        v2 = v7 + 112;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 24LL))(a1 + 16, v2);
      goto LABEL_10;
    }
  }
LABEL_3:
  result = v4;
  *(_DWORD *)(a1 + 464) = a2;
  return result;
}
