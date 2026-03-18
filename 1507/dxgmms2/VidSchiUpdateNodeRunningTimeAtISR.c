/*
 * XREFs of VidSchiUpdateNodeRunningTimeAtISR @ 0x1C00041C0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C00045B4 (VidSchiUpdateContextRunningTimeAtISR.c)
 */

char __fastcall VidSchiUpdateNodeRunningTimeAtISR(__int64 *a1)
{
  char updated; // dl
  __int64 v3; // rcx
  __int64 v4; // rdi
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  updated = 0;
  v3 = *a1;
  v4 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1476) + 1488);
  if ( v4 )
  {
    v6[0] = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v6[1] = v4;
    updated = VidSchiUpdateContextRunningTimeAtISR(v6);
    a1[3] = v8;
    a1[2] = v7;
    a1[1] = v4;
  }
  else
  {
    a1[1] = 0LL;
    a1[3] = 0LL;
    a1[2] = *(_QWORD *)(v3 + 2616);
  }
  return updated;
}
