/*
 * XREFs of AVrfpSnapDllImports @ 0x1800CF420
 * Callers:
 *     AVrfpDllLoadNotificationInternal @ 0x1800CE874 (AVrfpDllLoadNotificationInternal.c)
 * Callees:
 *     LdrpPrepareImportAddressTableForSnap @ 0x18003052C (LdrpPrepareImportAddressTableForSnap.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     ZwProtectVirtualMemory @ 0x1800A5AC0 (ZwProtectVirtualMemory.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x1800EA1DC (RtlGuardGrantSuppressedCallAccess.c)
 */

int __fastcall AVrfpSnapDllImports(__int64 a1)
{
  int result; // eax
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 *v6; // rdi
  __int64 *v7; // rax
  int v8; // r15d
  _QWORD *v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // r12
  _QWORD *v13; // rsi
  __int64 v14; // rax
  _QWORD *v15; // [rsp+30h] [rbp-F8h]
  __int64 *v16; // [rsp+38h] [rbp-F0h]
  _QWORD v17[29]; // [rsp+40h] [rbp-E8h] BYREF
  char v19; // [rsp+138h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+140h] [rbp+18h] BYREF
  __int64 v21; // [rsp+148h] [rbp+20h]

  if ( !AVrfpEnabled )
    return -1073741790;
  memset(v17, 0, 0x98uLL);
  v17[6] = a1;
  result = LdrpPrepareImportAddressTableForSnap((__int64)v17);
  if ( result >= 0 )
  {
    v3 = (_QWORD *)v17[12];
    if ( v17[12] )
    {
      v4 = v17[13] >> 3;
      if ( (unsigned int)(v17[13] >> 3) )
      {
        v5 = (unsigned int)v4;
        v21 = (unsigned int)v4;
        do
        {
          if ( *v3 )
          {
            v6 = (__int64 *)AVrfpVerifierProvidersList;
            if ( (__int64 *)AVrfpVerifierProvidersList != &AVrfpVerifierProvidersList )
            {
              do
              {
                v7 = v6;
                v8 = 0;
                v6 = (__int64 *)*v6;
                v16 = v7;
                v9 = (_QWORD *)v7[5];
                v15 = v9;
                if ( *v9 )
                {
                  v10 = (_QWORD *)v7[5];
                  do
                  {
                    v11 = (_QWORD *)v10[3];
                    LODWORD(v12) = 0;
                    if ( *v11 )
                    {
                      v13 = (_QWORD *)v10[3];
                      do
                      {
                        if ( *v3 == v13[1] )
                        {
                          RtlGuardGrantSuppressedCallAccess(*v3, &v19);
                          v14 = v13[2];
                          if ( !v14 )
                          {
                            DbgPrint("AVRF: internal error: New thunk for %s is null. \n", (const char *)*v13);
                            __debugbreak();
                          }
                          *v3 = v14;
                          if ( (AVrfpDebug & 1) != 0 )
                            DbgPrint(
                              "AVRF: Snapped (%ws: %s) with (%ws: %p). \n",
                              *(_QWORD *)(a1 + 96),
                              *v13,
                              v16[3],
                              v13[2]);
                        }
                        v12 = (unsigned int)(v12 + 1);
                        v13 = &v11[3 * v12];
                      }
                      while ( *v13 );
                      v9 = v15;
                    }
                    v10 = &v9[4 * (unsigned int)++v8];
                  }
                  while ( *v10 );
                }
              }
              while ( v6 != &AVrfpVerifierProvidersList );
              v5 = v21;
            }
          }
          ++v3;
          v21 = --v5;
        }
        while ( v5 );
      }
      return ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v17[12], &v17[13], v17[16], &OldProtect);
    }
    else
    {
      return 0;
    }
  }
  return result;
}
