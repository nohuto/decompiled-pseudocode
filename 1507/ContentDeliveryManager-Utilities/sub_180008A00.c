/*
 * XREFs of sub_180008A00 @ 0x180008A00
 * Callers:
 *     sub_18001A160 @ 0x18001A160 (sub_18001A160.c)
 *     sub_18001A270 @ 0x18001A270 (sub_18001A270.c)
 *     sub_18001BB40 @ 0x18001BB40 (sub_18001BB40.c)
 *     sub_18001BEC0 @ 0x18001BEC0 (sub_18001BEC0.c)
 *     sub_18001C240 @ 0x18001C240 (sub_18001C240.c)
 *     sub_18001C5C0 @ 0x18001C5C0 (sub_18001C5C0.c)
 * Callees:
 *     sub_1800099E4 @ 0x1800099E4 (sub_1800099E4.c)
 *     sub_18000A3BC @ 0x18000A3BC (sub_18000A3BC.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180018070 @ 0x180018070 (sub_180018070.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180008A00(unsigned int a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // r14d
  __int64 v8; // rdi
  HRESULT ApartmentType; // esi
  APTTYPE v10; // ecx
  int v11; // eax
  int *Value; // rax
  int v13; // edx
  __int64 v14; // rbx
  __int64 v15; // r15
  APTTYPE pAptType; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-20h]
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h]

  v22 = -2LL;
  v7 = a1;
  v8 = a5;
  ApartmentType = a5 == 0 ? 0x8007000E : 0;
  if ( !a5 )
    return (unsigned int)ApartmentType;
  if ( a1 == 5 )
    v7 = 1;
  if ( v7 == 4
    || (a2 & 0x80u) != 0
    && ((v10 = dwTlsIndex, dwTlsIndex != -1) ? (v11 = 0) : (v11 = sub_18000A3BC(&pAptType), v10 = pAptType),
        v11 < 0 || (Value = (int *)TlsGetValue(v10)) == 0LL ? (v13 = 0x7FFFFFFF) : (v13 = *Value),
        v13 != 0x7FFFFFFF
     && ((v13 - 1) & 0x800000) != 0
     && (v7 == (v13 - 1) >> 24 || v7 == 3)
     && (((unsigned __int8)(v13 - 1) ^ (unsigned __int8)a2) & 9) == 0) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 24LL))(a5);
    return (unsigned int)ApartmentType;
  }
  v14 = 0LL;
  v19 = 0LL;
  if ( v7 == 3 )
  {
    v7 = 0;
    goto LABEL_33;
  }
  if ( v7 != 2 )
    goto LABEL_33;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  if ( ApartmentType < 0 )
    goto LABEL_35;
  v7 = 0;
  if ( pAptType == APTTYPE_STA )
    goto LABEL_27;
  if ( pAptType > APTTYPE_STA )
  {
    if ( pAptType > APTTYPE_NA )
    {
      if ( pAptType != APTTYPE_MAINSTA )
        goto LABEL_26;
LABEL_27:
      v20 = a5;
      v14 = 0LL;
      v19 = 0LL;
      v18 = 0LL;
      ApartmentType = sub_180018070(&v18, &v20);
      if ( ApartmentType < 0 )
      {
        v15 = v18;
      }
      else
      {
        v14 = v18;
        v15 = 0LL;
        v19 = v18;
      }
      if ( v15 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v8 = v14;
    }
LABEL_33:
    if ( ApartmentType >= 0 )
      ApartmentType = sub_1800099E4(v7, a2, a3, v8);
    goto LABEL_35;
  }
LABEL_26:
  ApartmentType = -2147418113;
LABEL_35:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)ApartmentType;
}
