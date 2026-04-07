/*
 * XREFs of ?_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180078228
 * Callers:
 *     ?zInternalRelatedId@?$ActivityBase@$00$0A@$04@wil@@QEBAPEBU_GUID@@XZ @ 0x18004EB9C (-zInternalRelatedId@-$ActivityBase@$00$0A@$04@wil@@QEBAPEBU_GUID@@XZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall _TlgGuidIsZero(const struct _GUID *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !a1->Data1 && !*(_DWORD *)&a1->Data2 && !*(_DWORD *)a1->Data4 )
    return *(_DWORD *)&a1->Data4[4] == 0;
  return result;
}
