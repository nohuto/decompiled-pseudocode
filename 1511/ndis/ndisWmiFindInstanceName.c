/*
 * XREFs of ndisWmiFindInstanceName @ 0x1C009F330
 * Callers:
 *     ndisWmiQuerySingleInstance @ 0x1C009F180 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00CEB60 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00CF320 (ndisWmiExecuteMethod.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qZ @ 0x1C004B56C (WPP_SF_qZ.c)
 *     ndisReferenceVcPtr @ 0x1C00F3EA0 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiFindInstanceName(_QWORD *a1, __int64 a2, wchar_t *a3, unsigned __int16 a4)
{
  int v4; // ebx
  _QWORD *v5; // rbp
  _QWORD *v9; // r14
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  String2.Buffer = a3;
  *a1 = 0LL;
  v5 = 0LL;
  String2.MaximumLength = a4;
  String2.Length = a4;
  if ( a4 >= 0x30u && a3 && a3[5] == 58 )
  {
    v9 = (_QWORD *)(a2 + 1352);
    v10 = *(_QWORD **)(a2 + 1352);
    while ( v10 != v9 )
    {
      v5 = v10 - 40;
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v10 - 3), &String2, 1u) )
      {
        if ( !(unsigned __int8)ndisReferenceVcPtr(v10 - 40, v11) )
        {
          if ( (unsigned __int8)byte_1C0083719 >= 2u )
            WPP_SF_q(0xAu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a2);
          v4 = -1073741823;
        }
        break;
      }
      v10 = (_QWORD *)*v10;
      v5 = 0LL;
    }
    if ( v10 == v9 )
    {
      if ( (unsigned __int8)byte_1C0083719 >= 4u )
        WPP_SF_qZ(0xBu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a2, (__int64 *)&String2);
      v4 = -1073741162;
    }
    if ( v4 >= 0 )
      *a1 = v5;
  }
  else if ( !RtlEqualUnicodeString(*(PCUNICODE_STRING *)(a2 + 3912), &String2, 1u) )
  {
    if ( (unsigned __int8)byte_1C0083719 >= 2u )
      WPP_SF_q(0xCu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a2);
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v4;
}
