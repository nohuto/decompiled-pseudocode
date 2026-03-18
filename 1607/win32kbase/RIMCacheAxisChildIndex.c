/*
 * XREFs of RIMCacheAxisChildIndex @ 0x1C00060D0
 * Callers:
 *     RIMRetrieveLinkCollection @ 0x1C00097F0 (RIMRetrieveLinkCollection.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C0009C68 (rimHidP_GetSpecificValueCaps.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall RIMCacheAxisChildIndex(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r14
  int v5; // r12d
  __int64 v7; // rsi
  __int64 v8; // rbp
  unsigned __int16 v9; // r15
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int16 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r15
  __int16 v16; // cx
  unsigned __int16 v18; // bx
  __int64 v19; // r15
  __int64 v20; // r13
  __int16 v21; // cx
  _WORD v22[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int16 v23; // [rsp+44h] [rbp-D4h]
  __int16 v24; // [rsp+46h] [rbp-D2h]
  int v25; // [rsp+48h] [rbp-D0h]
  __int64 v26; // [rsp+50h] [rbp-C8h]
  __int64 v27; // [rsp+58h] [rbp-C0h]
  __int64 v28; // [rsp+60h] [rbp-B8h]
  __int64 v29; // [rsp+68h] [rbp-B0h]
  __int64 v30; // [rsp+70h] [rbp-A8h]
  _WORD v31[40]; // [rsp+80h] [rbp-98h] BYREF

  v4 = *(_QWORD *)(a1 + 680);
  v5 = a4;
  v27 = a2;
  v26 = a1;
  v25 = a4;
  memset(v31, 0, 0x48uLL);
  v22[0] = 1;
  v7 = *(unsigned __int16 *)(v4 + 4);
  v8 = *(_QWORD *)(v4 + 16);
  v9 = *(_WORD *)(v8 + 24 * v7 + 4);
  *(_WORD *)(v4 + 8) = 0;
  v10 = 0;
  v11 = Win32AllocPoolZInit(8LL * a3);
  v30 = v11;
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)(v4 + 24) = v11;
    v13 = 0;
    v23 = 0;
    v14 = 3LL * v9;
    v29 = v14;
    if ( *(_WORD *)(v8 + 24LL * v9 + 6) )
    {
      do
      {
        if ( !(_WORD)v7 )
          break;
        v15 = 3LL * (unsigned __int16)v7;
        v28 = v15;
        if ( *(_WORD *)(v8 + 24LL * (unsigned __int16)v7 + 6) )
        {
          if ( v25 )
          {
            v18 = *(_WORD *)(v8 + 24LL * (unsigned __int16)v7 + 10);
            if ( v18 )
            {
              v19 = v26;
              v20 = v27;
              do
              {
                v22[0] = 1;
                if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 1, v18, 48, (__int64)v31, (__int64)v22, v20) == 1114112 )
                {
                  v24 = v31[10];
                  v22[0] = 1;
                  if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 1, v18, 49, (__int64)v31, (__int64)v22, v20) == 1114112 )
                  {
                    v21 = v31[10];
                    if ( (_WORD)v7 == *(_WORD *)(v4 + 4) )
                    {
                      *(_WORD *)(v4 + 8) = v18;
                      v10 = 1;
                    }
                    *(_WORD *)(*(_QWORD *)(v4 + 24) + 8LL * (unsigned __int16)v7 + 2) = v18;
                    if ( v21 == v24 && v24 == 2 )
                      *(_DWORD *)(v19 + 252) |= 0x800u;
                  }
                }
                v18 = *(_WORD *)(v8 + 24LL * v18 + 8);
              }
              while ( v18 );
              v15 = v28;
              v13 = v23;
              v14 = v29;
              v12 = v30;
            }
          }
        }
        v16 = v7;
        LOWORD(v7) = *(_WORD *)(v8 + 8 * v15 + 8);
        if ( (_WORD)v7 )
          *(_WORD *)(v12 + 8LL * (unsigned __int16)v7 + 4) = v16;
        else
          *(_WORD *)(v4 + 6) = v16;
        v23 = ++v13;
      }
      while ( v13 < *(_WORD *)(v8 + 8 * v14 + 6) );
      v5 = v25;
    }
    if ( !v5 )
      return 1;
  }
  return v10;
}
