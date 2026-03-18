/*
 * XREFs of KiIntSteerEnable @ 0x140155888
 * Callers:
 *     KeConnectInterrupt @ 0x140155538 (KeConnectInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIntSteerEnable(__int64 *a1, int a2)
{
  __int64 v2; // r9
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rdx

  v2 = *a1;
  result = 0LL;
  v5 = *(_QWORD *)(*a1 + 168);
  if ( !v5 )
    return 3221225659LL;
  if ( !*(_BYTE *)(v5 + 56) )
    return result;
  v6 = *(_QWORD *)(v5 + 16);
  v7 = *(_DWORD *)(v6 + 120);
  if ( v7 == 2 )
  {
    if ( !a2 )
      __fastfail(5u);
    v8 = *(_QWORD *)(v2 + 240);
    if ( !v8 )
      __fastfail(5u);
    *(_BYTE *)(v8 + 16) = 1;
    goto LABEL_10;
  }
  if ( v7 == 1 )
  {
LABEL_10:
    *(_BYTE *)(v6 + 124) = 1;
    _InterlockedExchange(&KiIntTrackRootEnabled, 1);
    return result;
  }
  return 3221225659LL;
}
