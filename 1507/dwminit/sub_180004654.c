/*
 * XREFs of sub_180004654 @ 0x180004654
 * Callers:
 *     sub_180004384 @ 0x180004384 (sub_180004384.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180003360 (_guard_check_icall_nop.c)
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 *     sub_180003B24 @ 0x180003B24 (sub_180003B24.c)
 *     sub_180004608 @ 0x180004608 (sub_180004608.c)
 *     sub_180004970 @ 0x180004970 (sub_180004970.c)
 *     sub_1800049A0 @ 0x1800049A0 (sub_1800049A0.c)
 *     sub_180004EB4 @ 0x180004EB4 (sub_180004EB4.c)
 *     sub_180004EE0 @ 0x180004EE0 (sub_180004EE0.c)
 */

__int64 __fastcall sub_180004654(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // ebx
  int v4; // esi
  int v5; // eax
  __int64 v6; // rdi
  unsigned int v7; // ebp
  int v8; // eax
  int v9; // edx

  v3 = -2144980991;
  EnterCriticalSection(&CriticalSection);
  v4 = (unsigned __int8)sub_180004970() != 0;
  if ( !byte_18000C758 )
  {
    while ( 1 )
    {
      v5 = sub_1800049A0();
      v3 = v5;
      if ( v5 < 0 )
        break;
      v6 = (__int64)*(&hObject + 1);
      if ( *(&hObject + 1) )
        _InterlockedAdd((volatile signed __int32 *)*(&hObject + 1) + 22, 1u);
      LeaveCriticalSection(&CriticalSection);
      v7 = sub_180004EE0(v6, *a2, a2);
      if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 88), 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
      EnterCriticalSection(&CriticalSection);
      if ( *(&hObject + 1) && _InterlockedCompareExchange((volatile signed __int32 *)*(&hObject + 1) + 22, 1, 1) == 1 )
        sub_180004EB4();
      if ( v7 == -805306313 )
      {
        v8 = v4--;
        if ( v8 > 0 )
          continue;
      }
      v5 = sub_180004608(v7);
      v3 = v5;
      if ( v5 >= 0 )
        goto LABEL_21;
      if ( &unk_18000933C )
      {
        sub_180003B24(4u, (__int64)&unk_18000933C, 1LL, v5, 135);
        goto LABEL_21;
      }
      v9 = 135;
      goto LABEL_19;
    }
    if ( !&unk_18000933C )
    {
      v9 = 110;
LABEL_19:
      sub_180003A80(v5, v9);
      goto LABEL_21;
    }
    sub_180003B24(4u, (__int64)&unk_18000933C, 1LL, v5, 110);
  }
LABEL_21:
  LeaveCriticalSection(&CriticalSection);
  return v3;
}
