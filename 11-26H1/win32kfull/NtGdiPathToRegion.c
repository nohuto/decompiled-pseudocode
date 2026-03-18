/*
 * XREFs of NtGdiPathToRegion @ 0x1401128A0
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x14001DF14 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vDestroy@DC@@QEAAXXZ @ 0x1401142AC (-vDestroy@DC@@QEAAXXZ.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1401142D4 (-bInactive@DC@@QEBAHXZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140114328 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140114F5C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 */

struct HOBJ__ *__fastcall NtGdiPathToRegion(HDC a1)
{
  struct HOBJ__ *v1; // rbx
  unsigned int v2; // r8d
  struct HOBJ__ *v3; // rdi
  ULONG v5; // ecx
  DC *v6[14]; // [rsp+20h] [rbp-E0h] BYREF
  char v7[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v8; // [rsp+98h] [rbp-68h]
  char v9[48]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v10; // [rsp+128h] [rbp+28h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v6, a1);
  v1 = 0LL;
  if ( !v6[0] )
  {
    v5 = 87;
LABEL_9:
    EngSetLastError(v5);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v6);
    return 0LL;
  }
  if ( !(unsigned int)DC::bInactive(v6[0]) )
  {
    v5 = 1003;
    goto LABEL_9;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v7, (struct XDCOBJ *)v6);
  if ( v8 )
  {
    v2 = *(unsigned __int8 *)(*((_QWORD *)v6[0] + 122) + 214LL);
    v10 = 0LL;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v10, (struct EPATHOBJ *)v7, v2, 0LL);
    if ( v10 )
    {
      v3 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v10);
      if ( !v3 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
    }
    else
    {
      v3 = 0LL;
    }
    v1 = v3;
  }
  else
  {
    EngSetLastError(8u);
  }
  DC::vDestroy(v6[0]);
  EPATHOBJ::vUnlock((EPATHOBJ *)v7);
  CAutoTGO::vUnguard((CAutoTGO *)v9);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v6);
  return v1;
}
