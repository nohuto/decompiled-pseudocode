/*
 * XREFs of PspSetProcessBackgroundCountCallback @ 0x14054B68C
 * Callers:
 *     <none>
 * Callees:
 *     PspNotifyProcessBackgroundTransition @ 0x140129860 (PspNotifyProcessBackgroundTransition.c)
 */

__int64 __fastcall PspSetProcessBackgroundCountCallback(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  int v5; // edx

  if ( (*(_DWORD *)(a1 + 768) & 1) == 0 )
  {
    v4 = *(unsigned int *)(*(_QWORD *)(a1 + 944) + 868LL);
    if ( *a2 )
    {
      if ( (_DWORD)v4 != 1 )
        return 0LL;
      v5 = 1;
      goto LABEL_5;
    }
    if ( !(_DWORD)v4 )
    {
      v5 = 0;
LABEL_5:
      PspNotifyProcessBackgroundTransition(a1, v5, v4, a4);
    }
  }
  return 0LL;
}
