/*
 * XREFs of RtlStringCbPrintfExW @ 0x180011EB0
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x180006030 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     RtlStringExHandleFillBehindNullW @ 0x1800120C8 (RtlStringExHandleFillBehindNullW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1800120F4 (RtlStringExHandleOtherFlagsW.c)
 *     RtlStringExValidateDestW @ 0x1800121B4 (RtlStringExValidateDestW.c)
 *     RtlStringVPrintfWorkerW @ 0x1800121F0 (RtlStringVPrintfWorkerW.c)
 */

__int64 __fastcall RtlStringCbPrintfExW(
        _WORD *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int a5,
        _WORD *a6)
{
  unsigned __int64 v7; // rbx
  int v10; // edi
  __int64 v11; // r8
  _WORD *v12; // r12
  _WORD *v13; // r9
  __int64 v14; // rax
  _WORD *v16; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-10h] BYREF

  v7 = a2 >> 1;
  v10 = RtlStringExValidateDestW(a1, a2 >> 1, a3, a5);
  if ( v10 < 0 )
  {
    if ( v7 )
      *a1 = 0;
  }
  else
  {
    v16 = a1;
    v12 = a1;
    v17[0] = v7;
    if ( (a5 & 0x100) != 0 )
    {
      v13 = &unk_180017D38;
      if ( a6 )
        v13 = a6;
    }
    else
    {
      v13 = a6;
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
      v10 = RtlStringVPrintfWorkerW(a1, v7, v17);
      v14 = v17[0];
      v7 -= v17[0];
      v17[0] = v7;
      v12 = &a1[v14];
      v16 = v12;
      if ( v10 >= 0 )
      {
        if ( (a5 & 0x200) != 0 )
          RtlStringExHandleFillBehindNullW(v12, (a2 & 1) + 2 * v7, a5);
        goto LABEL_15;
      }
    }
    else
    {
      if ( !*v13 )
      {
LABEL_15:
        if ( a3 )
          *a3 = v12;
        if ( a4 )
          *a4 = (a2 & 1) + 2 * v7;
        return (unsigned int)v10;
      }
      v10 = a1 != 0LL ? -2147483643 : -1073741811;
    }
    if ( (a5 & 0x1C00) != 0 && a2 )
    {
      RtlStringExHandleOtherFlagsW(a1, a2, v11, &v16, v17, a5);
      v12 = v16;
      v7 = v17[0];
    }
    if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
      goto LABEL_15;
  }
  return (unsigned int)v10;
}
