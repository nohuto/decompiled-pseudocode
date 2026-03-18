/*
 * XREFs of HvExtendHivePrimaryFileValidDataLength @ 0x14065DC30
 * Callers:
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 * Callees:
 *     CmpFileFlushAndPurge @ 0x1404D6564 (CmpFileFlushAndPurge.c)
 *     CmpFileFlush @ 0x14065BBC0 (CmpFileFlush.c)
 *     HvViewMapAddressForFileOffset @ 0x1406629CC (HvViewMapAddressForFileOffset.c)
 *     HvViewMapFlush @ 0x140662CF0 (HvViewMapFlush.c)
 *     HvViewMapIsRangePinned @ 0x140662F1C (HvViewMapIsRangePinned.c)
 *     HvViewMapPinForFileOffset @ 0x140663004 (HvViewMapPinForFileOffset.c)
 *     HvViewMapUnpinForFileOffset @ 0x1406632CC (HvViewMapUnpinForFileOffset.c)
 */

__int64 __fastcall HvExtendHivePrimaryFileValidDataLength(__int64 a1, int a2, int a3)
{
  unsigned int v4; // esi
  __int64 v5; // rbp
  char IsRangePinned; // r14
  int v7; // ebx
  char v8; // al
  int v10; // [rsp+30h] [rbp-38h] BYREF
  int *v11; // [rsp+38h] [rbp-30h]
  int v12; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+70h] [rbp+8h] BYREF
  int v14; // [rsp+88h] [rbp+20h] BYREF

  if ( (*(_BYTE *)(a1 + 124) & 4) == 0 )
  {
    v14 = 0;
    v10 = a2 - 4;
    v11 = &v13;
    v13 = -16843010;
    v12 = 4;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, int *, __int64, int *, int))(a1 + 40))(
            a1,
            0LL,
            &v10,
            1LL,
            &v14,
            a3) )
      return (unsigned int)-1073741491;
    v8 = CmpFileFlushAndPurge(a1, 0);
LABEL_9:
    if ( v8 )
      return 0;
    return (unsigned int)-1073741491;
  }
  v4 = a2 - 4;
  v5 = a1 + 200;
  IsRangePinned = HvViewMapIsRangePinned(a1 + 200, (unsigned int)(a2 - 4));
  if ( !IsRangePinned )
  {
    v7 = HvViewMapPinForFileOffset(v5, v4, 4LL);
    if ( v7 < 0 )
      return (unsigned int)v7;
    *(_DWORD *)HvViewMapAddressForFileOffset(v5, v4) = -16843010;
  }
  v7 = HvViewMapFlush(v5, v4, 4LL);
  if ( !IsRangePinned )
    HvViewMapUnpinForFileOffset(v5, v4, 4LL);
  if ( v7 >= 0 )
  {
    v8 = CmpFileFlush(a1, 0);
    goto LABEL_9;
  }
  return (unsigned int)v7;
}
