/*
 * XREFs of ?VidSchiAddContextToFlipDevice@@YAXPEAU_VIDSCH_CONTEXT@@I@Z @ 0x1C0014440
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C000B8A0 (VidSchiSwitchContextWithCheck.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiAddContextToFlipDevice(struct _VIDSCH_CONTEXT *a1, unsigned int a2)
{
  __int64 v2; // r9
  char *v3; // rax
  _QWORD *v4; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL) + 8LL * a2 + 2592);
  if ( *(_QWORD *)(v2 + 16) != *((_QWORD *)a1 + 13) && !*((_QWORD *)a1 + 6) )
  {
    v3 = (char *)a1 + 40;
    v4 = *(_QWORD **)(v2 + 42808);
    *((_QWORD *)a1 + 5) = v2 + 42800;
    *((_QWORD *)a1 + 6) = v4;
    if ( *v4 != v2 + 42800 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v2 + 42808) = v3;
  }
}
