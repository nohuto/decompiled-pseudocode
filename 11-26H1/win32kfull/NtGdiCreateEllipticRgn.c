/*
 * XREFs of NtGdiCreateEllipticRgn @ 0x140110300
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x14001DF14 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??0EBOX@@QEAA@AEAVERECTL@@H@Z @ 0x14011112C (--0EBOX@@QEAA@AEAVERECTL@@H@Z.c)
 *     ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x140112DD0 (-bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateEllipticRgn(unsigned int a1, unsigned int a2, int a3, int a4)
{
  int v8; // r8d
  ULONG v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // edi
  struct HOBJ__ *v12; // rbx
  unsigned __int64 v14; // [rsp+28h] [rbp-89h] BYREF
  int v15; // [rsp+30h] [rbp-81h]
  int v16; // [rsp+34h] [rbp-7Dh]
  _BYTE v17[8]; // [rsp+38h] [rbp-79h] BYREF
  __int64 v18; // [rsp+40h] [rbp-71h]
  _DWORD v19[20]; // [rsp+B8h] [rbp+7h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v17);
  if ( v18 )
  {
    v14 = __PAIR64__(a2, a1);
    v15 = a3;
    v16 = a4;
    if ( (a1 & 0xF8000000) != 0 && (a1 & 0xF8000000) != -134217728
      || (v10 = a4 & 0xF8000000) != 0 && v10 != -134217728
      || (v11 = a3 & 0xF8000000) != 0 && v11 != -134217728
      || (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    {
      v9 = 87;
LABEL_12:
      EngSetLastError(v9);
      v12 = 0LL;
LABEL_13:
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v17);
      return v12;
    }
    EBOX::EBOX((EBOX *)v19, (struct ERECTL *)&v14, v8);
    if ( v19[0] )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14);
      if ( !v14 )
      {
LABEL_11:
        v9 = 8;
        goto LABEL_12;
      }
    }
    else
    {
      if ( !(unsigned int)bEllipse((struct EPATHOBJ *)v17, (struct EBOX *)v19) )
        goto LABEL_11;
      if ( !EPATHOBJ::bFlatten((EPATHOBJ *)v17) )
        goto LABEL_11;
      v14 = 0LL;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v14, (struct EPATHOBJ *)v17, 1u, 0LL);
      if ( !v14 )
        goto LABEL_11;
      RGNOBJ::vTighten((RGNOBJ *)&v14);
    }
    v12 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v14);
    if ( !v12 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
    goto LABEL_13;
  }
  EngSetLastError(8u);
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v17);
  return 0LL;
}
