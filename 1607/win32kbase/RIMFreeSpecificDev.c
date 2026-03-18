/*
 * XREFs of RIMFreeSpecificDev @ 0x1C000CEB0
 * Callers:
 *     RIMRemoveDevOfInputType @ 0x1C000A524 (RIMRemoveDevOfInputType.c)
 *     RIMFreeDev @ 0x1C000B268 (RIMFreeDev.c)
 *     RIMUnregisterForInput @ 0x1C007DAD0 (RIMUnregisterForInput.c)
 * Callees:
 *     RIMRemoveHoldingFrame @ 0x1C0009D38 (RIMRemoveHoldingFrame.c)
 *     rimDoRimDevChange @ 0x1C000FAC0 (rimDoRimDevChange.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 */

__int64 __fastcall RIMFreeSpecificDev(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  if ( !*(_QWORD *)(a1 + 760) || (*(_DWORD *)(a2 + 184) & 0x800) == 0 )
    rimDoRimDevChange(a1, a2, 4LL);
  v4 = a2 + 120;
  if ( *(_QWORD *)v4 != v4 )
  {
    v5 = *(_QWORD *)v4;
    v6 = *(_QWORD **)(a2 + 128);
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x800) != 0 )
  {
    RIMLockExclusive(&gObListLock);
    *(_DWORD *)(a2 + 200) |= 2u;
    RIMUnlockExclusive(&gObListLock);
  }
  if ( *(_BYTE *)(a2 + 48) == 2 )
    RIMRemoveHoldingFrame(a1, a2);
  return rimDereferenceDev(a2);
}
