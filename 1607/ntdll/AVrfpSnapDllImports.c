/*
 * XREFs of AVrfpSnapDllImports @ 0x1800D736C
 * Callers:
 *     AVrfpDllLoadNotificationInternal @ 0x1800D67C4 (AVrfpDllLoadNotificationInternal.c)
 * Callees:
 *     LdrpPrepareImportAddressTableForSnap @ 0x1800310E8 (LdrpPrepareImportAddressTableForSnap.c)
 *     DbgPrint @ 0x18005C3E0 (DbgPrint.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x1800EFA3C (RtlGuardGrantSuppressedCallAccess.c)
 */

__int64 __fastcall AVrfpSnapDllImports(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 *v7; // rdi
  __int64 *v8; // rax
  int v9; // r15d
  _QWORD *v10; // rbp
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // r12
  _QWORD *v14; // rsi
  __int64 v15; // rax
  __int64 *v16; // [rsp+30h] [rbp-F8h]
  _QWORD *v17; // [rsp+38h] [rbp-F0h]
  _QWORD v18[29]; // [rsp+40h] [rbp-E8h] BYREF
  char v20; // [rsp+138h] [rbp+10h] BYREF
  __int64 v21; // [rsp+148h] [rbp+20h]

  if ( !AVrfpEnabled )
    return 3221225506LL;
  memset(v18, 0, 0x98uLL);
  v18[6] = a1;
  result = LdrpPrepareImportAddressTableForSnap(v18, v3);
  if ( (int)result >= 0 )
  {
    v4 = (_QWORD *)v18[12];
    if ( v18[12] )
    {
      v5 = v18[13] >> 3;
      if ( (unsigned int)(v18[13] >> 3) )
      {
        v6 = (unsigned int)v5;
        v21 = (unsigned int)v5;
        do
        {
          if ( *v4 )
          {
            v7 = (__int64 *)AVrfpVerifierProvidersList;
            if ( (__int64 *)AVrfpVerifierProvidersList != &AVrfpVerifierProvidersList )
            {
              do
              {
                v8 = v7;
                v9 = 0;
                v7 = (__int64 *)*v7;
                v16 = v8;
                v10 = (_QWORD *)v8[5];
                v17 = v10;
                if ( *v10 )
                {
                  v11 = (_QWORD *)v8[5];
                  do
                  {
                    v12 = (_QWORD *)v11[3];
                    LODWORD(v13) = 0;
                    if ( *v12 )
                    {
                      v14 = (_QWORD *)v11[3];
                      do
                      {
                        if ( *v4 == v14[1] )
                        {
                          RtlGuardGrantSuppressedCallAccess(*v4, &v20);
                          v15 = v14[2];
                          if ( !v15 )
                          {
                            DbgPrint("AVRF: internal error: New thunk for %s is null. \n", (const char *)*v14);
                            __debugbreak();
                          }
                          *v4 = v15;
                          if ( (AVrfpDebug & 1) != 0 )
                            DbgPrint(
                              "AVRF: Snapped (%ws: %s) with (%ws: %p). \n",
                              *(_QWORD *)(a1 + 96),
                              *v14,
                              v16[3],
                              v14[2]);
                        }
                        v13 = (unsigned int)(v13 + 1);
                        v14 = &v12[3 * v13];
                      }
                      while ( *v14 );
                      v10 = v17;
                    }
                    v11 = &v10[4 * (unsigned int)++v9];
                  }
                  while ( *v11 );
                }
              }
              while ( v7 != &AVrfpVerifierProvidersList );
              v6 = v21;
            }
          }
          ++v4;
          v21 = --v6;
        }
        while ( v6 );
      }
      return ZwProtectVirtualMemory();
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
