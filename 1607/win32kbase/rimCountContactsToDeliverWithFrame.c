/*
 * XREFs of rimCountContactsToDeliverWithFrame @ 0x1C00D9F1C
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C00D9824 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1C000D35C (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     ListTableIteratorNext @ 0x1C007B5B4 (ListTableIteratorNext.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C00E1120 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmGetButtonContact @ 0x1C00E12F8 (RIMCmGetButtonContact.c)
 */

__int64 __fastcall rimCountContactsToDeliverWithFrame(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 **active; // rax
  __int64 v7; // r11
  __int64 *v8; // xmm1_8
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v13; // [rsp+30h] [rbp-40h]
  __int128 v14; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h]
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h]

  *a2 = 0;
  *a3 = 0;
  active = (__int64 **)RIMCmActiveContactsBeginNoButton(&v16, a1);
  v7 = a1 + 1552;
  while ( 1 )
  {
    v8 = active[2];
    v9 = *(_OWORD *)active;
    DWORD2(v14) = *(_DWORD *)(v7 + 8);
    v10 = *(_QWORD *)v7 + 16LL * DWORD2(v14);
    v12 = v9;
    v15 = v10;
    v13 = v8;
    *(_QWORD *)&v14 = v7;
    v17 = v10;
    v16 = v14;
    result = tagLIST_TABLE_ITERATOR::operator!=((__int64)&v12, (__int64)&v16);
    if ( !(_BYTE)result )
      break;
    if ( (v13[288] & 1) != 0 )
      ++*a2;
    active = ListTableIteratorNext((__int64 **)&v14, (__int64)&v12);
  }
  if ( !*a2 )
  {
    result = RIMCmGetButtonContact(a1);
    if ( result )
    {
      if ( (*(_DWORD *)(result + 32) & 2) != 0 )
      {
        result = *(unsigned int *)(result + 2320);
        if ( (result & 1) != 0 )
        {
          *a2 = 1;
          *a3 = 1;
        }
      }
    }
  }
  return result;
}
