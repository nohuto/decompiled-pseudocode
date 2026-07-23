/*
 * XREFs of HvlLpGetMachineCheckContext @ 0x1401BCD98
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetLogicalProcessorProperty @ 0x1401BB6E4 (HvlpGetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlLpGetMachineCheckContext(int a1, _DWORD *a2, _QWORD *a3, _DWORD *a4)
{
  __int128 v8; // [rsp+20h] [rbp-CC8h] BYREF
  int v9; // [rsp+30h] [rbp-CB8h]

  if ( (int)HvlpGetLogicalProcessorProperty(a1, 4, &v8) < 0 )
    return 3221225473LL;
  *a2 = v8;
  *a3 = *((_QWORD *)&v8 + 1);
  *a4 = v9;
  return 0LL;
}
