/*
 * XREFs of SfnOUTLBOXSTRING @ 0x1C0118CB0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     ClientGetListboxString @ 0x1C0118DA0 (ClientGetListboxString.c)
 */

__int64 __fastcall SfnOUTLBOXSTRING(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  int v8; // ebx
  unsigned __int64 v13; // rcx
  __int64 result; // rax
  unsigned int ListboxString; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v18[4]; // [rsp+50h] [rbp-28h] BYREF

  v8 = 0;
  if ( a1 )
    v13 = *(_QWORD *)a1;
  else
    v13 = 0LL;
  result = HMValidateHandleNoSecure(v13, 1);
  if ( result )
  {
    LOBYTE(v8) = (*(_DWORD *)(a1 + 52) & 0x30) != 0 && (*(_DWORD *)(a1 + 52) & 0x40) == 0;
    v18[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v18;
    ++*(_DWORD *)(a1 + 8);
    v18[1] = a1;
    ListboxString = ClientGetListboxString(a1, a2, a3, a4, a5, a6, a7, v8, a8);
    ThreadUnlock1(v17, v16);
    return ListboxString;
  }
  return result;
}
