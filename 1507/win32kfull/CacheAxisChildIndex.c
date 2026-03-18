/*
 * XREFs of CacheAxisChildIndex @ 0x1C01C76C0
 * Callers:
 *     RetrieveLinkCollection @ 0x1C01CC58C (RetrieveLinkCollection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall CacheAxisChildIndex(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, unsigned int a3, int a4)
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
  USHORT v15; // bx
  __int64 v16; // r15
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r13
  USHORT v18; // cx
  __int16 v19; // cx
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int16 v22; // [rsp+44h] [rbp-D4h]
  USHORT ReportCount; // [rsp+46h] [rbp-D2h]
  int v24; // [rsp+48h] [rbp-D0h]
  __int64 v25; // [rsp+50h] [rbp-C8h]
  __int64 v26; // [rsp+58h] [rbp-C0h]
  PHIDP_PREPARSED_DATA v27; // [rsp+60h] [rbp-B8h]
  __int64 v28; // [rsp+68h] [rbp-B0h]
  __int64 v29; // [rsp+70h] [rbp-A8h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+80h] [rbp-98h] BYREF

  v4 = *(_QWORD *)(a1 + 696);
  v5 = 0;
  v6 = a4;
  v27 = a2;
  v25 = a1;
  v24 = a4;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  ValueCapsLength[0] = 1;
  v7 = 0;
  v8 = *(unsigned __int16 *)(v4 + 12);
  v9 = *(_QWORD *)(v4 + 32);
  v10 = *(_WORD *)(v9 + 24 * v8 + 4);
  *(_WORD *)(v4 + 14) = 0;
  v11 = Win32AllocPoolZInit(8LL * a3, 2003006293LL);
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
            v15 = *(_WORD *)(v9 + 24LL * (unsigned __int16)v8 + 10);
            if ( v15 )
            {
              v16 = v25;
              PreparsedData = v27;
              do
              {
                ValueCapsLength[0] = 1;
                if ( HidP_GetSpecificValueCaps(HidP_Input, 1u, v15, 0x30u, &ValueCaps, ValueCapsLength, PreparsedData) == 1114112 )
                {
                  ReportCount = ValueCaps.ReportCount;
                  ValueCapsLength[0] = 1;
                  if ( HidP_GetSpecificValueCaps(HidP_Input, 1u, v15, 0x31u, &ValueCaps, ValueCapsLength, PreparsedData) == 1114112 )
                  {
                    v18 = ValueCaps.ReportCount;
                    if ( (_WORD)v8 == *(_WORD *)(v4 + 12) )
                    {
                      *(_WORD *)(v4 + 14) = v15;
                      v7 = 1;
                    }
                    *(_WORD *)(*(_QWORD *)(v4 + 24) + 8LL * (unsigned __int16)v8 + 2) = v15;
                    if ( v18 == ReportCount && ReportCount == 2 )
                      *(_DWORD *)(v16 + 236) |= 0x200u;
                  }
                }
                v15 = *(_WORD *)(v9 + 24LL * v15 + 8);
              }
              while ( v15 );
              v14 = v29;
              v5 = v22;
              v13 = v26;
              v12 = v28;
            }
          }
        }
        v19 = v8;
        LOWORD(v8) = *(_WORD *)(v9 + 8 * v14 + 8);
        if ( (_WORD)v8 )
          *(_WORD *)(v12 + 8LL * (unsigned __int16)v8 + 4) = v19;
        else
          *(_WORD *)(v4 + 16) = v19;
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
