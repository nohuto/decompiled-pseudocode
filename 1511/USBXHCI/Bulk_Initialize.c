/*
 * XREFs of Bulk_Initialize @ 0x1C00523A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Bulk_Initialize(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // rax

  *(_QWORD *)(a1 + 328) = a1 + 320;
  *(_QWORD *)(a1 + 320) = a1 + 320;
  *(_QWORD *)(a1 + 344) = a1 + 336;
  *(_QWORD *)(a1 + 336) = a1 + 336;
  *(_QWORD *)(a1 + 360) = a1 + 352;
  *(_QWORD *)(a1 + 352) = a1 + 352;
  v1 = *(_QWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 272) = (*(_QWORD *)(v1 + 232) & 0x20000LL) == 0
                      && (v2 = *(_QWORD *)(a1 + 56), (*(_WORD *)(v2 + 100) & 0x7FFu) >= 8)
                      && *(char *)(v2 + 98) >= 0;
  v3 = *(_QWORD *)(v1 + 232);
  if ( (v3 & 0x8000000000LL) != 0 || (v3 & 8) != 0 )
    *(_DWORD *)(a1 + 296) = 1;
  else
    *(_DWORD *)(a1 + 296) = 5;
  return 0LL;
}
