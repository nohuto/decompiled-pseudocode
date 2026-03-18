/*
 * XREFs of ?SetDisplayRestriction@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x180032E50
 * Callers:
 *     ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x18008322C (-UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z.c)
 *     ?SetDisplayRestriction@CDxHandleStereoBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x18015D170 (-SetDisplayRestriction@CDxHandleStereoBitmapRealization@@UEAA_NVDisplayId@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall CDxHandleBitmapRealization::SetDisplayRestriction(__int64 a1, int a2)
{
  __int64 v2; // rbp
  char v4; // r14
  __int64 v5; // rax
  char result; // al
  __int64 v7; // rax
  int v8; // [rsp+48h] [rbp+10h]

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
  if ( a2 != *(_DWORD *)(a1 + 464) )
  {
    v5 = *(_QWORD *)(a1 + 456);
    v4 = 1;
    if ( v5 )
    {
      *(_DWORD *)(v5 + 248) = a2;
      v7 = *(_QWORD *)(a1 + 456);
      if ( v7 )
        v2 = v7 + 112;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 24LL))(a1 + 16, v2);
      goto LABEL_9;
    }
  }
LABEL_4:
  result = v4;
  *(_DWORD *)(a1 + 464) = a2;
  return result;
}
