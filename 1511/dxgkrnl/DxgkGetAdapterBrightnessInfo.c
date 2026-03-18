/*
 * XREFs of DxgkGetAdapterBrightnessInfo @ 0x1C00280A0
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkGetAdapterBrightnessInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  void (__fastcall *v4)(_QWORD); // rax
  unsigned int v5; // ecx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(void (__fastcall **)(_QWORD))(v2 + 3248);
  if ( v4 )
    v4(*(_QWORD *)(v2 + 3200));
  else
    *a2 = 0;
  v5 = a2[1] & 0xFFFFFFFA | *(_BYTE *)(v2 + 2928) & 1 | (4 * (*(_BYTE *)(v2 + 2952) & 1));
  a2[1] = v5;
  a2[1] = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(2 * *(_BYTE *)(v2 + 2912))) & 2;
  a2[2] = *(_DWORD *)(v2 + 2916);
  result = *(unsigned __int8 *)(v2 + 2920);
  a2[3] = result;
  return result;
}
