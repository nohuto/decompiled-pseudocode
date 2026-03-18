/*
 * XREFs of NtGdiPathToRegion @ 0x1C02A57F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0005F34 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C0006014 (-bInactive@DC@@QEAAHXZ.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0016138 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB118 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall NtGdiPathToRegion(HDC a1)
{
  struct HOBJ__ *v1; // rbx
  ULONG v2; // ecx
  DC *v3; // rcx
  unsigned int v4; // r8d
  struct HOBJ__ *v5; // rdi
  DC *v6; // rcx
  struct OBJECT *v8; // [rsp+20h] [rbp-69h] BYREF
  int v9; // [rsp+28h] [rbp-61h]
  DC *v10[6]; // [rsp+30h] [rbp-59h] BYREF
  char v11[8]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v12; // [rsp+68h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v1 = 0LL;
  if ( !v10[0] )
  {
    v2 = 87;
LABEL_5:
    EngSetLastError(v2);
    goto LABEL_15;
  }
  if ( !(unsigned int)DC::bInactive(v10[0]) )
  {
    v2 = 1003;
    goto LABEL_5;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v11, v10);
  if ( v12 )
  {
    v4 = *(unsigned __int8 *)(*((_QWORD *)v10[0] + 10) + 74LL);
    v8 = 0LL;
    v9 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v8, (struct EPATHOBJ *)v11, v4, 0LL);
    if ( v8 )
    {
      v5 = RGNOBJ::hrgnAssociate(&v8);
      if ( !v5 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
    }
    else
    {
      v5 = 0LL;
    }
    v6 = v10[0];
    *((_DWORD *)v10[0] + 44) &= ~1u;
    DC::hpath(v6, 0LL);
    v1 = v5;
    if ( v9 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
  }
  else
  {
    EngSetLastError(8u);
    v3 = v10[0];
    *((_DWORD *)v10[0] + 44) &= ~1u;
    DC::hpath(v3, 0LL);
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v11);
LABEL_15:
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return v1;
}
