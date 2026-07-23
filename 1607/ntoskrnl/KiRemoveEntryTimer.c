/*
 * XREFs of KiRemoveEntryTimer @ 0x140111298
 * Callers:
 *     KiInsertTimerTable @ 0x1400599B0 (KiInsertTimerTable.c)
 *     KiExpireTimerTable @ 0x140124234 (KiExpireTimerTable.c)
 *     KiAdjustTimerDueTimes @ 0x14012AB84 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiRemoveEntryTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r11
  unsigned __int64 v4; // r9
  _QWORD *v5; // rdx
  _QWORD *result; // rax
  __int64 v8; // rcx
  unsigned int v9; // r8d
  volatile signed __int32 *v10; // rcx

  v3 = a2 + 32;
  v4 = a3;
  v5 = *(_QWORD **)(a2 + 32);
  result = *(_QWORD **)(v3 + 8);
  if ( v5[1] != v3 || *result != v3 )
    __fastfail(3u);
  *result = v5;
  v5[1] = result;
  if ( result == v5 )
  {
    *(_DWORD *)(32 * (a3 + 16LL) + a1 + 28) = -1;
    v8 = qword_1403AB288[2 * *(unsigned __int8 *)(a1 - 12208)];
    if ( KiSerializeTimerExpiration )
    {
      v9 = a3 & 0x3F;
      v10 = (volatile signed __int32 *)(v8 + 8 * (v4 >> 6));
    }
    else
    {
      v9 = *(unsigned __int8 *)(a1 - 12207);
      v10 = (volatile signed __int32 *)((v4 << 6) + v8);
    }
    result = (_QWORD *)v9;
    _interlockedbittestandreset64(v10, v9);
  }
  return result;
}
