/*
 * XREFs of bConvertMBCS @ 0x1C0245254
 * Callers:
 *     bConvertExtras @ 0x1C0012730 (bConvertExtras.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C000F948 (ConvertToAndFromWideChar.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C01C3198 (__report_rangecheckfailure.c)
 */

_BOOL8 __fastcall bConvertMBCS(WCHAR *a1, ULONG *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // r10
  unsigned int v10; // esi
  unsigned int v11; // r9d
  unsigned int v12; // r11d
  unsigned int v13; // edi
  __int64 v14; // r8
  CHAR v15; // cl
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  ULONG v18; // r10d
  ULONG v19; // r8d
  ULONG v20; // eax
  int v21; // eax
  CHAR v22[256]; // [rsp+30h] [rbp-338h] BYREF
  WCHAR v23[256]; // [rsp+130h] [rbp-238h] BYREF

  v5 = 0LL;
  if ( (a4 & 1) != 0 )
    return 0LL;
  v10 = 0;
  v11 = a4 >> 1;
  if ( v11 )
  {
    v12 = 1;
    v13 = 2;
    v14 = 0LL;
    do
    {
      v15 = *(_BYTE *)(v14 + a3);
      if ( v15 )
      {
        if ( v13 >= 0x100 )
          return 0LL;
        v16 = v12;
        v22[v5] = v15;
        v13 += 2;
        v5 = (unsigned int)(v5 + 2);
        v12 += 2;
        v22[v16] = *(_BYTE *)((unsigned int)(v14 + 1) + a3);
      }
      else
      {
        if ( v12 >= 0x100 )
          return 0LL;
        ++v13;
        v22[v5] = *(_BYTE *)((unsigned int)(v14 + 1) + a3);
        v5 = (unsigned int)(v5 + 1);
        ++v12;
      }
      ++v10;
      v14 = (unsigned int)(v14 + 2);
    }
    while ( v10 < v11 );
  }
  v17 = (unsigned int)v5;
  v18 = v5 + 1;
  if ( v17 >= 0x100 )
    _report_rangecheckfailure();
  v19 = *a2;
  v22[v17] = 0;
  if ( v19 )
  {
    v21 = ConvertToAndFromWideChar(a5, a1, v19, v22, v18, 1);
    return v21 != -1 && v21 == *a2 && !*((_BYTE *)a1 + v21 - 1);
  }
  v20 = ConvertToAndFromWideChar(a5, v23, 0x200u, v22, v18, 1);
  if ( v20 == -1 )
    return 0LL;
  *a2 = v20;
  return 1LL;
}
