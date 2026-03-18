/*
 * XREFs of sub_14055AA50 @ 0x14055AA50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     sub_1404DAE70 @ 0x1404DAE70 (sub_1404DAE70.c)
 *     sub_14055AB0C @ 0x14055AB0C (sub_14055AB0C.c)
 */

__int64 __fastcall sub_14055AA50(__int64 a1, int a2)
{
  char v2; // r8
  PVOID *p_P; // rax
  unsigned int v5; // edi
  PVOID P; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v8; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v9[8]; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_BYTE *)(a1 + 12);
  p_P = &P;
  P = 0LL;
  if ( v2 )
    p_P = 0LL;
  if ( (int)sub_14055AB0C(a1, a2, v2, (unsigned int)&v8, (__int64)p_P) < 0 )
    return 0LL;
  if ( !*(_BYTE *)(a1 + 12) )
  {
    memset(v9, 0, sizeof(v9));
    LOBYTE(v9[1]) = 2;
    *(_OWORD *)&v9[3] = SL_HWID_IF_GUID_BIOS_RSMB;
  }
  v5 = sub_1404DAE70(a1, (__int64)v9, P, v8);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v5;
}
