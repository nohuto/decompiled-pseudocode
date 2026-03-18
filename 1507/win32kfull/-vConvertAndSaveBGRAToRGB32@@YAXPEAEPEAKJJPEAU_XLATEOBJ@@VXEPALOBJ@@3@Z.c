/*
 * XREFs of ?vConvertAndSaveBGRAToRGB32@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02BD800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vConvertAndSaveBGRAToRGB32(__int64 a1, _DWORD *a2, int a3, int a4)
{
  unsigned __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r9
  unsigned int v9; // [rsp+18h] [rbp+18h]

  v4 = a1 + 4LL * a4;
  result = a3;
  v6 = 0LL;
  v7 = (unsigned __int64)(4 * result + 3) >> 2;
  if ( v4 > v4 + 4 * result )
    v7 = 0LL;
  if ( v7 )
  {
    HIBYTE(v9) = 0;
    v8 = v4 - (_QWORD)a2;
    do
    {
      ++v6;
      BYTE2(v9) = *a2;
      BYTE1(v9) = BYTE1(*a2);
      LOBYTE(v9) = BYTE2(*a2);
      result = v9;
      *(_DWORD *)((char *)a2++ + v8) = v9;
    }
    while ( v6 != v7 );
  }
  return result;
}
