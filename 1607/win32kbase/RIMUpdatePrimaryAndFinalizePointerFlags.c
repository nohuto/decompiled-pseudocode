/*
 * XREFs of RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C00DBA60
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C00D9824 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1C000D35C (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     ListTableIteratorNext @ 0x1C007B5B4 (ListTableIteratorNext.c)
 *     RIMGetPointerInputType @ 0x1C00D4A84 (RIMGetPointerInputType.c)
 *     RIMUpdatePrimaryDevice @ 0x1C00D4B8C (RIMUpdatePrimaryDevice.c)
 *     rimFinalizePointerFlags @ 0x1C00DD90C (rimFinalizePointerFlags.c)
 *     rimIsPointerDevicePrimaryContactDown @ 0x1C00DDB70 (rimIsPointerDevicePrimaryContactDown.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C00E1120 (RIMCmActiveContactsBeginNoButton.c)
 */

__int64 __fastcall RIMUpdatePrimaryAndFinalizePointerFlags(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  BOOL v4; // r12d
  int v5; // r14d
  __int64 **active; // rax
  int v8; // edi
  __int64 *v9; // xmm1_8
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 result; // rax
  __int64 *v13; // r8
  int v14; // ecx
  _BOOL8 v15; // r9
  BOOL v16; // edx
  int v17; // ecx
  __int64 v18; // rcx
  int v19; // r8d
  BOOL v20; // edx
  BOOL v21; // r14d
  __int64 v22; // rcx
  int v23; // ebx
  __int128 v24; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v25; // [rsp+30h] [rbp-40h]
  __int128 v26; // [rsp+38h] [rbp-38h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h]
  __int128 v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+60h] [rbp-10h]

  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  active = (__int64 **)RIMCmActiveContactsBeginNoButton(&v28, a2);
  v8 = 1;
  while ( 1 )
  {
    v9 = active[2];
    v10 = *(_OWORD *)active;
    DWORD2(v26) = *(_DWORD *)(a2 + 1560);
    v11 = *(_QWORD *)(a2 + 1552) + 16LL * DWORD2(v26);
    v24 = v10;
    v27 = v11;
    v25 = v9;
    *(_QWORD *)&v26 = a2 + 1552;
    v29 = v11;
    v28 = v26;
    result = tagLIST_TABLE_ITERATOR::operator!=((__int64)&v24, (__int64)&v28);
    if ( !(_BYTE)result )
      break;
    v13 = v25 - 2;
    v14 = *((_DWORD *)v25 + 651);
    v15 = (v14 & 2) == 0 && (*((_DWORD *)v13 + 601) & 2) != 0;
    v16 = (v14 & 4) == 0 && (*((_DWORD *)v13 + 601) & 4) != 0;
    v17 = *((_DWORD *)v25 + 651) & 2;
    if ( v17 )
      ++v5;
    if ( (v13[290] & 1) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 1576) && (v15 || v16) && !v3 )
      {
        v3 = v25 - 2;
        v4 = v17 != 0;
      }
      rimFinalizePointerFlags(a1, a2, v13, v15);
    }
    active = ListTableIteratorNext((__int64 **)&v26, (__int64)&v24);
  }
  if ( v3 && (!v5 || v5 == 1 && v4) )
  {
    *((_DWORD *)v3 + 8) |= 8u;
    *(_QWORD *)(a2 + 1576) = v3;
  }
  v18 = *(_QWORD *)(a2 + 1576);
  if ( v18 )
  {
    v19 = *(_DWORD *)(v18 + 2620);
    v20 = (v19 & 2) == 0 && (*(_DWORD *)(v18 + 2404) & 2) != 0;
    result = (v19 & 4) == 0 && (*(_DWORD *)(v18 + 2404) & 4) != 0;
    v21 = v20 || (_DWORD)result;
    v22 = *(_QWORD *)(a1 + 608);
    if ( v22 )
    {
      v23 = RIMGetPointerInputType(v22);
      result = RIMGetPointerInputType(a2);
      if ( v23 == (_DWORD)result
        || (result = rimIsPointerDevicePrimaryContactDown(*(_QWORD *)(a1 + 608)), (_DWORD)result)
        || (result = rimIsPointerDevicePrimaryContactDown(a2), !(_DWORD)result) )
      {
        v8 = 0;
      }
    }
    if ( v21 && v8 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 1576) + 2404LL) |= 0x2000u;
      return RIMUpdatePrimaryDevice(a1, a2);
    }
  }
  return result;
}
