/*
 * XREFs of RtlStringCbPrintfExW @ 0x18005475C
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x18001E8A0 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     RtlStringExHandleFillBehindNullW @ 0x18005491C (RtlStringExHandleFillBehindNullW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x180054948 (RtlStringExHandleOtherFlagsW.c)
 *     RtlStringVPrintfWorkerW @ 0x180054A08 (RtlStringVPrintfWorkerW.c)
 */

__int64 __fastcall RtlStringCbPrintfExW(
        _WORD *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int a5,
        _WORD *a6)
{
  unsigned __int64 v7; // rdi
  int v10; // ebx
  _WORD *v11; // r12
  _WORD *v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  _WORD *v16; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-10h] BYREF

  v7 = a2 >> 1;
  v10 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !a1 && v7 || v7 > 0x7FFFFFFF )
      v10 = -1073741811;
  }
  else if ( v7 - 1 > 0x7FFFFFFE )
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
  {
    if ( v7 )
      *a1 = 0;
  }
  else
  {
    v16 = a1;
    v11 = a1;
    v17[0] = a2 >> 1;
    if ( (a5 & 0x100) != 0 )
    {
      v12 = &unk_1800574EC;
      if ( a6 )
        v12 = a6;
    }
    else
    {
      v12 = a6;
    }
    v10 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v10 = -1073741811;
      if ( v7 )
        *a1 = 0;
    }
    else if ( v7 )
    {
      v17[0] = 0LL;
      v13 = RtlStringVPrintfWorkerW(a1, v7, v17);
      v14 = v17[0];
      v10 = v13;
      v7 -= v17[0];
      v17[0] = v7;
      v11 = &a1[v14];
      v16 = v11;
      if ( v13 >= 0 )
      {
        if ( (a5 & 0x200) != 0 )
          RtlStringExHandleFillBehindNullW(&a1[v14], (a2 & 1) + 2 * v7, a5);
        goto LABEL_22;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_22:
        if ( a3 )
          *a3 = v11;
        if ( a4 )
          *a4 = (a2 & 1) + 2 * v7;
        return (unsigned int)v10;
      }
      v10 = a1 != 0LL ? -2147483643 : -1073741811;
    }
    if ( (a5 & 0x1C00) != 0 && a2 )
    {
      RtlStringExHandleOtherFlagsW(a1, a2, a3, &v16, v17, a5);
      v11 = v16;
      v7 = v17[0];
    }
    if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
      goto LABEL_22;
  }
  return (unsigned int)v10;
}
