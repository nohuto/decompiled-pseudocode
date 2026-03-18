/*
 * XREFs of ?InsertObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAJIPEAVCChannel@2@@Z @ 0x1C0024844
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0024874 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0082120 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::InsertObject(
        struct _RTL_GENERIC_TABLE *a1,
        int a2,
        __int64 a3)
{
  int Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  Buffer = a2;
  v5 = a3;
  return RtlInsertElementGenericTable(a1, &Buffer, 0x10u, 0LL) == 0LL ? 0xC0000017 : 0;
}
