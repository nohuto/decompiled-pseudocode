/*
 * XREFs of RegistryCallback @ 0x1404635D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwActivityIdControl @ 0x14009F51C (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VrpShouldOperateOnCall @ 0x140463650 (VrpShouldOperateOnCall.c)
 *     VrpFreeKeyContext @ 0x140612FBC (VrpFreeKeyContext.c)
 *     VrpPostEnumerateKey @ 0x140614E44 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x14061563C (VrpPostOpenOrCreate.c)
 *     VrpPostQueryKey @ 0x1406158DC (VrpPostQueryKey.c)
 *     VrpPostUnloadKey @ 0x140615C7C (VrpPostUnloadKey.c)
 *     VrpPreFlushKey @ 0x140615CEC (VrpPreFlushKey.c)
 *     VrpPreLoadKey @ 0x140615DBC (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x140616498 (VrpPreOpenOrCreate.c)
 *     VrpPreQueryKeyName @ 0x1406167BC (VrpPreQueryKeyName.c)
 *     VrpPreUnloadKey @ 0x1406169FC (VrpPreUnloadKey.c)
 */

__int64 __fastcall RegistryCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  unsigned int v3; // ebx
  int v5; // edi
  unsigned int Key; // eax
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h] BYREF
  GUID ActivityId; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  ActivityId.Data1 = 0;
  *(_QWORD *)&ActivityId.Data2 = 0LL;
  v5 = (int)Argument1;
  *(_DWORD *)&ActivityId.Data4[4] = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( (unsigned int)Argument1 <= 0x31
    && (unsigned int)VrpShouldOperateOnCall((unsigned int)Argument1, Argument2, &v9, &v8) )
  {
    EtwActivityIdControl(1u, &ActivityId);
    switch ( v5 )
    {
      case 14:
        if ( *((_QWORD *)Argument2 + 2) )
          VrpFreeKeyContext();
        return v3;
      case 20:
        Key = VrpPostEnumerateKey(Argument2, v8);
        goto LABEL_17;
      case 22:
        Key = VrpPostQueryKey(Argument2);
        goto LABEL_17;
      case 26:
      case 28:
        Key = VrpPreOpenOrCreate(Argument2, v8);
        goto LABEL_17;
      case 27:
      case 29:
        Key = VrpPostOpenOrCreate(Argument2);
        goto LABEL_17;
      case 30:
        Key = VrpPreFlushKey(0x140000000uLL, v8);
        goto LABEL_17;
      case 32:
        Key = VrpPreLoadKey(Argument2, v8);
        goto LABEL_17;
      case 34:
        Key = VrpPreUnloadKey(Argument2, v8);
        goto LABEL_17;
      case 35:
        Key = VrpPostUnloadKey(Argument2, v8);
        goto LABEL_17;
      case 40:
        ExFreePoolWithTag(*((PVOID *)Argument2 + 1), 0x67655256u);
        return v3;
      case 47:
        Key = VrpPreQueryKeyName(Argument2);
LABEL_17:
        v3 = Key;
        break;
      default:
        return v3;
    }
  }
  return v3;
}
