/*
 * XREFs of sub_1800047D0 @ 0x1800047D0
 * Callers:
 *     sub_180004358 @ 0x180004358 (sub_180004358.c)
 *     sub_1800043B4 @ 0x1800043B4 (sub_1800043B4.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180003360 (_guard_check_icall_nop.c)
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 *     sub_180003B24 @ 0x180003B24 (sub_180003B24.c)
 *     sub_180004608 @ 0x180004608 (sub_180004608.c)
 *     sub_180004970 @ 0x180004970 (sub_180004970.c)
 *     sub_1800049A0 @ 0x1800049A0 (sub_1800049A0.c)
 *     sub_180004EB4 @ 0x180004EB4 (sub_180004EB4.c)
 *     sub_180004F48 @ 0x180004F48 (sub_180004F48.c)
 */

__int64 __fastcall sub_1800047D0(__int64 a1, _DWORD *a2, __int16 a3, _DWORD *a4)
{
  unsigned int v6; // ebx
  int v7; // esi
  int v8; // eax
  __int64 v9; // rdi
  int v10; // r9d
  unsigned int v11; // ebp
  int v12; // eax
  int v13; // edx
  __int64 v15; // [rsp+20h] [rbp-48h]
  __int16 v16; // [rsp+28h] [rbp-40h]
  unsigned int v17; // [rsp+80h] [rbp+18h]

  LOWORD(v17) = a3;
  v6 = -2144980991;
  EnterCriticalSection(&CriticalSection);
  v7 = (unsigned __int8)sub_180004970() != 0;
  if ( !byte_18000C758 )
  {
    while ( 1 )
    {
      v8 = sub_1800049A0();
      v6 = v8;
      if ( v8 < 0 )
        break;
      v9 = (__int64)*(&hObject + 1);
      if ( *(&hObject + 1) )
        _InterlockedAdd((volatile signed __int32 *)*(&hObject + 1) + 22, 1u);
      LeaveCriticalSection(&CriticalSection);
      v11 = sub_180004F48(v9, *a2, (_DWORD)a2, v10, v15, v16);
      if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 88), 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64, __int64))v9)(v9, 1LL);
      EnterCriticalSection(&CriticalSection);
      if ( *(&hObject + 1) && _InterlockedCompareExchange((volatile signed __int32 *)*(&hObject + 1) + 22, 1, 1) == 1 )
        sub_180004EB4();
      if ( v11 == -805306313 )
      {
        v12 = v7--;
        if ( v12 > 0 )
          continue;
      }
      v8 = sub_180004608(v11);
      v6 = v8;
      if ( v8 >= 0 )
      {
        *a4 = sub_180004608(v17);
        goto LABEL_22;
      }
      if ( &unk_18000933C )
      {
        sub_180003B24(4u, (__int64)&unk_18000933C, 1LL, v8, 198);
        goto LABEL_22;
      }
      v13 = 198;
      goto LABEL_20;
    }
    if ( !&unk_18000933C )
    {
      v13 = 167;
LABEL_20:
      sub_180003A80(v8, v13);
      goto LABEL_22;
    }
    sub_180003B24(4u, (__int64)&unk_18000933C, 1LL, v8, 167);
  }
LABEL_22:
  LeaveCriticalSection(&CriticalSection);
  return v6;
}
