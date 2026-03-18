/*
 * XREFs of HvExtendHivePrimaryFileValidDataLength @ 0x1405E67BC
 * Callers:
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 * Callees:
 *     HvpViewMapAcquireLockShared @ 0x1401AACD4 (HvpViewMapAcquireLockShared.c)
 *     HvpViewMapIsRangePinned @ 0x1401AAD38 (HvpViewMapIsRangePinned.c)
 *     HvpViewMapReleaseLockShared @ 0x1401AB00C (HvpViewMapReleaseLockShared.c)
 *     CmpFileFlushAndPurge @ 0x1403D2B0C (CmpFileFlushAndPurge.c)
 *     CmpFileFlush @ 0x1405E4CAC (CmpFileFlush.c)
 *     HvViewMapAddressForFileOffset @ 0x1405EAFC4 (HvViewMapAddressForFileOffset.c)
 *     HvViewMapFlush @ 0x1405EB080 (HvViewMapFlush.c)
 *     HvViewMapPinForFileOffset @ 0x1405EB1C8 (HvViewMapPinForFileOffset.c)
 *     HvViewMapUnpinForFileOffset @ 0x1405EB3DC (HvViewMapUnpinForFileOffset.c)
 */

__int64 __fastcall HvExtendHivePrimaryFileValidDataLength(__int64 a1, int a2, int a3)
{
  __int64 v5; // rdi
  unsigned int v6; // ebp
  char IsRangePinned; // r14
  int v8; // ebx
  char v9; // al
  int v11; // [rsp+30h] [rbp-38h] BYREF
  int *v12; // [rsp+38h] [rbp-30h]
  int v13; // [rsp+40h] [rbp-28h]
  int v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  if ( (*(_BYTE *)(a1 + 124) & 4) == 0 )
  {
    v15 = 0;
    v11 = a2 - 4;
    v12 = &v14;
    v14 = -16843010;
    v13 = 4;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, int *, __int64, int *, int))(a1 + 40))(
            a1,
            0LL,
            &v11,
            1LL,
            &v15,
            a3) )
      return (unsigned int)-1073741491;
    v9 = CmpFileFlushAndPurge(a1, 0);
LABEL_9:
    if ( v9 )
      return 0;
    return (unsigned int)-1073741491;
  }
  v5 = a1 + 200;
  HvpViewMapAcquireLockShared(a1 + 200);
  v6 = a2 - 4;
  IsRangePinned = HvpViewMapIsRangePinned(v5, a2 - 4);
  HvpViewMapReleaseLockShared(v5);
  if ( !IsRangePinned )
  {
    v8 = HvViewMapPinForFileOffset(v5, v6, 4LL);
    if ( v8 < 0 )
      return (unsigned int)v8;
    *(_DWORD *)HvViewMapAddressForFileOffset(v5, v6) = -16843010;
  }
  v8 = HvViewMapFlush(v5, v6, 4LL);
  if ( !IsRangePinned )
    HvViewMapUnpinForFileOffset(v5, v6, 4LL);
  if ( v8 >= 0 )
  {
    v9 = CmpFileFlush(a1, 0);
    goto LABEL_9;
  }
  return (unsigned int)v8;
}
