/*
 * XREFs of WPP_SF_ds @ 0x1800184FC
 * Callers:
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18001B400 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_ds(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4, const char *a5)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  const char *v7; // rax
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v9 = a4;
  if ( a5 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a5[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5LL;
  }
  v7 = "NULL";
  if ( a5 )
    v7 = a5;
  return TraceMessage(a1, 0x2Bu, &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids, 0x22u, &v9, 4LL, v7, v6, 0LL);
}
