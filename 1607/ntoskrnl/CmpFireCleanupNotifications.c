/*
 * XREFs of CmpFireCleanupNotifications @ 0x1405FB558
 * Callers:
 *     CmpDeleteKeyObject @ 0x14043B2D0 (CmpDeleteKeyObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpFireCleanupNotifications(__int64 a1)
{
  _QWORD *i; // rbx
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  for ( i = *(_QWORD **)(a1 + 72); ; i = (_QWORD *)*i )
  {
    result = a1 + 72;
    if ( i == (_QWORD *)(a1 + 72) )
      break;
    v4 = i[5];
    v5 = a1;
    v6 = i[7];
    (*(void (__fastcall **)(_QWORD, __int64, __int64 *))(v4 + 40))(*(_QWORD *)(v4 + 32), 40LL, &v5);
  }
  return result;
}
