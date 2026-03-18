/*
 * XREFs of NtGdiCreateRoundRectRgn @ 0x140110F30
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x14001DF14 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??0EBOX@@QEAA@AEAVERECTL@@H@Z @ 0x14011112C (--0EBOX@@QEAA@AEAVERECTL@@H@Z.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x140111980 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRoundRectRgn(unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6)
{
  int v10; // r8d
  ULONG v11; // ecx
  struct HOBJ__ *v13; // rbx
  unsigned int v14; // esi
  unsigned int v15; // edi
  unsigned __int64 v16; // [rsp+28h] [rbp-99h] BYREF
  int v17; // [rsp+30h] [rbp-91h]
  int v18; // [rsp+34h] [rbp-8Dh]
  _QWORD v19[16]; // [rsp+38h] [rbp-89h] BYREF
  _DWORD v20[20]; // [rsp+B8h] [rbp-9h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v19);
  if ( !v19[1] )
  {
    EngSetLastError(8u);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v19);
    return 0LL;
  }
  v16 = __PAIR64__(a2, a1);
  v17 = a3;
  v18 = a4;
  if ( (a1 & 0xF8000000) != 0 && (a1 & 0xF8000000) != -134217728
    || (v14 = a4 & 0xF8000000) != 0 && v14 != -134217728
    || (v15 = a3 & 0xF8000000) != 0 && v15 != -134217728
    || (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    v11 = 87;
  }
  else
  {
    EBOX::EBOX((EBOX *)v20, (struct ERECTL *)&v16, v10);
    if ( v20[0] )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
      if ( v16 )
      {
LABEL_16:
        v13 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v16);
        if ( !v13 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
        goto LABEL_7;
      }
    }
    else if ( (unsigned int)bRoundRect((struct EPATHOBJ *)v19, (struct EBOX *)v20, a5, a6) )
    {
      if ( EPATHOBJ::bFlatten((EPATHOBJ *)v19) )
      {
        v16 = 0LL;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v16, (struct EPATHOBJ *)v19, 1u, 0LL);
        if ( v16 )
        {
          RGNOBJ::vTighten((RGNOBJ *)&v16);
          goto LABEL_16;
        }
      }
    }
    v11 = 8;
  }
  EngSetLastError(v11);
  v13 = 0LL;
LABEL_7:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v19);
  return v13;
}
