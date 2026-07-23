/*
 * XREFs of WmipInsertStaticNames @ 0x1404E79C4
 * Callers:
 *     WmipQueryAllData @ 0x1404E7C28 (WmipQueryAllData.c)
 *     WmipIncludeStaticNames @ 0x14069E290 (WmipIncludeStaticNames.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlStringCbCopyW @ 0x1400C265C (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x1400C2858 (RtlStringCbCatW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     WmipStaticInstanceNameSize @ 0x1404E7BA8 (WmipStaticInstanceNameSize.c)
 */

unsigned __int64 __fastcall WmipInsertStaticNames(unsigned int *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // rbp
  unsigned int v10; // r14d
  unsigned int v11; // esi
  _DWORD *v12; // r12
  wchar_t *v13; // r15
  unsigned int v14; // r14d
  __int64 v15; // rax
  wchar_t *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rsi
  const wchar_t *v19; // r8
  __int64 v20; // rax
  unsigned int v21; // ebx
  unsigned int v22; // r14d
  wchar_t *v23; // r15
  int v24; // [rsp+20h] [rbp-68h]
  unsigned int v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  wchar_t pszDest[8]; // [rsp+38h] [rbp-50h] BYREF

  result = *(unsigned int *)(a3 + 16);
  if ( (result & 3) != 0 )
  {
    result = *a1;
    v7 = *(unsigned int *)(a3 + 72);
    if ( (int)result + 3 >= (unsigned int)result )
    {
      v8 = (result + 3) & 0xFFFFFFFC;
      v9 = v8;
      result = WmipStaticInstanceNameSize(a3);
      v10 = result;
      if ( (unsigned int)result <= -1 - v8 )
      {
        v11 = result + v8;
        v25 = v11;
        if ( v11 > a2 )
        {
          *a1 = 56;
          a1[11] = 32;
          a1[12] = v11;
          return result;
        }
        a1[14] = v9;
        v12 = (unsigned int *)((char *)a1 + v9);
        result = *(unsigned int *)(a3 + 16);
        v13 = (wchar_t *)((char *)&a1[v7] + v9);
        if ( (result & 1) != 0 )
        {
          if ( (result & 0x20000) != 0 )
            a1[11] |= 0x10000u;
          v24 = 0;
          if ( !(_DWORD)v7 )
            goto LABEL_13;
          do
          {
            v14 = v10 - 2;
            *v12++ = (_DWORD)v13 - (_DWORD)a1;
            RtlStringCbCopyW(v13 + 1, v14, (NTSTRSAFE_PCWSTR)(*(_QWORD *)(a3 + 88) + 4LL));
            RtlStringCbPrintfW(pszDest, 0xEuLL, L"%d", (unsigned int)(**(_DWORD **)(a3 + 88) + v24));
            RtlStringCbCatW(v13 + 1, v14, pszDest);
            v15 = -1LL;
            do
              ++v15;
            while ( v13[v15 + 1] );
            *v13 = 2 * v15 + 2;
            v10 = v14 - (2 * v15 + 2);
            v16 = &v13[(unsigned __int64)(unsigned int)(2 * v15 + 2) >> 1];
            result = (unsigned int)(v24 + 1);
            v13 = v16 + 1;
            v24 = result;
          }
          while ( (unsigned int)result < (unsigned int)v7 );
        }
        else
        {
          if ( (result & 2) == 0 || !(_DWORD)v7 )
            goto LABEL_13;
          v17 = 0LL;
          v18 = v7;
          v26 = 0LL;
          do
          {
            *v12++ = (_DWORD)v13 - (_DWORD)a1;
            v19 = *(const wchar_t **)(v17 + *(_QWORD *)(a3 + 88));
            v20 = -1LL;
            do
              ++v20;
            while ( v19[v20] );
            v21 = 2 * v20 + 2;
            v22 = v10 - 2;
            *v13 = 2 * v20 + 2;
            v23 = v13 + 1;
            RtlStringCbCopyW(v23, v22, v19);
            v10 = v22 - v21;
            v17 = v26 + 8;
            result = (unsigned __int64)v21 >> 1;
            v26 += 8LL;
            v13 = &v23[result];
            --v18;
          }
          while ( v18 );
        }
        v11 = v25;
LABEL_13:
        *a1 = v11;
      }
    }
  }
  return result;
}
