/*
 * XREFs of ndisWmiFindInstanceName @ 0x1C00D6308
 * Callers:
 *     ndisWmiChangeSingleInstance @ 0x1C00D53A0 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5B60 (ndisWmiExecuteMethod.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qZ @ 0x1C004ACEC (WPP_SF_qZ.c)
 *     ndisReferenceVcPtr @ 0x1C00F9EA0 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiFindInstanceName(_QWORD *a1, __int64 a2, wchar_t *a3, unsigned __int16 a4)
{
  int v4; // ebx
  _QWORD *v5; // rbp
  _QWORD *v8; // r14
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  String2.Buffer = a3;
  *a1 = 0LL;
  v5 = 0LL;
  String2.MaximumLength = a4;
  String2.Length = a4;
  if ( a4 >= 0x30u && a3 && a3[5] == 58 )
  {
    v8 = (_QWORD *)(a2 + 1352);
    v9 = *(_QWORD **)(a2 + 1352);
    while ( v9 != v8 )
    {
      v5 = v9 - 40;
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v9 - 3), &String2, 1u) )
      {
        if ( !(unsigned __int8)ndisReferenceVcPtr(v9 - 40, v10) )
        {
          if ( (unsigned __int8)byte_1C0085319 >= 2u )
            WPP_SF_q(0xAu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a2);
          v4 = -1073741823;
        }
        break;
      }
      v9 = (_QWORD *)*v9;
      v5 = 0LL;
    }
    if ( v9 == v8 )
    {
      if ( (unsigned __int8)byte_1C0085319 >= 4u )
        WPP_SF_qZ(0xBu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a2, (__int64 *)&String2);
      v4 = -1073741162;
    }
    if ( v4 >= 0 )
      *a1 = v5;
  }
  else if ( !RtlEqualUnicodeString(*(PCUNICODE_STRING *)(a2 + 3912), &String2, 1u) )
  {
    if ( (unsigned __int8)byte_1C0085319 >= 2u )
      WPP_SF_q(0xCu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a2);
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v4;
}
