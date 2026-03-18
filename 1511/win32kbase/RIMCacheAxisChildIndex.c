/*
 * XREFs of RIMCacheAxisChildIndex @ 0x1C0005F00
 * Callers:
 *     RIMRetrieveLinkCollection @ 0x1C00087E4 (RIMRetrieveLinkCollection.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C0008C68 (rimHidP_GetSpecificValueCaps.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall RIMCacheAxisChildIndex(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r14
  unsigned __int16 v5; // r13
  int v6; // r12d
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned __int16 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r15
  __int16 v15; // cx
  unsigned __int16 v17; // bx
  __int64 v18; // r15
  __int64 v19; // r13
  __int16 v20; // cx
  _WORD v21[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int16 v22; // [rsp+44h] [rbp-D4h]
  __int16 v23; // [rsp+46h] [rbp-D2h]
  int v24; // [rsp+48h] [rbp-D0h]
  __int64 v25; // [rsp+50h] [rbp-C8h]
  __int64 v26; // [rsp+58h] [rbp-C0h]
  __int64 v27; // [rsp+60h] [rbp-B8h]
  __int64 v28; // [rsp+68h] [rbp-B0h]
  __int64 v29; // [rsp+70h] [rbp-A8h]
  _WORD v30[40]; // [rsp+80h] [rbp-98h] BYREF

  v4 = *(_QWORD *)(a1 + 712);
  v5 = 0;
  v6 = a4;
  v27 = a2;
  v25 = a1;
  v24 = a4;
  memset(v30, 0, 72);
  v21[0] = 1;
  v7 = 0;
  v8 = *(unsigned __int16 *)(v4 + 12);
  v9 = *(_QWORD *)(v4 + 32);
  v10 = *(_WORD *)(v9 + 24 * v8 + 4);
  *(_WORD *)(v4 + 14) = 0;
  v11 = Win32AllocPoolZInit(8LL * a3);
  v28 = v11;
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)(v4 + 24) = v11;
    v22 = 0;
    v13 = 3LL * v10;
    v26 = v13;
    if ( *(_WORD *)(v9 + 24LL * v10 + 6) )
    {
      do
      {
        if ( !(_WORD)v8 )
          break;
        v14 = 3LL * (unsigned __int16)v8;
        v29 = v14;
        if ( *(_WORD *)(v9 + 24LL * (unsigned __int16)v8 + 6) )
        {
          if ( v24 )
          {
            v17 = *(_WORD *)(v9 + 24LL * (unsigned __int16)v8 + 10);
            if ( v17 )
            {
              v18 = v25;
              v19 = v27;
              do
              {
                v21[0] = 1;
                if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 1, v17, 48, (__int64)v30, (__int64)v21, v19) == 1114112 )
                {
                  v23 = v30[10];
                  v21[0] = 1;
                  if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 1, v17, 49, (__int64)v30, (__int64)v21, v19) == 1114112 )
                  {
                    v20 = v30[10];
                    if ( (_WORD)v8 == *(_WORD *)(v4 + 12) )
                    {
                      *(_WORD *)(v4 + 14) = v17;
                      v7 = 1;
                    }
                    *(_WORD *)(*(_QWORD *)(v4 + 24) + 8LL * (unsigned __int16)v8 + 2) = v17;
                    if ( v20 == v23 && v23 == 2 )
                      *(_DWORD *)(v18 + 252) |= 0x800u;
                  }
                }
                v17 = *(_WORD *)(v9 + 24LL * v17 + 8);
              }
              while ( v17 );
              v14 = v29;
              v5 = v22;
              v13 = v26;
              v12 = v28;
            }
          }
        }
        v15 = v8;
        LOWORD(v8) = *(_WORD *)(v9 + 8 * v14 + 8);
        if ( (_WORD)v8 )
          *(_WORD *)(v12 + 8LL * (unsigned __int16)v8 + 4) = v15;
        else
          *(_WORD *)(v4 + 16) = v15;
        v22 = ++v5;
      }
      while ( v5 < *(_WORD *)(v9 + 8 * v13 + 6) );
      v6 = v24;
    }
    if ( !v6 )
      return 1;
  }
  return v7;
}
