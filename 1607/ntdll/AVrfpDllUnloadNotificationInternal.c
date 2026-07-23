/*
 * XREFs of AVrfpDllUnloadNotificationInternal @ 0x1800D6960
 * Callers:
 *     AVrfDllUnloadNotification @ 0x1800D5F64 (AVrfDllUnloadNotification.c)
 * Callees:
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     _wcsicmp @ 0x180098350 (_wcsicmp.c)
 */

__int64 __fastcall AVrfpDllUnloadNotificationInternal(__int64 a1)
{
  __int64 *v2; // rdi
  _QWORD *v3; // rsi
  int v4; // r14d
  _QWORD *v5; // rbx
  _QWORD *v6; // rdx
  char v7; // r8
  __int64 v8; // r10
  unsigned __int64 v9; // r9
  _QWORD *v10; // rax
  unsigned __int64 v11; // rcx

  if ( AVrfpEnabled )
  {
    v2 = (__int64 *)AVrfpVerifierProvidersList;
    while ( v2 != &AVrfpVerifierProvidersList )
    {
      v3 = (_QWORD *)v2[5];
      v4 = 0;
      v2 = (__int64 *)*v2;
      if ( *v3 )
      {
        v5 = v3;
        do
        {
          if ( (v5[1] & 1) != 0 && !wcsicmp(*(const wchar_t **)(a1 + 96), (const wchar_t *)*v5) )
          {
            if ( (AVrfpDebug & 4) != 0 )
              DbgPrint(
                "AVRF: pid 0x%X: found dll descriptor for `%ws' with verified exports \n",
                LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
                *(_QWORD *)(a1 + 96));
            v6 = (_QWORD *)v5[3];
            v7 = 0;
            LODWORD(v8) = 0;
            v9 = *(_QWORD *)(a1 + 48) + *(unsigned int *)(a1 + 64);
            if ( *v6 )
            {
              v10 = (_QWORD *)v5[3];
              do
              {
                v11 = v10[1];
                if ( v11 >= *(_QWORD *)(a1 + 48) && v11 < v9 )
                {
                  v10[1] = 0LL;
                  v7 = 1;
                }
                v8 = (unsigned int)(v8 + 1);
                v10 = &v6[3 * v8];
              }
              while ( *v10 );
              if ( v7 )
                *((_DWORD *)v5 + 2) &= ~1u;
            }
          }
          v5 = &v3[4 * (unsigned int)++v4];
        }
        while ( *v5 );
      }
    }
  }
  return 0LL;
}
