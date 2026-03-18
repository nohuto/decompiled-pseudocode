/*
 * XREFs of HvlpEndSecurePageListIteration @ 0x1401F04E0
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401ECACC (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x1401ECC54 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1401EED1C (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x1401EF9C0 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     sub_1401F0638 @ 0x1401F0638 (sub_1401F0638.c)
 */

int __fastcall HvlpEndSecurePageListIteration(__int64 a1, void *a2, _DWORD *a3)
{
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rbx
  unsigned __int8 v9[8]; // [rsp+20h] [rbp-98h] BYREF
  _BOOL8 v10; // [rsp+28h] [rbp-90h]
  size_t Size; // [rsp+30h] [rbp-88h]

  v5 = sub_1401F0638(a1);
  v7 = v5;
  if ( *(_BYTE *)(v5 + 2) )
  {
    v10 = v6 == 0;
    LODWORD(v5) = HvlpEnterIumSecureMode(1u, 2049, 0, v9);
    if ( a3 )
    {
      LODWORD(v5) = Size;
      if ( (unsigned int)Size <= *a3 )
      {
        *a3 = Size;
        if ( (_DWORD)v5 )
          LODWORD(v5) = (unsigned int)memmove(a2, *(const void **)(v7 + 8), (unsigned int)v5);
      }
    }
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_DWORD *)v7 = 0;
  }
  return v5;
}
