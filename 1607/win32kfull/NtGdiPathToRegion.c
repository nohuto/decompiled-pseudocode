/*
 * XREFs of NtGdiPathToRegion @ 0x1C02A6400
 * Callers:
 *     <none>
 * Callees:
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0011870 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C004A118 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C02793AC (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C02A5D20 (-bInactive@DC@@QEAAHXZ.c)
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
  DC *v10[2]; // [rsp+30h] [rbp-59h] BYREF
  char v11[32]; // [rsp+40h] [rbp-49h] BYREF
  char v12[8]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v13; // [rsp+68h] [rbp-21h]

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
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v12, v10);
  if ( v13 )
  {
    v4 = *(unsigned __int8 *)(*((_QWORD *)v10[0] + 10) + 74LL);
    v8 = 0LL;
    v9 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v8, (struct EPATHOBJ *)v12, v4, 0LL);
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
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v12);
LABEL_15:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v10);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v11);
  return v1;
}
