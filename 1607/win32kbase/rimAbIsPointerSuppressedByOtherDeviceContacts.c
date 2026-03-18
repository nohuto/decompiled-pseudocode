/*
 * XREFs of rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C00D0C3C
 * Callers:
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C00D0BC8 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00D1040 (rimAbSuppressLowerRankActivityForFrame.c)
 * Callees:
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1C000D35C (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     ListTableIteratorNext @ 0x1C007B5B4 (ListTableIteratorNext.c)
 *     rimAbIsPointerSuppressedByPointer @ 0x1C00D0E00 (rimAbIsPointerSuppressedByPointer.c)
 *     WPP_RECORDER_SF_dDdddDdd @ 0x1C00D2238 (WPP_RECORDER_SF_dDdddDdd.c)
 *     RIMGetPointerInputType @ 0x1C00D4A84 (RIMGetPointerInputType.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C00E1120 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C00E1334 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByOtherDeviceContacts(_DWORD *a1, __int64 a2, int a3)
{
  __int64 **i; // rax
  __int64 *v7; // xmm1_8
  __int128 v8; // xmm0
  __int64 v9; // rax
  _OWORD *v10; // rax
  bool v11; // zf
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // r8
  __int64 v18; // rax
  char v19; // cl
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  __int128 v24; // [rsp+78h] [rbp-90h] BYREF
  __int64 v25; // [rsp+88h] [rbp-80h]
  __int128 v26; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v27; // [rsp+A8h] [rbp-60h]
  __int128 v28; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-48h]
  _OWORD v30[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v31; // [rsp+E8h] [rbp-20h]
  __int128 v32; // [rsp+F8h] [rbp-10h]
  __int128 v33; // [rsp+108h] [rbp+0h]
  __int128 v34; // [rsp+118h] [rbp+10h]

  if ( *a1 != (unsigned int)RIMGetPointerInputType(a2) )
  {
    for ( i = (__int64 **)RIMCmActiveContactsBeginNoButton(&v28, a2);
          ;
          i = ListTableIteratorNext((__int64 **)&v24, (__int64)&v26) )
    {
      v7 = i[2];
      v8 = *(_OWORD *)i;
      DWORD2(v24) = *(_DWORD *)(a2 + 1560);
      v9 = *(_QWORD *)(a2 + 1552) + 16LL * DWORD2(v24);
      v26 = v8;
      v25 = v9;
      v27 = v7;
      *(_QWORD *)&v24 = a2 + 1552;
      v29 = v9;
      v28 = v24;
      if ( !tagLIST_TABLE_ITERATOR::operator!=((__int64)&v26, (__int64)&v28) )
        return 0LL;
      v10 = v27 + 324;
      if ( !a3 )
        v10 = v27 + 297;
      v11 = *((_DWORD *)v27 - 2) == 0;
      v12 = v10[1];
      v30[0] = *v10;
      v13 = v10[2];
      v30[1] = v12;
      v14 = v10[3];
      v31 = v13;
      v15 = v10[4];
      v32 = v14;
      v16 = v10[5];
      v33 = v15;
      v34 = v16;
      if ( v11 )
      {
        v19 = BYTE12(v30[0]);
      }
      else
      {
        if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 5) > 1
          || !(unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v27 - 2) )
        {
          continue;
        }
        v18 = *(_QWORD *)(v17 + 56);
        v19 = BYTE12(v30[0]) | 2;
        HIDWORD(v30[0]) |= 2u;
        LODWORD(v30[0]) = 3;
        *((_QWORD *)&v31 + 1) = v18;
      }
      if ( (v19 & 2) != 0 )
      {
        v24 = *(_OWORD *)(a2 + 156);
        if ( (unsigned int)rimAbIsPointerSuppressedByPointer(&v24, a1, v30) )
        {
          WPP_RECORDER_SF_dDdddDdd(WPP_GLOBAL_Control->DeviceExtension, v20, v21, v22);
          return 1LL;
        }
      }
    }
  }
  return 0LL;
}
