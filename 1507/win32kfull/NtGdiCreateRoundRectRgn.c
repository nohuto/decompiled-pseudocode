/*
 * XREFs of NtGdiCreateRoundRectRgn @ 0x1C00CAB80
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0016138 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C0032348 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     ??0EBOX@@QEAA@AEAVERECTL@@H@Z @ 0x1C00CACF8 (--0EBOX@@QEAA@AEAVERECTL@@H@Z.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRoundRectRgn(unsigned int a1, unsigned int a2, int a3, int a4)
{
  int v8; // r8d
  struct HOBJ__ *v9; // rbx
  ULONG v10; // ecx
  struct HOBJ__ *v11; // rdi
  struct OBJECT *v13; // [rsp+28h] [rbp-A9h] BYREF
  int v14; // [rsp+30h] [rbp-A1h]
  int v15; // [rsp+34h] [rbp-9Dh]
  _QWORD v16[16]; // [rsp+38h] [rbp-99h] BYREF
  _DWORD v17[20]; // [rsp+B8h] [rbp-19h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v16);
  v9 = 0LL;
  if ( v16[1] )
  {
    v13 = (struct OBJECT *)__PAIR64__(a2, a1);
    v14 = a3;
    v15 = a4;
    if ( ((a1 & 0xF8000000) == 0 || (a1 & 0xF8000000) == -134217728)
      && (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      EBOX::EBOX((EBOX *)v17, (struct ERECTL *)&v13, v8);
      if ( v17[0] )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13);
        if ( v13 )
        {
LABEL_13:
          v11 = RGNOBJ::hrgnAssociate(&v13);
          if ( !v11 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
          goto LABEL_15;
        }
      }
      else
      {
        if ( !(unsigned int)bRoundRect((struct EPATHOBJ *)v16, (struct EBOX *)v17)
          || !EPATHOBJ::bFlatten((EPATHOBJ *)v16) )
        {
          EngSetLastError(8u);
          v11 = 0LL;
LABEL_17:
          v9 = v11;
          goto LABEL_18;
        }
        v13 = 0LL;
        v14 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v13, (struct EPATHOBJ *)v16, 1u, 0LL);
        if ( v13 )
        {
          RGNOBJ::vTighten((RGNOBJ *)&v13);
          goto LABEL_13;
        }
      }
      EngSetLastError(8u);
      v11 = 0LL;
LABEL_15:
      if ( v14 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
      goto LABEL_17;
    }
    v10 = 87;
  }
  else
  {
    v10 = 8;
  }
  EngSetLastError(v10);
LABEL_18:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v16);
  return v9;
}
