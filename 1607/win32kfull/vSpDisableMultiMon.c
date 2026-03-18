/*
 * XREFs of vSpDisableMultiMon @ 0x1C0279080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSpDisableMultiMon(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 168);
  if ( v3 )
    result = Win32FreePool(v3, a2);
  *(_DWORD *)(a1 + 164) = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  return result;
}
