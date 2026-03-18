/*
 * XREFs of GetContextHelpId @ 0x140260160
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxHelpLoop @ 0x1402FAAB4 (xxxHelpLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetContextHelpId(__int64 a1)
{
  unsigned int i; // r8d
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx

  for ( i = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 280LL); !i; i = *(_DWORD *)(v4 + 280) )
  {
    v2 = 104LL;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) != 0x40 )
      v2 = 120LL;
    v3 = *(_QWORD *)(v2 + a1);
    a1 = v3;
    if ( !v3 )
      break;
    v4 = *(_QWORD *)(v3 + 40);
    if ( (*(_WORD *)(v4 + 42) & 0x2FFF) == 0x29D )
      break;
  }
  return i;
}
