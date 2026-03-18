/*
 * XREFs of SfnOUTLBOXSTRING @ 0x1C014A7C0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     ClientGetListboxString @ 0x1C014A8B0 (ClientGetListboxString.c)
 */

__int64 __fastcall SfnOUTLBOXSTRING(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  int v8; // ebx
  int v9; // esi
  int v10; // ebp
  int v11; // r14d
  unsigned __int64 v13; // rcx
  __int64 result; // rax
  unsigned int ListboxString; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v18[4]; // [rsp+50h] [rbp-28h] BYREF

  v8 = 0;
  v9 = a4;
  v10 = a3;
  v11 = a2;
  if ( a1 )
    v13 = *(_QWORD *)a1;
  else
    v13 = 0LL;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(v13, a2, a3, a4);
  if ( result )
  {
    LOBYTE(v8) = (*(_DWORD *)(a1 + 52) & 0x30) != 0 && (*(_DWORD *)(a1 + 52) & 0x40) == 0;
    v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v18;
    ++*(_DWORD *)(a1 + 8);
    v18[1] = a1;
    ListboxString = ClientGetListboxString(a1, v11, v10, v9, a5, a6, a7, v8, a8);
    ThreadUnlock1(v17, v16);
    return ListboxString;
  }
  return result;
}
